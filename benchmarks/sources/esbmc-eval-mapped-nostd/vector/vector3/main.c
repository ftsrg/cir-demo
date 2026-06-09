extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ { double* _M_current; };
struct __gnu_cxx____normal_iterator_double____void_ { double* _M_current; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Vector_base_double__std__allocator_double_____Vector_impl_data { double* _M_start; double* _M_finish; double* _M_end_of_storage; };
struct std____new_allocator_double_ { unsigned char __field0; };
struct std__allocator_double_ { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__vector_double__std__allocator_double_____Guard_alloc { double* _M_storage; unsigned long _M_len; struct std___Vector_base_double__std__allocator_double__* _M_vect; };
struct std___Vector_base_double__std__allocator_double_____Vector_impl { struct std___Vector_base_double__std__allocator_double_____Vector_impl_data __field0; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Vector_base_double__std__allocator_double__ { struct std___Vector_base_double__std__allocator_double_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_istream_char__std__char_traits_char__ { void* __field0; long __field1; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__vector_double__std__allocator_double__ { struct std___Vector_base_double__std__allocator_double__ __field0; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[20] = "Enter marks (y/n)? ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_1[14] = "Enter value: ";
char _str_2[22] = "More students (y/n)? ";
char _str_3[26] = "vector::_M_realloc_append";
void std__vector_double__std__allocator_double_____vector(struct std__vector_double__std__allocator_double__* p0);
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
extern struct std__basic_istream_char__std__char_traits_char__* std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___(struct std__basic_istream_char__std__char_traits_char__* p0, char* p1);
extern struct std__basic_istream_char__std__char_traits_char__* std__istream__std__istream___M_extract_double_(struct std__basic_istream_char__std__char_traits_char__* p0, double* p1);
struct std__basic_istream_char__std__char_traits_char__* std__istream__operator__(struct std__basic_istream_char__std__char_traits_char__* p0, double* p1);
double* _ZSt12construct_atIdJRKdEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(double* p0, double* p1);
void void_std__allocator_traits_std__allocator_double_____construct_double__double_const__(struct std__allocator_double_* p0, double* p1, double* p2);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__vector_double__std__allocator_double______S_max_size(struct std__allocator_double_* p0);
struct std__allocator_double_* std___Vector_base_double__std__allocator_double______M_get_Tp_allocator___const(struct std___Vector_base_double__std__allocator_double__* p0);
unsigned long std__vector_double__std__allocator_double_____max_size___const(struct std__vector_double__std__allocator_double__* p0);
unsigned long std__vector_double__std__allocator_double_____size___const(struct std__vector_double__std__allocator_double__* p0);
extern void std____throw_length_error(char* p0);
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__vector_double__std__allocator_double______M_check_len_unsigned_long__char_const___const(struct std__vector_double__std__allocator_double__* p0, unsigned long p1, char* p2);
double** __gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______base___const(struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___* p0);
long __gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______difference_type___gnu_cxx__operator__double___std__vector_double__std__allocator_double_____(struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___* p0, struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___* p1);
void __gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_________normal_iterator(struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___* p0, double** p1);
struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ std__vector_double__std__allocator_double_____end(struct std__vector_double__std__allocator_double__* p0);
struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ std__vector_double__std__allocator_double_____begin(struct std__vector_double__std__allocator_double__* p0);
extern void std____throw_bad_array_new_length();
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new(unsigned long p0) { return malloc(p0); }
unsigned long std____new_allocator_double____M_max_size___const(struct std____new_allocator_double_* p0);
extern void std____throw_bad_alloc();
void* operator_new_2(unsigned long p0, unsigned long p1) { return malloc(p0); }
double* std____new_allocator_double___allocate(struct std____new_allocator_double_* p0, unsigned long p1, void* p2);
double* std__allocator_double___allocate(struct std__allocator_double_* p0, unsigned long p1);
double* std__allocator_traits_std__allocator_double_____allocate(struct std__allocator_double_* p0, unsigned long p1);
double* std___Vector_base_double__std__allocator_double______M_allocate(struct std___Vector_base_double__std__allocator_double__* p0, unsigned long p1);
void std__vector_double__std__allocator_double______Guard_alloc___Guard_alloc(struct std__vector_double__std__allocator_double_____Guard_alloc* p0, double* p1, unsigned long p2, struct std___Vector_base_double__std__allocator_double__* p3);
double* double__std__to_address_double_(double* p0);
double* auto_std____to_address_double__(double** p0);
_Bool std__is_constant_evaluated();
void __gnu_cxx____normal_iterator_double___void_____normal_iterator(struct __gnu_cxx____normal_iterator_double____void_* p0, double** p1);
double* _ZSt12construct_atIdJdEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(double* p0, double* p1);
void void_std__allocator_traits_std__allocator_double_____construct_double__double_(struct std__allocator_double_* p0, double* p1, double* p2);
void void_std__destroy_at_double_(double* p0);
void void_std__allocator_traits_std__allocator_double_____destroy_double_(struct std__allocator_double_* p0, double* p1);
void void_std____relocate_object_a_double__double__std__allocator_double___(double* p0, double* p1, struct std__allocator_double_* p2);
double* __gnu_cxx____normal_iterator_double___void___operator____const(struct __gnu_cxx____normal_iterator_double____void_* p0);
struct __gnu_cxx____normal_iterator_double____void_* __gnu_cxx____normal_iterator_double___void___operator__(struct __gnu_cxx____normal_iterator_double____void_* p0);
struct __gnu_cxx____normal_iterator_double____void_ __gnu_cxx____normal_iterator_double___void__std____relocate_a_1_double_____gnu_cxx____normal_iterator_double___void___std__allocator_double___(double* p0, double* p1, struct __gnu_cxx____normal_iterator_double____void_ p2, struct std__allocator_double_* p3);
struct __gnu_cxx____normal_iterator_double____void_* __gnu_cxx____normal_iterator_double___void___operator_(struct __gnu_cxx____normal_iterator_double____void_* p0, struct __gnu_cxx____normal_iterator_double____void_* p1);
double** __gnu_cxx____normal_iterator_double___void___base___const(struct __gnu_cxx____normal_iterator_double____void_* p0);
extern void* memcpy(void* p0, void* p1, unsigned long p2);
double* std__enable_if_std____is_bitwise_relocatable_double___value__double____type_std____relocate_a_1_double__double_(double* p0, double* p1, double* p2, struct std__allocator_double_* p3);
double* double__std____niter_base_double__(double* p0);
double* double__std____relocate_a_double___double___std__allocator_double___(double* p0, double* p1, double* p2, struct std__allocator_double_* p3);
double* std__vector_double__std__allocator_double______S_relocate(double* p0, double* p1, double* p2, struct std__allocator_double_* p3);
struct std__allocator_double_* std___Vector_base_double__std__allocator_double______M_get_Tp_allocator(struct std___Vector_base_double__std__allocator_double__* p0);
void std__vector_double__std__allocator_double______Guard_alloc____Guard_alloc(struct std__vector_double__std__allocator_double_____Guard_alloc* p0);
void void_std__vector_double__std__allocator_double______M_realloc_append_double_const__(struct std__vector_double__std__allocator_double__* p0, double* p1);
void std__vector_double__std__allocator_double_____push_back(struct std__vector_double__std__allocator_double__* p0, double* p1);
void std__vector_double__std__allocator_double______vector(struct std__vector_double__std__allocator_double__* p0);
int main();
void _ZNSt12_Vector_baseIdSaIdEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_double__std__allocator_double_____Vector_impl* p0);
void std___Vector_base_double__std__allocator_double______Vector_impl____Vector_impl(struct std___Vector_base_double__std__allocator_double_____Vector_impl* p0);
void std___Vector_base_double__std__allocator_double______Vector_base(struct std___Vector_base_double__std__allocator_double__* p0);
_Bool std____is_constant_evaluated();
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_double___deallocate(struct std____new_allocator_double_* p0, double* p1, unsigned long p2);
void std__allocator_double___deallocate(struct std__allocator_double_* p0, double* p1, unsigned long p2);
void std__allocator_traits_std__allocator_double_____deallocate(struct std__allocator_double_* p0, double* p1, unsigned long p2);
void std___Vector_base_double__std__allocator_double______M_deallocate(struct std___Vector_base_double__std__allocator_double__* p0, double* p1, unsigned long p2);
void std___Vector_base_double__std__allocator_double_______Vector_base(struct std___Vector_base_double__std__allocator_double__* p0);
void std____new_allocator_double_____new_allocator(struct std____new_allocator_double_* p0);
void std__allocator_double___allocator(struct std__allocator_double_* p0);
void std___Vector_base_double__std__allocator_double______Vector_impl_data___Vector_impl_data(struct std___Vector_base_double__std__allocator_double_____Vector_impl_data* p0);
void std__allocator_double____allocator(struct std__allocator_double_* p0);
void void_std___Destroy_double__(double* p0, double* p1);
void void_std___Destroy_double___double_(double* p0, double* p1, struct std__allocator_double_* p2);

// function: _ZNSt6vectorIdSaIdEEC2Ev
void std__vector_double__std__allocator_double_____vector(struct std__vector_double__std__allocator_double__* v0) {
bb1:
  struct std__vector_double__std__allocator_double__* this2;
  this2 = v0;
  struct std__vector_double__std__allocator_double__* t3 = this2;
  struct std___Vector_base_double__std__allocator_double__* base4 = (struct std___Vector_base_double__std__allocator_double__*)((char *)t3 + 0);
  std___Vector_base_double__std__allocator_double______Vector_base(base4);
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v5, int v6) {
bb7:
  int __a8;
  int __b9;
  int __retval10;
  __a8 = v5;
  __b9 = v6;
  int t11 = __a8;
  int t12 = __b9;
  int b13 = t11 | t12;
  __retval10 = b13;
  int t14 = __retval10;
  return t14;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v15) {
bb16:
  struct std__basic_ios_char__std__char_traits_char__* this17;
  int __retval18;
  this17 = v15;
  struct std__basic_ios_char__std__char_traits_char__* t19 = this17;
  struct std__ios_base* base20 = (struct std__ios_base*)((char *)t19 + 0);
  int t21 = base20->_M_streambuf_state;
  __retval18 = t21;
  int t22 = __retval18;
  return t22;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v23, int v24) {
bb25:
  struct std__basic_ios_char__std__char_traits_char__* this26;
  int __state27;
  this26 = v23;
  __state27 = v24;
  struct std__basic_ios_char__std__char_traits_char__* t28 = this26;
  int r29 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t28);
  int t30 = __state27;
  int r31 = std__operator_(r29, t30);
  std__basic_ios_char__std__char_traits_char_____clear(t28, r31);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v32, char* v33) {
bb34:
  char* __c135;
  char* __c236;
  _Bool __retval37;
  __c135 = v32;
  __c236 = v33;
  char* t38 = __c135;
  char t39 = *t38;
  int cast40 = (int)t39;
  char* t41 = __c236;
  char t42 = *t41;
  int cast43 = (int)t42;
  _Bool c44 = ((cast40 == cast43)) ? 1 : 0;
  __retval37 = c44;
  _Bool t45 = __retval37;
  return t45;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v46) {
bb47:
  char* __p48;
  unsigned long __retval49;
  unsigned long __i50;
  __p48 = v46;
  unsigned long c51 = 0;
  __i50 = c51;
    char ref_tmp052;
    while (1) {
      unsigned long t53 = __i50;
      char* t54 = __p48;
      char* ptr55 = &(t54)[t53];
      char c56 = 0;
      ref_tmp052 = c56;
      _Bool r57 = __gnu_cxx__char_traits_char___eq(ptr55, &ref_tmp052);
      _Bool u58 = !r57;
      if (!u58) break;
      unsigned long t59 = __i50;
      unsigned long u60 = t59 + 1;
      __i50 = u60;
    }
  unsigned long t61 = __i50;
  __retval49 = t61;
  unsigned long t62 = __retval49;
  return t62;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v63) {
bb64:
  char* __s65;
  unsigned long __retval66;
  __s65 = v63;
    _Bool r67 = std____is_constant_evaluated();
    if (r67) {
      char* t68 = __s65;
      unsigned long r69 = __gnu_cxx__char_traits_char___length(t68);
      __retval66 = r69;
      unsigned long t70 = __retval66;
      return t70;
    }
  char* t71 = __s65;
  unsigned long r72 = strlen(t71);
  __retval66 = r72;
  unsigned long t73 = __retval66;
  return t73;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v74, char* v75) {
bb76:
  struct std__basic_ostream_char__std__char_traits_char__* __out77;
  char* __s78;
  struct std__basic_ostream_char__std__char_traits_char__* __retval79;
  __out77 = v74;
  __s78 = v75;
    char* t80 = __s78;
    _Bool cast81 = (_Bool)t80;
    _Bool u82 = !cast81;
    if (u82) {
      struct std__basic_ostream_char__std__char_traits_char__* t83 = __out77;
      void** v84 = (void**)t83;
      void* v85 = *((void**)v84);
      unsigned char* cast86 = (unsigned char*)v85;
      long c87 = -24;
      unsigned char* ptr88 = &(cast86)[c87];
      long* cast89 = (long*)ptr88;
      long t90 = *cast89;
      unsigned char* cast91 = (unsigned char*)t83;
      unsigned char* ptr92 = &(cast91)[t90];
      struct std__basic_ostream_char__std__char_traits_char__* cast93 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr92;
      struct std__basic_ios_char__std__char_traits_char__* cast94 = (struct std__basic_ios_char__std__char_traits_char__*)cast93;
      int t95 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast94, t95);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t96 = __out77;
      char* t97 = __s78;
      char* t98 = __s78;
      unsigned long r99 = std__char_traits_char___length(t98);
      long cast100 = (long)r99;
      struct std__basic_ostream_char__std__char_traits_char__* r101 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t96, t97, cast100);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t102 = __out77;
  __retval79 = t102;
  struct std__basic_ostream_char__std__char_traits_char__* t103 = __retval79;
  return t103;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v104, void* v105) {
bb106:
  struct std__basic_ostream_char__std__char_traits_char__* this107;
  void* __pf108;
  struct std__basic_ostream_char__std__char_traits_char__* __retval109;
  this107 = v104;
  __pf108 = v105;
  struct std__basic_ostream_char__std__char_traits_char__* t110 = this107;
  void* t111 = __pf108;
  struct std__basic_ostream_char__std__char_traits_char__* r112 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t111)(t110);
  __retval109 = r112;
  struct std__basic_ostream_char__std__char_traits_char__* t113 = __retval109;
  return t113;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v114) {
bb115:
  struct std__basic_ostream_char__std__char_traits_char__* __os116;
  struct std__basic_ostream_char__std__char_traits_char__* __retval117;
  __os116 = v114;
  struct std__basic_ostream_char__std__char_traits_char__* t118 = __os116;
  struct std__basic_ostream_char__std__char_traits_char__* r119 = std__ostream__flush(t118);
  __retval117 = r119;
  struct std__basic_ostream_char__std__char_traits_char__* t120 = __retval117;
  return t120;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v121) {
bb122:
  struct std__ctype_char_* __f123;
  struct std__ctype_char_* __retval124;
  __f123 = v121;
    struct std__ctype_char_* t125 = __f123;
    _Bool cast126 = (_Bool)t125;
    _Bool u127 = !cast126;
    if (u127) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t128 = __f123;
  __retval124 = t128;
  struct std__ctype_char_* t129 = __retval124;
  return t129;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v130, char v131) {
bb132:
  struct std__ctype_char_* this133;
  char __c134;
  char __retval135;
  this133 = v130;
  __c134 = v131;
  struct std__ctype_char_* t136 = this133;
    char t137 = t136->_M_widen_ok;
    _Bool cast138 = (_Bool)t137;
    if (cast138) {
      char t139 = __c134;
      unsigned char cast140 = (unsigned char)t139;
      unsigned long cast141 = (unsigned long)cast140;
      char t142 = t136->_M_widen[cast141];
      __retval135 = t142;
      char t143 = __retval135;
      return t143;
    }
  std__ctype_char____M_widen_init___const(t136);
  char t144 = __c134;
  void** v145 = (void**)t136;
  void* v146 = *((void**)v145);
  char vcall149 = (char)__VERIFIER_virtual_call_char_char(t136, 6, t144);
  __retval135 = vcall149;
  char t150 = __retval135;
  return t150;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v151, char v152) {
bb153:
  struct std__basic_ios_char__std__char_traits_char__* this154;
  char __c155;
  char __retval156;
  this154 = v151;
  __c155 = v152;
  struct std__basic_ios_char__std__char_traits_char__* t157 = this154;
  struct std__ctype_char_* t158 = t157->_M_ctype;
  struct std__ctype_char_* r159 = std__ctype_char__const__std____check_facet_std__ctype_char___(t158);
  char t160 = __c155;
  char r161 = std__ctype_char___widen_char__const(r159, t160);
  __retval156 = r161;
  char t162 = __retval156;
  return t162;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v163) {
bb164:
  struct std__basic_ostream_char__std__char_traits_char__* __os165;
  struct std__basic_ostream_char__std__char_traits_char__* __retval166;
  __os165 = v163;
  struct std__basic_ostream_char__std__char_traits_char__* t167 = __os165;
  struct std__basic_ostream_char__std__char_traits_char__* t168 = __os165;
  void** v169 = (void**)t168;
  void* v170 = *((void**)v169);
  unsigned char* cast171 = (unsigned char*)v170;
  long c172 = -24;
  unsigned char* ptr173 = &(cast171)[c172];
  long* cast174 = (long*)ptr173;
  long t175 = *cast174;
  unsigned char* cast176 = (unsigned char*)t168;
  unsigned char* ptr177 = &(cast176)[t175];
  struct std__basic_ostream_char__std__char_traits_char__* cast178 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr177;
  struct std__basic_ios_char__std__char_traits_char__* cast179 = (struct std__basic_ios_char__std__char_traits_char__*)cast178;
  char c180 = 10;
  char r181 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast179, c180);
  struct std__basic_ostream_char__std__char_traits_char__* r182 = std__ostream__put(t167, r181);
  struct std__basic_ostream_char__std__char_traits_char__* r183 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r182);
  __retval166 = r183;
  struct std__basic_ostream_char__std__char_traits_char__* t184 = __retval166;
  return t184;
}

// function: _ZNSirsERd
struct std__basic_istream_char__std__char_traits_char__* std__istream__operator__(struct std__basic_istream_char__std__char_traits_char__* v185, double* v186) {
bb187:
  struct std__basic_istream_char__std__char_traits_char__* this188;
  double* __f189;
  struct std__basic_istream_char__std__char_traits_char__* __retval190;
  this188 = v185;
  __f189 = v186;
  struct std__basic_istream_char__std__char_traits_char__* t191 = this188;
  double* t192 = __f189;
  struct std__basic_istream_char__std__char_traits_char__* r193 = std__istream__std__istream___M_extract_double_(t191, t192);
  __retval190 = r193;
  struct std__basic_istream_char__std__char_traits_char__* t194 = __retval190;
  return t194;
}

// function: _ZSt12construct_atIdJRKdEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
double* _ZSt12construct_atIdJRKdEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(double* v195, double* v196) {
bb197:
  double* __location198;
  double* __args199;
  double* __retval200;
  void* __loc201;
  __location198 = v195;
  __args199 = v196;
  double* t202 = __location198;
  void* cast203 = (void*)t202;
  __loc201 = cast203;
    void* t204 = __loc201;
    double* cast205 = (double*)t204;
    double* t206 = __args199;
    double t207 = *t206;
    *cast205 = t207;
    __retval200 = cast205;
    double* t208 = __retval200;
    return t208;
  abort();
}

// function: _ZNSt16allocator_traitsISaIdEE9constructIdJRKdEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_double_____construct_double__double_const__(struct std__allocator_double_* v209, double* v210, double* v211) {
bb212:
  struct std__allocator_double_* __a213;
  double* __p214;
  double* __args215;
  __a213 = v209;
  __p214 = v210;
  __args215 = v211;
  double* t216 = __p214;
  double* t217 = __args215;
  double* r218 = _ZSt12construct_atIdJRKdEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t216, t217);
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v219, unsigned long* v220) {
bb221:
  unsigned long* __a222;
  unsigned long* __b223;
  unsigned long* __retval224;
  __a222 = v219;
  __b223 = v220;
    unsigned long* t225 = __b223;
    unsigned long t226 = *t225;
    unsigned long* t227 = __a222;
    unsigned long t228 = *t227;
    _Bool c229 = ((t226 < t228)) ? 1 : 0;
    if (c229) {
      unsigned long* t230 = __b223;
      __retval224 = t230;
      unsigned long* t231 = __retval224;
      return t231;
    }
  unsigned long* t232 = __a222;
  __retval224 = t232;
  unsigned long* t233 = __retval224;
  return t233;
}

// function: _ZNSt6vectorIdSaIdEE11_S_max_sizeERKS0_
unsigned long std__vector_double__std__allocator_double______S_max_size(struct std__allocator_double_* v234) {
bb235:
  struct std__allocator_double_* __a236;
  unsigned long __retval237;
  unsigned long __diffmax238;
  unsigned long __allocmax239;
  __a236 = v234;
  unsigned long c240 = 1152921504606846975;
  __diffmax238 = c240;
  unsigned long c241 = 2305843009213693951;
  __allocmax239 = c241;
  unsigned long* r242 = unsigned_long_const__std__min_unsigned_long_(&__diffmax238, &__allocmax239);
  unsigned long t243 = *r242;
  __retval237 = t243;
  unsigned long t244 = __retval237;
  return t244;
}

// function: _ZNKSt12_Vector_baseIdSaIdEE19_M_get_Tp_allocatorEv
struct std__allocator_double_* std___Vector_base_double__std__allocator_double______M_get_Tp_allocator___const(struct std___Vector_base_double__std__allocator_double__* v245) {
bb246:
  struct std___Vector_base_double__std__allocator_double__* this247;
  struct std__allocator_double_* __retval248;
  this247 = v245;
  struct std___Vector_base_double__std__allocator_double__* t249 = this247;
  struct std__allocator_double_* base250 = (struct std__allocator_double_*)((char *)&(t249->_M_impl) + 0);
  __retval248 = base250;
  struct std__allocator_double_* t251 = __retval248;
  return t251;
}

// function: _ZNKSt6vectorIdSaIdEE8max_sizeEv
unsigned long std__vector_double__std__allocator_double_____max_size___const(struct std__vector_double__std__allocator_double__* v252) {
bb253:
  struct std__vector_double__std__allocator_double__* this254;
  unsigned long __retval255;
  this254 = v252;
  struct std__vector_double__std__allocator_double__* t256 = this254;
  struct std___Vector_base_double__std__allocator_double__* base257 = (struct std___Vector_base_double__std__allocator_double__*)((char *)t256 + 0);
  struct std__allocator_double_* r258 = std___Vector_base_double__std__allocator_double______M_get_Tp_allocator___const(base257);
  unsigned long r259 = std__vector_double__std__allocator_double______S_max_size(r258);
  __retval255 = r259;
  unsigned long t260 = __retval255;
  return t260;
}

// function: _ZNKSt6vectorIdSaIdEE4sizeEv
unsigned long std__vector_double__std__allocator_double_____size___const(struct std__vector_double__std__allocator_double__* v261) {
bb262:
  struct std__vector_double__std__allocator_double__* this263;
  unsigned long __retval264;
  long __dif265;
  this263 = v261;
  struct std__vector_double__std__allocator_double__* t266 = this263;
  struct std___Vector_base_double__std__allocator_double__* base267 = (struct std___Vector_base_double__std__allocator_double__*)((char *)t266 + 0);
  struct std___Vector_base_double__std__allocator_double_____Vector_impl_data* base268 = (struct std___Vector_base_double__std__allocator_double_____Vector_impl_data*)((char *)&(base267->_M_impl) + 0);
  double* t269 = base268->_M_finish;
  struct std___Vector_base_double__std__allocator_double__* base270 = (struct std___Vector_base_double__std__allocator_double__*)((char *)t266 + 0);
  struct std___Vector_base_double__std__allocator_double_____Vector_impl_data* base271 = (struct std___Vector_base_double__std__allocator_double_____Vector_impl_data*)((char *)&(base270->_M_impl) + 0);
  double* t272 = base271->_M_start;
  long diff273 = t269 - t272;
  __dif265 = diff273;
    long t274 = __dif265;
    long c275 = 0;
    _Bool c276 = ((t274 < c275)) ? 1 : 0;
    if (c276) {
      __builtin_unreachable();
    }
  long t277 = __dif265;
  unsigned long cast278 = (unsigned long)t277;
  __retval264 = cast278;
  unsigned long t279 = __retval264;
  return t279;
}

// function: _ZSt3maxImERKT_S2_S2_
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* v280, unsigned long* v281) {
bb282:
  unsigned long* __a283;
  unsigned long* __b284;
  unsigned long* __retval285;
  __a283 = v280;
  __b284 = v281;
    unsigned long* t286 = __a283;
    unsigned long t287 = *t286;
    unsigned long* t288 = __b284;
    unsigned long t289 = *t288;
    _Bool c290 = ((t287 < t289)) ? 1 : 0;
    if (c290) {
      unsigned long* t291 = __b284;
      __retval285 = t291;
      unsigned long* t292 = __retval285;
      return t292;
    }
  unsigned long* t293 = __a283;
  __retval285 = t293;
  unsigned long* t294 = __retval285;
  return t294;
}

// function: _ZNKSt6vectorIdSaIdEE12_M_check_lenEmPKc
unsigned long std__vector_double__std__allocator_double______M_check_len_unsigned_long__char_const___const(struct std__vector_double__std__allocator_double__* v295, unsigned long v296, char* v297) {
bb298:
  struct std__vector_double__std__allocator_double__* this299;
  unsigned long __n300;
  char* __s301;
  unsigned long __retval302;
  unsigned long __len303;
  unsigned long ref_tmp0304;
  this299 = v295;
  __n300 = v296;
  __s301 = v297;
  struct std__vector_double__std__allocator_double__* t305 = this299;
    unsigned long r306 = std__vector_double__std__allocator_double_____max_size___const(t305);
    unsigned long r307 = std__vector_double__std__allocator_double_____size___const(t305);
    unsigned long b308 = r306 - r307;
    unsigned long t309 = __n300;
    _Bool c310 = ((b308 < t309)) ? 1 : 0;
    if (c310) {
      char* t311 = __s301;
      std____throw_length_error(t311);
    }
  unsigned long r312 = std__vector_double__std__allocator_double_____size___const(t305);
  unsigned long r313 = std__vector_double__std__allocator_double_____size___const(t305);
  ref_tmp0304 = r313;
  unsigned long* r314 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp0304, &__n300);
  unsigned long t315 = *r314;
  unsigned long b316 = r312 + t315;
  __len303 = b316;
  unsigned long t317 = __len303;
  unsigned long r318 = std__vector_double__std__allocator_double_____size___const(t305);
  _Bool c319 = ((t317 < r318)) ? 1 : 0;
  _Bool ternary320;
  if (c319) {
    _Bool c321 = 1;
    ternary320 = (_Bool)c321;
  } else {
    unsigned long t322 = __len303;
    unsigned long r323 = std__vector_double__std__allocator_double_____max_size___const(t305);
    _Bool c324 = ((t322 > r323)) ? 1 : 0;
    ternary320 = (_Bool)c324;
  }
  unsigned long ternary325;
  if (ternary320) {
    unsigned long r326 = std__vector_double__std__allocator_double_____max_size___const(t305);
    ternary325 = (unsigned long)r326;
  } else {
    unsigned long t327 = __len303;
    ternary325 = (unsigned long)t327;
  }
  __retval302 = ternary325;
  unsigned long t328 = __retval302;
  return t328;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPdSt6vectorIdSaIdEEE4baseEv
double** __gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______base___const(struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___* v329) {
bb330:
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___* this331;
  double** __retval332;
  this331 = v329;
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___* t333 = this331;
  __retval332 = &t333->_M_current;
  double** t334 = __retval332;
  return t334;
}

// function: _ZN9__gnu_cxxmiIPdSt6vectorIdSaIdEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_
long __gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______difference_type___gnu_cxx__operator__double___std__vector_double__std__allocator_double_____(struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___* v335, struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___* v336) {
bb337:
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___* __lhs338;
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___* __rhs339;
  long __retval340;
  __lhs338 = v335;
  __rhs339 = v336;
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___* t341 = __lhs338;
  double** r342 = __gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______base___const(t341);
  double* t343 = *r342;
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___* t344 = __rhs339;
  double** r345 = __gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______base___const(t344);
  double* t346 = *r345;
  long diff347 = t343 - t346;
  __retval340 = diff347;
  long t348 = __retval340;
  return t348;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPdSt6vectorIdSaIdEEEC2ERKS1_
void __gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_________normal_iterator(struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___* v349, double** v350) {
bb351:
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___* this352;
  double** __i353;
  this352 = v349;
  __i353 = v350;
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___* t354 = this352;
  double** t355 = __i353;
  double* t356 = *t355;
  t354->_M_current = t356;
  return;
}

// function: _ZNSt6vectorIdSaIdEE3endEv
struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ std__vector_double__std__allocator_double_____end(struct std__vector_double__std__allocator_double__* v357) {
bb358:
  struct std__vector_double__std__allocator_double__* this359;
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ __retval360;
  this359 = v357;
  struct std__vector_double__std__allocator_double__* t361 = this359;
  struct std___Vector_base_double__std__allocator_double__* base362 = (struct std___Vector_base_double__std__allocator_double__*)((char *)t361 + 0);
  struct std___Vector_base_double__std__allocator_double_____Vector_impl_data* base363 = (struct std___Vector_base_double__std__allocator_double_____Vector_impl_data*)((char *)&(base362->_M_impl) + 0);
  __gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_________normal_iterator(&__retval360, &base363->_M_finish);
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ t364 = __retval360;
  return t364;
}

// function: _ZNSt6vectorIdSaIdEE5beginEv
struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ std__vector_double__std__allocator_double_____begin(struct std__vector_double__std__allocator_double__* v365) {
bb366:
  struct std__vector_double__std__allocator_double__* this367;
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ __retval368;
  this367 = v365;
  struct std__vector_double__std__allocator_double__* t369 = this367;
  struct std___Vector_base_double__std__allocator_double__* base370 = (struct std___Vector_base_double__std__allocator_double__*)((char *)t369 + 0);
  struct std___Vector_base_double__std__allocator_double_____Vector_impl_data* base371 = (struct std___Vector_base_double__std__allocator_double_____Vector_impl_data*)((char *)&(base370->_M_impl) + 0);
  __gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_________normal_iterator(&__retval368, &base371->_M_start);
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ t372 = __retval368;
  return t372;
}

// function: _ZNKSt15__new_allocatorIdE11_M_max_sizeEv
unsigned long std____new_allocator_double____M_max_size___const(struct std____new_allocator_double_* v373) {
bb374:
  struct std____new_allocator_double_* this375;
  unsigned long __retval376;
  this375 = v373;
  struct std____new_allocator_double_* t377 = this375;
  unsigned long c378 = 9223372036854775807;
  unsigned long c379 = 8;
  unsigned long b380 = c378 / c379;
  __retval376 = b380;
  unsigned long t381 = __retval376;
  return t381;
}

// function: _ZNSt15__new_allocatorIdE8allocateEmPKv
double* std____new_allocator_double___allocate(struct std____new_allocator_double_* v382, unsigned long v383, void* v384) {
bb385:
  struct std____new_allocator_double_* this386;
  unsigned long __n387;
  void* unnamed388;
  double* __retval389;
  this386 = v382;
  __n387 = v383;
  unnamed388 = v384;
  struct std____new_allocator_double_* t390 = this386;
    unsigned long t391 = __n387;
    unsigned long r392 = std____new_allocator_double____M_max_size___const(t390);
    _Bool c393 = ((t391 > r392)) ? 1 : 0;
    if (c393) {
        unsigned long t394 = __n387;
        unsigned long c395 = -1;
        unsigned long c396 = 8;
        unsigned long b397 = c395 / c396;
        _Bool c398 = ((t394 > b397)) ? 1 : 0;
        if (c398) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c399 = 8;
    unsigned long c400 = 16;
    _Bool c401 = ((c399 > c400)) ? 1 : 0;
    if (c401) {
      unsigned long __al402;
      unsigned long c403 = 8;
      __al402 = c403;
      unsigned long t404 = __n387;
      unsigned long c405 = 8;
      unsigned long b406 = t404 * c405;
      unsigned long t407 = __al402;
      void* r408 = operator_new_2(b406, t407);
      double* cast409 = (double*)r408;
      __retval389 = cast409;
      double* t410 = __retval389;
      return t410;
    }
  unsigned long t411 = __n387;
  unsigned long c412 = 8;
  unsigned long b413 = t411 * c412;
  void* r414 = operator_new(b413);
  double* cast415 = (double*)r414;
  __retval389 = cast415;
  double* t416 = __retval389;
  return t416;
}

// function: _ZNSaIdE8allocateEm
double* std__allocator_double___allocate(struct std__allocator_double_* v417, unsigned long v418) {
bb419:
  struct std__allocator_double_* this420;
  unsigned long __n421;
  double* __retval422;
  this420 = v417;
  __n421 = v418;
  struct std__allocator_double_* t423 = this420;
    _Bool r424 = std____is_constant_evaluated();
    if (r424) {
        unsigned long t425 = __n421;
        unsigned long c426 = 8;
        unsigned long ovr427;
        _Bool ovf428 = __builtin_mul_overflow(t425, c426, &ovr427);
        __n421 = ovr427;
        if (ovf428) {
          std____throw_bad_array_new_length();
        }
      unsigned long t429 = __n421;
      void* r430 = operator_new(t429);
      double* cast431 = (double*)r430;
      __retval422 = cast431;
      double* t432 = __retval422;
      return t432;
    }
  struct std____new_allocator_double_* base433 = (struct std____new_allocator_double_*)((char *)t423 + 0);
  unsigned long t434 = __n421;
  void* c435 = ((void*)0);
  double* r436 = std____new_allocator_double___allocate(base433, t434, c435);
  __retval422 = r436;
  double* t437 = __retval422;
  return t437;
}

// function: _ZNSt16allocator_traitsISaIdEE8allocateERS0_m
double* std__allocator_traits_std__allocator_double_____allocate(struct std__allocator_double_* v438, unsigned long v439) {
bb440:
  struct std__allocator_double_* __a441;
  unsigned long __n442;
  double* __retval443;
  __a441 = v438;
  __n442 = v439;
  struct std__allocator_double_* t444 = __a441;
  unsigned long t445 = __n442;
  double* r446 = std__allocator_double___allocate(t444, t445);
  __retval443 = r446;
  double* t447 = __retval443;
  return t447;
}

// function: _ZNSt12_Vector_baseIdSaIdEE11_M_allocateEm
double* std___Vector_base_double__std__allocator_double______M_allocate(struct std___Vector_base_double__std__allocator_double__* v448, unsigned long v449) {
bb450:
  struct std___Vector_base_double__std__allocator_double__* this451;
  unsigned long __n452;
  double* __retval453;
  this451 = v448;
  __n452 = v449;
  struct std___Vector_base_double__std__allocator_double__* t454 = this451;
  unsigned long t455 = __n452;
  unsigned long c456 = 0;
  _Bool c457 = ((t455 != c456)) ? 1 : 0;
  double* ternary458;
  if (c457) {
    struct std__allocator_double_* base459 = (struct std__allocator_double_*)((char *)&(t454->_M_impl) + 0);
    unsigned long t460 = __n452;
    double* r461 = std__allocator_traits_std__allocator_double_____allocate(base459, t460);
    ternary458 = (double*)r461;
  } else {
    double* c462 = ((void*)0);
    ternary458 = (double*)c462;
  }
  __retval453 = ternary458;
  double* t463 = __retval453;
  return t463;
}

// function: _ZNSt6vectorIdSaIdEE12_Guard_allocC2EPdmRSt12_Vector_baseIdS0_E
void std__vector_double__std__allocator_double______Guard_alloc___Guard_alloc(struct std__vector_double__std__allocator_double_____Guard_alloc* v464, double* v465, unsigned long v466, struct std___Vector_base_double__std__allocator_double__* v467) {
bb468:
  struct std__vector_double__std__allocator_double_____Guard_alloc* this469;
  double* __s470;
  unsigned long __l471;
  struct std___Vector_base_double__std__allocator_double__* __vect472;
  this469 = v464;
  __s470 = v465;
  __l471 = v466;
  __vect472 = v467;
  struct std__vector_double__std__allocator_double_____Guard_alloc* t473 = this469;
  double* t474 = __s470;
  t473->_M_storage = t474;
  unsigned long t475 = __l471;
  t473->_M_len = t475;
  struct std___Vector_base_double__std__allocator_double__* t476 = __vect472;
  t473->_M_vect = t476;
  return;
}

// function: _ZSt10to_addressIdEPT_S1_
double* double__std__to_address_double_(double* v477) {
bb478:
  double* __ptr479;
  double* __retval480;
  __ptr479 = v477;
  double* t481 = __ptr479;
  __retval480 = t481;
  double* t482 = __retval480;
  return t482;
}

// function: _ZSt12__to_addressIPdEDaRKT_
double* auto_std____to_address_double__(double** v483) {
bb484:
  double** __ptr485;
  double* __retval486;
  __ptr485 = v483;
  double** t487 = __ptr485;
  double* t488 = *t487;
  double* r489 = double__std__to_address_double_(t488);
  __retval486 = r489;
  double* t490 = __retval486;
  return t490;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb491:
  _Bool __retval492;
    _Bool c493 = 0;
    __retval492 = c493;
    _Bool t494 = __retval492;
    return t494;
  abort();
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPdvEC2ERKS1_
void __gnu_cxx____normal_iterator_double___void_____normal_iterator(struct __gnu_cxx____normal_iterator_double____void_* v495, double** v496) {
bb497:
  struct __gnu_cxx____normal_iterator_double____void_* this498;
  double** __i499;
  this498 = v495;
  __i499 = v496;
  struct __gnu_cxx____normal_iterator_double____void_* t500 = this498;
  double** t501 = __i499;
  double* t502 = *t501;
  t500->_M_current = t502;
  return;
}

// function: _ZSt12construct_atIdJdEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
double* _ZSt12construct_atIdJdEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(double* v503, double* v504) {
bb505:
  double* __location506;
  double* __args507;
  double* __retval508;
  void* __loc509;
  __location506 = v503;
  __args507 = v504;
  double* t510 = __location506;
  void* cast511 = (void*)t510;
  __loc509 = cast511;
    void* t512 = __loc509;
    double* cast513 = (double*)t512;
    double* t514 = __args507;
    double t515 = *t514;
    *cast513 = t515;
    __retval508 = cast513;
    double* t516 = __retval508;
    return t516;
  abort();
}

// function: _ZNSt16allocator_traitsISaIdEE9constructIdJdEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_double_____construct_double__double_(struct std__allocator_double_* v517, double* v518, double* v519) {
bb520:
  struct std__allocator_double_* __a521;
  double* __p522;
  double* __args523;
  __a521 = v517;
  __p522 = v518;
  __args523 = v519;
  double* t524 = __p522;
  double* t525 = __args523;
  double* r526 = _ZSt12construct_atIdJdEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t524, t525);
  return;
}

// function: _ZSt10destroy_atIdEvPT_
void void_std__destroy_at_double_(double* v527) {
bb528:
  double* __location529;
  __location529 = v527;
  return;
}

// function: _ZNSt16allocator_traitsISaIdEE7destroyIdEEvRS0_PT_
void void_std__allocator_traits_std__allocator_double_____destroy_double_(struct std__allocator_double_* v530, double* v531) {
bb532:
  struct std__allocator_double_* __a533;
  double* __p534;
  __a533 = v530;
  __p534 = v531;
  double* t535 = __p534;
  void_std__destroy_at_double_(t535);
  return;
}

// function: _ZSt19__relocate_object_aIddSaIdEEvPT_PT0_RT1_
void void_std____relocate_object_a_double__double__std__allocator_double___(double* v536, double* v537, struct std__allocator_double_* v538) {
bb539:
  double* __dest540;
  double* __orig541;
  struct std__allocator_double_* __alloc542;
  __dest540 = v536;
  __orig541 = v537;
  __alloc542 = v538;
  struct std__allocator_double_* t543 = __alloc542;
  double* t544 = __dest540;
  double* t545 = __orig541;
  void_std__allocator_traits_std__allocator_double_____construct_double__double_(t543, t544, t545);
  struct std__allocator_double_* t546 = __alloc542;
  double* t547 = __orig541;
  void_std__allocator_traits_std__allocator_double_____destroy_double_(t546, t547);
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPdvEdeEv
double* __gnu_cxx____normal_iterator_double___void___operator____const(struct __gnu_cxx____normal_iterator_double____void_* v548) {
bb549:
  struct __gnu_cxx____normal_iterator_double____void_* this550;
  double* __retval551;
  this550 = v548;
  struct __gnu_cxx____normal_iterator_double____void_* t552 = this550;
  double* t553 = t552->_M_current;
  __retval551 = t553;
  double* t554 = __retval551;
  return t554;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPdvEppEv
struct __gnu_cxx____normal_iterator_double____void_* __gnu_cxx____normal_iterator_double___void___operator__(struct __gnu_cxx____normal_iterator_double____void_* v555) {
bb556:
  struct __gnu_cxx____normal_iterator_double____void_* this557;
  struct __gnu_cxx____normal_iterator_double____void_* __retval558;
  this557 = v555;
  struct __gnu_cxx____normal_iterator_double____void_* t559 = this557;
  double* t560 = t559->_M_current;
  int c561 = 1;
  double* ptr562 = &(t560)[c561];
  t559->_M_current = ptr562;
  __retval558 = t559;
  struct __gnu_cxx____normal_iterator_double____void_* t563 = __retval558;
  return t563;
}

// function: _ZSt14__relocate_a_1IPdN9__gnu_cxx17__normal_iteratorIS0_vEESaIdEET0_T_S6_S5_RT1_
struct __gnu_cxx____normal_iterator_double____void_ __gnu_cxx____normal_iterator_double___void__std____relocate_a_1_double_____gnu_cxx____normal_iterator_double___void___std__allocator_double___(double* v564, double* v565, struct __gnu_cxx____normal_iterator_double____void_ v566, struct std__allocator_double_* v567) {
bb568:
  double* __first569;
  double* __last570;
  struct __gnu_cxx____normal_iterator_double____void_ __result571;
  struct std__allocator_double_* __alloc572;
  struct __gnu_cxx____normal_iterator_double____void_ __retval573;
  __first569 = v564;
  __last570 = v565;
  __result571 = v566;
  __alloc572 = v567;
  __retval573 = __result571; // copy
    while (1) {
      double* t575 = __first569;
      double* t576 = __last570;
      _Bool c577 = ((t575 != t576)) ? 1 : 0;
      if (!c577) break;
      double* r578 = __gnu_cxx____normal_iterator_double___void___operator____const(&__retval573);
      double* t579 = __first569;
      struct std__allocator_double_* t580 = __alloc572;
      void_std____relocate_object_a_double__double__std__allocator_double___(r578, t579, t580);
    for_step574: ;
      double* t581 = __first569;
      int c582 = 1;
      double* ptr583 = &(t581)[c582];
      __first569 = ptr583;
      struct __gnu_cxx____normal_iterator_double____void_* r584 = __gnu_cxx____normal_iterator_double___void___operator__(&__retval573);
    }
  struct __gnu_cxx____normal_iterator_double____void_ t585 = __retval573;
  return t585;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPdvEaSEOS2_
struct __gnu_cxx____normal_iterator_double____void_* __gnu_cxx____normal_iterator_double___void___operator_(struct __gnu_cxx____normal_iterator_double____void_* v586, struct __gnu_cxx____normal_iterator_double____void_* v587) {
bb588:
  struct __gnu_cxx____normal_iterator_double____void_* this589;
  struct __gnu_cxx____normal_iterator_double____void_* unnamed590;
  struct __gnu_cxx____normal_iterator_double____void_* __retval591;
  this589 = v586;
  unnamed590 = v587;
  struct __gnu_cxx____normal_iterator_double____void_* t592 = this589;
  struct __gnu_cxx____normal_iterator_double____void_* t593 = unnamed590;
  double* t594 = t593->_M_current;
  t592->_M_current = t594;
  __retval591 = t592;
  struct __gnu_cxx____normal_iterator_double____void_* t595 = __retval591;
  return t595;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPdvE4baseEv
double** __gnu_cxx____normal_iterator_double___void___base___const(struct __gnu_cxx____normal_iterator_double____void_* v596) {
bb597:
  struct __gnu_cxx____normal_iterator_double____void_* this598;
  double** __retval599;
  this598 = v596;
  struct __gnu_cxx____normal_iterator_double____void_* t600 = this598;
  __retval599 = &t600->_M_current;
  double** t601 = __retval599;
  return t601;
}

// function: _ZSt14__relocate_a_1IddENSt9enable_ifIXsr3std24__is_bitwise_relocatableIT_EE5valueEPS1_E4typeES2_S2_S2_RSaIT0_E
double* std__enable_if_std____is_bitwise_relocatable_double___value__double____type_std____relocate_a_1_double__double_(double* v602, double* v603, double* v604, struct std__allocator_double_* v605) {
bb606:
  double* __first607;
  double* __last608;
  double* __result609;
  struct std__allocator_double_* __alloc610;
  double* __retval611;
  long __count612;
  __first607 = v602;
  __last608 = v603;
  __result609 = v604;
  __alloc610 = v605;
  double* t613 = __last608;
  double* t614 = __first607;
  long diff615 = t613 - t614;
  __count612 = diff615;
    long t616 = __count612;
    long c617 = 0;
    _Bool c618 = ((t616 > c617)) ? 1 : 0;
    if (c618) {
        _Bool r619 = std__is_constant_evaluated();
        if (r619) {
          struct __gnu_cxx____normal_iterator_double____void_ __out620;
          struct __gnu_cxx____normal_iterator_double____void_ ref_tmp0621;
          struct __gnu_cxx____normal_iterator_double____void_ agg_tmp0622;
          __gnu_cxx____normal_iterator_double___void_____normal_iterator(&__out620, &__result609);
          double* t623 = __first607;
          double* t624 = __last608;
          agg_tmp0622 = __out620; // copy
          struct std__allocator_double_* t625 = __alloc610;
          struct __gnu_cxx____normal_iterator_double____void_ t626 = agg_tmp0622;
          struct __gnu_cxx____normal_iterator_double____void_ r627 = __gnu_cxx____normal_iterator_double___void__std____relocate_a_1_double_____gnu_cxx____normal_iterator_double___void___std__allocator_double___(t623, t624, t626, t625);
          ref_tmp0621 = r627;
          struct __gnu_cxx____normal_iterator_double____void_* r628 = __gnu_cxx____normal_iterator_double___void___operator_(&__out620, &ref_tmp0621);
          double** r629 = __gnu_cxx____normal_iterator_double___void___base___const(&__out620);
          double* t630 = *r629;
          __retval611 = t630;
          double* t631 = __retval611;
          return t631;
        }
      double* t632 = __result609;
      void* cast633 = (void*)t632;
      double* t634 = __first607;
      void* cast635 = (void*)t634;
      long t636 = __count612;
      unsigned long cast637 = (unsigned long)t636;
      unsigned long c638 = 8;
      unsigned long b639 = cast637 * c638;
      void* r640 = memcpy(cast633, cast635, b639);
    }
  double* t641 = __result609;
  long t642 = __count612;
  double* ptr643 = &(t641)[t642];
  __retval611 = ptr643;
  double* t644 = __retval611;
  return t644;
}

// function: _ZSt12__niter_baseIPdET_S1_
double* double__std____niter_base_double__(double* v645) {
bb646:
  double* __it647;
  double* __retval648;
  __it647 = v645;
  double* t649 = __it647;
  __retval648 = t649;
  double* t650 = __retval648;
  return t650;
}

// function: _ZSt12__relocate_aIPdS0_SaIdEET0_T_S3_S2_RT1_
double* double__std____relocate_a_double___double___std__allocator_double___(double* v651, double* v652, double* v653, struct std__allocator_double_* v654) {
bb655:
  double* __first656;
  double* __last657;
  double* __result658;
  struct std__allocator_double_* __alloc659;
  double* __retval660;
  __first656 = v651;
  __last657 = v652;
  __result658 = v653;
  __alloc659 = v654;
  double* t661 = __first656;
  double* r662 = double__std____niter_base_double__(t661);
  double* t663 = __last657;
  double* r664 = double__std____niter_base_double__(t663);
  double* t665 = __result658;
  double* r666 = double__std____niter_base_double__(t665);
  struct std__allocator_double_* t667 = __alloc659;
  double* r668 = std__enable_if_std____is_bitwise_relocatable_double___value__double____type_std____relocate_a_1_double__double_(r662, r664, r666, t667);
  __retval660 = r668;
  double* t669 = __retval660;
  return t669;
}

// function: _ZNSt6vectorIdSaIdEE11_S_relocateEPdS2_S2_RS0_
double* std__vector_double__std__allocator_double______S_relocate(double* v670, double* v671, double* v672, struct std__allocator_double_* v673) {
bb674:
  double* __first675;
  double* __last676;
  double* __result677;
  struct std__allocator_double_* __alloc678;
  double* __retval679;
  __first675 = v670;
  __last676 = v671;
  __result677 = v672;
  __alloc678 = v673;
  double* t680 = __first675;
  double* t681 = __last676;
  double* t682 = __result677;
  struct std__allocator_double_* t683 = __alloc678;
  double* r684 = double__std____relocate_a_double___double___std__allocator_double___(t680, t681, t682, t683);
  __retval679 = r684;
  double* t685 = __retval679;
  return t685;
}

// function: _ZNSt12_Vector_baseIdSaIdEE19_M_get_Tp_allocatorEv
struct std__allocator_double_* std___Vector_base_double__std__allocator_double______M_get_Tp_allocator(struct std___Vector_base_double__std__allocator_double__* v686) {
bb687:
  struct std___Vector_base_double__std__allocator_double__* this688;
  struct std__allocator_double_* __retval689;
  this688 = v686;
  struct std___Vector_base_double__std__allocator_double__* t690 = this688;
  struct std__allocator_double_* base691 = (struct std__allocator_double_*)((char *)&(t690->_M_impl) + 0);
  __retval689 = base691;
  struct std__allocator_double_* t692 = __retval689;
  return t692;
}

// function: _ZNSt6vectorIdSaIdEE12_Guard_allocD2Ev
void std__vector_double__std__allocator_double______Guard_alloc____Guard_alloc(struct std__vector_double__std__allocator_double_____Guard_alloc* v693) {
bb694:
  struct std__vector_double__std__allocator_double_____Guard_alloc* this695;
  this695 = v693;
  struct std__vector_double__std__allocator_double_____Guard_alloc* t696 = this695;
    double* t697 = t696->_M_storage;
    _Bool cast698 = (_Bool)t697;
    if (cast698) {
      struct std___Vector_base_double__std__allocator_double__* t699 = t696->_M_vect;
      double* t700 = t696->_M_storage;
      unsigned long t701 = t696->_M_len;
      std___Vector_base_double__std__allocator_double______M_deallocate(t699, t700, t701);
    }
  return;
}

// function: _ZNSt6vectorIdSaIdEE17_M_realloc_appendIJRKdEEEvDpOT_
void void_std__vector_double__std__allocator_double______M_realloc_append_double_const__(struct std__vector_double__std__allocator_double__* v702, double* v703) {
bb704:
  struct std__vector_double__std__allocator_double__* this705;
  double* __args706;
  unsigned long __len707;
  double* __old_start708;
  double* __old_finish709;
  unsigned long __elems710;
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ ref_tmp0711;
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ ref_tmp1712;
  double* __new_start713;
  double* __new_finish714;
  this705 = v702;
  __args706 = v703;
  struct std__vector_double__std__allocator_double__* t715 = this705;
  unsigned long c716 = 1;
  char* cast717 = (char*)&(_str_3);
  unsigned long r718 = std__vector_double__std__allocator_double______M_check_len_unsigned_long__char_const___const(t715, c716, cast717);
  __len707 = r718;
    unsigned long t719 = __len707;
    unsigned long c720 = 0;
    _Bool c721 = ((t719 <= c720)) ? 1 : 0;
    if (c721) {
      __builtin_unreachable();
    }
  struct std___Vector_base_double__std__allocator_double__* base722 = (struct std___Vector_base_double__std__allocator_double__*)((char *)t715 + 0);
  struct std___Vector_base_double__std__allocator_double_____Vector_impl_data* base723 = (struct std___Vector_base_double__std__allocator_double_____Vector_impl_data*)((char *)&(base722->_M_impl) + 0);
  double* t724 = base723->_M_start;
  __old_start708 = t724;
  struct std___Vector_base_double__std__allocator_double__* base725 = (struct std___Vector_base_double__std__allocator_double__*)((char *)t715 + 0);
  struct std___Vector_base_double__std__allocator_double_____Vector_impl_data* base726 = (struct std___Vector_base_double__std__allocator_double_____Vector_impl_data*)((char *)&(base725->_M_impl) + 0);
  double* t727 = base726->_M_finish;
  __old_finish709 = t727;
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ r728 = std__vector_double__std__allocator_double_____end(t715);
  ref_tmp0711 = r728;
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ r729 = std__vector_double__std__allocator_double_____begin(t715);
  ref_tmp1712 = r729;
  long r730 = __gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______difference_type___gnu_cxx__operator__double___std__vector_double__std__allocator_double_____(&ref_tmp0711, &ref_tmp1712);
  unsigned long cast731 = (unsigned long)r730;
  __elems710 = cast731;
  struct std___Vector_base_double__std__allocator_double__* base732 = (struct std___Vector_base_double__std__allocator_double__*)((char *)t715 + 0);
  unsigned long t733 = __len707;
  double* r734 = std___Vector_base_double__std__allocator_double______M_allocate(base732, t733);
  __new_start713 = r734;
  double* t735 = __new_start713;
  __new_finish714 = t735;
    struct std__vector_double__std__allocator_double_____Guard_alloc __guard736;
    double* ref_tmp2737;
    double* t738 = __new_start713;
    unsigned long t739 = __len707;
    struct std___Vector_base_double__std__allocator_double__* base740 = (struct std___Vector_base_double__std__allocator_double__*)((char *)t715 + 0);
    std__vector_double__std__allocator_double______Guard_alloc___Guard_alloc(&__guard736, t738, t739, base740);
      struct std___Vector_base_double__std__allocator_double__* base741 = (struct std___Vector_base_double__std__allocator_double__*)((char *)t715 + 0);
      struct std__allocator_double_* base742 = (struct std__allocator_double_*)((char *)&(base741->_M_impl) + 0);
      double* t743 = __new_start713;
      unsigned long t744 = __elems710;
      double* ptr745 = &(t743)[t744];
      ref_tmp2737 = ptr745;
      double* r746 = auto_std____to_address_double__(&ref_tmp2737);
      double* t747 = __args706;
      void_std__allocator_traits_std__allocator_double_____construct_double__double_const__(base742, r746, t747);
        double* t748 = __old_start708;
        double* t749 = __old_finish709;
        double* t750 = __new_start713;
        struct std___Vector_base_double__std__allocator_double__* base751 = (struct std___Vector_base_double__std__allocator_double__*)((char *)t715 + 0);
        struct std__allocator_double_* r752 = std___Vector_base_double__std__allocator_double______M_get_Tp_allocator(base751);
        double* r753 = std__vector_double__std__allocator_double______S_relocate(t748, t749, t750, r752);
        __new_finish714 = r753;
        double* t754 = __new_finish714;
        int c755 = 1;
        double* ptr756 = &(t754)[c755];
        __new_finish714 = ptr756;
      double* t757 = __old_start708;
      __guard736._M_storage = t757;
      struct std___Vector_base_double__std__allocator_double__* base758 = (struct std___Vector_base_double__std__allocator_double__*)((char *)t715 + 0);
      struct std___Vector_base_double__std__allocator_double_____Vector_impl_data* base759 = (struct std___Vector_base_double__std__allocator_double_____Vector_impl_data*)((char *)&(base758->_M_impl) + 0);
      double* t760 = base759->_M_end_of_storage;
      double* t761 = __old_start708;
      long diff762 = t760 - t761;
      unsigned long cast763 = (unsigned long)diff762;
      __guard736._M_len = cast763;
    {
      std__vector_double__std__allocator_double______Guard_alloc____Guard_alloc(&__guard736);
    }
  double* t764 = __new_start713;
  struct std___Vector_base_double__std__allocator_double__* base765 = (struct std___Vector_base_double__std__allocator_double__*)((char *)t715 + 0);
  struct std___Vector_base_double__std__allocator_double_____Vector_impl_data* base766 = (struct std___Vector_base_double__std__allocator_double_____Vector_impl_data*)((char *)&(base765->_M_impl) + 0);
  base766->_M_start = t764;
  double* t767 = __new_finish714;
  struct std___Vector_base_double__std__allocator_double__* base768 = (struct std___Vector_base_double__std__allocator_double__*)((char *)t715 + 0);
  struct std___Vector_base_double__std__allocator_double_____Vector_impl_data* base769 = (struct std___Vector_base_double__std__allocator_double_____Vector_impl_data*)((char *)&(base768->_M_impl) + 0);
  base769->_M_finish = t767;
  double* t770 = __new_start713;
  unsigned long t771 = __len707;
  double* ptr772 = &(t770)[t771];
  struct std___Vector_base_double__std__allocator_double__* base773 = (struct std___Vector_base_double__std__allocator_double__*)((char *)t715 + 0);
  struct std___Vector_base_double__std__allocator_double_____Vector_impl_data* base774 = (struct std___Vector_base_double__std__allocator_double_____Vector_impl_data*)((char *)&(base773->_M_impl) + 0);
  base774->_M_end_of_storage = ptr772;
  return;
}

// function: _ZNSt6vectorIdSaIdEE9push_backERKd
void std__vector_double__std__allocator_double_____push_back(struct std__vector_double__std__allocator_double__* v775, double* v776) {
bb777:
  struct std__vector_double__std__allocator_double__* this778;
  double* __x779;
  this778 = v775;
  __x779 = v776;
  struct std__vector_double__std__allocator_double__* t780 = this778;
    struct std___Vector_base_double__std__allocator_double__* base781 = (struct std___Vector_base_double__std__allocator_double__*)((char *)t780 + 0);
    struct std___Vector_base_double__std__allocator_double_____Vector_impl_data* base782 = (struct std___Vector_base_double__std__allocator_double_____Vector_impl_data*)((char *)&(base781->_M_impl) + 0);
    double* t783 = base782->_M_finish;
    struct std___Vector_base_double__std__allocator_double__* base784 = (struct std___Vector_base_double__std__allocator_double__*)((char *)t780 + 0);
    struct std___Vector_base_double__std__allocator_double_____Vector_impl_data* base785 = (struct std___Vector_base_double__std__allocator_double_____Vector_impl_data*)((char *)&(base784->_M_impl) + 0);
    double* t786 = base785->_M_end_of_storage;
    _Bool c787 = ((t783 != t786)) ? 1 : 0;
    if (c787) {
      struct std___Vector_base_double__std__allocator_double__* base788 = (struct std___Vector_base_double__std__allocator_double__*)((char *)t780 + 0);
      struct std__allocator_double_* base789 = (struct std__allocator_double_*)((char *)&(base788->_M_impl) + 0);
      struct std___Vector_base_double__std__allocator_double__* base790 = (struct std___Vector_base_double__std__allocator_double__*)((char *)t780 + 0);
      struct std___Vector_base_double__std__allocator_double_____Vector_impl_data* base791 = (struct std___Vector_base_double__std__allocator_double_____Vector_impl_data*)((char *)&(base790->_M_impl) + 0);
      double* t792 = base791->_M_finish;
      double* t793 = __x779;
      void_std__allocator_traits_std__allocator_double_____construct_double__double_const__(base789, t792, t793);
      struct std___Vector_base_double__std__allocator_double__* base794 = (struct std___Vector_base_double__std__allocator_double__*)((char *)t780 + 0);
      struct std___Vector_base_double__std__allocator_double_____Vector_impl_data* base795 = (struct std___Vector_base_double__std__allocator_double_____Vector_impl_data*)((char *)&(base794->_M_impl) + 0);
      double* t796 = base795->_M_finish;
      int c797 = 1;
      double* ptr798 = &(t796)[c797];
      base795->_M_finish = ptr798;
    } else {
      double* t799 = __x779;
      void_std__vector_double__std__allocator_double______M_realloc_append_double_const__(t780, t799);
    }
  return;
}

// function: _ZNSt6vectorIdSaIdEED2Ev
void std__vector_double__std__allocator_double______vector(struct std__vector_double__std__allocator_double__* v800) {
bb801:
  struct std__vector_double__std__allocator_double__* this802;
  this802 = v800;
  struct std__vector_double__std__allocator_double__* t803 = this802;
    struct std___Vector_base_double__std__allocator_double__* base804 = (struct std___Vector_base_double__std__allocator_double__*)((char *)t803 + 0);
    struct std___Vector_base_double__std__allocator_double_____Vector_impl_data* base805 = (struct std___Vector_base_double__std__allocator_double_____Vector_impl_data*)((char *)&(base804->_M_impl) + 0);
    double* t806 = base805->_M_start;
    struct std___Vector_base_double__std__allocator_double__* base807 = (struct std___Vector_base_double__std__allocator_double__*)((char *)t803 + 0);
    struct std___Vector_base_double__std__allocator_double_____Vector_impl_data* base808 = (struct std___Vector_base_double__std__allocator_double_____Vector_impl_data*)((char *)&(base807->_M_impl) + 0);
    double* t809 = base808->_M_finish;
    struct std___Vector_base_double__std__allocator_double__* base810 = (struct std___Vector_base_double__std__allocator_double__*)((char *)t803 + 0);
    struct std__allocator_double_* r811 = std___Vector_base_double__std__allocator_double______M_get_Tp_allocator(base810);
    void_std___Destroy_double___double_(t806, t809, r811);
  {
    struct std___Vector_base_double__std__allocator_double__* base812 = (struct std___Vector_base_double__std__allocator_double__*)((char *)t803 + 0);
    std___Vector_base_double__std__allocator_double_______Vector_base(base812);
  }
  return;
}

// function: main
int main() {
bb813:
  int __retval814;
  struct std__vector_double__std__allocator_double__ student_marks815;
  double mark816;
  char answer817;
  int c818 = 0;
  __retval814 = c818;
  std__vector_double__std__allocator_double_____vector(&student_marks815);
    char* cast819 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* r820 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast819);
    struct std__basic_ostream_char__std__char_traits_char__* r821 = std__ostream__operator___std__ostream_____(r820, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    struct std__basic_istream_char__std__char_traits_char__* r822 = std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___(&_ZSt3cin, &answer817);
      while (1) {
        char t823 = answer817;
        int cast824 = (int)t823;
        int c825 = 121;
        _Bool c826 = ((cast824 == c825)) ? 1 : 0;
        _Bool ternary827;
        if (c826) {
          _Bool c828 = 1;
          ternary827 = (_Bool)c828;
        } else {
          char t829 = answer817;
          int cast830 = (int)t829;
          int c831 = 89;
          _Bool c832 = ((cast830 == c831)) ? 1 : 0;
          ternary827 = (_Bool)c832;
        }
        if (!ternary827) break;
          char* cast833 = (char*)&(_str_1);
          struct std__basic_ostream_char__std__char_traits_char__* r834 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast833);
          struct std__basic_ostream_char__std__char_traits_char__* r835 = std__ostream__operator___std__ostream_____(r834, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
          struct std__basic_istream_char__std__char_traits_char__* r836 = std__istream__operator__(&_ZSt3cin, &mark816);
          std__vector_double__std__allocator_double_____push_back(&student_marks815, &mark816);
          char* cast837 = (char*)&(_str_2);
          struct std__basic_ostream_char__std__char_traits_char__* r838 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast837);
          struct std__basic_ostream_char__std__char_traits_char__* r839 = std__ostream__operator___std__ostream_____(r838, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
          struct std__basic_istream_char__std__char_traits_char__* r840 = std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___(&_ZSt3cin, &answer817);
      }
    int c841 = 0;
    __retval814 = c841;
    int t842 = __retval814;
    int ret_val843 = t842;
    {
      std__vector_double__std__allocator_double______vector(&student_marks815);
    }
    return ret_val843;
  int t844 = __retval814;
  return t844;
}

// function: _ZNSt12_Vector_baseIdSaIdEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE
void _ZNSt12_Vector_baseIdSaIdEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_double__std__allocator_double_____Vector_impl* v845) {
bb846:
  struct std___Vector_base_double__std__allocator_double_____Vector_impl* this847;
  this847 = v845;
  struct std___Vector_base_double__std__allocator_double_____Vector_impl* t848 = this847;
  struct std__allocator_double_* base849 = (struct std__allocator_double_*)((char *)t848 + 0);
  std__allocator_double___allocator(base849);
    struct std___Vector_base_double__std__allocator_double_____Vector_impl_data* base850 = (struct std___Vector_base_double__std__allocator_double_____Vector_impl_data*)((char *)t848 + 0);
    std___Vector_base_double__std__allocator_double______Vector_impl_data___Vector_impl_data(base850);
  return;
}

// function: _ZNSt12_Vector_baseIdSaIdEE12_Vector_implD2Ev
void std___Vector_base_double__std__allocator_double______Vector_impl____Vector_impl(struct std___Vector_base_double__std__allocator_double_____Vector_impl* v851) {
bb852:
  struct std___Vector_base_double__std__allocator_double_____Vector_impl* this853;
  this853 = v851;
  struct std___Vector_base_double__std__allocator_double_____Vector_impl* t854 = this853;
  {
    struct std__allocator_double_* base855 = (struct std__allocator_double_*)((char *)t854 + 0);
    std__allocator_double____allocator(base855);
  }
  return;
}

// function: _ZNSt12_Vector_baseIdSaIdEEC2Ev
void std___Vector_base_double__std__allocator_double______Vector_base(struct std___Vector_base_double__std__allocator_double__* v856) {
bb857:
  struct std___Vector_base_double__std__allocator_double__* this858;
  this858 = v856;
  struct std___Vector_base_double__std__allocator_double__* t859 = this858;
  _ZNSt12_Vector_baseIdSaIdEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(&t859->_M_impl);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb860:
  _Bool __retval861;
    _Bool c862 = 0;
    __retval861 = c862;
    _Bool t863 = __retval861;
    return t863;
  abort();
}

// function: _ZNSt15__new_allocatorIdE10deallocateEPdm
void std____new_allocator_double___deallocate(struct std____new_allocator_double_* v864, double* v865, unsigned long v866) {
bb867:
  struct std____new_allocator_double_* this868;
  double* __p869;
  unsigned long __n870;
  this868 = v864;
  __p869 = v865;
  __n870 = v866;
  struct std____new_allocator_double_* t871 = this868;
    unsigned long c872 = 8;
    unsigned long c873 = 16;
    _Bool c874 = ((c872 > c873)) ? 1 : 0;
    if (c874) {
      double* t875 = __p869;
      void* cast876 = (void*)t875;
      unsigned long t877 = __n870;
      unsigned long c878 = 8;
      unsigned long b879 = t877 * c878;
      unsigned long c880 = 8;
      operator_delete_3(cast876, b879, c880);
      return;
    }
  double* t881 = __p869;
  void* cast882 = (void*)t881;
  unsigned long t883 = __n870;
  unsigned long c884 = 8;
  unsigned long b885 = t883 * c884;
  operator_delete_2(cast882, b885);
  return;
}

// function: _ZNSaIdE10deallocateEPdm
void std__allocator_double___deallocate(struct std__allocator_double_* v886, double* v887, unsigned long v888) {
bb889:
  struct std__allocator_double_* this890;
  double* __p891;
  unsigned long __n892;
  this890 = v886;
  __p891 = v887;
  __n892 = v888;
  struct std__allocator_double_* t893 = this890;
    _Bool r894 = std____is_constant_evaluated();
    if (r894) {
      double* t895 = __p891;
      void* cast896 = (void*)t895;
      operator_delete(cast896);
      return;
    }
  struct std____new_allocator_double_* base897 = (struct std____new_allocator_double_*)((char *)t893 + 0);
  double* t898 = __p891;
  unsigned long t899 = __n892;
  std____new_allocator_double___deallocate(base897, t898, t899);
  return;
}

// function: _ZNSt16allocator_traitsISaIdEE10deallocateERS0_Pdm
void std__allocator_traits_std__allocator_double_____deallocate(struct std__allocator_double_* v900, double* v901, unsigned long v902) {
bb903:
  struct std__allocator_double_* __a904;
  double* __p905;
  unsigned long __n906;
  __a904 = v900;
  __p905 = v901;
  __n906 = v902;
  struct std__allocator_double_* t907 = __a904;
  double* t908 = __p905;
  unsigned long t909 = __n906;
  std__allocator_double___deallocate(t907, t908, t909);
  return;
}

// function: _ZNSt12_Vector_baseIdSaIdEE13_M_deallocateEPdm
void std___Vector_base_double__std__allocator_double______M_deallocate(struct std___Vector_base_double__std__allocator_double__* v910, double* v911, unsigned long v912) {
bb913:
  struct std___Vector_base_double__std__allocator_double__* this914;
  double* __p915;
  unsigned long __n916;
  this914 = v910;
  __p915 = v911;
  __n916 = v912;
  struct std___Vector_base_double__std__allocator_double__* t917 = this914;
    double* t918 = __p915;
    _Bool cast919 = (_Bool)t918;
    if (cast919) {
      struct std__allocator_double_* base920 = (struct std__allocator_double_*)((char *)&(t917->_M_impl) + 0);
      double* t921 = __p915;
      unsigned long t922 = __n916;
      std__allocator_traits_std__allocator_double_____deallocate(base920, t921, t922);
    }
  return;
}

// function: _ZNSt12_Vector_baseIdSaIdEED2Ev
void std___Vector_base_double__std__allocator_double_______Vector_base(struct std___Vector_base_double__std__allocator_double__* v923) {
bb924:
  struct std___Vector_base_double__std__allocator_double__* this925;
  this925 = v923;
  struct std___Vector_base_double__std__allocator_double__* t926 = this925;
    struct std___Vector_base_double__std__allocator_double_____Vector_impl_data* base927 = (struct std___Vector_base_double__std__allocator_double_____Vector_impl_data*)((char *)&(t926->_M_impl) + 0);
    double* t928 = base927->_M_start;
    struct std___Vector_base_double__std__allocator_double_____Vector_impl_data* base929 = (struct std___Vector_base_double__std__allocator_double_____Vector_impl_data*)((char *)&(t926->_M_impl) + 0);
    double* t930 = base929->_M_end_of_storage;
    struct std___Vector_base_double__std__allocator_double_____Vector_impl_data* base931 = (struct std___Vector_base_double__std__allocator_double_____Vector_impl_data*)((char *)&(t926->_M_impl) + 0);
    double* t932 = base931->_M_start;
    long diff933 = t930 - t932;
    unsigned long cast934 = (unsigned long)diff933;
    std___Vector_base_double__std__allocator_double______M_deallocate(t926, t928, cast934);
  {
    std___Vector_base_double__std__allocator_double______Vector_impl____Vector_impl(&t926->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIdEC2Ev
void std____new_allocator_double_____new_allocator(struct std____new_allocator_double_* v935) {
bb936:
  struct std____new_allocator_double_* this937;
  this937 = v935;
  struct std____new_allocator_double_* t938 = this937;
  return;
}

// function: _ZNSaIdEC2Ev
void std__allocator_double___allocator(struct std__allocator_double_* v939) {
bb940:
  struct std__allocator_double_* this941;
  this941 = v939;
  struct std__allocator_double_* t942 = this941;
  struct std____new_allocator_double_* base943 = (struct std____new_allocator_double_*)((char *)t942 + 0);
  std____new_allocator_double_____new_allocator(base943);
  return;
}

// function: _ZNSt12_Vector_baseIdSaIdEE17_Vector_impl_dataC2Ev
void std___Vector_base_double__std__allocator_double______Vector_impl_data___Vector_impl_data(struct std___Vector_base_double__std__allocator_double_____Vector_impl_data* v944) {
bb945:
  struct std___Vector_base_double__std__allocator_double_____Vector_impl_data* this946;
  this946 = v944;
  struct std___Vector_base_double__std__allocator_double_____Vector_impl_data* t947 = this946;
  double* c948 = ((void*)0);
  t947->_M_start = c948;
  double* c949 = ((void*)0);
  t947->_M_finish = c949;
  double* c950 = ((void*)0);
  t947->_M_end_of_storage = c950;
  return;
}

// function: _ZNSaIdED2Ev
void std__allocator_double____allocator(struct std__allocator_double_* v951) {
bb952:
  struct std__allocator_double_* this953;
  this953 = v951;
  struct std__allocator_double_* t954 = this953;
  return;
}

// function: _ZSt8_DestroyIPdEvT_S1_
void void_std___Destroy_double__(double* v955, double* v956) {
bb957:
  double* __first958;
  double* __last959;
  __first958 = v955;
  __last959 = v956;
      _Bool r960 = std____is_constant_evaluated();
      if (r960) {
          while (1) {
            double* t962 = __first958;
            double* t963 = __last959;
            _Bool c964 = ((t962 != t963)) ? 1 : 0;
            if (!c964) break;
            double* t965 = __first958;
            void_std__destroy_at_double_(t965);
          for_step961: ;
            double* t966 = __first958;
            int c967 = 1;
            double* ptr968 = &(t966)[c967];
            __first958 = ptr968;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPddEvT_S1_RSaIT0_E
void void_std___Destroy_double___double_(double* v969, double* v970, struct std__allocator_double_* v971) {
bb972:
  double* __first973;
  double* __last974;
  struct std__allocator_double_* unnamed975;
  __first973 = v969;
  __last974 = v970;
  unnamed975 = v971;
  double* t976 = __first973;
  double* t977 = __last974;
  void_std___Destroy_double__(t976, t977);
  return;
}

