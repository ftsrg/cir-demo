extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ { int* _M_current; };
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
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[22] = "The first element is ";
char _str_1[23] = "The second element is ";
char _str_2[26] = "vector::_M_realloc_append";
char _str_3[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv[35] = "reference std::vector<int>::back()";
char _str_4[15] = "!this->empty()";
char _str_5[74] = "vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[50] = "reference std::vector<int>::operator[](size_type)";
char _str_6[19] = "__n < this->size()";
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0);
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std__allocator_int_* p0, int* p1, int* p2);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* p0);
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Vector_base_int__std__allocator_int__* p0);
unsigned long std__vector_int__std__allocator_int_____max_size___const(struct std__vector_int__std__allocator_int__* p0);
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* p0);
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
void void_std__vector_int__std__allocator_int______M_realloc_append_int_(struct std__vector_int__std__allocator_int__* p0, int* p1);
int** __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0);
_Bool _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p1);
void __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin___const(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end___const(struct std__vector_int__std__allocator_int__* p0);
_Bool std__vector_int__std__allocator_int_____empty___const(struct std__vector_int__std__allocator_int__* p0);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, long p1);
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
int* std__vector_int__std__allocator_int_____back(struct std__vector_int__std__allocator_int__* p0);
int* int__std__vector_int__std__allocator_int_____emplace_back_int_(struct std__vector_int__std__allocator_int__* p0, int* p1);
void std__vector_int__std__allocator_int_____push_back(struct std__vector_int__std__allocator_int__* p0, int* p1);
extern void std____throw_out_of_range_fmt(char* p0, ...);
void std__vector_int__std__allocator_int______M_range_check_unsigned_long__const(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
int* std__vector_int__std__allocator_int_____at(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
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

// function: _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v5, int* v6) {
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

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std__allocator_int_* v19, int* v20, int* v21) {
bb22:
  struct std__allocator_int_* __a23;
  int* __p24;
  int* __args25;
  __a23 = v19;
  __p24 = v20;
  __args25 = v21;
  int* t26 = __p24;
  int* t27 = __args25;
  int* r28 = _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t26, t27);
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v29, unsigned long* v30) {
bb31:
  unsigned long* __a32;
  unsigned long* __b33;
  unsigned long* __retval34;
  __a32 = v29;
  __b33 = v30;
    unsigned long* t35 = __b33;
    unsigned long t36 = *t35;
    unsigned long* t37 = __a32;
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

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v44) {
bb45:
  struct std__allocator_int_* __a46;
  unsigned long __retval47;
  unsigned long __diffmax48;
  unsigned long __allocmax49;
  __a46 = v44;
  unsigned long c50 = 2305843009213693951;
  __diffmax48 = c50;
  unsigned long c51 = 4611686018427387903;
  __allocmax49 = c51;
  unsigned long* r52 = unsigned_long_const__std__min_unsigned_long_(&__diffmax48, &__allocmax49);
  unsigned long t53 = *r52;
  __retval47 = t53;
  unsigned long t54 = __retval47;
  return t54;
}

// function: _ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Vector_base_int__std__allocator_int__* v55) {
bb56:
  struct std___Vector_base_int__std__allocator_int__* this57;
  struct std__allocator_int_* __retval58;
  this57 = v55;
  struct std___Vector_base_int__std__allocator_int__* t59 = this57;
  struct std__allocator_int_* base60 = (struct std__allocator_int_*)((char *)&(t59->_M_impl) + 0);
  __retval58 = base60;
  struct std__allocator_int_* t61 = __retval58;
  return t61;
}

// function: _ZNKSt6vectorIiSaIiEE8max_sizeEv
unsigned long std__vector_int__std__allocator_int_____max_size___const(struct std__vector_int__std__allocator_int__* v62) {
bb63:
  struct std__vector_int__std__allocator_int__* this64;
  unsigned long __retval65;
  this64 = v62;
  struct std__vector_int__std__allocator_int__* t66 = this64;
  struct std___Vector_base_int__std__allocator_int__* base67 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t66 + 0);
  struct std__allocator_int_* r68 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(base67);
  unsigned long r69 = std__vector_int__std__allocator_int______S_max_size(r68);
  __retval65 = r69;
  unsigned long t70 = __retval65;
  return t70;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v71) {
bb72:
  struct std__vector_int__std__allocator_int__* this73;
  unsigned long __retval74;
  long __dif75;
  this73 = v71;
  struct std__vector_int__std__allocator_int__* t76 = this73;
  struct std___Vector_base_int__std__allocator_int__* base77 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t76 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base78 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base77->_M_impl) + 0);
  int* t79 = base78->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base80 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t76 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base81 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base80->_M_impl) + 0);
  int* t82 = base81->_M_start;
  long diff83 = t79 - t82;
  __dif75 = diff83;
    long t84 = __dif75;
    long c85 = 0;
    _Bool c86 = ((t84 < c85)) ? 1 : 0;
    if (c86) {
      __builtin_unreachable();
    }
  long t87 = __dif75;
  unsigned long cast88 = (unsigned long)t87;
  __retval74 = cast88;
  unsigned long t89 = __retval74;
  return t89;
}

// function: _ZSt3maxImERKT_S2_S2_
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* v90, unsigned long* v91) {
bb92:
  unsigned long* __a93;
  unsigned long* __b94;
  unsigned long* __retval95;
  __a93 = v90;
  __b94 = v91;
    unsigned long* t96 = __a93;
    unsigned long t97 = *t96;
    unsigned long* t98 = __b94;
    unsigned long t99 = *t98;
    _Bool c100 = ((t97 < t99)) ? 1 : 0;
    if (c100) {
      unsigned long* t101 = __b94;
      __retval95 = t101;
      unsigned long* t102 = __retval95;
      return t102;
    }
  unsigned long* t103 = __a93;
  __retval95 = t103;
  unsigned long* t104 = __retval95;
  return t104;
}

// function: _ZNKSt6vectorIiSaIiEE12_M_check_lenEmPKc
unsigned long std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(struct std__vector_int__std__allocator_int__* v105, unsigned long v106, char* v107) {
bb108:
  struct std__vector_int__std__allocator_int__* this109;
  unsigned long __n110;
  char* __s111;
  unsigned long __retval112;
  unsigned long __len113;
  unsigned long ref_tmp0114;
  this109 = v105;
  __n110 = v106;
  __s111 = v107;
  struct std__vector_int__std__allocator_int__* t115 = this109;
    unsigned long r116 = std__vector_int__std__allocator_int_____max_size___const(t115);
    unsigned long r117 = std__vector_int__std__allocator_int_____size___const(t115);
    unsigned long b118 = r116 - r117;
    unsigned long t119 = __n110;
    _Bool c120 = ((b118 < t119)) ? 1 : 0;
    if (c120) {
      char* t121 = __s111;
      std____throw_length_error(t121);
    }
  unsigned long r122 = std__vector_int__std__allocator_int_____size___const(t115);
  unsigned long r123 = std__vector_int__std__allocator_int_____size___const(t115);
  ref_tmp0114 = r123;
  unsigned long* r124 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp0114, &__n110);
  unsigned long t125 = *r124;
  unsigned long b126 = r122 + t125;
  __len113 = b126;
  unsigned long t127 = __len113;
  unsigned long r128 = std__vector_int__std__allocator_int_____size___const(t115);
  _Bool c129 = ((t127 < r128)) ? 1 : 0;
  _Bool ternary130;
  if (c129) {
    _Bool c131 = 1;
    ternary130 = (_Bool)c131;
  } else {
    unsigned long t132 = __len113;
    unsigned long r133 = std__vector_int__std__allocator_int_____max_size___const(t115);
    _Bool c134 = ((t132 > r133)) ? 1 : 0;
    ternary130 = (_Bool)c134;
  }
  unsigned long ternary135;
  if (ternary130) {
    unsigned long r136 = std__vector_int__std__allocator_int_____max_size___const(t115);
    ternary135 = (unsigned long)r136;
  } else {
    unsigned long t137 = __len113;
    ternary135 = (unsigned long)t137;
  }
  __retval112 = ternary135;
  unsigned long t138 = __retval112;
  return t138;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v139) {
bb140:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this141;
  int** __retval142;
  this141 = v139;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t143 = this141;
  __retval142 = &t143->_M_current;
  int** t144 = __retval142;
  return t144;
}

// function: _ZN9__gnu_cxxmiIPiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v145, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v146) {
bb147:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs148;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs149;
  long __retval150;
  __lhs148 = v145;
  __rhs149 = v146;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t151 = __lhs148;
  int** r152 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t151);
  int* t153 = *r152;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t154 = __rhs149;
  int** r155 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t154);
  int* t156 = *r155;
  long diff157 = t153 - t156;
  __retval150 = diff157;
  long t158 = __retval150;
  return t158;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v159, int** v160) {
bb161:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this162;
  int** __i163;
  this162 = v159;
  __i163 = v160;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t164 = this162;
  int** t165 = __i163;
  int* t166 = *t165;
  t164->_M_current = t166;
  return;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v167) {
bb168:
  struct std__vector_int__std__allocator_int__* this169;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval170;
  this169 = v167;
  struct std__vector_int__std__allocator_int__* t171 = this169;
  struct std___Vector_base_int__std__allocator_int__* base172 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t171 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base173 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base172->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval170, &base173->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t174 = __retval170;
  return t174;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v175) {
bb176:
  struct std__vector_int__std__allocator_int__* this177;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval178;
  this177 = v175;
  struct std__vector_int__std__allocator_int__* t179 = this177;
  struct std___Vector_base_int__std__allocator_int__* base180 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t179 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base181 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base180->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval178, &base181->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t182 = __retval178;
  return t182;
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v183) {
bb184:
  struct std____new_allocator_int_* this185;
  unsigned long __retval186;
  this185 = v183;
  struct std____new_allocator_int_* t187 = this185;
  unsigned long c188 = 9223372036854775807;
  unsigned long c189 = 4;
  unsigned long b190 = c188 / c189;
  __retval186 = b190;
  unsigned long t191 = __retval186;
  return t191;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v192, unsigned long v193, void* v194) {
bb195:
  struct std____new_allocator_int_* this196;
  unsigned long __n197;
  void* unnamed198;
  int* __retval199;
  this196 = v192;
  __n197 = v193;
  unnamed198 = v194;
  struct std____new_allocator_int_* t200 = this196;
    unsigned long t201 = __n197;
    unsigned long r202 = std____new_allocator_int____M_max_size___const(t200);
    _Bool c203 = ((t201 > r202)) ? 1 : 0;
    if (c203) {
        unsigned long t204 = __n197;
        unsigned long c205 = -1;
        unsigned long c206 = 4;
        unsigned long b207 = c205 / c206;
        _Bool c208 = ((t204 > b207)) ? 1 : 0;
        if (c208) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c209 = 4;
    unsigned long c210 = 16;
    _Bool c211 = ((c209 > c210)) ? 1 : 0;
    if (c211) {
      unsigned long __al212;
      unsigned long c213 = 4;
      __al212 = c213;
      unsigned long t214 = __n197;
      unsigned long c215 = 4;
      unsigned long b216 = t214 * c215;
      unsigned long t217 = __al212;
      void* r218 = operator_new_2(b216, t217);
      int* cast219 = (int*)r218;
      __retval199 = cast219;
      int* t220 = __retval199;
      return t220;
    }
  unsigned long t221 = __n197;
  unsigned long c222 = 4;
  unsigned long b223 = t221 * c222;
  void* r224 = operator_new(b223);
  int* cast225 = (int*)r224;
  __retval199 = cast225;
  int* t226 = __retval199;
  return t226;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v227, unsigned long v228) {
bb229:
  struct std__allocator_int_* this230;
  unsigned long __n231;
  int* __retval232;
  this230 = v227;
  __n231 = v228;
  struct std__allocator_int_* t233 = this230;
    _Bool r234 = std____is_constant_evaluated();
    if (r234) {
        unsigned long t235 = __n231;
        unsigned long c236 = 4;
        unsigned long ovr237;
        _Bool ovf238 = __builtin_mul_overflow(t235, c236, &ovr237);
        __n231 = ovr237;
        if (ovf238) {
          std____throw_bad_array_new_length();
        }
      unsigned long t239 = __n231;
      void* r240 = operator_new(t239);
      int* cast241 = (int*)r240;
      __retval232 = cast241;
      int* t242 = __retval232;
      return t242;
    }
  struct std____new_allocator_int_* base243 = (struct std____new_allocator_int_*)((char *)t233 + 0);
  unsigned long t244 = __n231;
  void* c245 = ((void*)0);
  int* r246 = std____new_allocator_int___allocate(base243, t244, c245);
  __retval232 = r246;
  int* t247 = __retval232;
  return t247;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v248, unsigned long v249) {
bb250:
  struct std__allocator_int_* __a251;
  unsigned long __n252;
  int* __retval253;
  __a251 = v248;
  __n252 = v249;
  struct std__allocator_int_* t254 = __a251;
  unsigned long t255 = __n252;
  int* r256 = std__allocator_int___allocate(t254, t255);
  __retval253 = r256;
  int* t257 = __retval253;
  return t257;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v258, unsigned long v259) {
bb260:
  struct std___Vector_base_int__std__allocator_int__* this261;
  unsigned long __n262;
  int* __retval263;
  this261 = v258;
  __n262 = v259;
  struct std___Vector_base_int__std__allocator_int__* t264 = this261;
  unsigned long t265 = __n262;
  unsigned long c266 = 0;
  _Bool c267 = ((t265 != c266)) ? 1 : 0;
  int* ternary268;
  if (c267) {
    struct std__allocator_int_* base269 = (struct std__allocator_int_*)((char *)&(t264->_M_impl) + 0);
    unsigned long t270 = __n262;
    int* r271 = std__allocator_traits_std__allocator_int_____allocate(base269, t270);
    ternary268 = (int*)r271;
  } else {
    int* c272 = ((void*)0);
    ternary268 = (int*)c272;
  }
  __retval263 = ternary268;
  int* t273 = __retval263;
  return t273;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocC2EPimRSt12_Vector_baseIiS0_E
void std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v274, int* v275, unsigned long v276, struct std___Vector_base_int__std__allocator_int__* v277) {
bb278:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this279;
  int* __s280;
  unsigned long __l281;
  struct std___Vector_base_int__std__allocator_int__* __vect282;
  this279 = v274;
  __s280 = v275;
  __l281 = v276;
  __vect282 = v277;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t283 = this279;
  int* t284 = __s280;
  t283->_M_storage = t284;
  unsigned long t285 = __l281;
  t283->_M_len = t285;
  struct std___Vector_base_int__std__allocator_int__* t286 = __vect282;
  t283->_M_vect = t286;
  return;
}

// function: _ZSt10to_addressIiEPT_S1_
int* int__std__to_address_int_(int* v287) {
bb288:
  int* __ptr289;
  int* __retval290;
  __ptr289 = v287;
  int* t291 = __ptr289;
  __retval290 = t291;
  int* t292 = __retval290;
  return t292;
}

// function: _ZSt12__to_addressIPiEDaRKT_
int* auto_std____to_address_int__(int** v293) {
bb294:
  int** __ptr295;
  int* __retval296;
  __ptr295 = v293;
  int** t297 = __ptr295;
  int* t298 = *t297;
  int* r299 = int__std__to_address_int_(t298);
  __retval296 = r299;
  int* t300 = __retval296;
  return t300;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb301:
  _Bool __retval302;
    _Bool c303 = 0;
    __retval302 = c303;
    _Bool t304 = __retval302;
    return t304;
  abort();
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEC2ERKS1_
void __gnu_cxx____normal_iterator_int___void_____normal_iterator(struct __gnu_cxx____normal_iterator_int____void_* v305, int** v306) {
bb307:
  struct __gnu_cxx____normal_iterator_int____void_* this308;
  int** __i309;
  this308 = v305;
  __i309 = v306;
  struct __gnu_cxx____normal_iterator_int____void_* t310 = this308;
  int** t311 = __i309;
  int* t312 = *t311;
  t310->_M_current = t312;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v313) {
bb314:
  int* __location315;
  __location315 = v313;
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE7destroyIiEEvRS0_PT_
void void_std__allocator_traits_std__allocator_int_____destroy_int_(struct std__allocator_int_* v316, int* v317) {
bb318:
  struct std__allocator_int_* __a319;
  int* __p320;
  __a319 = v316;
  __p320 = v317;
  int* t321 = __p320;
  void_std__destroy_at_int_(t321);
  return;
}

// function: _ZSt19__relocate_object_aIiiSaIiEEvPT_PT0_RT1_
void void_std____relocate_object_a_int__int__std__allocator_int___(int* v322, int* v323, struct std__allocator_int_* v324) {
bb325:
  int* __dest326;
  int* __orig327;
  struct std__allocator_int_* __alloc328;
  __dest326 = v322;
  __orig327 = v323;
  __alloc328 = v324;
  struct std__allocator_int_* t329 = __alloc328;
  int* t330 = __dest326;
  int* t331 = __orig327;
  void_std__allocator_traits_std__allocator_int_____construct_int__int_(t329, t330, t331);
  struct std__allocator_int_* t332 = __alloc328;
  int* t333 = __orig327;
  void_std__allocator_traits_std__allocator_int_____destroy_int_(t332, t333);
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivEdeEv
int* __gnu_cxx____normal_iterator_int___void___operator____const(struct __gnu_cxx____normal_iterator_int____void_* v334) {
bb335:
  struct __gnu_cxx____normal_iterator_int____void_* this336;
  int* __retval337;
  this336 = v334;
  struct __gnu_cxx____normal_iterator_int____void_* t338 = this336;
  int* t339 = t338->_M_current;
  __retval337 = t339;
  int* t340 = __retval337;
  return t340;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEppEv
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator__(struct __gnu_cxx____normal_iterator_int____void_* v341) {
bb342:
  struct __gnu_cxx____normal_iterator_int____void_* this343;
  struct __gnu_cxx____normal_iterator_int____void_* __retval344;
  this343 = v341;
  struct __gnu_cxx____normal_iterator_int____void_* t345 = this343;
  int* t346 = t345->_M_current;
  int c347 = 1;
  int* ptr348 = &(t346)[c347];
  t345->_M_current = ptr348;
  __retval344 = t345;
  struct __gnu_cxx____normal_iterator_int____void_* t349 = __retval344;
  return t349;
}

// function: _ZSt14__relocate_a_1IPiN9__gnu_cxx17__normal_iteratorIS0_vEESaIiEET0_T_S6_S5_RT1_
struct __gnu_cxx____normal_iterator_int____void_ __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(int* v350, int* v351, struct __gnu_cxx____normal_iterator_int____void_ v352, struct std__allocator_int_* v353) {
bb354:
  int* __first355;
  int* __last356;
  struct __gnu_cxx____normal_iterator_int____void_ __result357;
  struct std__allocator_int_* __alloc358;
  struct __gnu_cxx____normal_iterator_int____void_ __retval359;
  __first355 = v350;
  __last356 = v351;
  __result357 = v352;
  __alloc358 = v353;
  __retval359 = __result357; // copy
    while (1) {
      int* t361 = __first355;
      int* t362 = __last356;
      _Bool c363 = ((t361 != t362)) ? 1 : 0;
      if (!c363) break;
      int* r364 = __gnu_cxx____normal_iterator_int___void___operator____const(&__retval359);
      int* t365 = __first355;
      struct std__allocator_int_* t366 = __alloc358;
      void_std____relocate_object_a_int__int__std__allocator_int___(r364, t365, t366);
    for_step360: ;
      int* t367 = __first355;
      int c368 = 1;
      int* ptr369 = &(t367)[c368];
      __first355 = ptr369;
      struct __gnu_cxx____normal_iterator_int____void_* r370 = __gnu_cxx____normal_iterator_int___void___operator__(&__retval359);
    }
  struct __gnu_cxx____normal_iterator_int____void_ t371 = __retval359;
  return t371;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEaSEOS2_
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator_(struct __gnu_cxx____normal_iterator_int____void_* v372, struct __gnu_cxx____normal_iterator_int____void_* v373) {
bb374:
  struct __gnu_cxx____normal_iterator_int____void_* this375;
  struct __gnu_cxx____normal_iterator_int____void_* unnamed376;
  struct __gnu_cxx____normal_iterator_int____void_* __retval377;
  this375 = v372;
  unnamed376 = v373;
  struct __gnu_cxx____normal_iterator_int____void_* t378 = this375;
  struct __gnu_cxx____normal_iterator_int____void_* t379 = unnamed376;
  int* t380 = t379->_M_current;
  t378->_M_current = t380;
  __retval377 = t378;
  struct __gnu_cxx____normal_iterator_int____void_* t381 = __retval377;
  return t381;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivE4baseEv
int** __gnu_cxx____normal_iterator_int___void___base___const(struct __gnu_cxx____normal_iterator_int____void_* v382) {
bb383:
  struct __gnu_cxx____normal_iterator_int____void_* this384;
  int** __retval385;
  this384 = v382;
  struct __gnu_cxx____normal_iterator_int____void_* t386 = this384;
  __retval385 = &t386->_M_current;
  int** t387 = __retval385;
  return t387;
}

// function: _ZSt14__relocate_a_1IiiENSt9enable_ifIXsr3std24__is_bitwise_relocatableIT_EE5valueEPS1_E4typeES2_S2_S2_RSaIT0_E
int* std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(int* v388, int* v389, int* v390, struct std__allocator_int_* v391) {
bb392:
  int* __first393;
  int* __last394;
  int* __result395;
  struct std__allocator_int_* __alloc396;
  int* __retval397;
  long __count398;
  __first393 = v388;
  __last394 = v389;
  __result395 = v390;
  __alloc396 = v391;
  int* t399 = __last394;
  int* t400 = __first393;
  long diff401 = t399 - t400;
  __count398 = diff401;
    long t402 = __count398;
    long c403 = 0;
    _Bool c404 = ((t402 > c403)) ? 1 : 0;
    if (c404) {
        _Bool r405 = std__is_constant_evaluated();
        if (r405) {
          struct __gnu_cxx____normal_iterator_int____void_ __out406;
          struct __gnu_cxx____normal_iterator_int____void_ ref_tmp0407;
          struct __gnu_cxx____normal_iterator_int____void_ agg_tmp0408;
          __gnu_cxx____normal_iterator_int___void_____normal_iterator(&__out406, &__result395);
          int* t409 = __first393;
          int* t410 = __last394;
          agg_tmp0408 = __out406; // copy
          struct std__allocator_int_* t411 = __alloc396;
          struct __gnu_cxx____normal_iterator_int____void_ t412 = agg_tmp0408;
          struct __gnu_cxx____normal_iterator_int____void_ r413 = __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(t409, t410, t412, t411);
          ref_tmp0407 = r413;
          struct __gnu_cxx____normal_iterator_int____void_* r414 = __gnu_cxx____normal_iterator_int___void___operator_(&__out406, &ref_tmp0407);
          int** r415 = __gnu_cxx____normal_iterator_int___void___base___const(&__out406);
          int* t416 = *r415;
          __retval397 = t416;
          int* t417 = __retval397;
          return t417;
        }
      int* t418 = __result395;
      void* cast419 = (void*)t418;
      int* t420 = __first393;
      void* cast421 = (void*)t420;
      long t422 = __count398;
      unsigned long cast423 = (unsigned long)t422;
      unsigned long c424 = 4;
      unsigned long b425 = cast423 * c424;
      void* r426 = memcpy(cast419, cast421, b425);
    }
  int* t427 = __result395;
  long t428 = __count398;
  int* ptr429 = &(t427)[t428];
  __retval397 = ptr429;
  int* t430 = __retval397;
  return t430;
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v431) {
bb432:
  int* __it433;
  int* __retval434;
  __it433 = v431;
  int* t435 = __it433;
  __retval434 = t435;
  int* t436 = __retval434;
  return t436;
}

// function: _ZSt12__relocate_aIPiS0_SaIiEET0_T_S3_S2_RT1_
int* int__std____relocate_a_int___int___std__allocator_int___(int* v437, int* v438, int* v439, struct std__allocator_int_* v440) {
bb441:
  int* __first442;
  int* __last443;
  int* __result444;
  struct std__allocator_int_* __alloc445;
  int* __retval446;
  __first442 = v437;
  __last443 = v438;
  __result444 = v439;
  __alloc445 = v440;
  int* t447 = __first442;
  int* r448 = int__std____niter_base_int__(t447);
  int* t449 = __last443;
  int* r450 = int__std____niter_base_int__(t449);
  int* t451 = __result444;
  int* r452 = int__std____niter_base_int__(t451);
  struct std__allocator_int_* t453 = __alloc445;
  int* r454 = std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(r448, r450, r452, t453);
  __retval446 = r454;
  int* t455 = __retval446;
  return t455;
}

// function: _ZNSt6vectorIiSaIiEE11_S_relocateEPiS2_S2_RS0_
int* std__vector_int__std__allocator_int______S_relocate(int* v456, int* v457, int* v458, struct std__allocator_int_* v459) {
bb460:
  int* __first461;
  int* __last462;
  int* __result463;
  struct std__allocator_int_* __alloc464;
  int* __retval465;
  __first461 = v456;
  __last462 = v457;
  __result463 = v458;
  __alloc464 = v459;
  int* t466 = __first461;
  int* t467 = __last462;
  int* t468 = __result463;
  struct std__allocator_int_* t469 = __alloc464;
  int* r470 = int__std____relocate_a_int___int___std__allocator_int___(t466, t467, t468, t469);
  __retval465 = r470;
  int* t471 = __retval465;
  return t471;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v472) {
bb473:
  struct std___Vector_base_int__std__allocator_int__* this474;
  struct std__allocator_int_* __retval475;
  this474 = v472;
  struct std___Vector_base_int__std__allocator_int__* t476 = this474;
  struct std__allocator_int_* base477 = (struct std__allocator_int_*)((char *)&(t476->_M_impl) + 0);
  __retval475 = base477;
  struct std__allocator_int_* t478 = __retval475;
  return t478;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocD2Ev
void std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v479) {
bb480:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this481;
  this481 = v479;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t482 = this481;
    int* t483 = t482->_M_storage;
    _Bool cast484 = (_Bool)t483;
    if (cast484) {
      struct std___Vector_base_int__std__allocator_int__* t485 = t482->_M_vect;
      int* t486 = t482->_M_storage;
      unsigned long t487 = t482->_M_len;
      std___Vector_base_int__std__allocator_int______M_deallocate(t485, t486, t487);
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_M_realloc_appendIJiEEEvDpOT_
void void_std__vector_int__std__allocator_int______M_realloc_append_int_(struct std__vector_int__std__allocator_int__* v488, int* v489) {
bb490:
  struct std__vector_int__std__allocator_int__* this491;
  int* __args492;
  unsigned long __len493;
  int* __old_start494;
  int* __old_finish495;
  unsigned long __elems496;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0497;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1498;
  int* __new_start499;
  int* __new_finish500;
  this491 = v488;
  __args492 = v489;
  struct std__vector_int__std__allocator_int__* t501 = this491;
  unsigned long c502 = 1;
  char* cast503 = (char*)&(_str_2);
  unsigned long r504 = std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(t501, c502, cast503);
  __len493 = r504;
    unsigned long t505 = __len493;
    unsigned long c506 = 0;
    _Bool c507 = ((t505 <= c506)) ? 1 : 0;
    if (c507) {
      __builtin_unreachable();
    }
  struct std___Vector_base_int__std__allocator_int__* base508 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t501 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base509 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base508->_M_impl) + 0);
  int* t510 = base509->_M_start;
  __old_start494 = t510;
  struct std___Vector_base_int__std__allocator_int__* base511 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t501 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base512 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base511->_M_impl) + 0);
  int* t513 = base512->_M_finish;
  __old_finish495 = t513;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r514 = std__vector_int__std__allocator_int_____end(t501);
  ref_tmp0497 = r514;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r515 = std__vector_int__std__allocator_int_____begin(t501);
  ref_tmp1498 = r515;
  long r516 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&ref_tmp0497, &ref_tmp1498);
  unsigned long cast517 = (unsigned long)r516;
  __elems496 = cast517;
  struct std___Vector_base_int__std__allocator_int__* base518 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t501 + 0);
  unsigned long t519 = __len493;
  int* r520 = std___Vector_base_int__std__allocator_int______M_allocate(base518, t519);
  __new_start499 = r520;
  int* t521 = __new_start499;
  __new_finish500 = t521;
    struct std__vector_int__std__allocator_int_____Guard_alloc __guard522;
    int* ref_tmp2523;
    int* t524 = __new_start499;
    unsigned long t525 = __len493;
    struct std___Vector_base_int__std__allocator_int__* base526 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t501 + 0);
    std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(&__guard522, t524, t525, base526);
      struct std___Vector_base_int__std__allocator_int__* base527 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t501 + 0);
      struct std__allocator_int_* base528 = (struct std__allocator_int_*)((char *)&(base527->_M_impl) + 0);
      int* t529 = __new_start499;
      unsigned long t530 = __elems496;
      int* ptr531 = &(t529)[t530];
      ref_tmp2523 = ptr531;
      int* r532 = auto_std____to_address_int__(&ref_tmp2523);
      int* t533 = __args492;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_(base528, r532, t533);
        int* t534 = __old_start494;
        int* t535 = __old_finish495;
        int* t536 = __new_start499;
        struct std___Vector_base_int__std__allocator_int__* base537 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t501 + 0);
        struct std__allocator_int_* r538 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base537);
        int* r539 = std__vector_int__std__allocator_int______S_relocate(t534, t535, t536, r538);
        __new_finish500 = r539;
        int* t540 = __new_finish500;
        int c541 = 1;
        int* ptr542 = &(t540)[c541];
        __new_finish500 = ptr542;
      int* t543 = __old_start494;
      __guard522._M_storage = t543;
      struct std___Vector_base_int__std__allocator_int__* base544 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t501 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base545 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base544->_M_impl) + 0);
      int* t546 = base545->_M_end_of_storage;
      int* t547 = __old_start494;
      long diff548 = t546 - t547;
      unsigned long cast549 = (unsigned long)diff548;
      __guard522._M_len = cast549;
    {
      std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(&__guard522);
    }
  int* t550 = __new_start499;
  struct std___Vector_base_int__std__allocator_int__* base551 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t501 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base552 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base551->_M_impl) + 0);
  base552->_M_start = t550;
  int* t553 = __new_finish500;
  struct std___Vector_base_int__std__allocator_int__* base554 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t501 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base555 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base554->_M_impl) + 0);
  base555->_M_finish = t553;
  int* t556 = __new_start499;
  unsigned long t557 = __len493;
  int* ptr558 = &(t556)[t557];
  struct std___Vector_base_int__std__allocator_int__* base559 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t501 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base560 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base559->_M_impl) + 0);
  base560->_M_end_of_storage = ptr558;
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v561) {
bb562:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this563;
  int** __retval564;
  this563 = v561;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t565 = this563;
  __retval564 = &t565->_M_current;
  int** t566 = __retval564;
  return t566;
}

// function: _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v567, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v568) {
bb569:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __lhs570;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __rhs571;
  _Bool __retval572;
  __lhs570 = v567;
  __rhs571 = v568;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t573 = __lhs570;
  int** r574 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t573);
  int* t575 = *r574;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t576 = __rhs571;
  int** r577 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t576);
  int* t578 = *r577;
  _Bool c579 = ((t575 == t578)) ? 1 : 0;
  __retval572 = c579;
  _Bool t580 = __retval572;
  return t580;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2ERKS2_
void __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v581, int** v582) {
bb583:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this584;
  int** __i585;
  this584 = v581;
  __i585 = v582;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t586 = this584;
  int** t587 = __i585;
  int* t588 = *t587;
  t586->_M_current = t588;
  return;
}

// function: _ZNKSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin___const(struct std__vector_int__std__allocator_int__* v589) {
bb590:
  struct std__vector_int__std__allocator_int__* this591;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __retval592;
  this591 = v589;
  struct std__vector_int__std__allocator_int__* t593 = this591;
  struct std___Vector_base_int__std__allocator_int__* base594 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t593 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base595 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base594->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(&__retval592, &base595->_M_start);
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t596 = __retval592;
  return t596;
}

// function: _ZNKSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end___const(struct std__vector_int__std__allocator_int__* v597) {
bb598:
  struct std__vector_int__std__allocator_int__* this599;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __retval600;
  this599 = v597;
  struct std__vector_int__std__allocator_int__* t601 = this599;
  struct std___Vector_base_int__std__allocator_int__* base602 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t601 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base603 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base602->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(&__retval600, &base603->_M_finish);
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t604 = __retval600;
  return t604;
}

// function: _ZNKSt6vectorIiSaIiEE5emptyEv
_Bool std__vector_int__std__allocator_int_____empty___const(struct std__vector_int__std__allocator_int__* v605) {
bb606:
  struct std__vector_int__std__allocator_int__* this607;
  _Bool __retval608;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ ref_tmp0609;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ ref_tmp1610;
  this607 = v605;
  struct std__vector_int__std__allocator_int__* t611 = this607;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r612 = std__vector_int__std__allocator_int_____begin___const(t611);
  ref_tmp0609 = r612;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r613 = std__vector_int__std__allocator_int_____end___const(t611);
  ref_tmp1610 = r613;
  _Bool r614 = _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&ref_tmp0609, &ref_tmp1610);
  __retval608 = r614;
  _Bool t615 = __retval608;
  return t615;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEmiEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v616, long v617) {
bb618:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this619;
  long __n620;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval621;
  int* ref_tmp0622;
  this619 = v616;
  __n620 = v617;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t623 = this619;
  int* t624 = t623->_M_current;
  long t625 = __n620;
  long u626 = -t625;
  int* ptr627 = &(t624)[u626];
  ref_tmp0622 = ptr627;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval621, &ref_tmp0622);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t628 = __retval621;
  return t628;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v629) {
bb630:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this631;
  int* __retval632;
  this631 = v629;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t633 = this631;
  int* t634 = t633->_M_current;
  __retval632 = t634;
  int* t635 = __retval632;
  return t635;
}

// function: _ZNSt6vectorIiSaIiEE4backEv
int* std__vector_int__std__allocator_int_____back(struct std__vector_int__std__allocator_int__* v636) {
bb637:
  struct std__vector_int__std__allocator_int__* this638;
  int* __retval639;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0640;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1641;
  this638 = v636;
  struct std__vector_int__std__allocator_int__* t642 = this638;
    do {
          _Bool r643 = std__vector_int__std__allocator_int_____empty___const(t642);
          if (r643) {
            char* cast644 = (char*)&(_str_3);
            int c645 = 1370;
            char* cast646 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv);
            char* cast647 = (char*)&(_str_4);
            std____glibcxx_assert_fail(cast644, c645, cast646, cast647);
          }
      _Bool c648 = 0;
      if (!c648) break;
    } while (1);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r649 = std__vector_int__std__allocator_int_____end(t642);
  ref_tmp1641 = r649;
  long c650 = 1;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r651 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&ref_tmp1641, c650);
  ref_tmp0640 = r651;
  int* r652 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp0640);
  __retval639 = r652;
  int* t653 = __retval639;
  return t653;
}

// function: _ZNSt6vectorIiSaIiEE12emplace_backIJiEEERiDpOT_
int* int__std__vector_int__std__allocator_int_____emplace_back_int_(struct std__vector_int__std__allocator_int__* v654, int* v655) {
bb656:
  struct std__vector_int__std__allocator_int__* this657;
  int* __args658;
  int* __retval659;
  this657 = v654;
  __args658 = v655;
  struct std__vector_int__std__allocator_int__* t660 = this657;
    struct std___Vector_base_int__std__allocator_int__* base661 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t660 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base662 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base661->_M_impl) + 0);
    int* t663 = base662->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base664 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t660 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base665 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base664->_M_impl) + 0);
    int* t666 = base665->_M_end_of_storage;
    _Bool c667 = ((t663 != t666)) ? 1 : 0;
    if (c667) {
      struct std___Vector_base_int__std__allocator_int__* base668 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t660 + 0);
      struct std__allocator_int_* base669 = (struct std__allocator_int_*)((char *)&(base668->_M_impl) + 0);
      struct std___Vector_base_int__std__allocator_int__* base670 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t660 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base671 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base670->_M_impl) + 0);
      int* t672 = base671->_M_finish;
      int* t673 = __args658;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_(base669, t672, t673);
      struct std___Vector_base_int__std__allocator_int__* base674 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t660 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base675 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base674->_M_impl) + 0);
      int* t676 = base675->_M_finish;
      int c677 = 1;
      int* ptr678 = &(t676)[c677];
      base675->_M_finish = ptr678;
    } else {
      int* t679 = __args658;
      void_std__vector_int__std__allocator_int______M_realloc_append_int_(t660, t679);
    }
  int* r680 = std__vector_int__std__allocator_int_____back(t660);
  __retval659 = r680;
  int* t681 = __retval659;
  return t681;
}

// function: _ZNSt6vectorIiSaIiEE9push_backEOi
void std__vector_int__std__allocator_int_____push_back(struct std__vector_int__std__allocator_int__* v682, int* v683) {
bb684:
  struct std__vector_int__std__allocator_int__* this685;
  int* __x686;
  this685 = v682;
  __x686 = v683;
  struct std__vector_int__std__allocator_int__* t687 = this685;
  int* t688 = __x686;
  int* r689 = int__std__vector_int__std__allocator_int_____emplace_back_int_(t687, t688);
  return;
}

// function: _ZNKSt6vectorIiSaIiEE14_M_range_checkEm
void std__vector_int__std__allocator_int______M_range_check_unsigned_long__const(struct std__vector_int__std__allocator_int__* v690, unsigned long v691) {
bb692:
  struct std__vector_int__std__allocator_int__* this693;
  unsigned long __n694;
  this693 = v690;
  __n694 = v691;
  struct std__vector_int__std__allocator_int__* t695 = this693;
    unsigned long t696 = __n694;
    unsigned long r697 = std__vector_int__std__allocator_int_____size___const(t695);
    _Bool c698 = ((t696 >= r697)) ? 1 : 0;
    if (c698) {
      char* cast699 = (char*)&(_str_5);
      unsigned long t700 = __n694;
      unsigned long r701 = std__vector_int__std__allocator_int_____size___const(t695);
      std____throw_out_of_range_fmt(cast699, t700, r701);
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEEixEm
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* v702, unsigned long v703) {
bb704:
  struct std__vector_int__std__allocator_int__* this705;
  unsigned long __n706;
  int* __retval707;
  this705 = v702;
  __n706 = v703;
  struct std__vector_int__std__allocator_int__* t708 = this705;
    do {
          unsigned long t709 = __n706;
          unsigned long r710 = std__vector_int__std__allocator_int_____size___const(t708);
          _Bool c711 = ((t709 < r710)) ? 1 : 0;
          _Bool u712 = !c711;
          if (u712) {
            char* cast713 = (char*)&(_str_3);
            int c714 = 1263;
            char* cast715 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm);
            char* cast716 = (char*)&(_str_6);
            std____glibcxx_assert_fail(cast713, c714, cast715, cast716);
          }
      _Bool c717 = 0;
      if (!c717) break;
    } while (1);
  struct std___Vector_base_int__std__allocator_int__* base718 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t708 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base719 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base718->_M_impl) + 0);
  int* t720 = base719->_M_start;
  unsigned long t721 = __n706;
  int* ptr722 = &(t720)[t721];
  __retval707 = ptr722;
  int* t723 = __retval707;
  return t723;
}

// function: _ZNSt6vectorIiSaIiEE2atEm
int* std__vector_int__std__allocator_int_____at(struct std__vector_int__std__allocator_int__* v724, unsigned long v725) {
bb726:
  struct std__vector_int__std__allocator_int__* this727;
  unsigned long __n728;
  int* __retval729;
  this727 = v724;
  __n728 = v725;
  struct std__vector_int__std__allocator_int__* t730 = this727;
  unsigned long t731 = __n728;
  std__vector_int__std__allocator_int______M_range_check_unsigned_long__const(t730, t731);
  unsigned long t732 = __n728;
  int* r733 = std__vector_int__std__allocator_int_____operator__(t730, t732);
  __retval729 = r733;
  int* t734 = __retval729;
  return t734;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v735, int v736) {
bb737:
  int __a738;
  int __b739;
  int __retval740;
  __a738 = v735;
  __b739 = v736;
  int t741 = __a738;
  int t742 = __b739;
  int b743 = t741 | t742;
  __retval740 = b743;
  int t744 = __retval740;
  return t744;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v745) {
bb746:
  struct std__basic_ios_char__std__char_traits_char__* this747;
  int __retval748;
  this747 = v745;
  struct std__basic_ios_char__std__char_traits_char__* t749 = this747;
  struct std__ios_base* base750 = (struct std__ios_base*)((char *)t749 + 0);
  int t751 = base750->_M_streambuf_state;
  __retval748 = t751;
  int t752 = __retval748;
  return t752;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v753, int v754) {
bb755:
  struct std__basic_ios_char__std__char_traits_char__* this756;
  int __state757;
  this756 = v753;
  __state757 = v754;
  struct std__basic_ios_char__std__char_traits_char__* t758 = this756;
  int r759 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t758);
  int t760 = __state757;
  int r761 = std__operator_(r759, t760);
  std__basic_ios_char__std__char_traits_char_____clear(t758, r761);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v762, char* v763) {
bb764:
  char* __c1765;
  char* __c2766;
  _Bool __retval767;
  __c1765 = v762;
  __c2766 = v763;
  char* t768 = __c1765;
  char t769 = *t768;
  int cast770 = (int)t769;
  char* t771 = __c2766;
  char t772 = *t771;
  int cast773 = (int)t772;
  _Bool c774 = ((cast770 == cast773)) ? 1 : 0;
  __retval767 = c774;
  _Bool t775 = __retval767;
  return t775;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v776) {
bb777:
  char* __p778;
  unsigned long __retval779;
  unsigned long __i780;
  __p778 = v776;
  unsigned long c781 = 0;
  __i780 = c781;
    char ref_tmp0782;
    while (1) {
      unsigned long t783 = __i780;
      char* t784 = __p778;
      char* ptr785 = &(t784)[t783];
      char c786 = 0;
      ref_tmp0782 = c786;
      _Bool r787 = __gnu_cxx__char_traits_char___eq(ptr785, &ref_tmp0782);
      _Bool u788 = !r787;
      if (!u788) break;
      unsigned long t789 = __i780;
      unsigned long u790 = t789 + 1;
      __i780 = u790;
    }
  unsigned long t791 = __i780;
  __retval779 = t791;
  unsigned long t792 = __retval779;
  return t792;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v793) {
bb794:
  char* __s795;
  unsigned long __retval796;
  __s795 = v793;
    _Bool r797 = std____is_constant_evaluated();
    if (r797) {
      char* t798 = __s795;
      unsigned long r799 = __gnu_cxx__char_traits_char___length(t798);
      __retval796 = r799;
      unsigned long t800 = __retval796;
      return t800;
    }
  char* t801 = __s795;
  unsigned long r802 = strlen(t801);
  __retval796 = r802;
  unsigned long t803 = __retval796;
  return t803;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v804, char* v805) {
bb806:
  struct std__basic_ostream_char__std__char_traits_char__* __out807;
  char* __s808;
  struct std__basic_ostream_char__std__char_traits_char__* __retval809;
  __out807 = v804;
  __s808 = v805;
    char* t810 = __s808;
    _Bool cast811 = (_Bool)t810;
    _Bool u812 = !cast811;
    if (u812) {
      struct std__basic_ostream_char__std__char_traits_char__* t813 = __out807;
      void** v814 = (void**)t813;
      void* v815 = *((void**)v814);
      unsigned char* cast816 = (unsigned char*)v815;
      long c817 = -24;
      unsigned char* ptr818 = &(cast816)[c817];
      long* cast819 = (long*)ptr818;
      long t820 = *cast819;
      unsigned char* cast821 = (unsigned char*)t813;
      unsigned char* ptr822 = &(cast821)[t820];
      struct std__basic_ostream_char__std__char_traits_char__* cast823 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr822;
      struct std__basic_ios_char__std__char_traits_char__* cast824 = (struct std__basic_ios_char__std__char_traits_char__*)cast823;
      int t825 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast824, t825);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t826 = __out807;
      char* t827 = __s808;
      char* t828 = __s808;
      unsigned long r829 = std__char_traits_char___length(t828);
      long cast830 = (long)r829;
      struct std__basic_ostream_char__std__char_traits_char__* r831 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t826, t827, cast830);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t832 = __out807;
  __retval809 = t832;
  struct std__basic_ostream_char__std__char_traits_char__* t833 = __retval809;
  return t833;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v834, void* v835) {
bb836:
  struct std__basic_ostream_char__std__char_traits_char__* this837;
  void* __pf838;
  struct std__basic_ostream_char__std__char_traits_char__* __retval839;
  this837 = v834;
  __pf838 = v835;
  struct std__basic_ostream_char__std__char_traits_char__* t840 = this837;
  void* t841 = __pf838;
  struct std__basic_ostream_char__std__char_traits_char__* r842 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t841)(t840);
  __retval839 = r842;
  struct std__basic_ostream_char__std__char_traits_char__* t843 = __retval839;
  return t843;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v844) {
bb845:
  struct std__basic_ostream_char__std__char_traits_char__* __os846;
  struct std__basic_ostream_char__std__char_traits_char__* __retval847;
  __os846 = v844;
  struct std__basic_ostream_char__std__char_traits_char__* t848 = __os846;
  struct std__basic_ostream_char__std__char_traits_char__* r849 = std__ostream__flush(t848);
  __retval847 = r849;
  struct std__basic_ostream_char__std__char_traits_char__* t850 = __retval847;
  return t850;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v851) {
bb852:
  struct std__ctype_char_* __f853;
  struct std__ctype_char_* __retval854;
  __f853 = v851;
    struct std__ctype_char_* t855 = __f853;
    _Bool cast856 = (_Bool)t855;
    _Bool u857 = !cast856;
    if (u857) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t858 = __f853;
  __retval854 = t858;
  struct std__ctype_char_* t859 = __retval854;
  return t859;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v860, char v861) {
bb862:
  struct std__ctype_char_* this863;
  char __c864;
  char __retval865;
  this863 = v860;
  __c864 = v861;
  struct std__ctype_char_* t866 = this863;
    char t867 = t866->_M_widen_ok;
    _Bool cast868 = (_Bool)t867;
    if (cast868) {
      char t869 = __c864;
      unsigned char cast870 = (unsigned char)t869;
      unsigned long cast871 = (unsigned long)cast870;
      char t872 = t866->_M_widen[cast871];
      __retval865 = t872;
      char t873 = __retval865;
      return t873;
    }
  std__ctype_char____M_widen_init___const(t866);
  char t874 = __c864;
  void** v875 = (void**)t866;
  void* v876 = *((void**)v875);
  char vcall879 = (char)__VERIFIER_virtual_call_char_char(t866, 6, t874);
  __retval865 = vcall879;
  char t880 = __retval865;
  return t880;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v881, char v882) {
bb883:
  struct std__basic_ios_char__std__char_traits_char__* this884;
  char __c885;
  char __retval886;
  this884 = v881;
  __c885 = v882;
  struct std__basic_ios_char__std__char_traits_char__* t887 = this884;
  struct std__ctype_char_* t888 = t887->_M_ctype;
  struct std__ctype_char_* r889 = std__ctype_char__const__std____check_facet_std__ctype_char___(t888);
  char t890 = __c885;
  char r891 = std__ctype_char___widen_char__const(r889, t890);
  __retval886 = r891;
  char t892 = __retval886;
  return t892;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v893) {
bb894:
  struct std__basic_ostream_char__std__char_traits_char__* __os895;
  struct std__basic_ostream_char__std__char_traits_char__* __retval896;
  __os895 = v893;
  struct std__basic_ostream_char__std__char_traits_char__* t897 = __os895;
  struct std__basic_ostream_char__std__char_traits_char__* t898 = __os895;
  void** v899 = (void**)t898;
  void* v900 = *((void**)v899);
  unsigned char* cast901 = (unsigned char*)v900;
  long c902 = -24;
  unsigned char* ptr903 = &(cast901)[c902];
  long* cast904 = (long*)ptr903;
  long t905 = *cast904;
  unsigned char* cast906 = (unsigned char*)t898;
  unsigned char* ptr907 = &(cast906)[t905];
  struct std__basic_ostream_char__std__char_traits_char__* cast908 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr907;
  struct std__basic_ios_char__std__char_traits_char__* cast909 = (struct std__basic_ios_char__std__char_traits_char__*)cast908;
  char c910 = 10;
  char r911 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast909, c910);
  struct std__basic_ostream_char__std__char_traits_char__* r912 = std__ostream__put(t897, r911);
  struct std__basic_ostream_char__std__char_traits_char__* r913 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r912);
  __retval896 = r913;
  struct std__basic_ostream_char__std__char_traits_char__* t914 = __retval896;
  return t914;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v915) {
bb916:
  struct std__vector_int__std__allocator_int__* this917;
  this917 = v915;
  struct std__vector_int__std__allocator_int__* t918 = this917;
    struct std___Vector_base_int__std__allocator_int__* base919 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t918 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base920 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base919->_M_impl) + 0);
    int* t921 = base920->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base922 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t918 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base923 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base922->_M_impl) + 0);
    int* t924 = base923->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base925 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t918 + 0);
    struct std__allocator_int_* r926 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base925);
    void_std___Destroy_int___int_(t921, t924, r926);
  {
    struct std___Vector_base_int__std__allocator_int__* base927 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t918 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base927);
  }
  return;
}

// function: main
int main() {
bb928:
  int __retval929;
  struct std__vector_int__std__allocator_int__ v1930;
  int ref_tmp0931;
  int ref_tmp1932;
  int* i933;
  int* j934;
  int* k935;
  int c936 = 0;
  __retval929 = c936;
  std__vector_int__std__allocator_int_____vector(&v1930);
    int c937 = 10;
    ref_tmp0931 = c937;
    std__vector_int__std__allocator_int_____push_back(&v1930, &ref_tmp0931);
    int c938 = 20;
    ref_tmp1932 = c938;
    std__vector_int__std__allocator_int_____push_back(&v1930, &ref_tmp1932);
    unsigned long c939 = 0;
    int* r940 = std__vector_int__std__allocator_int_____at(&v1930, c939);
    i933 = r940;
    unsigned long c941 = 1;
    int* r942 = std__vector_int__std__allocator_int_____at(&v1930, c941);
    j934 = r942;
    unsigned long c943 = 2;
    int* r944 = std__vector_int__std__allocator_int_____at(&v1930, c943);
    k935 = r944;
    char* cast945 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* r946 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast945);
    int* t947 = i933;
    int t948 = *t947;
    struct std__basic_ostream_char__std__char_traits_char__* r949 = std__ostream__operator__(r946, t948);
    struct std__basic_ostream_char__std__char_traits_char__* r950 = std__ostream__operator___std__ostream_____(r949, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    char* cast951 = (char*)&(_str_1);
    struct std__basic_ostream_char__std__char_traits_char__* r952 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast951);
    int* t953 = j934;
    int t954 = *t953;
    struct std__basic_ostream_char__std__char_traits_char__* r955 = std__ostream__operator__(r952, t954);
    struct std__basic_ostream_char__std__char_traits_char__* r956 = std__ostream__operator___std__ostream_____(r955, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  {
    std__vector_int__std__allocator_int______vector(&v1930);
  }
  int t957 = __retval929;
  return t957;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE
void _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v958) {
bb959:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this960;
  this960 = v958;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t961 = this960;
  struct std__allocator_int_* base962 = (struct std__allocator_int_*)((char *)t961 + 0);
  std__allocator_int___allocator(base962);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base963 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t961 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base963);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v964) {
bb965:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this966;
  this966 = v964;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t967 = this966;
  {
    struct std__allocator_int_* base968 = (struct std__allocator_int_*)((char *)t967 + 0);
    std__allocator_int____allocator(base968);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2Ev
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v969) {
bb970:
  struct std___Vector_base_int__std__allocator_int__* this971;
  this971 = v969;
  struct std___Vector_base_int__std__allocator_int__* t972 = this971;
  _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(&t972->_M_impl);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb973:
  _Bool __retval974;
    _Bool c975 = 0;
    __retval974 = c975;
    _Bool t976 = __retval974;
    return t976;
  abort();
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v977, int* v978, unsigned long v979) {
bb980:
  struct std____new_allocator_int_* this981;
  int* __p982;
  unsigned long __n983;
  this981 = v977;
  __p982 = v978;
  __n983 = v979;
  struct std____new_allocator_int_* t984 = this981;
    unsigned long c985 = 4;
    unsigned long c986 = 16;
    _Bool c987 = ((c985 > c986)) ? 1 : 0;
    if (c987) {
      int* t988 = __p982;
      void* cast989 = (void*)t988;
      unsigned long t990 = __n983;
      unsigned long c991 = 4;
      unsigned long b992 = t990 * c991;
      unsigned long c993 = 4;
      operator_delete_3(cast989, b992, c993);
      return;
    }
  int* t994 = __p982;
  void* cast995 = (void*)t994;
  unsigned long t996 = __n983;
  unsigned long c997 = 4;
  unsigned long b998 = t996 * c997;
  operator_delete_2(cast995, b998);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v999, int* v1000, unsigned long v1001) {
bb1002:
  struct std__allocator_int_* this1003;
  int* __p1004;
  unsigned long __n1005;
  this1003 = v999;
  __p1004 = v1000;
  __n1005 = v1001;
  struct std__allocator_int_* t1006 = this1003;
    _Bool r1007 = std____is_constant_evaluated();
    if (r1007) {
      int* t1008 = __p1004;
      void* cast1009 = (void*)t1008;
      operator_delete(cast1009);
      return;
    }
  struct std____new_allocator_int_* base1010 = (struct std____new_allocator_int_*)((char *)t1006 + 0);
  int* t1011 = __p1004;
  unsigned long t1012 = __n1005;
  std____new_allocator_int___deallocate(base1010, t1011, t1012);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1013, int* v1014, unsigned long v1015) {
bb1016:
  struct std__allocator_int_* __a1017;
  int* __p1018;
  unsigned long __n1019;
  __a1017 = v1013;
  __p1018 = v1014;
  __n1019 = v1015;
  struct std__allocator_int_* t1020 = __a1017;
  int* t1021 = __p1018;
  unsigned long t1022 = __n1019;
  std__allocator_int___deallocate(t1020, t1021, t1022);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v1023, int* v1024, unsigned long v1025) {
bb1026:
  struct std___Vector_base_int__std__allocator_int__* this1027;
  int* __p1028;
  unsigned long __n1029;
  this1027 = v1023;
  __p1028 = v1024;
  __n1029 = v1025;
  struct std___Vector_base_int__std__allocator_int__* t1030 = this1027;
    int* t1031 = __p1028;
    _Bool cast1032 = (_Bool)t1031;
    if (cast1032) {
      struct std__allocator_int_* base1033 = (struct std__allocator_int_*)((char *)&(t1030->_M_impl) + 0);
      int* t1034 = __p1028;
      unsigned long t1035 = __n1029;
      std__allocator_traits_std__allocator_int_____deallocate(base1033, t1034, t1035);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1036) {
bb1037:
  struct std___Vector_base_int__std__allocator_int__* this1038;
  this1038 = v1036;
  struct std___Vector_base_int__std__allocator_int__* t1039 = this1038;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1040 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1039->_M_impl) + 0);
    int* t1041 = base1040->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1042 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1039->_M_impl) + 0);
    int* t1043 = base1042->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1044 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1039->_M_impl) + 0);
    int* t1045 = base1044->_M_start;
    long diff1046 = t1043 - t1045;
    unsigned long cast1047 = (unsigned long)diff1046;
    std___Vector_base_int__std__allocator_int______M_deallocate(t1039, t1041, cast1047);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t1039->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1048) {
bb1049:
  struct std____new_allocator_int_* this1050;
  this1050 = v1048;
  struct std____new_allocator_int_* t1051 = this1050;
  return;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator(struct std__allocator_int_* v1052) {
bb1053:
  struct std__allocator_int_* this1054;
  this1054 = v1052;
  struct std__allocator_int_* t1055 = this1054;
  struct std____new_allocator_int_* base1056 = (struct std____new_allocator_int_*)((char *)t1055 + 0);
  std____new_allocator_int_____new_allocator(base1056);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v1057) {
bb1058:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this1059;
  this1059 = v1057;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1060 = this1059;
  int* c1061 = ((void*)0);
  t1060->_M_start = c1061;
  int* c1062 = ((void*)0);
  t1060->_M_finish = c1062;
  int* c1063 = ((void*)0);
  t1060->_M_end_of_storage = c1063;
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v1064) {
bb1065:
  struct std__allocator_int_* this1066;
  this1066 = v1064;
  struct std__allocator_int_* t1067 = this1066;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1068, int* v1069) {
bb1070:
  int* __first1071;
  int* __last1072;
  __first1071 = v1068;
  __last1072 = v1069;
      _Bool r1073 = std____is_constant_evaluated();
      if (r1073) {
          while (1) {
            int* t1075 = __first1071;
            int* t1076 = __last1072;
            _Bool c1077 = ((t1075 != t1076)) ? 1 : 0;
            if (!c1077) break;
            int* t1078 = __first1071;
            void_std__destroy_at_int_(t1078);
          for_step1074: ;
            int* t1079 = __first1071;
            int c1080 = 1;
            int* ptr1081 = &(t1079)[c1080];
            __first1071 = ptr1081;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v1082, int* v1083, struct std__allocator_int_* v1084) {
bb1085:
  int* __first1086;
  int* __last1087;
  struct std__allocator_int_* unnamed1088;
  __first1086 = v1082;
  __last1087 = v1083;
  unnamed1088 = v1084;
  int* t1089 = __first1086;
  int* t1090 = __last1087;
  void_std___Destroy_int__(t1089, t1090);
  return;
}

