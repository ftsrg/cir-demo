extern void abort(void);
// Struct definitions (auto-parsed)
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____normal_iterator_int____void_ { int* _M_current; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_ { unsigned char __field0; };
struct std__allocator_int_ { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char __field8; char __field9[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* __field5; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[7] = "size: ";
char _str_1[2] = "\n";
char _str_2[11] = "capacity: ";
char _str_3[11] = "max_size: ";
char _str_4[26] = "vector::_M_realloc_append";
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0);
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(struct std__allocator_int_* p0, int* p1, int* p2);
extern void std____throw_length_error(char* p0);
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, char* p2);
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* p0);
extern void std____throw_bad_array_new_length();
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new(unsigned long p0) { return malloc(p0); }
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* p0);
extern void std____throw_bad_alloc();
void* operator_new_2(unsigned long p0, unsigned long p1) { return malloc(p0); }
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* p0, unsigned long p1, void* p2);
int* std__allocator_int___allocate(struct std__allocator_int_* p0, unsigned long p1);
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* p0, unsigned long p1);
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* p0, unsigned long p1);
void std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* p0, int* p1, unsigned long p2, struct std___Vector_base_int__std__allocator_int__* p3);
int* int__std__to_address_int_(int* p0);
int* auto_std____to_address_int__(int** p0);
_Bool std__is_constant_evaluated();
void __gnu_cxx____normal_iterator_int___void_____normal_iterator(struct __gnu_cxx____normal_iterator_int____void_* p0, int** p1);
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std__allocator_int_* p0, int* p1, int* p2);
void void_std__destroy_at_int_(int* p0);
void void_std__allocator_traits_std__allocator_int_____destroy_int_(struct std__allocator_int_* p0, int* p1);
void void_std____relocate_object_a_int__int__std__allocator_int___(int* p0, int* p1, struct std__allocator_int_* p2);
int* __gnu_cxx____normal_iterator_int___void___operator____const(struct __gnu_cxx____normal_iterator_int____void_* p0);
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator__(struct __gnu_cxx____normal_iterator_int____void_* p0);
struct __gnu_cxx____normal_iterator_int____void_ __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(int* p0, int* p1, struct __gnu_cxx____normal_iterator_int____void_ p2, struct std__allocator_int_* p3);
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator_(struct __gnu_cxx____normal_iterator_int____void_* p0, struct __gnu_cxx____normal_iterator_int____void_* p1);
int** __gnu_cxx____normal_iterator_int___void___base___const(struct __gnu_cxx____normal_iterator_int____void_* p0);
extern void* memcpy(void* p0, void* p1, unsigned long p2);
int* std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(int* p0, int* p1, int* p2, struct std__allocator_int_* p3);
int* int__std____niter_base_int__(int* p0);
int* int__std____relocate_a_int___int___std__allocator_int___(int* p0, int* p1, int* p2, struct std__allocator_int_* p3);
int* std__vector_int__std__allocator_int______S_relocate(int* p0, int* p1, int* p2, struct std__allocator_int_* p3);
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* p0);
void std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* p0);
void void_std__vector_int__std__allocator_int______M_realloc_append_int_const__(struct std__vector_int__std__allocator_int__* p0, int* p1);
void std__vector_int__std__allocator_int_____push_back(struct std__vector_int__std__allocator_int__* p0, int* p1);
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
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* p0);
unsigned long std__vector_int__std__allocator_int_____capacity___const(struct std__vector_int__std__allocator_int__* p0);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* p0);
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Vector_base_int__std__allocator_int__* p0);
unsigned long std__vector_int__std__allocator_int_____max_size___const(struct std__vector_int__std__allocator_int__* p0);
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* p0);
int main();
void _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_int__std__allocator_int_____Vector_impl* p0);
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* p0);
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* p0);
_Bool std____is_constant_evaluated();
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* p0, int* p1, unsigned long p2);
void std__allocator_int___deallocate(struct std__allocator_int_* p0, int* p1, unsigned long p2);
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* p0, int* p1, unsigned long p2);
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* p0, int* p1, unsigned long p2);
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* p0);
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* p0);
void std__allocator_int___allocator(struct std__allocator_int_* p0);
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* p0);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
void void_std___Destroy_int__(int* p0, int* p1);
void void_std___Destroy_int___int_(int* p0, int* p1, struct std__allocator_int_* p2);

// function: _ZNSt6vectorIiSaIiEEC2Ev
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* v0) {
bb1:
  struct std__vector_int__std__allocator_int__* this2;
  this2 = v0;
  struct std__vector_int__std__allocator_int__* t3 = this2;
  struct std___Vector_base_int__std__allocator_int__* base4 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t3 + 0);
  std___Vector_base_int__std__allocator_int______Vector_base(base4);
  return;
}

// function: _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* v5, int* v6) {
bb7:
  int* __location8;
  int* __args9;
  int* __retval10;
  void* __loc11;
  __location8 = v5;
  __args9 = v6;
  int* t12 = __location8;
  void* cast13 = (void*)t12;
  __loc11 = cast13;
    void* t14 = __loc11;
    int* cast15 = (int*)t14;
    int* t16 = __args9;
    int t17 = *t16;
    *cast15 = t17;
    __retval10 = cast15;
    int* t18 = __retval10;
    return t18;
  abort();
}

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJRKiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(struct std__allocator_int_* v19, int* v20, int* v21) {
bb22:
  struct std__allocator_int_* __a23;
  int* __p24;
  int* __args25;
  __a23 = v19;
  __p24 = v20;
  __args25 = v21;
  int* t26 = __p24;
  int* t27 = __args25;
  int* r28 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t26, t27);
  return;
}

// function: _ZSt3maxImERKT_S2_S2_
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* v29, unsigned long* v30) {
bb31:
  unsigned long* __a32;
  unsigned long* __b33;
  unsigned long* __retval34;
  __a32 = v29;
  __b33 = v30;
    unsigned long* t35 = __a32;
    unsigned long t36 = *t35;
    unsigned long* t37 = __b33;
    unsigned long t38 = *t37;
    _Bool c39 = ((t36 < t38)) ? 1 : 0;
    if (c39) {
      unsigned long* t40 = __b33;
      __retval34 = t40;
      unsigned long* t41 = __retval34;
      return t41;
    }
  unsigned long* t42 = __a32;
  __retval34 = t42;
  unsigned long* t43 = __retval34;
  return t43;
}

// function: _ZNKSt6vectorIiSaIiEE12_M_check_lenEmPKc
unsigned long std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(struct std__vector_int__std__allocator_int__* v44, unsigned long v45, char* v46) {
bb47:
  struct std__vector_int__std__allocator_int__* this48;
  unsigned long __n49;
  char* __s50;
  unsigned long __retval51;
  unsigned long __len52;
  unsigned long ref_tmp053;
  this48 = v44;
  __n49 = v45;
  __s50 = v46;
  struct std__vector_int__std__allocator_int__* t54 = this48;
    unsigned long r55 = std__vector_int__std__allocator_int_____max_size___const(t54);
    unsigned long r56 = std__vector_int__std__allocator_int_____size___const(t54);
    unsigned long b57 = r55 - r56;
    unsigned long t58 = __n49;
    _Bool c59 = ((b57 < t58)) ? 1 : 0;
    if (c59) {
      char* t60 = __s50;
      std____throw_length_error(t60);
    }
  unsigned long r61 = std__vector_int__std__allocator_int_____size___const(t54);
  unsigned long r62 = std__vector_int__std__allocator_int_____size___const(t54);
  ref_tmp053 = r62;
  unsigned long* r63 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp053, &__n49);
  unsigned long t64 = *r63;
  unsigned long b65 = r61 + t64;
  __len52 = b65;
  unsigned long t66 = __len52;
  unsigned long r67 = std__vector_int__std__allocator_int_____size___const(t54);
  _Bool c68 = ((t66 < r67)) ? 1 : 0;
  _Bool ternary69;
  if (c68) {
    _Bool c70 = 1;
    ternary69 = (_Bool)c70;
  } else {
    unsigned long t71 = __len52;
    unsigned long r72 = std__vector_int__std__allocator_int_____max_size___const(t54);
    _Bool c73 = ((t71 > r72)) ? 1 : 0;
    ternary69 = (_Bool)c73;
  }
  unsigned long ternary74;
  if (ternary69) {
    unsigned long r75 = std__vector_int__std__allocator_int_____max_size___const(t54);
    ternary74 = (unsigned long)r75;
  } else {
    unsigned long t76 = __len52;
    ternary74 = (unsigned long)t76;
  }
  __retval51 = ternary74;
  unsigned long t77 = __retval51;
  return t77;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v78) {
bb79:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this80;
  int** __retval81;
  this80 = v78;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t82 = this80;
  __retval81 = &t82->_M_current;
  int** t83 = __retval81;
  return t83;
}

// function: _ZN9__gnu_cxxmiIPiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v84, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v85) {
bb86:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs87;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs88;
  long __retval89;
  __lhs87 = v84;
  __rhs88 = v85;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t90 = __lhs87;
  int** r91 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t90);
  int* t92 = *r91;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t93 = __rhs88;
  int** r94 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t93);
  int* t95 = *r94;
  long diff96 = t92 - t95;
  __retval89 = diff96;
  long t97 = __retval89;
  return t97;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v98, int** v99) {
bb100:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this101;
  int** __i102;
  this101 = v98;
  __i102 = v99;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t103 = this101;
  int** t104 = __i102;
  int* t105 = *t104;
  t103->_M_current = t105;
  return;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v106) {
bb107:
  struct std__vector_int__std__allocator_int__* this108;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval109;
  this108 = v106;
  struct std__vector_int__std__allocator_int__* t110 = this108;
  struct std___Vector_base_int__std__allocator_int__* base111 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t110 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base112 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base111->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval109, &base112->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t113 = __retval109;
  return t113;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v114) {
bb115:
  struct std__vector_int__std__allocator_int__* this116;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval117;
  this116 = v114;
  struct std__vector_int__std__allocator_int__* t118 = this116;
  struct std___Vector_base_int__std__allocator_int__* base119 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t118 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base120 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base119->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval117, &base120->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t121 = __retval117;
  return t121;
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v122) {
bb123:
  struct std____new_allocator_int_* this124;
  unsigned long __retval125;
  this124 = v122;
  struct std____new_allocator_int_* t126 = this124;
  unsigned long c127 = 9223372036854775807;
  unsigned long c128 = 4;
  unsigned long b129 = c127 / c128;
  __retval125 = b129;
  unsigned long t130 = __retval125;
  return t130;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v131, unsigned long v132, void* v133) {
bb134:
  struct std____new_allocator_int_* this135;
  unsigned long __n136;
  void* unnamed137;
  int* __retval138;
  this135 = v131;
  __n136 = v132;
  unnamed137 = v133;
  struct std____new_allocator_int_* t139 = this135;
    unsigned long t140 = __n136;
    unsigned long r141 = std____new_allocator_int____M_max_size___const(t139);
    _Bool c142 = ((t140 > r141)) ? 1 : 0;
    if (c142) {
        unsigned long t143 = __n136;
        unsigned long c144 = -1;
        unsigned long c145 = 4;
        unsigned long b146 = c144 / c145;
        _Bool c147 = ((t143 > b146)) ? 1 : 0;
        if (c147) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c148 = 4;
    unsigned long c149 = 16;
    _Bool c150 = ((c148 > c149)) ? 1 : 0;
    if (c150) {
      unsigned long __al151;
      unsigned long c152 = 4;
      __al151 = c152;
      unsigned long t153 = __n136;
      unsigned long c154 = 4;
      unsigned long b155 = t153 * c154;
      unsigned long t156 = __al151;
      void* r157 = operator_new_2(b155, t156);
      int* cast158 = (int*)r157;
      __retval138 = cast158;
      int* t159 = __retval138;
      return t159;
    }
  unsigned long t160 = __n136;
  unsigned long c161 = 4;
  unsigned long b162 = t160 * c161;
  void* r163 = operator_new(b162);
  int* cast164 = (int*)r163;
  __retval138 = cast164;
  int* t165 = __retval138;
  return t165;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v166, unsigned long v167) {
bb168:
  struct std__allocator_int_* this169;
  unsigned long __n170;
  int* __retval171;
  this169 = v166;
  __n170 = v167;
  struct std__allocator_int_* t172 = this169;
    _Bool r173 = std____is_constant_evaluated();
    if (r173) {
        unsigned long t174 = __n170;
        unsigned long c175 = 4;
        unsigned long ovr176;
        _Bool ovf177 = __builtin_mul_overflow(t174, c175, &ovr176);
        __n170 = ovr176;
        if (ovf177) {
          std____throw_bad_array_new_length();
        }
      unsigned long t178 = __n170;
      void* r179 = operator_new(t178);
      int* cast180 = (int*)r179;
      __retval171 = cast180;
      int* t181 = __retval171;
      return t181;
    }
  struct std____new_allocator_int_* base182 = (struct std____new_allocator_int_*)((char *)t172 + 0);
  unsigned long t183 = __n170;
  void* c184 = ((void*)0);
  int* r185 = std____new_allocator_int___allocate(base182, t183, c184);
  __retval171 = r185;
  int* t186 = __retval171;
  return t186;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v187, unsigned long v188) {
bb189:
  struct std__allocator_int_* __a190;
  unsigned long __n191;
  int* __retval192;
  __a190 = v187;
  __n191 = v188;
  struct std__allocator_int_* t193 = __a190;
  unsigned long t194 = __n191;
  int* r195 = std__allocator_int___allocate(t193, t194);
  __retval192 = r195;
  int* t196 = __retval192;
  return t196;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v197, unsigned long v198) {
bb199:
  struct std___Vector_base_int__std__allocator_int__* this200;
  unsigned long __n201;
  int* __retval202;
  this200 = v197;
  __n201 = v198;
  struct std___Vector_base_int__std__allocator_int__* t203 = this200;
  unsigned long t204 = __n201;
  unsigned long c205 = 0;
  _Bool c206 = ((t204 != c205)) ? 1 : 0;
  int* ternary207;
  if (c206) {
    struct std__allocator_int_* base208 = (struct std__allocator_int_*)((char *)&(t203->_M_impl) + 0);
    unsigned long t209 = __n201;
    int* r210 = std__allocator_traits_std__allocator_int_____allocate(base208, t209);
    ternary207 = (int*)r210;
  } else {
    int* c211 = ((void*)0);
    ternary207 = (int*)c211;
  }
  __retval202 = ternary207;
  int* t212 = __retval202;
  return t212;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocC2EPimRSt12_Vector_baseIiS0_E
void std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v213, int* v214, unsigned long v215, struct std___Vector_base_int__std__allocator_int__* v216) {
bb217:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this218;
  int* __s219;
  unsigned long __l220;
  struct std___Vector_base_int__std__allocator_int__* __vect221;
  this218 = v213;
  __s219 = v214;
  __l220 = v215;
  __vect221 = v216;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t222 = this218;
  int* t223 = __s219;
  t222->_M_storage = t223;
  unsigned long t224 = __l220;
  t222->_M_len = t224;
  struct std___Vector_base_int__std__allocator_int__* t225 = __vect221;
  t222->_M_vect = t225;
  return;
}

// function: _ZSt10to_addressIiEPT_S1_
int* int__std__to_address_int_(int* v226) {
bb227:
  int* __ptr228;
  int* __retval229;
  __ptr228 = v226;
  int* t230 = __ptr228;
  __retval229 = t230;
  int* t231 = __retval229;
  return t231;
}

// function: _ZSt12__to_addressIPiEDaRKT_
int* auto_std____to_address_int__(int** v232) {
bb233:
  int** __ptr234;
  int* __retval235;
  __ptr234 = v232;
  int** t236 = __ptr234;
  int* t237 = *t236;
  int* r238 = int__std__to_address_int_(t237);
  __retval235 = r238;
  int* t239 = __retval235;
  return t239;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb240:
  _Bool __retval241;
    _Bool c242 = 0;
    __retval241 = c242;
    _Bool t243 = __retval241;
    return t243;
  abort();
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEC2ERKS1_
void __gnu_cxx____normal_iterator_int___void_____normal_iterator(struct __gnu_cxx____normal_iterator_int____void_* v244, int** v245) {
bb246:
  struct __gnu_cxx____normal_iterator_int____void_* this247;
  int** __i248;
  this247 = v244;
  __i248 = v245;
  struct __gnu_cxx____normal_iterator_int____void_* t249 = this247;
  int** t250 = __i248;
  int* t251 = *t250;
  t249->_M_current = t251;
  return;
}

// function: _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v252, int* v253) {
bb254:
  int* __location255;
  int* __args256;
  int* __retval257;
  void* __loc258;
  __location255 = v252;
  __args256 = v253;
  int* t259 = __location255;
  void* cast260 = (void*)t259;
  __loc258 = cast260;
    void* t261 = __loc258;
    int* cast262 = (int*)t261;
    int* t263 = __args256;
    int t264 = *t263;
    *cast262 = t264;
    __retval257 = cast262;
    int* t265 = __retval257;
    return t265;
  abort();
}

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std__allocator_int_* v266, int* v267, int* v268) {
bb269:
  struct std__allocator_int_* __a270;
  int* __p271;
  int* __args272;
  __a270 = v266;
  __p271 = v267;
  __args272 = v268;
  int* t273 = __p271;
  int* t274 = __args272;
  int* r275 = _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t273, t274);
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v276) {
bb277:
  int* __location278;
  __location278 = v276;
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE7destroyIiEEvRS0_PT_
void void_std__allocator_traits_std__allocator_int_____destroy_int_(struct std__allocator_int_* v279, int* v280) {
bb281:
  struct std__allocator_int_* __a282;
  int* __p283;
  __a282 = v279;
  __p283 = v280;
  int* t284 = __p283;
  void_std__destroy_at_int_(t284);
  return;
}

// function: _ZSt19__relocate_object_aIiiSaIiEEvPT_PT0_RT1_
void void_std____relocate_object_a_int__int__std__allocator_int___(int* v285, int* v286, struct std__allocator_int_* v287) {
bb288:
  int* __dest289;
  int* __orig290;
  struct std__allocator_int_* __alloc291;
  __dest289 = v285;
  __orig290 = v286;
  __alloc291 = v287;
  struct std__allocator_int_* t292 = __alloc291;
  int* t293 = __dest289;
  int* t294 = __orig290;
  void_std__allocator_traits_std__allocator_int_____construct_int__int_(t292, t293, t294);
  struct std__allocator_int_* t295 = __alloc291;
  int* t296 = __orig290;
  void_std__allocator_traits_std__allocator_int_____destroy_int_(t295, t296);
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivEdeEv
int* __gnu_cxx____normal_iterator_int___void___operator____const(struct __gnu_cxx____normal_iterator_int____void_* v297) {
bb298:
  struct __gnu_cxx____normal_iterator_int____void_* this299;
  int* __retval300;
  this299 = v297;
  struct __gnu_cxx____normal_iterator_int____void_* t301 = this299;
  int* t302 = t301->_M_current;
  __retval300 = t302;
  int* t303 = __retval300;
  return t303;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEppEv
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator__(struct __gnu_cxx____normal_iterator_int____void_* v304) {
bb305:
  struct __gnu_cxx____normal_iterator_int____void_* this306;
  struct __gnu_cxx____normal_iterator_int____void_* __retval307;
  this306 = v304;
  struct __gnu_cxx____normal_iterator_int____void_* t308 = this306;
  int* t309 = t308->_M_current;
  int c310 = 1;
  int* ptr311 = &(t309)[c310];
  t308->_M_current = ptr311;
  __retval307 = t308;
  struct __gnu_cxx____normal_iterator_int____void_* t312 = __retval307;
  return t312;
}

// function: _ZSt14__relocate_a_1IPiN9__gnu_cxx17__normal_iteratorIS0_vEESaIiEET0_T_S6_S5_RT1_
struct __gnu_cxx____normal_iterator_int____void_ __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(int* v313, int* v314, struct __gnu_cxx____normal_iterator_int____void_ v315, struct std__allocator_int_* v316) {
bb317:
  int* __first318;
  int* __last319;
  struct __gnu_cxx____normal_iterator_int____void_ __result320;
  struct std__allocator_int_* __alloc321;
  struct __gnu_cxx____normal_iterator_int____void_ __retval322;
  __first318 = v313;
  __last319 = v314;
  __result320 = v315;
  __alloc321 = v316;
  __retval322 = __result320; // copy
    while (1) {
      int* t324 = __first318;
      int* t325 = __last319;
      _Bool c326 = ((t324 != t325)) ? 1 : 0;
      if (!c326) break;
      int* r327 = __gnu_cxx____normal_iterator_int___void___operator____const(&__retval322);
      int* t328 = __first318;
      struct std__allocator_int_* t329 = __alloc321;
      void_std____relocate_object_a_int__int__std__allocator_int___(r327, t328, t329);
    for_step323: ;
      int* t330 = __first318;
      int c331 = 1;
      int* ptr332 = &(t330)[c331];
      __first318 = ptr332;
      struct __gnu_cxx____normal_iterator_int____void_* r333 = __gnu_cxx____normal_iterator_int___void___operator__(&__retval322);
    }
  struct __gnu_cxx____normal_iterator_int____void_ t334 = __retval322;
  return t334;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEaSEOS2_
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator_(struct __gnu_cxx____normal_iterator_int____void_* v335, struct __gnu_cxx____normal_iterator_int____void_* v336) {
bb337:
  struct __gnu_cxx____normal_iterator_int____void_* this338;
  struct __gnu_cxx____normal_iterator_int____void_* unnamed339;
  struct __gnu_cxx____normal_iterator_int____void_* __retval340;
  this338 = v335;
  unnamed339 = v336;
  struct __gnu_cxx____normal_iterator_int____void_* t341 = this338;
  struct __gnu_cxx____normal_iterator_int____void_* t342 = unnamed339;
  int* t343 = t342->_M_current;
  t341->_M_current = t343;
  __retval340 = t341;
  struct __gnu_cxx____normal_iterator_int____void_* t344 = __retval340;
  return t344;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivE4baseEv
int** __gnu_cxx____normal_iterator_int___void___base___const(struct __gnu_cxx____normal_iterator_int____void_* v345) {
bb346:
  struct __gnu_cxx____normal_iterator_int____void_* this347;
  int** __retval348;
  this347 = v345;
  struct __gnu_cxx____normal_iterator_int____void_* t349 = this347;
  __retval348 = &t349->_M_current;
  int** t350 = __retval348;
  return t350;
}

// function: _ZSt14__relocate_a_1IiiENSt9enable_ifIXsr3std24__is_bitwise_relocatableIT_EE5valueEPS1_E4typeES2_S2_S2_RSaIT0_E
int* std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(int* v351, int* v352, int* v353, struct std__allocator_int_* v354) {
bb355:
  int* __first356;
  int* __last357;
  int* __result358;
  struct std__allocator_int_* __alloc359;
  int* __retval360;
  long __count361;
  __first356 = v351;
  __last357 = v352;
  __result358 = v353;
  __alloc359 = v354;
  int* t362 = __last357;
  int* t363 = __first356;
  long diff364 = t362 - t363;
  __count361 = diff364;
    long t365 = __count361;
    long c366 = 0;
    _Bool c367 = ((t365 > c366)) ? 1 : 0;
    if (c367) {
        _Bool r368 = std__is_constant_evaluated();
        if (r368) {
          struct __gnu_cxx____normal_iterator_int____void_ __out369;
          struct __gnu_cxx____normal_iterator_int____void_ ref_tmp0370;
          struct __gnu_cxx____normal_iterator_int____void_ agg_tmp0371;
          __gnu_cxx____normal_iterator_int___void_____normal_iterator(&__out369, &__result358);
          int* t372 = __first356;
          int* t373 = __last357;
          agg_tmp0371 = __out369; // copy
          struct std__allocator_int_* t374 = __alloc359;
          struct __gnu_cxx____normal_iterator_int____void_ t375 = agg_tmp0371;
          struct __gnu_cxx____normal_iterator_int____void_ r376 = __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(t372, t373, t375, t374);
          ref_tmp0370 = r376;
          struct __gnu_cxx____normal_iterator_int____void_* r377 = __gnu_cxx____normal_iterator_int___void___operator_(&__out369, &ref_tmp0370);
          int** r378 = __gnu_cxx____normal_iterator_int___void___base___const(&__out369);
          int* t379 = *r378;
          __retval360 = t379;
          int* t380 = __retval360;
          return t380;
        }
      int* t381 = __result358;
      void* cast382 = (void*)t381;
      int* t383 = __first356;
      void* cast384 = (void*)t383;
      long t385 = __count361;
      unsigned long cast386 = (unsigned long)t385;
      unsigned long c387 = 4;
      unsigned long b388 = cast386 * c387;
      void* r389 = memcpy(cast382, cast384, b388);
    }
  int* t390 = __result358;
  long t391 = __count361;
  int* ptr392 = &(t390)[t391];
  __retval360 = ptr392;
  int* t393 = __retval360;
  return t393;
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v394) {
bb395:
  int* __it396;
  int* __retval397;
  __it396 = v394;
  int* t398 = __it396;
  __retval397 = t398;
  int* t399 = __retval397;
  return t399;
}

// function: _ZSt12__relocate_aIPiS0_SaIiEET0_T_S3_S2_RT1_
int* int__std____relocate_a_int___int___std__allocator_int___(int* v400, int* v401, int* v402, struct std__allocator_int_* v403) {
bb404:
  int* __first405;
  int* __last406;
  int* __result407;
  struct std__allocator_int_* __alloc408;
  int* __retval409;
  __first405 = v400;
  __last406 = v401;
  __result407 = v402;
  __alloc408 = v403;
  int* t410 = __first405;
  int* r411 = int__std____niter_base_int__(t410);
  int* t412 = __last406;
  int* r413 = int__std____niter_base_int__(t412);
  int* t414 = __result407;
  int* r415 = int__std____niter_base_int__(t414);
  struct std__allocator_int_* t416 = __alloc408;
  int* r417 = std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(r411, r413, r415, t416);
  __retval409 = r417;
  int* t418 = __retval409;
  return t418;
}

// function: _ZNSt6vectorIiSaIiEE11_S_relocateEPiS2_S2_RS0_
int* std__vector_int__std__allocator_int______S_relocate(int* v419, int* v420, int* v421, struct std__allocator_int_* v422) {
bb423:
  int* __first424;
  int* __last425;
  int* __result426;
  struct std__allocator_int_* __alloc427;
  int* __retval428;
  __first424 = v419;
  __last425 = v420;
  __result426 = v421;
  __alloc427 = v422;
  int* t429 = __first424;
  int* t430 = __last425;
  int* t431 = __result426;
  struct std__allocator_int_* t432 = __alloc427;
  int* r433 = int__std____relocate_a_int___int___std__allocator_int___(t429, t430, t431, t432);
  __retval428 = r433;
  int* t434 = __retval428;
  return t434;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v435) {
bb436:
  struct std___Vector_base_int__std__allocator_int__* this437;
  struct std__allocator_int_* __retval438;
  this437 = v435;
  struct std___Vector_base_int__std__allocator_int__* t439 = this437;
  struct std__allocator_int_* base440 = (struct std__allocator_int_*)((char *)&(t439->_M_impl) + 0);
  __retval438 = base440;
  struct std__allocator_int_* t441 = __retval438;
  return t441;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocD2Ev
void std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v442) {
bb443:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this444;
  this444 = v442;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t445 = this444;
    int* t446 = t445->_M_storage;
    _Bool cast447 = (_Bool)t446;
    if (cast447) {
      struct std___Vector_base_int__std__allocator_int__* t448 = t445->_M_vect;
      int* t449 = t445->_M_storage;
      unsigned long t450 = t445->_M_len;
      std___Vector_base_int__std__allocator_int______M_deallocate(t448, t449, t450);
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_M_realloc_appendIJRKiEEEvDpOT_
void void_std__vector_int__std__allocator_int______M_realloc_append_int_const__(struct std__vector_int__std__allocator_int__* v451, int* v452) {
bb453:
  struct std__vector_int__std__allocator_int__* this454;
  int* __args455;
  unsigned long __len456;
  int* __old_start457;
  int* __old_finish458;
  unsigned long __elems459;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0460;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1461;
  int* __new_start462;
  int* __new_finish463;
  this454 = v451;
  __args455 = v452;
  struct std__vector_int__std__allocator_int__* t464 = this454;
  unsigned long c465 = 1;
  char* cast466 = (char*)&(_str_4);
  unsigned long r467 = std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(t464, c465, cast466);
  __len456 = r467;
    unsigned long t468 = __len456;
    unsigned long c469 = 0;
    _Bool c470 = ((t468 <= c469)) ? 1 : 0;
    if (c470) {
      __builtin_unreachable();
    }
  struct std___Vector_base_int__std__allocator_int__* base471 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t464 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base472 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base471->_M_impl) + 0);
  int* t473 = base472->_M_start;
  __old_start457 = t473;
  struct std___Vector_base_int__std__allocator_int__* base474 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t464 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base475 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base474->_M_impl) + 0);
  int* t476 = base475->_M_finish;
  __old_finish458 = t476;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r477 = std__vector_int__std__allocator_int_____end(t464);
  ref_tmp0460 = r477;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r478 = std__vector_int__std__allocator_int_____begin(t464);
  ref_tmp1461 = r478;
  long r479 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&ref_tmp0460, &ref_tmp1461);
  unsigned long cast480 = (unsigned long)r479;
  __elems459 = cast480;
  struct std___Vector_base_int__std__allocator_int__* base481 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t464 + 0);
  unsigned long t482 = __len456;
  int* r483 = std___Vector_base_int__std__allocator_int______M_allocate(base481, t482);
  __new_start462 = r483;
  int* t484 = __new_start462;
  __new_finish463 = t484;
    struct std__vector_int__std__allocator_int_____Guard_alloc __guard485;
    int* ref_tmp2486;
    int* t487 = __new_start462;
    unsigned long t488 = __len456;
    struct std___Vector_base_int__std__allocator_int__* base489 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t464 + 0);
    std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(&__guard485, t487, t488, base489);
      struct std___Vector_base_int__std__allocator_int__* base490 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t464 + 0);
      struct std__allocator_int_* base491 = (struct std__allocator_int_*)((char *)&(base490->_M_impl) + 0);
      int* t492 = __new_start462;
      unsigned long t493 = __elems459;
      int* ptr494 = &(t492)[t493];
      ref_tmp2486 = ptr494;
      int* r495 = auto_std____to_address_int__(&ref_tmp2486);
      int* t496 = __args455;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(base491, r495, t496);
        int* t497 = __old_start457;
        int* t498 = __old_finish458;
        int* t499 = __new_start462;
        struct std___Vector_base_int__std__allocator_int__* base500 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t464 + 0);
        struct std__allocator_int_* r501 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base500);
        int* r502 = std__vector_int__std__allocator_int______S_relocate(t497, t498, t499, r501);
        __new_finish463 = r502;
        int* t503 = __new_finish463;
        int c504 = 1;
        int* ptr505 = &(t503)[c504];
        __new_finish463 = ptr505;
      int* t506 = __old_start457;
      __guard485._M_storage = t506;
      struct std___Vector_base_int__std__allocator_int__* base507 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t464 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base508 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base507->_M_impl) + 0);
      int* t509 = base508->_M_end_of_storage;
      int* t510 = __old_start457;
      long diff511 = t509 - t510;
      unsigned long cast512 = (unsigned long)diff511;
      __guard485._M_len = cast512;
    {
      std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(&__guard485);
    }
  int* t513 = __new_start462;
  struct std___Vector_base_int__std__allocator_int__* base514 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t464 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base515 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base514->_M_impl) + 0);
  base515->_M_start = t513;
  int* t516 = __new_finish463;
  struct std___Vector_base_int__std__allocator_int__* base517 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t464 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base518 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base517->_M_impl) + 0);
  base518->_M_finish = t516;
  int* t519 = __new_start462;
  unsigned long t520 = __len456;
  int* ptr521 = &(t519)[t520];
  struct std___Vector_base_int__std__allocator_int__* base522 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t464 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base523 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base522->_M_impl) + 0);
  base523->_M_end_of_storage = ptr521;
  return;
}

// function: _ZNSt6vectorIiSaIiEE9push_backERKi
void std__vector_int__std__allocator_int_____push_back(struct std__vector_int__std__allocator_int__* v524, int* v525) {
bb526:
  struct std__vector_int__std__allocator_int__* this527;
  int* __x528;
  this527 = v524;
  __x528 = v525;
  struct std__vector_int__std__allocator_int__* t529 = this527;
    struct std___Vector_base_int__std__allocator_int__* base530 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t529 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base531 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base530->_M_impl) + 0);
    int* t532 = base531->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base533 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t529 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base534 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base533->_M_impl) + 0);
    int* t535 = base534->_M_end_of_storage;
    _Bool c536 = ((t532 != t535)) ? 1 : 0;
    if (c536) {
      struct std___Vector_base_int__std__allocator_int__* base537 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t529 + 0);
      struct std__allocator_int_* base538 = (struct std__allocator_int_*)((char *)&(base537->_M_impl) + 0);
      struct std___Vector_base_int__std__allocator_int__* base539 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t529 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base540 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base539->_M_impl) + 0);
      int* t541 = base540->_M_finish;
      int* t542 = __x528;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(base538, t541, t542);
      struct std___Vector_base_int__std__allocator_int__* base543 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t529 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base544 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base543->_M_impl) + 0);
      int* t545 = base544->_M_finish;
      int c546 = 1;
      int* ptr547 = &(t545)[c546];
      base544->_M_finish = ptr547;
    } else {
      int* t548 = __x528;
      void_std__vector_int__std__allocator_int______M_realloc_append_int_const__(t529, t548);
    }
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v549, int v550) {
bb551:
  int __a552;
  int __b553;
  int __retval554;
  __a552 = v549;
  __b553 = v550;
  int t555 = __a552;
  int t556 = __b553;
  int b557 = t555 | t556;
  __retval554 = b557;
  int t558 = __retval554;
  return t558;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v559) {
bb560:
  struct std__basic_ios_char__std__char_traits_char__* this561;
  int __retval562;
  this561 = v559;
  struct std__basic_ios_char__std__char_traits_char__* t563 = this561;
  struct std__ios_base* base564 = (struct std__ios_base*)((char *)t563 + 0);
  int t565 = base564->_M_streambuf_state;
  __retval562 = t565;
  int t566 = __retval562;
  return t566;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v567, int v568) {
bb569:
  struct std__basic_ios_char__std__char_traits_char__* this570;
  int __state571;
  this570 = v567;
  __state571 = v568;
  struct std__basic_ios_char__std__char_traits_char__* t572 = this570;
  int r573 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t572);
  int t574 = __state571;
  int r575 = std__operator_(r573, t574);
  std__basic_ios_char__std__char_traits_char_____clear(t572, r575);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v576, char* v577) {
bb578:
  char* __c1579;
  char* __c2580;
  _Bool __retval581;
  __c1579 = v576;
  __c2580 = v577;
  char* t582 = __c1579;
  char t583 = *t582;
  int cast584 = (int)t583;
  char* t585 = __c2580;
  char t586 = *t585;
  int cast587 = (int)t586;
  _Bool c588 = ((cast584 == cast587)) ? 1 : 0;
  __retval581 = c588;
  _Bool t589 = __retval581;
  return t589;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v590) {
bb591:
  char* __p592;
  unsigned long __retval593;
  unsigned long __i594;
  __p592 = v590;
  unsigned long c595 = 0;
  __i594 = c595;
    char ref_tmp0596;
    while (1) {
      unsigned long t597 = __i594;
      char* t598 = __p592;
      char* ptr599 = &(t598)[t597];
      char c600 = 0;
      ref_tmp0596 = c600;
      _Bool r601 = __gnu_cxx__char_traits_char___eq(ptr599, &ref_tmp0596);
      _Bool u602 = !r601;
      if (!u602) break;
      unsigned long t603 = __i594;
      unsigned long u604 = t603 + 1;
      __i594 = u604;
    }
  unsigned long t605 = __i594;
  __retval593 = t605;
  unsigned long t606 = __retval593;
  return t606;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v607) {
bb608:
  char* __s609;
  unsigned long __retval610;
  __s609 = v607;
    _Bool r611 = std____is_constant_evaluated();
    if (r611) {
      char* t612 = __s609;
      unsigned long r613 = __gnu_cxx__char_traits_char___length(t612);
      __retval610 = r613;
      unsigned long t614 = __retval610;
      return t614;
    }
  char* t615 = __s609;
  unsigned long r616 = strlen(t615);
  __retval610 = r616;
  unsigned long t617 = __retval610;
  return t617;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v618, char* v619) {
bb620:
  struct std__basic_ostream_char__std__char_traits_char__* __out621;
  char* __s622;
  struct std__basic_ostream_char__std__char_traits_char__* __retval623;
  __out621 = v618;
  __s622 = v619;
    char* t624 = __s622;
    _Bool cast625 = (_Bool)t624;
    _Bool u626 = !cast625;
    if (u626) {
      struct std__basic_ostream_char__std__char_traits_char__* t627 = __out621;
      void** v628 = (void**)t627;
      void* v629 = *((void**)v628);
      unsigned char* cast630 = (unsigned char*)v629;
      long c631 = -24;
      unsigned char* ptr632 = &(cast630)[c631];
      long* cast633 = (long*)ptr632;
      long t634 = *cast633;
      unsigned char* cast635 = (unsigned char*)t627;
      unsigned char* ptr636 = &(cast635)[t634];
      struct std__basic_ostream_char__std__char_traits_char__* cast637 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr636;
      struct std__basic_ios_char__std__char_traits_char__* cast638 = (struct std__basic_ios_char__std__char_traits_char__*)cast637;
      int t639 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast638, t639);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t640 = __out621;
      char* t641 = __s622;
      char* t642 = __s622;
      unsigned long r643 = std__char_traits_char___length(t642);
      long cast644 = (long)r643;
      struct std__basic_ostream_char__std__char_traits_char__* r645 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t640, t641, cast644);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t646 = __out621;
  __retval623 = t646;
  struct std__basic_ostream_char__std__char_traits_char__* t647 = __retval623;
  return t647;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v648) {
bb649:
  struct std__vector_int__std__allocator_int__* this650;
  unsigned long __retval651;
  long __dif652;
  this650 = v648;
  struct std__vector_int__std__allocator_int__* t653 = this650;
  struct std___Vector_base_int__std__allocator_int__* base654 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t653 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base655 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base654->_M_impl) + 0);
  int* t656 = base655->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base657 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t653 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base658 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base657->_M_impl) + 0);
  int* t659 = base658->_M_start;
  long diff660 = t656 - t659;
  __dif652 = diff660;
    long t661 = __dif652;
    long c662 = 0;
    _Bool c663 = ((t661 < c662)) ? 1 : 0;
    if (c663) {
      __builtin_unreachable();
    }
  long t664 = __dif652;
  unsigned long cast665 = (unsigned long)t664;
  __retval651 = cast665;
  unsigned long t666 = __retval651;
  return t666;
}

// function: _ZNKSt6vectorIiSaIiEE8capacityEv
unsigned long std__vector_int__std__allocator_int_____capacity___const(struct std__vector_int__std__allocator_int__* v667) {
bb668:
  struct std__vector_int__std__allocator_int__* this669;
  unsigned long __retval670;
  long __dif671;
  this669 = v667;
  struct std__vector_int__std__allocator_int__* t672 = this669;
  struct std___Vector_base_int__std__allocator_int__* base673 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t672 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base674 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base673->_M_impl) + 0);
  int* t675 = base674->_M_end_of_storage;
  struct std___Vector_base_int__std__allocator_int__* base676 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t672 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base677 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base676->_M_impl) + 0);
  int* t678 = base677->_M_start;
  long diff679 = t675 - t678;
  __dif671 = diff679;
    long t680 = __dif671;
    long c681 = 0;
    _Bool c682 = ((t680 < c681)) ? 1 : 0;
    if (c682) {
      __builtin_unreachable();
    }
  long t683 = __dif671;
  unsigned long cast684 = (unsigned long)t683;
  __retval670 = cast684;
  unsigned long t685 = __retval670;
  return t685;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v686, unsigned long* v687) {
bb688:
  unsigned long* __a689;
  unsigned long* __b690;
  unsigned long* __retval691;
  __a689 = v686;
  __b690 = v687;
    unsigned long* t692 = __b690;
    unsigned long t693 = *t692;
    unsigned long* t694 = __a689;
    unsigned long t695 = *t694;
    _Bool c696 = ((t693 < t695)) ? 1 : 0;
    if (c696) {
      unsigned long* t697 = __b690;
      __retval691 = t697;
      unsigned long* t698 = __retval691;
      return t698;
    }
  unsigned long* t699 = __a689;
  __retval691 = t699;
  unsigned long* t700 = __retval691;
  return t700;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v701) {
bb702:
  struct std__allocator_int_* __a703;
  unsigned long __retval704;
  unsigned long __diffmax705;
  unsigned long __allocmax706;
  __a703 = v701;
  unsigned long c707 = 2305843009213693951;
  __diffmax705 = c707;
  unsigned long c708 = 4611686018427387903;
  __allocmax706 = c708;
  unsigned long* r709 = unsigned_long_const__std__min_unsigned_long_(&__diffmax705, &__allocmax706);
  unsigned long t710 = *r709;
  __retval704 = t710;
  unsigned long t711 = __retval704;
  return t711;
}

// function: _ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Vector_base_int__std__allocator_int__* v712) {
bb713:
  struct std___Vector_base_int__std__allocator_int__* this714;
  struct std__allocator_int_* __retval715;
  this714 = v712;
  struct std___Vector_base_int__std__allocator_int__* t716 = this714;
  struct std__allocator_int_* base717 = (struct std__allocator_int_*)((char *)&(t716->_M_impl) + 0);
  __retval715 = base717;
  struct std__allocator_int_* t718 = __retval715;
  return t718;
}

// function: _ZNKSt6vectorIiSaIiEE8max_sizeEv
unsigned long std__vector_int__std__allocator_int_____max_size___const(struct std__vector_int__std__allocator_int__* v719) {
bb720:
  struct std__vector_int__std__allocator_int__* this721;
  unsigned long __retval722;
  this721 = v719;
  struct std__vector_int__std__allocator_int__* t723 = this721;
  struct std___Vector_base_int__std__allocator_int__* base724 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t723 + 0);
  struct std__allocator_int_* r725 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(base724);
  unsigned long r726 = std__vector_int__std__allocator_int______S_max_size(r725);
  __retval722 = r726;
  unsigned long t727 = __retval722;
  return t727;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v728) {
bb729:
  struct std__vector_int__std__allocator_int__* this730;
  this730 = v728;
  struct std__vector_int__std__allocator_int__* t731 = this730;
    struct std___Vector_base_int__std__allocator_int__* base732 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t731 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base733 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base732->_M_impl) + 0);
    int* t734 = base733->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base735 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t731 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base736 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base735->_M_impl) + 0);
    int* t737 = base736->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base738 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t731 + 0);
    struct std__allocator_int_* r739 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base738);
    void_std___Destroy_int___int_(t734, t737, r739);
  {
    struct std___Vector_base_int__std__allocator_int__* base740 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t731 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base740);
  }
  return;
}

// function: main
int main() {
bb741:
  int __retval742;
  struct std__vector_int__std__allocator_int__ myvector743;
  int c744 = 0;
  __retval742 = c744;
  std__vector_int__std__allocator_int_____vector(&myvector743);
      int i745;
      int c746 = 0;
      i745 = c746;
      while (1) {
        int t748 = i745;
        int c749 = 100;
        _Bool c750 = ((t748 < c749)) ? 1 : 0;
        if (!c750) break;
        std__vector_int__std__allocator_int_____push_back(&myvector743, &i745);
      for_step747: ;
        int t751 = i745;
        int u752 = t751 + 1;
        i745 = u752;
      }
    char* cast753 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* r754 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast753);
    unsigned long r755 = std__vector_int__std__allocator_int_____size___const(&myvector743);
    int cast756 = (int)r755;
    struct std__basic_ostream_char__std__char_traits_char__* r757 = std__ostream__operator__(r754, cast756);
    char* cast758 = (char*)&(_str_1);
    struct std__basic_ostream_char__std__char_traits_char__* r759 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r757, cast758);
    char* cast760 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* r761 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast760);
    unsigned long r762 = std__vector_int__std__allocator_int_____capacity___const(&myvector743);
    int cast763 = (int)r762;
    struct std__basic_ostream_char__std__char_traits_char__* r764 = std__ostream__operator__(r761, cast763);
    char* cast765 = (char*)&(_str_1);
    struct std__basic_ostream_char__std__char_traits_char__* r766 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r764, cast765);
    char* cast767 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* r768 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast767);
    unsigned long r769 = std__vector_int__std__allocator_int_____max_size___const(&myvector743);
    int cast770 = (int)r769;
    struct std__basic_ostream_char__std__char_traits_char__* r771 = std__ostream__operator__(r768, cast770);
    char* cast772 = (char*)&(_str_1);
    struct std__basic_ostream_char__std__char_traits_char__* r773 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r771, cast772);
    int c774 = 0;
    __retval742 = c774;
    int t775 = __retval742;
    int ret_val776 = t775;
    {
      std__vector_int__std__allocator_int______vector(&myvector743);
    }
    return ret_val776;
  int t777 = __retval742;
  return t777;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE
void _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v778) {
bb779:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this780;
  this780 = v778;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t781 = this780;
  struct std__allocator_int_* base782 = (struct std__allocator_int_*)((char *)t781 + 0);
  std__allocator_int___allocator(base782);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base783 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t781 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base783);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v784) {
bb785:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this786;
  this786 = v784;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t787 = this786;
  {
    struct std__allocator_int_* base788 = (struct std__allocator_int_*)((char *)t787 + 0);
    std__allocator_int____allocator(base788);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2Ev
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v789) {
bb790:
  struct std___Vector_base_int__std__allocator_int__* this791;
  this791 = v789;
  struct std___Vector_base_int__std__allocator_int__* t792 = this791;
  _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(&t792->_M_impl);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb793:
  _Bool __retval794;
    _Bool c795 = 0;
    __retval794 = c795;
    _Bool t796 = __retval794;
    return t796;
  abort();
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v797, int* v798, unsigned long v799) {
bb800:
  struct std____new_allocator_int_* this801;
  int* __p802;
  unsigned long __n803;
  this801 = v797;
  __p802 = v798;
  __n803 = v799;
  struct std____new_allocator_int_* t804 = this801;
    unsigned long c805 = 4;
    unsigned long c806 = 16;
    _Bool c807 = ((c805 > c806)) ? 1 : 0;
    if (c807) {
      int* t808 = __p802;
      void* cast809 = (void*)t808;
      unsigned long t810 = __n803;
      unsigned long c811 = 4;
      unsigned long b812 = t810 * c811;
      unsigned long c813 = 4;
      operator_delete_3(cast809, b812, c813);
      return;
    }
  int* t814 = __p802;
  void* cast815 = (void*)t814;
  unsigned long t816 = __n803;
  unsigned long c817 = 4;
  unsigned long b818 = t816 * c817;
  operator_delete_2(cast815, b818);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v819, int* v820, unsigned long v821) {
bb822:
  struct std__allocator_int_* this823;
  int* __p824;
  unsigned long __n825;
  this823 = v819;
  __p824 = v820;
  __n825 = v821;
  struct std__allocator_int_* t826 = this823;
    _Bool r827 = std____is_constant_evaluated();
    if (r827) {
      int* t828 = __p824;
      void* cast829 = (void*)t828;
      operator_delete(cast829);
      return;
    }
  struct std____new_allocator_int_* base830 = (struct std____new_allocator_int_*)((char *)t826 + 0);
  int* t831 = __p824;
  unsigned long t832 = __n825;
  std____new_allocator_int___deallocate(base830, t831, t832);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v833, int* v834, unsigned long v835) {
bb836:
  struct std__allocator_int_* __a837;
  int* __p838;
  unsigned long __n839;
  __a837 = v833;
  __p838 = v834;
  __n839 = v835;
  struct std__allocator_int_* t840 = __a837;
  int* t841 = __p838;
  unsigned long t842 = __n839;
  std__allocator_int___deallocate(t840, t841, t842);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v843, int* v844, unsigned long v845) {
bb846:
  struct std___Vector_base_int__std__allocator_int__* this847;
  int* __p848;
  unsigned long __n849;
  this847 = v843;
  __p848 = v844;
  __n849 = v845;
  struct std___Vector_base_int__std__allocator_int__* t850 = this847;
    int* t851 = __p848;
    _Bool cast852 = (_Bool)t851;
    if (cast852) {
      struct std__allocator_int_* base853 = (struct std__allocator_int_*)((char *)&(t850->_M_impl) + 0);
      int* t854 = __p848;
      unsigned long t855 = __n849;
      std__allocator_traits_std__allocator_int_____deallocate(base853, t854, t855);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v856) {
bb857:
  struct std___Vector_base_int__std__allocator_int__* this858;
  this858 = v856;
  struct std___Vector_base_int__std__allocator_int__* t859 = this858;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base860 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t859->_M_impl) + 0);
    int* t861 = base860->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base862 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t859->_M_impl) + 0);
    int* t863 = base862->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base864 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t859->_M_impl) + 0);
    int* t865 = base864->_M_start;
    long diff866 = t863 - t865;
    unsigned long cast867 = (unsigned long)diff866;
    std___Vector_base_int__std__allocator_int______M_deallocate(t859, t861, cast867);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t859->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v868) {
bb869:
  struct std____new_allocator_int_* this870;
  this870 = v868;
  struct std____new_allocator_int_* t871 = this870;
  return;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator(struct std__allocator_int_* v872) {
bb873:
  struct std__allocator_int_* this874;
  this874 = v872;
  struct std__allocator_int_* t875 = this874;
  struct std____new_allocator_int_* base876 = (struct std____new_allocator_int_*)((char *)t875 + 0);
  std____new_allocator_int_____new_allocator(base876);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v877) {
bb878:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this879;
  this879 = v877;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t880 = this879;
  int* c881 = ((void*)0);
  t880->_M_start = c881;
  int* c882 = ((void*)0);
  t880->_M_finish = c882;
  int* c883 = ((void*)0);
  t880->_M_end_of_storage = c883;
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v884) {
bb885:
  struct std__allocator_int_* this886;
  this886 = v884;
  struct std__allocator_int_* t887 = this886;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v888, int* v889) {
bb890:
  int* __first891;
  int* __last892;
  __first891 = v888;
  __last892 = v889;
      _Bool r893 = std____is_constant_evaluated();
      if (r893) {
          while (1) {
            int* t895 = __first891;
            int* t896 = __last892;
            _Bool c897 = ((t895 != t896)) ? 1 : 0;
            if (!c897) break;
            int* t898 = __first891;
            void_std__destroy_at_int_(t898);
          for_step894: ;
            int* t899 = __first891;
            int c900 = 1;
            int* ptr901 = &(t899)[c900];
            __first891 = ptr901;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v902, int* v903, struct std__allocator_int_* v904) {
bb905:
  int* __first906;
  int* __last907;
  struct std__allocator_int_* unnamed908;
  __first906 = v902;
  __last907 = v903;
  unnamed908 = v904;
  int* t909 = __first906;
  int* t910 = __last907;
  void_std___Destroy_int__(t909, t910);
  return;
}

