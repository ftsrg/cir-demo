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
char _str[19] = "myvector contains:";
char _str_1[2] = " ";
char _str_2[20] = "\nmyvector contains:";
char _str_3[26] = "vector::_M_realloc_append";
char _str_4[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv[77] = "reference std::vector<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_5[15] = "!this->empty()";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_6[19] = "__n < this->size()";
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0);
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std__allocator_int_* p0, int* p1, int* p2);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* p0);
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Vector_base_int__std__allocator_int__* p0);
unsigned long std__vector_int__std__allocator_int_____max_size___const(struct std__vector_int__std__allocator_int__* p0);
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
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
void void_std___Destroy_int__(int* p0, int* p1);
void void_std___Destroy_int___int_(int* p0, int* p1, struct std__allocator_int_* p2);
void std__vector_int__std__allocator_int______M_erase_at_end(struct std__vector_int__std__allocator_int__* p0, int* p1);
void std__vector_int__std__allocator_int_____clear(struct std__vector_int__std__allocator_int__* p0);
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

// function: _ZSt3maxImERKT_S2_S2_
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* v71, unsigned long* v72) {
bb73:
  unsigned long* __a74;
  unsigned long* __b75;
  unsigned long* __retval76;
  __a74 = v71;
  __b75 = v72;
    unsigned long* t77 = __a74;
    unsigned long t78 = *t77;
    unsigned long* t79 = __b75;
    unsigned long t80 = *t79;
    _Bool c81 = ((t78 < t80)) ? 1 : 0;
    if (c81) {
      unsigned long* t82 = __b75;
      __retval76 = t82;
      unsigned long* t83 = __retval76;
      return t83;
    }
  unsigned long* t84 = __a74;
  __retval76 = t84;
  unsigned long* t85 = __retval76;
  return t85;
}

// function: _ZNKSt6vectorIiSaIiEE12_M_check_lenEmPKc
unsigned long std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(struct std__vector_int__std__allocator_int__* v86, unsigned long v87, char* v88) {
bb89:
  struct std__vector_int__std__allocator_int__* this90;
  unsigned long __n91;
  char* __s92;
  unsigned long __retval93;
  unsigned long __len94;
  unsigned long ref_tmp095;
  this90 = v86;
  __n91 = v87;
  __s92 = v88;
  struct std__vector_int__std__allocator_int__* t96 = this90;
    unsigned long r97 = std__vector_int__std__allocator_int_____max_size___const(t96);
    unsigned long r98 = std__vector_int__std__allocator_int_____size___const(t96);
    unsigned long b99 = r97 - r98;
    unsigned long t100 = __n91;
    _Bool c101 = ((b99 < t100)) ? 1 : 0;
    if (c101) {
      char* t102 = __s92;
      std____throw_length_error(t102);
    }
  unsigned long r103 = std__vector_int__std__allocator_int_____size___const(t96);
  unsigned long r104 = std__vector_int__std__allocator_int_____size___const(t96);
  ref_tmp095 = r104;
  unsigned long* r105 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp095, &__n91);
  unsigned long t106 = *r105;
  unsigned long b107 = r103 + t106;
  __len94 = b107;
  unsigned long t108 = __len94;
  unsigned long r109 = std__vector_int__std__allocator_int_____size___const(t96);
  _Bool c110 = ((t108 < r109)) ? 1 : 0;
  _Bool ternary111;
  if (c110) {
    _Bool c112 = 1;
    ternary111 = (_Bool)c112;
  } else {
    unsigned long t113 = __len94;
    unsigned long r114 = std__vector_int__std__allocator_int_____max_size___const(t96);
    _Bool c115 = ((t113 > r114)) ? 1 : 0;
    ternary111 = (_Bool)c115;
  }
  unsigned long ternary116;
  if (ternary111) {
    unsigned long r117 = std__vector_int__std__allocator_int_____max_size___const(t96);
    ternary116 = (unsigned long)r117;
  } else {
    unsigned long t118 = __len94;
    ternary116 = (unsigned long)t118;
  }
  __retval93 = ternary116;
  unsigned long t119 = __retval93;
  return t119;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v120) {
bb121:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this122;
  int** __retval123;
  this122 = v120;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t124 = this122;
  __retval123 = &t124->_M_current;
  int** t125 = __retval123;
  return t125;
}

// function: _ZN9__gnu_cxxmiIPiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v126, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v127) {
bb128:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs129;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs130;
  long __retval131;
  __lhs129 = v126;
  __rhs130 = v127;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t132 = __lhs129;
  int** r133 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t132);
  int* t134 = *r133;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t135 = __rhs130;
  int** r136 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t135);
  int* t137 = *r136;
  long diff138 = t134 - t137;
  __retval131 = diff138;
  long t139 = __retval131;
  return t139;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v140, int** v141) {
bb142:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this143;
  int** __i144;
  this143 = v140;
  __i144 = v141;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t145 = this143;
  int** t146 = __i144;
  int* t147 = *t146;
  t145->_M_current = t147;
  return;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v148) {
bb149:
  struct std__vector_int__std__allocator_int__* this150;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval151;
  this150 = v148;
  struct std__vector_int__std__allocator_int__* t152 = this150;
  struct std___Vector_base_int__std__allocator_int__* base153 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t152 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base154 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base153->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval151, &base154->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t155 = __retval151;
  return t155;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v156) {
bb157:
  struct std__vector_int__std__allocator_int__* this158;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval159;
  this158 = v156;
  struct std__vector_int__std__allocator_int__* t160 = this158;
  struct std___Vector_base_int__std__allocator_int__* base161 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t160 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base162 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base161->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval159, &base162->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t163 = __retval159;
  return t163;
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v164) {
bb165:
  struct std____new_allocator_int_* this166;
  unsigned long __retval167;
  this166 = v164;
  struct std____new_allocator_int_* t168 = this166;
  unsigned long c169 = 9223372036854775807;
  unsigned long c170 = 4;
  unsigned long b171 = c169 / c170;
  __retval167 = b171;
  unsigned long t172 = __retval167;
  return t172;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v173, unsigned long v174, void* v175) {
bb176:
  struct std____new_allocator_int_* this177;
  unsigned long __n178;
  void* unnamed179;
  int* __retval180;
  this177 = v173;
  __n178 = v174;
  unnamed179 = v175;
  struct std____new_allocator_int_* t181 = this177;
    unsigned long t182 = __n178;
    unsigned long r183 = std____new_allocator_int____M_max_size___const(t181);
    _Bool c184 = ((t182 > r183)) ? 1 : 0;
    if (c184) {
        unsigned long t185 = __n178;
        unsigned long c186 = -1;
        unsigned long c187 = 4;
        unsigned long b188 = c186 / c187;
        _Bool c189 = ((t185 > b188)) ? 1 : 0;
        if (c189) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c190 = 4;
    unsigned long c191 = 16;
    _Bool c192 = ((c190 > c191)) ? 1 : 0;
    if (c192) {
      unsigned long __al193;
      unsigned long c194 = 4;
      __al193 = c194;
      unsigned long t195 = __n178;
      unsigned long c196 = 4;
      unsigned long b197 = t195 * c196;
      unsigned long t198 = __al193;
      void* r199 = operator_new_2(b197, t198);
      int* cast200 = (int*)r199;
      __retval180 = cast200;
      int* t201 = __retval180;
      return t201;
    }
  unsigned long t202 = __n178;
  unsigned long c203 = 4;
  unsigned long b204 = t202 * c203;
  void* r205 = operator_new(b204);
  int* cast206 = (int*)r205;
  __retval180 = cast206;
  int* t207 = __retval180;
  return t207;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v208, unsigned long v209) {
bb210:
  struct std__allocator_int_* this211;
  unsigned long __n212;
  int* __retval213;
  this211 = v208;
  __n212 = v209;
  struct std__allocator_int_* t214 = this211;
    _Bool r215 = std____is_constant_evaluated();
    if (r215) {
        unsigned long t216 = __n212;
        unsigned long c217 = 4;
        unsigned long ovr218;
        _Bool ovf219 = __builtin_mul_overflow(t216, c217, &ovr218);
        __n212 = ovr218;
        if (ovf219) {
          std____throw_bad_array_new_length();
        }
      unsigned long t220 = __n212;
      void* r221 = operator_new(t220);
      int* cast222 = (int*)r221;
      __retval213 = cast222;
      int* t223 = __retval213;
      return t223;
    }
  struct std____new_allocator_int_* base224 = (struct std____new_allocator_int_*)((char *)t214 + 0);
  unsigned long t225 = __n212;
  void* c226 = ((void*)0);
  int* r227 = std____new_allocator_int___allocate(base224, t225, c226);
  __retval213 = r227;
  int* t228 = __retval213;
  return t228;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v229, unsigned long v230) {
bb231:
  struct std__allocator_int_* __a232;
  unsigned long __n233;
  int* __retval234;
  __a232 = v229;
  __n233 = v230;
  struct std__allocator_int_* t235 = __a232;
  unsigned long t236 = __n233;
  int* r237 = std__allocator_int___allocate(t235, t236);
  __retval234 = r237;
  int* t238 = __retval234;
  return t238;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v239, unsigned long v240) {
bb241:
  struct std___Vector_base_int__std__allocator_int__* this242;
  unsigned long __n243;
  int* __retval244;
  this242 = v239;
  __n243 = v240;
  struct std___Vector_base_int__std__allocator_int__* t245 = this242;
  unsigned long t246 = __n243;
  unsigned long c247 = 0;
  _Bool c248 = ((t246 != c247)) ? 1 : 0;
  int* ternary249;
  if (c248) {
    struct std__allocator_int_* base250 = (struct std__allocator_int_*)((char *)&(t245->_M_impl) + 0);
    unsigned long t251 = __n243;
    int* r252 = std__allocator_traits_std__allocator_int_____allocate(base250, t251);
    ternary249 = (int*)r252;
  } else {
    int* c253 = ((void*)0);
    ternary249 = (int*)c253;
  }
  __retval244 = ternary249;
  int* t254 = __retval244;
  return t254;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocC2EPimRSt12_Vector_baseIiS0_E
void std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v255, int* v256, unsigned long v257, struct std___Vector_base_int__std__allocator_int__* v258) {
bb259:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this260;
  int* __s261;
  unsigned long __l262;
  struct std___Vector_base_int__std__allocator_int__* __vect263;
  this260 = v255;
  __s261 = v256;
  __l262 = v257;
  __vect263 = v258;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t264 = this260;
  int* t265 = __s261;
  t264->_M_storage = t265;
  unsigned long t266 = __l262;
  t264->_M_len = t266;
  struct std___Vector_base_int__std__allocator_int__* t267 = __vect263;
  t264->_M_vect = t267;
  return;
}

// function: _ZSt10to_addressIiEPT_S1_
int* int__std__to_address_int_(int* v268) {
bb269:
  int* __ptr270;
  int* __retval271;
  __ptr270 = v268;
  int* t272 = __ptr270;
  __retval271 = t272;
  int* t273 = __retval271;
  return t273;
}

// function: _ZSt12__to_addressIPiEDaRKT_
int* auto_std____to_address_int__(int** v274) {
bb275:
  int** __ptr276;
  int* __retval277;
  __ptr276 = v274;
  int** t278 = __ptr276;
  int* t279 = *t278;
  int* r280 = int__std__to_address_int_(t279);
  __retval277 = r280;
  int* t281 = __retval277;
  return t281;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb282:
  _Bool __retval283;
    _Bool c284 = 0;
    __retval283 = c284;
    _Bool t285 = __retval283;
    return t285;
  abort();
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEC2ERKS1_
void __gnu_cxx____normal_iterator_int___void_____normal_iterator(struct __gnu_cxx____normal_iterator_int____void_* v286, int** v287) {
bb288:
  struct __gnu_cxx____normal_iterator_int____void_* this289;
  int** __i290;
  this289 = v286;
  __i290 = v287;
  struct __gnu_cxx____normal_iterator_int____void_* t291 = this289;
  int** t292 = __i290;
  int* t293 = *t292;
  t291->_M_current = t293;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v294) {
bb295:
  int* __location296;
  __location296 = v294;
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE7destroyIiEEvRS0_PT_
void void_std__allocator_traits_std__allocator_int_____destroy_int_(struct std__allocator_int_* v297, int* v298) {
bb299:
  struct std__allocator_int_* __a300;
  int* __p301;
  __a300 = v297;
  __p301 = v298;
  int* t302 = __p301;
  void_std__destroy_at_int_(t302);
  return;
}

// function: _ZSt19__relocate_object_aIiiSaIiEEvPT_PT0_RT1_
void void_std____relocate_object_a_int__int__std__allocator_int___(int* v303, int* v304, struct std__allocator_int_* v305) {
bb306:
  int* __dest307;
  int* __orig308;
  struct std__allocator_int_* __alloc309;
  __dest307 = v303;
  __orig308 = v304;
  __alloc309 = v305;
  struct std__allocator_int_* t310 = __alloc309;
  int* t311 = __dest307;
  int* t312 = __orig308;
  void_std__allocator_traits_std__allocator_int_____construct_int__int_(t310, t311, t312);
  struct std__allocator_int_* t313 = __alloc309;
  int* t314 = __orig308;
  void_std__allocator_traits_std__allocator_int_____destroy_int_(t313, t314);
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivEdeEv
int* __gnu_cxx____normal_iterator_int___void___operator____const(struct __gnu_cxx____normal_iterator_int____void_* v315) {
bb316:
  struct __gnu_cxx____normal_iterator_int____void_* this317;
  int* __retval318;
  this317 = v315;
  struct __gnu_cxx____normal_iterator_int____void_* t319 = this317;
  int* t320 = t319->_M_current;
  __retval318 = t320;
  int* t321 = __retval318;
  return t321;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEppEv
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator__(struct __gnu_cxx____normal_iterator_int____void_* v322) {
bb323:
  struct __gnu_cxx____normal_iterator_int____void_* this324;
  struct __gnu_cxx____normal_iterator_int____void_* __retval325;
  this324 = v322;
  struct __gnu_cxx____normal_iterator_int____void_* t326 = this324;
  int* t327 = t326->_M_current;
  int c328 = 1;
  int* ptr329 = &(t327)[c328];
  t326->_M_current = ptr329;
  __retval325 = t326;
  struct __gnu_cxx____normal_iterator_int____void_* t330 = __retval325;
  return t330;
}

// function: _ZSt14__relocate_a_1IPiN9__gnu_cxx17__normal_iteratorIS0_vEESaIiEET0_T_S6_S5_RT1_
struct __gnu_cxx____normal_iterator_int____void_ __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(int* v331, int* v332, struct __gnu_cxx____normal_iterator_int____void_ v333, struct std__allocator_int_* v334) {
bb335:
  int* __first336;
  int* __last337;
  struct __gnu_cxx____normal_iterator_int____void_ __result338;
  struct std__allocator_int_* __alloc339;
  struct __gnu_cxx____normal_iterator_int____void_ __retval340;
  __first336 = v331;
  __last337 = v332;
  __result338 = v333;
  __alloc339 = v334;
  __retval340 = __result338; // copy
    while (1) {
      int* t342 = __first336;
      int* t343 = __last337;
      _Bool c344 = ((t342 != t343)) ? 1 : 0;
      if (!c344) break;
      int* r345 = __gnu_cxx____normal_iterator_int___void___operator____const(&__retval340);
      int* t346 = __first336;
      struct std__allocator_int_* t347 = __alloc339;
      void_std____relocate_object_a_int__int__std__allocator_int___(r345, t346, t347);
    for_step341: ;
      int* t348 = __first336;
      int c349 = 1;
      int* ptr350 = &(t348)[c349];
      __first336 = ptr350;
      struct __gnu_cxx____normal_iterator_int____void_* r351 = __gnu_cxx____normal_iterator_int___void___operator__(&__retval340);
    }
  struct __gnu_cxx____normal_iterator_int____void_ t352 = __retval340;
  return t352;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEaSEOS2_
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator_(struct __gnu_cxx____normal_iterator_int____void_* v353, struct __gnu_cxx____normal_iterator_int____void_* v354) {
bb355:
  struct __gnu_cxx____normal_iterator_int____void_* this356;
  struct __gnu_cxx____normal_iterator_int____void_* unnamed357;
  struct __gnu_cxx____normal_iterator_int____void_* __retval358;
  this356 = v353;
  unnamed357 = v354;
  struct __gnu_cxx____normal_iterator_int____void_* t359 = this356;
  struct __gnu_cxx____normal_iterator_int____void_* t360 = unnamed357;
  int* t361 = t360->_M_current;
  t359->_M_current = t361;
  __retval358 = t359;
  struct __gnu_cxx____normal_iterator_int____void_* t362 = __retval358;
  return t362;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivE4baseEv
int** __gnu_cxx____normal_iterator_int___void___base___const(struct __gnu_cxx____normal_iterator_int____void_* v363) {
bb364:
  struct __gnu_cxx____normal_iterator_int____void_* this365;
  int** __retval366;
  this365 = v363;
  struct __gnu_cxx____normal_iterator_int____void_* t367 = this365;
  __retval366 = &t367->_M_current;
  int** t368 = __retval366;
  return t368;
}

// function: _ZSt14__relocate_a_1IiiENSt9enable_ifIXsr3std24__is_bitwise_relocatableIT_EE5valueEPS1_E4typeES2_S2_S2_RSaIT0_E
int* std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(int* v369, int* v370, int* v371, struct std__allocator_int_* v372) {
bb373:
  int* __first374;
  int* __last375;
  int* __result376;
  struct std__allocator_int_* __alloc377;
  int* __retval378;
  long __count379;
  __first374 = v369;
  __last375 = v370;
  __result376 = v371;
  __alloc377 = v372;
  int* t380 = __last375;
  int* t381 = __first374;
  long diff382 = t380 - t381;
  __count379 = diff382;
    long t383 = __count379;
    long c384 = 0;
    _Bool c385 = ((t383 > c384)) ? 1 : 0;
    if (c385) {
        _Bool r386 = std__is_constant_evaluated();
        if (r386) {
          struct __gnu_cxx____normal_iterator_int____void_ __out387;
          struct __gnu_cxx____normal_iterator_int____void_ ref_tmp0388;
          struct __gnu_cxx____normal_iterator_int____void_ agg_tmp0389;
          __gnu_cxx____normal_iterator_int___void_____normal_iterator(&__out387, &__result376);
          int* t390 = __first374;
          int* t391 = __last375;
          agg_tmp0389 = __out387; // copy
          struct std__allocator_int_* t392 = __alloc377;
          struct __gnu_cxx____normal_iterator_int____void_ t393 = agg_tmp0389;
          struct __gnu_cxx____normal_iterator_int____void_ r394 = __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(t390, t391, t393, t392);
          ref_tmp0388 = r394;
          struct __gnu_cxx____normal_iterator_int____void_* r395 = __gnu_cxx____normal_iterator_int___void___operator_(&__out387, &ref_tmp0388);
          int** r396 = __gnu_cxx____normal_iterator_int___void___base___const(&__out387);
          int* t397 = *r396;
          __retval378 = t397;
          int* t398 = __retval378;
          return t398;
        }
      int* t399 = __result376;
      void* cast400 = (void*)t399;
      int* t401 = __first374;
      void* cast402 = (void*)t401;
      long t403 = __count379;
      unsigned long cast404 = (unsigned long)t403;
      unsigned long c405 = 4;
      unsigned long b406 = cast404 * c405;
      void* r407 = memcpy(cast400, cast402, b406);
    }
  int* t408 = __result376;
  long t409 = __count379;
  int* ptr410 = &(t408)[t409];
  __retval378 = ptr410;
  int* t411 = __retval378;
  return t411;
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v412) {
bb413:
  int* __it414;
  int* __retval415;
  __it414 = v412;
  int* t416 = __it414;
  __retval415 = t416;
  int* t417 = __retval415;
  return t417;
}

// function: _ZSt12__relocate_aIPiS0_SaIiEET0_T_S3_S2_RT1_
int* int__std____relocate_a_int___int___std__allocator_int___(int* v418, int* v419, int* v420, struct std__allocator_int_* v421) {
bb422:
  int* __first423;
  int* __last424;
  int* __result425;
  struct std__allocator_int_* __alloc426;
  int* __retval427;
  __first423 = v418;
  __last424 = v419;
  __result425 = v420;
  __alloc426 = v421;
  int* t428 = __first423;
  int* r429 = int__std____niter_base_int__(t428);
  int* t430 = __last424;
  int* r431 = int__std____niter_base_int__(t430);
  int* t432 = __result425;
  int* r433 = int__std____niter_base_int__(t432);
  struct std__allocator_int_* t434 = __alloc426;
  int* r435 = std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(r429, r431, r433, t434);
  __retval427 = r435;
  int* t436 = __retval427;
  return t436;
}

// function: _ZNSt6vectorIiSaIiEE11_S_relocateEPiS2_S2_RS0_
int* std__vector_int__std__allocator_int______S_relocate(int* v437, int* v438, int* v439, struct std__allocator_int_* v440) {
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
  int* t448 = __last443;
  int* t449 = __result444;
  struct std__allocator_int_* t450 = __alloc445;
  int* r451 = int__std____relocate_a_int___int___std__allocator_int___(t447, t448, t449, t450);
  __retval446 = r451;
  int* t452 = __retval446;
  return t452;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v453) {
bb454:
  struct std___Vector_base_int__std__allocator_int__* this455;
  struct std__allocator_int_* __retval456;
  this455 = v453;
  struct std___Vector_base_int__std__allocator_int__* t457 = this455;
  struct std__allocator_int_* base458 = (struct std__allocator_int_*)((char *)&(t457->_M_impl) + 0);
  __retval456 = base458;
  struct std__allocator_int_* t459 = __retval456;
  return t459;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocD2Ev
void std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v460) {
bb461:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this462;
  this462 = v460;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t463 = this462;
    int* t464 = t463->_M_storage;
    _Bool cast465 = (_Bool)t464;
    if (cast465) {
      struct std___Vector_base_int__std__allocator_int__* t466 = t463->_M_vect;
      int* t467 = t463->_M_storage;
      unsigned long t468 = t463->_M_len;
      std___Vector_base_int__std__allocator_int______M_deallocate(t466, t467, t468);
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_M_realloc_appendIJiEEEvDpOT_
void void_std__vector_int__std__allocator_int______M_realloc_append_int_(struct std__vector_int__std__allocator_int__* v469, int* v470) {
bb471:
  struct std__vector_int__std__allocator_int__* this472;
  int* __args473;
  unsigned long __len474;
  int* __old_start475;
  int* __old_finish476;
  unsigned long __elems477;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0478;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1479;
  int* __new_start480;
  int* __new_finish481;
  this472 = v469;
  __args473 = v470;
  struct std__vector_int__std__allocator_int__* t482 = this472;
  unsigned long c483 = 1;
  char* cast484 = (char*)&(_str_3);
  unsigned long r485 = std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(t482, c483, cast484);
  __len474 = r485;
    unsigned long t486 = __len474;
    unsigned long c487 = 0;
    _Bool c488 = ((t486 <= c487)) ? 1 : 0;
    if (c488) {
      __builtin_unreachable();
    }
  struct std___Vector_base_int__std__allocator_int__* base489 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t482 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base490 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base489->_M_impl) + 0);
  int* t491 = base490->_M_start;
  __old_start475 = t491;
  struct std___Vector_base_int__std__allocator_int__* base492 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t482 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base493 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base492->_M_impl) + 0);
  int* t494 = base493->_M_finish;
  __old_finish476 = t494;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r495 = std__vector_int__std__allocator_int_____end(t482);
  ref_tmp0478 = r495;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r496 = std__vector_int__std__allocator_int_____begin(t482);
  ref_tmp1479 = r496;
  long r497 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&ref_tmp0478, &ref_tmp1479);
  unsigned long cast498 = (unsigned long)r497;
  __elems477 = cast498;
  struct std___Vector_base_int__std__allocator_int__* base499 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t482 + 0);
  unsigned long t500 = __len474;
  int* r501 = std___Vector_base_int__std__allocator_int______M_allocate(base499, t500);
  __new_start480 = r501;
  int* t502 = __new_start480;
  __new_finish481 = t502;
    struct std__vector_int__std__allocator_int_____Guard_alloc __guard503;
    int* ref_tmp2504;
    int* t505 = __new_start480;
    unsigned long t506 = __len474;
    struct std___Vector_base_int__std__allocator_int__* base507 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t482 + 0);
    std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(&__guard503, t505, t506, base507);
      struct std___Vector_base_int__std__allocator_int__* base508 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t482 + 0);
      struct std__allocator_int_* base509 = (struct std__allocator_int_*)((char *)&(base508->_M_impl) + 0);
      int* t510 = __new_start480;
      unsigned long t511 = __elems477;
      int* ptr512 = &(t510)[t511];
      ref_tmp2504 = ptr512;
      int* r513 = auto_std____to_address_int__(&ref_tmp2504);
      int* t514 = __args473;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_(base509, r513, t514);
        int* t515 = __old_start475;
        int* t516 = __old_finish476;
        int* t517 = __new_start480;
        struct std___Vector_base_int__std__allocator_int__* base518 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t482 + 0);
        struct std__allocator_int_* r519 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base518);
        int* r520 = std__vector_int__std__allocator_int______S_relocate(t515, t516, t517, r519);
        __new_finish481 = r520;
        int* t521 = __new_finish481;
        int c522 = 1;
        int* ptr523 = &(t521)[c522];
        __new_finish481 = ptr523;
      int* t524 = __old_start475;
      __guard503._M_storage = t524;
      struct std___Vector_base_int__std__allocator_int__* base525 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t482 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base526 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base525->_M_impl) + 0);
      int* t527 = base526->_M_end_of_storage;
      int* t528 = __old_start475;
      long diff529 = t527 - t528;
      unsigned long cast530 = (unsigned long)diff529;
      __guard503._M_len = cast530;
    {
      std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(&__guard503);
    }
  int* t531 = __new_start480;
  struct std___Vector_base_int__std__allocator_int__* base532 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t482 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base533 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base532->_M_impl) + 0);
  base533->_M_start = t531;
  int* t534 = __new_finish481;
  struct std___Vector_base_int__std__allocator_int__* base535 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t482 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base536 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base535->_M_impl) + 0);
  base536->_M_finish = t534;
  int* t537 = __new_start480;
  unsigned long t538 = __len474;
  int* ptr539 = &(t537)[t538];
  struct std___Vector_base_int__std__allocator_int__* base540 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t482 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base541 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base540->_M_impl) + 0);
  base541->_M_end_of_storage = ptr539;
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v542) {
bb543:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this544;
  int** __retval545;
  this544 = v542;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t546 = this544;
  __retval545 = &t546->_M_current;
  int** t547 = __retval545;
  return t547;
}

// function: _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v548, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v549) {
bb550:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __lhs551;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __rhs552;
  _Bool __retval553;
  __lhs551 = v548;
  __rhs552 = v549;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t554 = __lhs551;
  int** r555 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t554);
  int* t556 = *r555;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t557 = __rhs552;
  int** r558 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t557);
  int* t559 = *r558;
  _Bool c560 = ((t556 == t559)) ? 1 : 0;
  __retval553 = c560;
  _Bool t561 = __retval553;
  return t561;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2ERKS2_
void __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v562, int** v563) {
bb564:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this565;
  int** __i566;
  this565 = v562;
  __i566 = v563;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t567 = this565;
  int** t568 = __i566;
  int* t569 = *t568;
  t567->_M_current = t569;
  return;
}

// function: _ZNKSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin___const(struct std__vector_int__std__allocator_int__* v570) {
bb571:
  struct std__vector_int__std__allocator_int__* this572;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __retval573;
  this572 = v570;
  struct std__vector_int__std__allocator_int__* t574 = this572;
  struct std___Vector_base_int__std__allocator_int__* base575 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t574 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base576 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base575->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(&__retval573, &base576->_M_start);
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t577 = __retval573;
  return t577;
}

// function: _ZNKSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end___const(struct std__vector_int__std__allocator_int__* v578) {
bb579:
  struct std__vector_int__std__allocator_int__* this580;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __retval581;
  this580 = v578;
  struct std__vector_int__std__allocator_int__* t582 = this580;
  struct std___Vector_base_int__std__allocator_int__* base583 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t582 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base584 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base583->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(&__retval581, &base584->_M_finish);
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t585 = __retval581;
  return t585;
}

// function: _ZNKSt6vectorIiSaIiEE5emptyEv
_Bool std__vector_int__std__allocator_int_____empty___const(struct std__vector_int__std__allocator_int__* v586) {
bb587:
  struct std__vector_int__std__allocator_int__* this588;
  _Bool __retval589;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ ref_tmp0590;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ ref_tmp1591;
  this588 = v586;
  struct std__vector_int__std__allocator_int__* t592 = this588;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r593 = std__vector_int__std__allocator_int_____begin___const(t592);
  ref_tmp0590 = r593;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r594 = std__vector_int__std__allocator_int_____end___const(t592);
  ref_tmp1591 = r594;
  _Bool r595 = _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&ref_tmp0590, &ref_tmp1591);
  __retval589 = r595;
  _Bool t596 = __retval589;
  return t596;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEmiEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v597, long v598) {
bb599:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this600;
  long __n601;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval602;
  int* ref_tmp0603;
  this600 = v597;
  __n601 = v598;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t604 = this600;
  int* t605 = t604->_M_current;
  long t606 = __n601;
  long u607 = -t606;
  int* ptr608 = &(t605)[u607];
  ref_tmp0603 = ptr608;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval602, &ref_tmp0603);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t609 = __retval602;
  return t609;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v610) {
bb611:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this612;
  int* __retval613;
  this612 = v610;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t614 = this612;
  int* t615 = t614->_M_current;
  __retval613 = t615;
  int* t616 = __retval613;
  return t616;
}

// function: _ZNSt6vectorIiSaIiEE4backEv
int* std__vector_int__std__allocator_int_____back(struct std__vector_int__std__allocator_int__* v617) {
bb618:
  struct std__vector_int__std__allocator_int__* this619;
  int* __retval620;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0621;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1622;
  this619 = v617;
  struct std__vector_int__std__allocator_int__* t623 = this619;
    do {
          _Bool r624 = std__vector_int__std__allocator_int_____empty___const(t623);
          if (r624) {
            char* cast625 = (char*)&(_str_4);
            int c626 = 1370;
            char* cast627 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv);
            char* cast628 = (char*)&(_str_5);
            std____glibcxx_assert_fail(cast625, c626, cast627, cast628);
          }
      _Bool c629 = 0;
      if (!c629) break;
    } while (1);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r630 = std__vector_int__std__allocator_int_____end(t623);
  ref_tmp1622 = r630;
  long c631 = 1;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r632 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&ref_tmp1622, c631);
  ref_tmp0621 = r632;
  int* r633 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp0621);
  __retval620 = r633;
  int* t634 = __retval620;
  return t634;
}

// function: _ZNSt6vectorIiSaIiEE12emplace_backIJiEEERiDpOT_
int* int__std__vector_int__std__allocator_int_____emplace_back_int_(struct std__vector_int__std__allocator_int__* v635, int* v636) {
bb637:
  struct std__vector_int__std__allocator_int__* this638;
  int* __args639;
  int* __retval640;
  this638 = v635;
  __args639 = v636;
  struct std__vector_int__std__allocator_int__* t641 = this638;
    struct std___Vector_base_int__std__allocator_int__* base642 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t641 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base643 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base642->_M_impl) + 0);
    int* t644 = base643->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base645 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t641 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base646 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base645->_M_impl) + 0);
    int* t647 = base646->_M_end_of_storage;
    _Bool c648 = ((t644 != t647)) ? 1 : 0;
    if (c648) {
      struct std___Vector_base_int__std__allocator_int__* base649 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t641 + 0);
      struct std__allocator_int_* base650 = (struct std__allocator_int_*)((char *)&(base649->_M_impl) + 0);
      struct std___Vector_base_int__std__allocator_int__* base651 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t641 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base652 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base651->_M_impl) + 0);
      int* t653 = base652->_M_finish;
      int* t654 = __args639;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_(base650, t653, t654);
      struct std___Vector_base_int__std__allocator_int__* base655 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t641 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base656 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base655->_M_impl) + 0);
      int* t657 = base656->_M_finish;
      int c658 = 1;
      int* ptr659 = &(t657)[c658];
      base656->_M_finish = ptr659;
    } else {
      int* t660 = __args639;
      void_std__vector_int__std__allocator_int______M_realloc_append_int_(t641, t660);
    }
  int* r661 = std__vector_int__std__allocator_int_____back(t641);
  __retval640 = r661;
  int* t662 = __retval640;
  return t662;
}

// function: _ZNSt6vectorIiSaIiEE9push_backEOi
void std__vector_int__std__allocator_int_____push_back(struct std__vector_int__std__allocator_int__* v663, int* v664) {
bb665:
  struct std__vector_int__std__allocator_int__* this666;
  int* __x667;
  this666 = v663;
  __x667 = v664;
  struct std__vector_int__std__allocator_int__* t668 = this666;
  int* t669 = __x667;
  int* r670 = int__std__vector_int__std__allocator_int_____emplace_back_int_(t668, t669);
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v671, int v672) {
bb673:
  int __a674;
  int __b675;
  int __retval676;
  __a674 = v671;
  __b675 = v672;
  int t677 = __a674;
  int t678 = __b675;
  int b679 = t677 | t678;
  __retval676 = b679;
  int t680 = __retval676;
  return t680;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v681) {
bb682:
  struct std__basic_ios_char__std__char_traits_char__* this683;
  int __retval684;
  this683 = v681;
  struct std__basic_ios_char__std__char_traits_char__* t685 = this683;
  struct std__ios_base* base686 = (struct std__ios_base*)((char *)t685 + 0);
  int t687 = base686->_M_streambuf_state;
  __retval684 = t687;
  int t688 = __retval684;
  return t688;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v689, int v690) {
bb691:
  struct std__basic_ios_char__std__char_traits_char__* this692;
  int __state693;
  this692 = v689;
  __state693 = v690;
  struct std__basic_ios_char__std__char_traits_char__* t694 = this692;
  int r695 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t694);
  int t696 = __state693;
  int r697 = std__operator_(r695, t696);
  std__basic_ios_char__std__char_traits_char_____clear(t694, r697);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v698, char* v699) {
bb700:
  char* __c1701;
  char* __c2702;
  _Bool __retval703;
  __c1701 = v698;
  __c2702 = v699;
  char* t704 = __c1701;
  char t705 = *t704;
  int cast706 = (int)t705;
  char* t707 = __c2702;
  char t708 = *t707;
  int cast709 = (int)t708;
  _Bool c710 = ((cast706 == cast709)) ? 1 : 0;
  __retval703 = c710;
  _Bool t711 = __retval703;
  return t711;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v712) {
bb713:
  char* __p714;
  unsigned long __retval715;
  unsigned long __i716;
  __p714 = v712;
  unsigned long c717 = 0;
  __i716 = c717;
    char ref_tmp0718;
    while (1) {
      unsigned long t719 = __i716;
      char* t720 = __p714;
      char* ptr721 = &(t720)[t719];
      char c722 = 0;
      ref_tmp0718 = c722;
      _Bool r723 = __gnu_cxx__char_traits_char___eq(ptr721, &ref_tmp0718);
      _Bool u724 = !r723;
      if (!u724) break;
      unsigned long t725 = __i716;
      unsigned long u726 = t725 + 1;
      __i716 = u726;
    }
  unsigned long t727 = __i716;
  __retval715 = t727;
  unsigned long t728 = __retval715;
  return t728;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v729) {
bb730:
  char* __s731;
  unsigned long __retval732;
  __s731 = v729;
    _Bool r733 = std____is_constant_evaluated();
    if (r733) {
      char* t734 = __s731;
      unsigned long r735 = __gnu_cxx__char_traits_char___length(t734);
      __retval732 = r735;
      unsigned long t736 = __retval732;
      return t736;
    }
  char* t737 = __s731;
  unsigned long r738 = strlen(t737);
  __retval732 = r738;
  unsigned long t739 = __retval732;
  return t739;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v740, char* v741) {
bb742:
  struct std__basic_ostream_char__std__char_traits_char__* __out743;
  char* __s744;
  struct std__basic_ostream_char__std__char_traits_char__* __retval745;
  __out743 = v740;
  __s744 = v741;
    char* t746 = __s744;
    _Bool cast747 = (_Bool)t746;
    _Bool u748 = !cast747;
    if (u748) {
      struct std__basic_ostream_char__std__char_traits_char__* t749 = __out743;
      void** v750 = (void**)t749;
      void* v751 = *((void**)v750);
      unsigned char* cast752 = (unsigned char*)v751;
      long c753 = -24;
      unsigned char* ptr754 = &(cast752)[c753];
      long* cast755 = (long*)ptr754;
      long t756 = *cast755;
      unsigned char* cast757 = (unsigned char*)t749;
      unsigned char* ptr758 = &(cast757)[t756];
      struct std__basic_ostream_char__std__char_traits_char__* cast759 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr758;
      struct std__basic_ios_char__std__char_traits_char__* cast760 = (struct std__basic_ios_char__std__char_traits_char__*)cast759;
      int t761 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast760, t761);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t762 = __out743;
      char* t763 = __s744;
      char* t764 = __s744;
      unsigned long r765 = std__char_traits_char___length(t764);
      long cast766 = (long)r765;
      struct std__basic_ostream_char__std__char_traits_char__* r767 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t762, t763, cast766);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t768 = __out743;
  __retval745 = t768;
  struct std__basic_ostream_char__std__char_traits_char__* t769 = __retval745;
  return t769;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v770) {
bb771:
  struct std__vector_int__std__allocator_int__* this772;
  unsigned long __retval773;
  long __dif774;
  this772 = v770;
  struct std__vector_int__std__allocator_int__* t775 = this772;
  struct std___Vector_base_int__std__allocator_int__* base776 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t775 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base777 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base776->_M_impl) + 0);
  int* t778 = base777->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base779 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t775 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base780 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base779->_M_impl) + 0);
  int* t781 = base780->_M_start;
  long diff782 = t778 - t781;
  __dif774 = diff782;
    long t783 = __dif774;
    long c784 = 0;
    _Bool c785 = ((t783 < c784)) ? 1 : 0;
    if (c785) {
      __builtin_unreachable();
    }
  long t786 = __dif774;
  unsigned long cast787 = (unsigned long)t786;
  __retval773 = cast787;
  unsigned long t788 = __retval773;
  return t788;
}

// function: _ZNSt6vectorIiSaIiEEixEm
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* v789, unsigned long v790) {
bb791:
  struct std__vector_int__std__allocator_int__* this792;
  unsigned long __n793;
  int* __retval794;
  this792 = v789;
  __n793 = v790;
  struct std__vector_int__std__allocator_int__* t795 = this792;
    do {
          unsigned long t796 = __n793;
          unsigned long r797 = std__vector_int__std__allocator_int_____size___const(t795);
          _Bool c798 = ((t796 < r797)) ? 1 : 0;
          _Bool u799 = !c798;
          if (u799) {
            char* cast800 = (char*)&(_str_4);
            int c801 = 1263;
            char* cast802 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm);
            char* cast803 = (char*)&(_str_6);
            std____glibcxx_assert_fail(cast800, c801, cast802, cast803);
          }
      _Bool c804 = 0;
      if (!c804) break;
    } while (1);
  struct std___Vector_base_int__std__allocator_int__* base805 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t795 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base806 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base805->_M_impl) + 0);
  int* t807 = base806->_M_start;
  unsigned long t808 = __n793;
  int* ptr809 = &(t807)[t808];
  __retval794 = ptr809;
  int* t810 = __retval794;
  return t810;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v811, int* v812) {
bb813:
  int* __first814;
  int* __last815;
  __first814 = v811;
  __last815 = v812;
      _Bool r816 = std____is_constant_evaluated();
      if (r816) {
          while (1) {
            int* t818 = __first814;
            int* t819 = __last815;
            _Bool c820 = ((t818 != t819)) ? 1 : 0;
            if (!c820) break;
            int* t821 = __first814;
            void_std__destroy_at_int_(t821);
          for_step817: ;
            int* t822 = __first814;
            int c823 = 1;
            int* ptr824 = &(t822)[c823];
            __first814 = ptr824;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v825, int* v826, struct std__allocator_int_* v827) {
bb828:
  int* __first829;
  int* __last830;
  struct std__allocator_int_* unnamed831;
  __first829 = v825;
  __last830 = v826;
  unnamed831 = v827;
  int* t832 = __first829;
  int* t833 = __last830;
  void_std___Destroy_int__(t832, t833);
  return;
}

// function: _ZNSt6vectorIiSaIiEE15_M_erase_at_endEPi
void std__vector_int__std__allocator_int______M_erase_at_end(struct std__vector_int__std__allocator_int__* v834, int* v835) {
bb836:
  struct std__vector_int__std__allocator_int__* this837;
  int* __pos838;
  this837 = v834;
  __pos838 = v835;
  struct std__vector_int__std__allocator_int__* t839 = this837;
    unsigned long __n840;
    struct std___Vector_base_int__std__allocator_int__* base841 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t839 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base842 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base841->_M_impl) + 0);
    int* t843 = base842->_M_finish;
    int* t844 = __pos838;
    long diff845 = t843 - t844;
    unsigned long cast846 = (unsigned long)diff845;
    __n840 = cast846;
    unsigned long t847 = __n840;
    _Bool cast848 = (_Bool)t847;
    if (cast848) {
      int* t849 = __pos838;
      struct std___Vector_base_int__std__allocator_int__* base850 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t839 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base851 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base850->_M_impl) + 0);
      int* t852 = base851->_M_finish;
      struct std___Vector_base_int__std__allocator_int__* base853 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t839 + 0);
      struct std__allocator_int_* r854 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base853);
      void_std___Destroy_int___int_(t849, t852, r854);
      int* t855 = __pos838;
      struct std___Vector_base_int__std__allocator_int__* base856 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t839 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base857 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base856->_M_impl) + 0);
      base857->_M_finish = t855;
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE5clearEv
void std__vector_int__std__allocator_int_____clear(struct std__vector_int__std__allocator_int__* v858) {
bb859:
  struct std__vector_int__std__allocator_int__* this860;
  this860 = v858;
  struct std__vector_int__std__allocator_int__* t861 = this860;
  struct std___Vector_base_int__std__allocator_int__* base862 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t861 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base863 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base862->_M_impl) + 0);
  int* t864 = base863->_M_start;
  std__vector_int__std__allocator_int______M_erase_at_end(t861, t864);
  return;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v865, void* v866) {
bb867:
  struct std__basic_ostream_char__std__char_traits_char__* this868;
  void* __pf869;
  struct std__basic_ostream_char__std__char_traits_char__* __retval870;
  this868 = v865;
  __pf869 = v866;
  struct std__basic_ostream_char__std__char_traits_char__* t871 = this868;
  void* t872 = __pf869;
  struct std__basic_ostream_char__std__char_traits_char__* r873 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t872)(t871);
  __retval870 = r873;
  struct std__basic_ostream_char__std__char_traits_char__* t874 = __retval870;
  return t874;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v875) {
bb876:
  struct std__basic_ostream_char__std__char_traits_char__* __os877;
  struct std__basic_ostream_char__std__char_traits_char__* __retval878;
  __os877 = v875;
  struct std__basic_ostream_char__std__char_traits_char__* t879 = __os877;
  struct std__basic_ostream_char__std__char_traits_char__* r880 = std__ostream__flush(t879);
  __retval878 = r880;
  struct std__basic_ostream_char__std__char_traits_char__* t881 = __retval878;
  return t881;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v882) {
bb883:
  struct std__ctype_char_* __f884;
  struct std__ctype_char_* __retval885;
  __f884 = v882;
    struct std__ctype_char_* t886 = __f884;
    _Bool cast887 = (_Bool)t886;
    _Bool u888 = !cast887;
    if (u888) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t889 = __f884;
  __retval885 = t889;
  struct std__ctype_char_* t890 = __retval885;
  return t890;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v891, char v892) {
bb893:
  struct std__ctype_char_* this894;
  char __c895;
  char __retval896;
  this894 = v891;
  __c895 = v892;
  struct std__ctype_char_* t897 = this894;
    char t898 = t897->_M_widen_ok;
    _Bool cast899 = (_Bool)t898;
    if (cast899) {
      char t900 = __c895;
      unsigned char cast901 = (unsigned char)t900;
      unsigned long cast902 = (unsigned long)cast901;
      char t903 = t897->_M_widen[cast902];
      __retval896 = t903;
      char t904 = __retval896;
      return t904;
    }
  std__ctype_char____M_widen_init___const(t897);
  char t905 = __c895;
  void** v906 = (void**)t897;
  void* v907 = *((void**)v906);
  char vcall910 = (char)__VERIFIER_virtual_call_char_char(t897, 6, t905);
  __retval896 = vcall910;
  char t911 = __retval896;
  return t911;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v912, char v913) {
bb914:
  struct std__basic_ios_char__std__char_traits_char__* this915;
  char __c916;
  char __retval917;
  this915 = v912;
  __c916 = v913;
  struct std__basic_ios_char__std__char_traits_char__* t918 = this915;
  struct std__ctype_char_* t919 = t918->_M_ctype;
  struct std__ctype_char_* r920 = std__ctype_char__const__std____check_facet_std__ctype_char___(t919);
  char t921 = __c916;
  char r922 = std__ctype_char___widen_char__const(r920, t921);
  __retval917 = r922;
  char t923 = __retval917;
  return t923;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v924) {
bb925:
  struct std__basic_ostream_char__std__char_traits_char__* __os926;
  struct std__basic_ostream_char__std__char_traits_char__* __retval927;
  __os926 = v924;
  struct std__basic_ostream_char__std__char_traits_char__* t928 = __os926;
  struct std__basic_ostream_char__std__char_traits_char__* t929 = __os926;
  void** v930 = (void**)t929;
  void* v931 = *((void**)v930);
  unsigned char* cast932 = (unsigned char*)v931;
  long c933 = -24;
  unsigned char* ptr934 = &(cast932)[c933];
  long* cast935 = (long*)ptr934;
  long t936 = *cast935;
  unsigned char* cast937 = (unsigned char*)t929;
  unsigned char* ptr938 = &(cast937)[t936];
  struct std__basic_ostream_char__std__char_traits_char__* cast939 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr938;
  struct std__basic_ios_char__std__char_traits_char__* cast940 = (struct std__basic_ios_char__std__char_traits_char__*)cast939;
  char c941 = 10;
  char r942 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast940, c941);
  struct std__basic_ostream_char__std__char_traits_char__* r943 = std__ostream__put(t928, r942);
  struct std__basic_ostream_char__std__char_traits_char__* r944 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r943);
  __retval927 = r944;
  struct std__basic_ostream_char__std__char_traits_char__* t945 = __retval927;
  return t945;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v946) {
bb947:
  struct std__vector_int__std__allocator_int__* this948;
  this948 = v946;
  struct std__vector_int__std__allocator_int__* t949 = this948;
    struct std___Vector_base_int__std__allocator_int__* base950 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t949 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base951 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base950->_M_impl) + 0);
    int* t952 = base951->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base953 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t949 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base954 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base953->_M_impl) + 0);
    int* t955 = base954->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base956 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t949 + 0);
    struct std__allocator_int_* r957 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base956);
    void_std___Destroy_int___int_(t952, t955, r957);
  {
    struct std___Vector_base_int__std__allocator_int__* base958 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t949 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base958);
  }
  return;
}

// function: main
int main() {
bb959:
  int __retval960;
  unsigned int i961;
  struct std__vector_int__std__allocator_int__ myvector962;
  int ref_tmp0963;
  int ref_tmp1964;
  int ref_tmp2965;
  int ref_tmp3966;
  int ref_tmp4967;
  int c968 = 0;
  __retval960 = c968;
  std__vector_int__std__allocator_int_____vector(&myvector962);
    int c969 = 100;
    ref_tmp0963 = c969;
    std__vector_int__std__allocator_int_____push_back(&myvector962, &ref_tmp0963);
    int c970 = 200;
    ref_tmp1964 = c970;
    std__vector_int__std__allocator_int_____push_back(&myvector962, &ref_tmp1964);
    int c971 = 300;
    ref_tmp2965 = c971;
    std__vector_int__std__allocator_int_____push_back(&myvector962, &ref_tmp2965);
    char* cast972 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* r973 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast972);
      unsigned int c974 = 0;
      i961 = c974;
      while (1) {
        unsigned int t976 = i961;
        unsigned long cast977 = (unsigned long)t976;
        unsigned long r978 = std__vector_int__std__allocator_int_____size___const(&myvector962);
        _Bool c979 = ((cast977 < r978)) ? 1 : 0;
        if (!c979) break;
        char* cast980 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* r981 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast980);
        unsigned int t982 = i961;
        unsigned long cast983 = (unsigned long)t982;
        int* r984 = std__vector_int__std__allocator_int_____operator__(&myvector962, cast983);
        int t985 = *r984;
        struct std__basic_ostream_char__std__char_traits_char__* r986 = std__ostream__operator__(r981, t985);
      for_step975: ;
        unsigned int t987 = i961;
        unsigned int u988 = t987 + 1;
        i961 = u988;
      }
    std__vector_int__std__allocator_int_____clear(&myvector962);
    int c989 = 1101;
    ref_tmp3966 = c989;
    std__vector_int__std__allocator_int_____push_back(&myvector962, &ref_tmp3966);
    int c990 = 2202;
    ref_tmp4967 = c990;
    std__vector_int__std__allocator_int_____push_back(&myvector962, &ref_tmp4967);
    char* cast991 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* r992 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast991);
      unsigned int c993 = 0;
      i961 = c993;
      while (1) {
        unsigned int t995 = i961;
        unsigned long cast996 = (unsigned long)t995;
        unsigned long r997 = std__vector_int__std__allocator_int_____size___const(&myvector962);
        _Bool c998 = ((cast996 < r997)) ? 1 : 0;
        if (!c998) break;
        char* cast999 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* r1000 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast999);
        unsigned int t1001 = i961;
        unsigned long cast1002 = (unsigned long)t1001;
        int* r1003 = std__vector_int__std__allocator_int_____operator__(&myvector962, cast1002);
        int t1004 = *r1003;
        struct std__basic_ostream_char__std__char_traits_char__* r1005 = std__ostream__operator__(r1000, t1004);
      for_step994: ;
        unsigned int t1006 = i961;
        unsigned int u1007 = t1006 + 1;
        i961 = u1007;
      }
    struct std__basic_ostream_char__std__char_traits_char__* r1008 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c1009 = 0;
    __retval960 = c1009;
    int t1010 = __retval960;
    int ret_val1011 = t1010;
    {
      std__vector_int__std__allocator_int______vector(&myvector962);
    }
    return ret_val1011;
  int t1012 = __retval960;
  return t1012;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE
void _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1013) {
bb1014:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1015;
  this1015 = v1013;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1016 = this1015;
  struct std__allocator_int_* base1017 = (struct std__allocator_int_*)((char *)t1016 + 0);
  std__allocator_int___allocator(base1017);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1018 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t1016 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base1018);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1019) {
bb1020:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1021;
  this1021 = v1019;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1022 = this1021;
  {
    struct std__allocator_int_* base1023 = (struct std__allocator_int_*)((char *)t1022 + 0);
    std__allocator_int____allocator(base1023);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2Ev
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1024) {
bb1025:
  struct std___Vector_base_int__std__allocator_int__* this1026;
  this1026 = v1024;
  struct std___Vector_base_int__std__allocator_int__* t1027 = this1026;
  _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(&t1027->_M_impl);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1028:
  _Bool __retval1029;
    _Bool c1030 = 0;
    __retval1029 = c1030;
    _Bool t1031 = __retval1029;
    return t1031;
  abort();
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v1032, int* v1033, unsigned long v1034) {
bb1035:
  struct std____new_allocator_int_* this1036;
  int* __p1037;
  unsigned long __n1038;
  this1036 = v1032;
  __p1037 = v1033;
  __n1038 = v1034;
  struct std____new_allocator_int_* t1039 = this1036;
    unsigned long c1040 = 4;
    unsigned long c1041 = 16;
    _Bool c1042 = ((c1040 > c1041)) ? 1 : 0;
    if (c1042) {
      int* t1043 = __p1037;
      void* cast1044 = (void*)t1043;
      unsigned long t1045 = __n1038;
      unsigned long c1046 = 4;
      unsigned long b1047 = t1045 * c1046;
      unsigned long c1048 = 4;
      operator_delete_3(cast1044, b1047, c1048);
      return;
    }
  int* t1049 = __p1037;
  void* cast1050 = (void*)t1049;
  unsigned long t1051 = __n1038;
  unsigned long c1052 = 4;
  unsigned long b1053 = t1051 * c1052;
  operator_delete_2(cast1050, b1053);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1054, int* v1055, unsigned long v1056) {
bb1057:
  struct std__allocator_int_* this1058;
  int* __p1059;
  unsigned long __n1060;
  this1058 = v1054;
  __p1059 = v1055;
  __n1060 = v1056;
  struct std__allocator_int_* t1061 = this1058;
    _Bool r1062 = std____is_constant_evaluated();
    if (r1062) {
      int* t1063 = __p1059;
      void* cast1064 = (void*)t1063;
      operator_delete(cast1064);
      return;
    }
  struct std____new_allocator_int_* base1065 = (struct std____new_allocator_int_*)((char *)t1061 + 0);
  int* t1066 = __p1059;
  unsigned long t1067 = __n1060;
  std____new_allocator_int___deallocate(base1065, t1066, t1067);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1068, int* v1069, unsigned long v1070) {
bb1071:
  struct std__allocator_int_* __a1072;
  int* __p1073;
  unsigned long __n1074;
  __a1072 = v1068;
  __p1073 = v1069;
  __n1074 = v1070;
  struct std__allocator_int_* t1075 = __a1072;
  int* t1076 = __p1073;
  unsigned long t1077 = __n1074;
  std__allocator_int___deallocate(t1075, t1076, t1077);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v1078, int* v1079, unsigned long v1080) {
bb1081:
  struct std___Vector_base_int__std__allocator_int__* this1082;
  int* __p1083;
  unsigned long __n1084;
  this1082 = v1078;
  __p1083 = v1079;
  __n1084 = v1080;
  struct std___Vector_base_int__std__allocator_int__* t1085 = this1082;
    int* t1086 = __p1083;
    _Bool cast1087 = (_Bool)t1086;
    if (cast1087) {
      struct std__allocator_int_* base1088 = (struct std__allocator_int_*)((char *)&(t1085->_M_impl) + 0);
      int* t1089 = __p1083;
      unsigned long t1090 = __n1084;
      std__allocator_traits_std__allocator_int_____deallocate(base1088, t1089, t1090);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1091) {
bb1092:
  struct std___Vector_base_int__std__allocator_int__* this1093;
  this1093 = v1091;
  struct std___Vector_base_int__std__allocator_int__* t1094 = this1093;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1095 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1094->_M_impl) + 0);
    int* t1096 = base1095->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1097 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1094->_M_impl) + 0);
    int* t1098 = base1097->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1099 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1094->_M_impl) + 0);
    int* t1100 = base1099->_M_start;
    long diff1101 = t1098 - t1100;
    unsigned long cast1102 = (unsigned long)diff1101;
    std___Vector_base_int__std__allocator_int______M_deallocate(t1094, t1096, cast1102);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t1094->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1103) {
bb1104:
  struct std____new_allocator_int_* this1105;
  this1105 = v1103;
  struct std____new_allocator_int_* t1106 = this1105;
  return;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator(struct std__allocator_int_* v1107) {
bb1108:
  struct std__allocator_int_* this1109;
  this1109 = v1107;
  struct std__allocator_int_* t1110 = this1109;
  struct std____new_allocator_int_* base1111 = (struct std____new_allocator_int_*)((char *)t1110 + 0);
  std____new_allocator_int_____new_allocator(base1111);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v1112) {
bb1113:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this1114;
  this1114 = v1112;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1115 = this1114;
  int* c1116 = ((void*)0);
  t1115->_M_start = c1116;
  int* c1117 = ((void*)0);
  t1115->_M_finish = c1117;
  int* c1118 = ((void*)0);
  t1115->_M_end_of_storage = c1118;
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v1119) {
bb1120:
  struct std__allocator_int_* this1121;
  this1121 = v1119;
  struct std__allocator_int_* t1122 = this1121;
  return;
}

