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
char _str[33] = "The elements of myvector summed ";
char _str_1[26] = "vector::_M_realloc_append";
char _str_2[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv[77] = "reference std::vector<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_3[15] = "!this->empty()";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE8pop_backEv[76] = "void std::vector<int>::pop_back() [_Tp = int, _Alloc = std::allocator<int>]";
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
int* int__std__vector_int__std__allocator_int_____emplace_back_int_(struct std__vector_int__std__allocator_int__* p0, int* p1);
void std__vector_int__std__allocator_int_____push_back(struct std__vector_int__std__allocator_int__* p0, int* p1);
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
void std__vector_int__std__allocator_int_____pop_back(struct std__vector_int__std__allocator_int__* p0);
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
  char* cast503 = (char*)&(_str_1);
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

// function: _ZNSt6vectorIiSaIiEE12emplace_backIJiEEERiDpOT_
int* int__std__vector_int__std__allocator_int_____emplace_back_int_(struct std__vector_int__std__allocator_int__* v561, int* v562) {
bb563:
  struct std__vector_int__std__allocator_int__* this564;
  int* __args565;
  int* __retval566;
  this564 = v561;
  __args565 = v562;
  struct std__vector_int__std__allocator_int__* t567 = this564;
    struct std___Vector_base_int__std__allocator_int__* base568 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t567 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base569 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base568->_M_impl) + 0);
    int* t570 = base569->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base571 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t567 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base572 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base571->_M_impl) + 0);
    int* t573 = base572->_M_end_of_storage;
    _Bool c574 = ((t570 != t573)) ? 1 : 0;
    if (c574) {
      struct std___Vector_base_int__std__allocator_int__* base575 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t567 + 0);
      struct std__allocator_int_* base576 = (struct std__allocator_int_*)((char *)&(base575->_M_impl) + 0);
      struct std___Vector_base_int__std__allocator_int__* base577 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t567 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base578 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base577->_M_impl) + 0);
      int* t579 = base578->_M_finish;
      int* t580 = __args565;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_(base576, t579, t580);
      struct std___Vector_base_int__std__allocator_int__* base581 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t567 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base582 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base581->_M_impl) + 0);
      int* t583 = base582->_M_finish;
      int c584 = 1;
      int* ptr585 = &(t583)[c584];
      base582->_M_finish = ptr585;
    } else {
      int* t586 = __args565;
      void_std__vector_int__std__allocator_int______M_realloc_append_int_(t567, t586);
    }
  int* r587 = std__vector_int__std__allocator_int_____back(t567);
  __retval566 = r587;
  int* t588 = __retval566;
  return t588;
}

// function: _ZNSt6vectorIiSaIiEE9push_backEOi
void std__vector_int__std__allocator_int_____push_back(struct std__vector_int__std__allocator_int__* v589, int* v590) {
bb591:
  struct std__vector_int__std__allocator_int__* this592;
  int* __x593;
  this592 = v589;
  __x593 = v590;
  struct std__vector_int__std__allocator_int__* t594 = this592;
  int* t595 = __x593;
  int* r596 = int__std__vector_int__std__allocator_int_____emplace_back_int_(t594, t595);
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v597) {
bb598:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this599;
  int** __retval600;
  this599 = v597;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t601 = this599;
  __retval600 = &t601->_M_current;
  int** t602 = __retval600;
  return t602;
}

// function: _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v603, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v604) {
bb605:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __lhs606;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __rhs607;
  _Bool __retval608;
  __lhs606 = v603;
  __rhs607 = v604;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t609 = __lhs606;
  int** r610 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t609);
  int* t611 = *r610;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t612 = __rhs607;
  int** r613 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t612);
  int* t614 = *r613;
  _Bool c615 = ((t611 == t614)) ? 1 : 0;
  __retval608 = c615;
  _Bool t616 = __retval608;
  return t616;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2ERKS2_
void __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v617, int** v618) {
bb619:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this620;
  int** __i621;
  this620 = v617;
  __i621 = v618;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t622 = this620;
  int** t623 = __i621;
  int* t624 = *t623;
  t622->_M_current = t624;
  return;
}

// function: _ZNKSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin___const(struct std__vector_int__std__allocator_int__* v625) {
bb626:
  struct std__vector_int__std__allocator_int__* this627;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __retval628;
  this627 = v625;
  struct std__vector_int__std__allocator_int__* t629 = this627;
  struct std___Vector_base_int__std__allocator_int__* base630 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t629 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base631 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base630->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(&__retval628, &base631->_M_start);
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t632 = __retval628;
  return t632;
}

// function: _ZNKSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end___const(struct std__vector_int__std__allocator_int__* v633) {
bb634:
  struct std__vector_int__std__allocator_int__* this635;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __retval636;
  this635 = v633;
  struct std__vector_int__std__allocator_int__* t637 = this635;
  struct std___Vector_base_int__std__allocator_int__* base638 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t637 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base639 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base638->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(&__retval636, &base639->_M_finish);
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t640 = __retval636;
  return t640;
}

// function: _ZNKSt6vectorIiSaIiEE5emptyEv
_Bool std__vector_int__std__allocator_int_____empty___const(struct std__vector_int__std__allocator_int__* v641) {
bb642:
  struct std__vector_int__std__allocator_int__* this643;
  _Bool __retval644;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ ref_tmp0645;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ ref_tmp1646;
  this643 = v641;
  struct std__vector_int__std__allocator_int__* t647 = this643;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r648 = std__vector_int__std__allocator_int_____begin___const(t647);
  ref_tmp0645 = r648;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r649 = std__vector_int__std__allocator_int_____end___const(t647);
  ref_tmp1646 = r649;
  _Bool r650 = _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&ref_tmp0645, &ref_tmp1646);
  __retval644 = r650;
  _Bool t651 = __retval644;
  return t651;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEmiEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v652, long v653) {
bb654:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this655;
  long __n656;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval657;
  int* ref_tmp0658;
  this655 = v652;
  __n656 = v653;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t659 = this655;
  int* t660 = t659->_M_current;
  long t661 = __n656;
  long u662 = -t661;
  int* ptr663 = &(t660)[u662];
  ref_tmp0658 = ptr663;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval657, &ref_tmp0658);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t664 = __retval657;
  return t664;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v665) {
bb666:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this667;
  int* __retval668;
  this667 = v665;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t669 = this667;
  int* t670 = t669->_M_current;
  __retval668 = t670;
  int* t671 = __retval668;
  return t671;
}

// function: _ZNSt6vectorIiSaIiEE4backEv
int* std__vector_int__std__allocator_int_____back(struct std__vector_int__std__allocator_int__* v672) {
bb673:
  struct std__vector_int__std__allocator_int__* this674;
  int* __retval675;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0676;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1677;
  this674 = v672;
  struct std__vector_int__std__allocator_int__* t678 = this674;
    do {
          _Bool r679 = std__vector_int__std__allocator_int_____empty___const(t678);
          if (r679) {
            char* cast680 = (char*)&(_str_2);
            int c681 = 1370;
            char* cast682 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv);
            char* cast683 = (char*)&(_str_3);
            std____glibcxx_assert_fail(cast680, c681, cast682, cast683);
          }
      _Bool c684 = 0;
      if (!c684) break;
    } while (1);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r685 = std__vector_int__std__allocator_int_____end(t678);
  ref_tmp1677 = r685;
  long c686 = 1;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r687 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&ref_tmp1677, c686);
  ref_tmp0676 = r687;
  int* r688 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp0676);
  __retval675 = r688;
  int* t689 = __retval675;
  return t689;
}

// function: _ZNSt6vectorIiSaIiEE8pop_backEv
void std__vector_int__std__allocator_int_____pop_back(struct std__vector_int__std__allocator_int__* v690) {
bb691:
  struct std__vector_int__std__allocator_int__* this692;
  this692 = v690;
  struct std__vector_int__std__allocator_int__* t693 = this692;
    do {
          _Bool r694 = std__vector_int__std__allocator_int_____empty___const(t693);
          if (r694) {
            char* cast695 = (char*)&(_str_2);
            int c696 = 1459;
            char* cast697 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE8pop_backEv);
            char* cast698 = (char*)&(_str_3);
            std____glibcxx_assert_fail(cast695, c696, cast697, cast698);
          }
      _Bool c699 = 0;
      if (!c699) break;
    } while (1);
  struct std___Vector_base_int__std__allocator_int__* base700 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t693 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base701 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base700->_M_impl) + 0);
  int* t702 = base701->_M_finish;
  int c703 = -1;
  int* ptr704 = &(t702)[c703];
  base701->_M_finish = ptr704;
  struct std___Vector_base_int__std__allocator_int__* base705 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t693 + 0);
  struct std__allocator_int_* base706 = (struct std__allocator_int_*)((char *)&(base705->_M_impl) + 0);
  struct std___Vector_base_int__std__allocator_int__* base707 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t693 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base708 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base707->_M_impl) + 0);
  int* t709 = base708->_M_finish;
  void_std__allocator_traits_std__allocator_int_____destroy_int_(base706, t709);
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v710, int v711) {
bb712:
  int __a713;
  int __b714;
  int __retval715;
  __a713 = v710;
  __b714 = v711;
  int t716 = __a713;
  int t717 = __b714;
  int b718 = t716 | t717;
  __retval715 = b718;
  int t719 = __retval715;
  return t719;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v720) {
bb721:
  struct std__basic_ios_char__std__char_traits_char__* this722;
  int __retval723;
  this722 = v720;
  struct std__basic_ios_char__std__char_traits_char__* t724 = this722;
  struct std__ios_base* base725 = (struct std__ios_base*)((char *)t724 + 0);
  int t726 = base725->_M_streambuf_state;
  __retval723 = t726;
  int t727 = __retval723;
  return t727;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v728, int v729) {
bb730:
  struct std__basic_ios_char__std__char_traits_char__* this731;
  int __state732;
  this731 = v728;
  __state732 = v729;
  struct std__basic_ios_char__std__char_traits_char__* t733 = this731;
  int r734 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t733);
  int t735 = __state732;
  int r736 = std__operator_(r734, t735);
  std__basic_ios_char__std__char_traits_char_____clear(t733, r736);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v737, char* v738) {
bb739:
  char* __c1740;
  char* __c2741;
  _Bool __retval742;
  __c1740 = v737;
  __c2741 = v738;
  char* t743 = __c1740;
  char t744 = *t743;
  int cast745 = (int)t744;
  char* t746 = __c2741;
  char t747 = *t746;
  int cast748 = (int)t747;
  _Bool c749 = ((cast745 == cast748)) ? 1 : 0;
  __retval742 = c749;
  _Bool t750 = __retval742;
  return t750;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v751) {
bb752:
  char* __p753;
  unsigned long __retval754;
  unsigned long __i755;
  __p753 = v751;
  unsigned long c756 = 0;
  __i755 = c756;
    char ref_tmp0757;
    while (1) {
      unsigned long t758 = __i755;
      char* t759 = __p753;
      char* ptr760 = &(t759)[t758];
      char c761 = 0;
      ref_tmp0757 = c761;
      _Bool r762 = __gnu_cxx__char_traits_char___eq(ptr760, &ref_tmp0757);
      _Bool u763 = !r762;
      if (!u763) break;
      unsigned long t764 = __i755;
      unsigned long u765 = t764 + 1;
      __i755 = u765;
    }
  unsigned long t766 = __i755;
  __retval754 = t766;
  unsigned long t767 = __retval754;
  return t767;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v768) {
bb769:
  char* __s770;
  unsigned long __retval771;
  __s770 = v768;
    _Bool r772 = std____is_constant_evaluated();
    if (r772) {
      char* t773 = __s770;
      unsigned long r774 = __gnu_cxx__char_traits_char___length(t773);
      __retval771 = r774;
      unsigned long t775 = __retval771;
      return t775;
    }
  char* t776 = __s770;
  unsigned long r777 = strlen(t776);
  __retval771 = r777;
  unsigned long t778 = __retval771;
  return t778;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v779, char* v780) {
bb781:
  struct std__basic_ostream_char__std__char_traits_char__* __out782;
  char* __s783;
  struct std__basic_ostream_char__std__char_traits_char__* __retval784;
  __out782 = v779;
  __s783 = v780;
    char* t785 = __s783;
    _Bool cast786 = (_Bool)t785;
    _Bool u787 = !cast786;
    if (u787) {
      struct std__basic_ostream_char__std__char_traits_char__* t788 = __out782;
      void** v789 = (void**)t788;
      void* v790 = *((void**)v789);
      unsigned char* cast791 = (unsigned char*)v790;
      long c792 = -24;
      unsigned char* ptr793 = &(cast791)[c792];
      long* cast794 = (long*)ptr793;
      long t795 = *cast794;
      unsigned char* cast796 = (unsigned char*)t788;
      unsigned char* ptr797 = &(cast796)[t795];
      struct std__basic_ostream_char__std__char_traits_char__* cast798 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr797;
      struct std__basic_ios_char__std__char_traits_char__* cast799 = (struct std__basic_ios_char__std__char_traits_char__*)cast798;
      int t800 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast799, t800);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t801 = __out782;
      char* t802 = __s783;
      char* t803 = __s783;
      unsigned long r804 = std__char_traits_char___length(t803);
      long cast805 = (long)r804;
      struct std__basic_ostream_char__std__char_traits_char__* r806 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t801, t802, cast805);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t807 = __out782;
  __retval784 = t807;
  struct std__basic_ostream_char__std__char_traits_char__* t808 = __retval784;
  return t808;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v809, void* v810) {
bb811:
  struct std__basic_ostream_char__std__char_traits_char__* this812;
  void* __pf813;
  struct std__basic_ostream_char__std__char_traits_char__* __retval814;
  this812 = v809;
  __pf813 = v810;
  struct std__basic_ostream_char__std__char_traits_char__* t815 = this812;
  void* t816 = __pf813;
  struct std__basic_ostream_char__std__char_traits_char__* r817 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t816)(t815);
  __retval814 = r817;
  struct std__basic_ostream_char__std__char_traits_char__* t818 = __retval814;
  return t818;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v819) {
bb820:
  struct std__basic_ostream_char__std__char_traits_char__* __os821;
  struct std__basic_ostream_char__std__char_traits_char__* __retval822;
  __os821 = v819;
  struct std__basic_ostream_char__std__char_traits_char__* t823 = __os821;
  struct std__basic_ostream_char__std__char_traits_char__* r824 = std__ostream__flush(t823);
  __retval822 = r824;
  struct std__basic_ostream_char__std__char_traits_char__* t825 = __retval822;
  return t825;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v826) {
bb827:
  struct std__ctype_char_* __f828;
  struct std__ctype_char_* __retval829;
  __f828 = v826;
    struct std__ctype_char_* t830 = __f828;
    _Bool cast831 = (_Bool)t830;
    _Bool u832 = !cast831;
    if (u832) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t833 = __f828;
  __retval829 = t833;
  struct std__ctype_char_* t834 = __retval829;
  return t834;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v835, char v836) {
bb837:
  struct std__ctype_char_* this838;
  char __c839;
  char __retval840;
  this838 = v835;
  __c839 = v836;
  struct std__ctype_char_* t841 = this838;
    char t842 = t841->_M_widen_ok;
    _Bool cast843 = (_Bool)t842;
    if (cast843) {
      char t844 = __c839;
      unsigned char cast845 = (unsigned char)t844;
      unsigned long cast846 = (unsigned long)cast845;
      char t847 = t841->_M_widen[cast846];
      __retval840 = t847;
      char t848 = __retval840;
      return t848;
    }
  std__ctype_char____M_widen_init___const(t841);
  char t849 = __c839;
  void** v850 = (void**)t841;
  void* v851 = *((void**)v850);
  char vcall854 = (char)__VERIFIER_virtual_call_char_char(t841, 6, t849);
  __retval840 = vcall854;
  char t855 = __retval840;
  return t855;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v856, char v857) {
bb858:
  struct std__basic_ios_char__std__char_traits_char__* this859;
  char __c860;
  char __retval861;
  this859 = v856;
  __c860 = v857;
  struct std__basic_ios_char__std__char_traits_char__* t862 = this859;
  struct std__ctype_char_* t863 = t862->_M_ctype;
  struct std__ctype_char_* r864 = std__ctype_char__const__std____check_facet_std__ctype_char___(t863);
  char t865 = __c860;
  char r866 = std__ctype_char___widen_char__const(r864, t865);
  __retval861 = r866;
  char t867 = __retval861;
  return t867;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v868) {
bb869:
  struct std__basic_ostream_char__std__char_traits_char__* __os870;
  struct std__basic_ostream_char__std__char_traits_char__* __retval871;
  __os870 = v868;
  struct std__basic_ostream_char__std__char_traits_char__* t872 = __os870;
  struct std__basic_ostream_char__std__char_traits_char__* t873 = __os870;
  void** v874 = (void**)t873;
  void* v875 = *((void**)v874);
  unsigned char* cast876 = (unsigned char*)v875;
  long c877 = -24;
  unsigned char* ptr878 = &(cast876)[c877];
  long* cast879 = (long*)ptr878;
  long t880 = *cast879;
  unsigned char* cast881 = (unsigned char*)t873;
  unsigned char* ptr882 = &(cast881)[t880];
  struct std__basic_ostream_char__std__char_traits_char__* cast883 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr882;
  struct std__basic_ios_char__std__char_traits_char__* cast884 = (struct std__basic_ios_char__std__char_traits_char__*)cast883;
  char c885 = 10;
  char r886 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast884, c885);
  struct std__basic_ostream_char__std__char_traits_char__* r887 = std__ostream__put(t872, r886);
  struct std__basic_ostream_char__std__char_traits_char__* r888 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r887);
  __retval871 = r888;
  struct std__basic_ostream_char__std__char_traits_char__* t889 = __retval871;
  return t889;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v890) {
bb891:
  struct std__vector_int__std__allocator_int__* this892;
  this892 = v890;
  struct std__vector_int__std__allocator_int__* t893 = this892;
    struct std___Vector_base_int__std__allocator_int__* base894 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t893 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base895 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base894->_M_impl) + 0);
    int* t896 = base895->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base897 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t893 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base898 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base897->_M_impl) + 0);
    int* t899 = base898->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base900 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t893 + 0);
    struct std__allocator_int_* r901 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base900);
    void_std___Destroy_int___int_(t896, t899, r901);
  {
    struct std___Vector_base_int__std__allocator_int__* base902 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t893 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base902);
  }
  return;
}

// function: main
int main() {
bb903:
  int __retval904;
  struct std__vector_int__std__allocator_int__ myvector905;
  int sum906;
  int ref_tmp0907;
  int ref_tmp1908;
  int ref_tmp2909;
  int c910 = 0;
  __retval904 = c910;
  std__vector_int__std__allocator_int_____vector(&myvector905);
    int c911 = 0;
    sum906 = c911;
    int c912 = 100;
    ref_tmp0907 = c912;
    std__vector_int__std__allocator_int_____push_back(&myvector905, &ref_tmp0907);
    int c913 = 200;
    ref_tmp1908 = c913;
    std__vector_int__std__allocator_int_____push_back(&myvector905, &ref_tmp1908);
    int c914 = 300;
    ref_tmp2909 = c914;
    std__vector_int__std__allocator_int_____push_back(&myvector905, &ref_tmp2909);
      while (1) {
        _Bool r915 = std__vector_int__std__allocator_int_____empty___const(&myvector905);
        _Bool u916 = !r915;
        if (!u916) break;
          int* r917 = std__vector_int__std__allocator_int_____back(&myvector905);
          int t918 = *r917;
          int t919 = sum906;
          int b920 = t919 + t918;
          sum906 = b920;
          std__vector_int__std__allocator_int_____pop_back(&myvector905);
      }
    char* cast921 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* r922 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast921);
    int t923 = sum906;
    struct std__basic_ostream_char__std__char_traits_char__* r924 = std__ostream__operator__(r922, t923);
    struct std__basic_ostream_char__std__char_traits_char__* r925 = std__ostream__operator___std__ostream_____(r924, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c926 = 0;
    __retval904 = c926;
    int t927 = __retval904;
    int ret_val928 = t927;
    {
      std__vector_int__std__allocator_int______vector(&myvector905);
    }
    return ret_val928;
  int t929 = __retval904;
  return t929;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE
void _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v930) {
bb931:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this932;
  this932 = v930;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t933 = this932;
  struct std__allocator_int_* base934 = (struct std__allocator_int_*)((char *)t933 + 0);
  std__allocator_int___allocator(base934);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base935 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t933 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base935);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v936) {
bb937:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this938;
  this938 = v936;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t939 = this938;
  {
    struct std__allocator_int_* base940 = (struct std__allocator_int_*)((char *)t939 + 0);
    std__allocator_int____allocator(base940);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2Ev
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v941) {
bb942:
  struct std___Vector_base_int__std__allocator_int__* this943;
  this943 = v941;
  struct std___Vector_base_int__std__allocator_int__* t944 = this943;
  _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(&t944->_M_impl);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb945:
  _Bool __retval946;
    _Bool c947 = 0;
    __retval946 = c947;
    _Bool t948 = __retval946;
    return t948;
  abort();
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v949, int* v950, unsigned long v951) {
bb952:
  struct std____new_allocator_int_* this953;
  int* __p954;
  unsigned long __n955;
  this953 = v949;
  __p954 = v950;
  __n955 = v951;
  struct std____new_allocator_int_* t956 = this953;
    unsigned long c957 = 4;
    unsigned long c958 = 16;
    _Bool c959 = ((c957 > c958)) ? 1 : 0;
    if (c959) {
      int* t960 = __p954;
      void* cast961 = (void*)t960;
      unsigned long t962 = __n955;
      unsigned long c963 = 4;
      unsigned long b964 = t962 * c963;
      unsigned long c965 = 4;
      operator_delete_3(cast961, b964, c965);
      return;
    }
  int* t966 = __p954;
  void* cast967 = (void*)t966;
  unsigned long t968 = __n955;
  unsigned long c969 = 4;
  unsigned long b970 = t968 * c969;
  operator_delete_2(cast967, b970);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v971, int* v972, unsigned long v973) {
bb974:
  struct std__allocator_int_* this975;
  int* __p976;
  unsigned long __n977;
  this975 = v971;
  __p976 = v972;
  __n977 = v973;
  struct std__allocator_int_* t978 = this975;
    _Bool r979 = std____is_constant_evaluated();
    if (r979) {
      int* t980 = __p976;
      void* cast981 = (void*)t980;
      operator_delete(cast981);
      return;
    }
  struct std____new_allocator_int_* base982 = (struct std____new_allocator_int_*)((char *)t978 + 0);
  int* t983 = __p976;
  unsigned long t984 = __n977;
  std____new_allocator_int___deallocate(base982, t983, t984);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v985, int* v986, unsigned long v987) {
bb988:
  struct std__allocator_int_* __a989;
  int* __p990;
  unsigned long __n991;
  __a989 = v985;
  __p990 = v986;
  __n991 = v987;
  struct std__allocator_int_* t992 = __a989;
  int* t993 = __p990;
  unsigned long t994 = __n991;
  std__allocator_int___deallocate(t992, t993, t994);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v995, int* v996, unsigned long v997) {
bb998:
  struct std___Vector_base_int__std__allocator_int__* this999;
  int* __p1000;
  unsigned long __n1001;
  this999 = v995;
  __p1000 = v996;
  __n1001 = v997;
  struct std___Vector_base_int__std__allocator_int__* t1002 = this999;
    int* t1003 = __p1000;
    _Bool cast1004 = (_Bool)t1003;
    if (cast1004) {
      struct std__allocator_int_* base1005 = (struct std__allocator_int_*)((char *)&(t1002->_M_impl) + 0);
      int* t1006 = __p1000;
      unsigned long t1007 = __n1001;
      std__allocator_traits_std__allocator_int_____deallocate(base1005, t1006, t1007);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1008) {
bb1009:
  struct std___Vector_base_int__std__allocator_int__* this1010;
  this1010 = v1008;
  struct std___Vector_base_int__std__allocator_int__* t1011 = this1010;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1012 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1011->_M_impl) + 0);
    int* t1013 = base1012->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1014 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1011->_M_impl) + 0);
    int* t1015 = base1014->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1016 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1011->_M_impl) + 0);
    int* t1017 = base1016->_M_start;
    long diff1018 = t1015 - t1017;
    unsigned long cast1019 = (unsigned long)diff1018;
    std___Vector_base_int__std__allocator_int______M_deallocate(t1011, t1013, cast1019);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t1011->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1020) {
bb1021:
  struct std____new_allocator_int_* this1022;
  this1022 = v1020;
  struct std____new_allocator_int_* t1023 = this1022;
  return;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator(struct std__allocator_int_* v1024) {
bb1025:
  struct std__allocator_int_* this1026;
  this1026 = v1024;
  struct std__allocator_int_* t1027 = this1026;
  struct std____new_allocator_int_* base1028 = (struct std____new_allocator_int_*)((char *)t1027 + 0);
  std____new_allocator_int_____new_allocator(base1028);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v1029) {
bb1030:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this1031;
  this1031 = v1029;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1032 = this1031;
  int* c1033 = ((void*)0);
  t1032->_M_start = c1033;
  int* c1034 = ((void*)0);
  t1032->_M_finish = c1034;
  int* c1035 = ((void*)0);
  t1032->_M_end_of_storage = c1035;
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v1036) {
bb1037:
  struct std__allocator_int_* this1038;
  this1038 = v1036;
  struct std__allocator_int_* t1039 = this1038;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1040, int* v1041) {
bb1042:
  int* __first1043;
  int* __last1044;
  __first1043 = v1040;
  __last1044 = v1041;
      _Bool r1045 = std____is_constant_evaluated();
      if (r1045) {
          while (1) {
            int* t1047 = __first1043;
            int* t1048 = __last1044;
            _Bool c1049 = ((t1047 != t1048)) ? 1 : 0;
            if (!c1049) break;
            int* t1050 = __first1043;
            void_std__destroy_at_int_(t1050);
          for_step1046: ;
            int* t1051 = __first1043;
            int c1052 = 1;
            int* ptr1053 = &(t1051)[c1052];
            __first1043 = ptr1053;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v1054, int* v1055, struct std__allocator_int_* v1056) {
bb1057:
  int* __first1058;
  int* __last1059;
  struct std__allocator_int_* unnamed1060;
  __first1058 = v1054;
  __last1059 = v1055;
  unnamed1060 = v1056;
  int* t1061 = __first1058;
  int* t1062 = __last1059;
  void_std___Destroy_int__(t1061, t1062);
  return;
}

