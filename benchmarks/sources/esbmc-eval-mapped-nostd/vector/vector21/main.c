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
char _str[26] = "Current capacity of v1 = ";
char _str_1[19] = "v1.capacity() == 1";
char _str_2[103] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/vector/vector21/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[26] = "vector::_M_realloc_append";
char _str_4[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv[35] = "reference std::vector<int>::back()";
char _str_5[15] = "!this->empty()";
char _str_6[16] = "vector::reserve";
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
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__std__ostream___M_insert_unsigned_long_(struct std__basic_ostream_char__std__char_traits_char__* p0, unsigned long p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, unsigned long p1);
unsigned long std__vector_int__std__allocator_int_____capacity___const(struct std__vector_int__std__allocator_int__* p0);
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
void std__vector_int__std__allocator_int_____reserve(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
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
  char* cast503 = (char*)&(_str_3);
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
            char* cast644 = (char*)&(_str_4);
            int c645 = 1370;
            char* cast646 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv);
            char* cast647 = (char*)&(_str_5);
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

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v690, int v691) {
bb692:
  int __a693;
  int __b694;
  int __retval695;
  __a693 = v690;
  __b694 = v691;
  int t696 = __a693;
  int t697 = __b694;
  int b698 = t696 | t697;
  __retval695 = b698;
  int t699 = __retval695;
  return t699;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v700) {
bb701:
  struct std__basic_ios_char__std__char_traits_char__* this702;
  int __retval703;
  this702 = v700;
  struct std__basic_ios_char__std__char_traits_char__* t704 = this702;
  struct std__ios_base* base705 = (struct std__ios_base*)((char *)t704 + 0);
  int t706 = base705->_M_streambuf_state;
  __retval703 = t706;
  int t707 = __retval703;
  return t707;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v708, int v709) {
bb710:
  struct std__basic_ios_char__std__char_traits_char__* this711;
  int __state712;
  this711 = v708;
  __state712 = v709;
  struct std__basic_ios_char__std__char_traits_char__* t713 = this711;
  int r714 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t713);
  int t715 = __state712;
  int r716 = std__operator_(r714, t715);
  std__basic_ios_char__std__char_traits_char_____clear(t713, r716);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v717, char* v718) {
bb719:
  char* __c1720;
  char* __c2721;
  _Bool __retval722;
  __c1720 = v717;
  __c2721 = v718;
  char* t723 = __c1720;
  char t724 = *t723;
  int cast725 = (int)t724;
  char* t726 = __c2721;
  char t727 = *t726;
  int cast728 = (int)t727;
  _Bool c729 = ((cast725 == cast728)) ? 1 : 0;
  __retval722 = c729;
  _Bool t730 = __retval722;
  return t730;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v731) {
bb732:
  char* __p733;
  unsigned long __retval734;
  unsigned long __i735;
  __p733 = v731;
  unsigned long c736 = 0;
  __i735 = c736;
    char ref_tmp0737;
    while (1) {
      unsigned long t738 = __i735;
      char* t739 = __p733;
      char* ptr740 = &(t739)[t738];
      char c741 = 0;
      ref_tmp0737 = c741;
      _Bool r742 = __gnu_cxx__char_traits_char___eq(ptr740, &ref_tmp0737);
      _Bool u743 = !r742;
      if (!u743) break;
      unsigned long t744 = __i735;
      unsigned long u745 = t744 + 1;
      __i735 = u745;
    }
  unsigned long t746 = __i735;
  __retval734 = t746;
  unsigned long t747 = __retval734;
  return t747;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v748) {
bb749:
  char* __s750;
  unsigned long __retval751;
  __s750 = v748;
    _Bool r752 = std____is_constant_evaluated();
    if (r752) {
      char* t753 = __s750;
      unsigned long r754 = __gnu_cxx__char_traits_char___length(t753);
      __retval751 = r754;
      unsigned long t755 = __retval751;
      return t755;
    }
  char* t756 = __s750;
  unsigned long r757 = strlen(t756);
  __retval751 = r757;
  unsigned long t758 = __retval751;
  return t758;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v759, char* v760) {
bb761:
  struct std__basic_ostream_char__std__char_traits_char__* __out762;
  char* __s763;
  struct std__basic_ostream_char__std__char_traits_char__* __retval764;
  __out762 = v759;
  __s763 = v760;
    char* t765 = __s763;
    _Bool cast766 = (_Bool)t765;
    _Bool u767 = !cast766;
    if (u767) {
      struct std__basic_ostream_char__std__char_traits_char__* t768 = __out762;
      void** v769 = (void**)t768;
      void* v770 = *((void**)v769);
      unsigned char* cast771 = (unsigned char*)v770;
      long c772 = -24;
      unsigned char* ptr773 = &(cast771)[c772];
      long* cast774 = (long*)ptr773;
      long t775 = *cast774;
      unsigned char* cast776 = (unsigned char*)t768;
      unsigned char* ptr777 = &(cast776)[t775];
      struct std__basic_ostream_char__std__char_traits_char__* cast778 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr777;
      struct std__basic_ios_char__std__char_traits_char__* cast779 = (struct std__basic_ios_char__std__char_traits_char__*)cast778;
      int t780 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast779, t780);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t781 = __out762;
      char* t782 = __s763;
      char* t783 = __s763;
      unsigned long r784 = std__char_traits_char___length(t783);
      long cast785 = (long)r784;
      struct std__basic_ostream_char__std__char_traits_char__* r786 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t781, t782, cast785);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t787 = __out762;
  __retval764 = t787;
  struct std__basic_ostream_char__std__char_traits_char__* t788 = __retval764;
  return t788;
}

// function: _ZNSolsEm
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* v789, unsigned long v790) {
bb791:
  struct std__basic_ostream_char__std__char_traits_char__* this792;
  unsigned long __n793;
  struct std__basic_ostream_char__std__char_traits_char__* __retval794;
  this792 = v789;
  __n793 = v790;
  struct std__basic_ostream_char__std__char_traits_char__* t795 = this792;
  unsigned long t796 = __n793;
  struct std__basic_ostream_char__std__char_traits_char__* r797 = std__ostream__std__ostream___M_insert_unsigned_long_(t795, t796);
  __retval794 = r797;
  struct std__basic_ostream_char__std__char_traits_char__* t798 = __retval794;
  return t798;
}

// function: _ZNKSt6vectorIiSaIiEE8capacityEv
unsigned long std__vector_int__std__allocator_int_____capacity___const(struct std__vector_int__std__allocator_int__* v799) {
bb800:
  struct std__vector_int__std__allocator_int__* this801;
  unsigned long __retval802;
  long __dif803;
  this801 = v799;
  struct std__vector_int__std__allocator_int__* t804 = this801;
  struct std___Vector_base_int__std__allocator_int__* base805 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t804 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base806 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base805->_M_impl) + 0);
  int* t807 = base806->_M_end_of_storage;
  struct std___Vector_base_int__std__allocator_int__* base808 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t804 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base809 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base808->_M_impl) + 0);
  int* t810 = base809->_M_start;
  long diff811 = t807 - t810;
  __dif803 = diff811;
    long t812 = __dif803;
    long c813 = 0;
    _Bool c814 = ((t812 < c813)) ? 1 : 0;
    if (c814) {
      __builtin_unreachable();
    }
  long t815 = __dif803;
  unsigned long cast816 = (unsigned long)t815;
  __retval802 = cast816;
  unsigned long t817 = __retval802;
  return t817;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v818, void* v819) {
bb820:
  struct std__basic_ostream_char__std__char_traits_char__* this821;
  void* __pf822;
  struct std__basic_ostream_char__std__char_traits_char__* __retval823;
  this821 = v818;
  __pf822 = v819;
  struct std__basic_ostream_char__std__char_traits_char__* t824 = this821;
  void* t825 = __pf822;
  struct std__basic_ostream_char__std__char_traits_char__* r826 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t825)(t824);
  __retval823 = r826;
  struct std__basic_ostream_char__std__char_traits_char__* t827 = __retval823;
  return t827;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v828) {
bb829:
  struct std__basic_ostream_char__std__char_traits_char__* __os830;
  struct std__basic_ostream_char__std__char_traits_char__* __retval831;
  __os830 = v828;
  struct std__basic_ostream_char__std__char_traits_char__* t832 = __os830;
  struct std__basic_ostream_char__std__char_traits_char__* r833 = std__ostream__flush(t832);
  __retval831 = r833;
  struct std__basic_ostream_char__std__char_traits_char__* t834 = __retval831;
  return t834;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v835) {
bb836:
  struct std__ctype_char_* __f837;
  struct std__ctype_char_* __retval838;
  __f837 = v835;
    struct std__ctype_char_* t839 = __f837;
    _Bool cast840 = (_Bool)t839;
    _Bool u841 = !cast840;
    if (u841) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t842 = __f837;
  __retval838 = t842;
  struct std__ctype_char_* t843 = __retval838;
  return t843;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v844, char v845) {
bb846:
  struct std__ctype_char_* this847;
  char __c848;
  char __retval849;
  this847 = v844;
  __c848 = v845;
  struct std__ctype_char_* t850 = this847;
    char t851 = t850->_M_widen_ok;
    _Bool cast852 = (_Bool)t851;
    if (cast852) {
      char t853 = __c848;
      unsigned char cast854 = (unsigned char)t853;
      unsigned long cast855 = (unsigned long)cast854;
      char t856 = t850->_M_widen[cast855];
      __retval849 = t856;
      char t857 = __retval849;
      return t857;
    }
  std__ctype_char____M_widen_init___const(t850);
  char t858 = __c848;
  void** v859 = (void**)t850;
  void* v860 = *((void**)v859);
  char vcall863 = (char)__VERIFIER_virtual_call_char_char(t850, 6, t858);
  __retval849 = vcall863;
  char t864 = __retval849;
  return t864;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v865, char v866) {
bb867:
  struct std__basic_ios_char__std__char_traits_char__* this868;
  char __c869;
  char __retval870;
  this868 = v865;
  __c869 = v866;
  struct std__basic_ios_char__std__char_traits_char__* t871 = this868;
  struct std__ctype_char_* t872 = t871->_M_ctype;
  struct std__ctype_char_* r873 = std__ctype_char__const__std____check_facet_std__ctype_char___(t872);
  char t874 = __c869;
  char r875 = std__ctype_char___widen_char__const(r873, t874);
  __retval870 = r875;
  char t876 = __retval870;
  return t876;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v877) {
bb878:
  struct std__basic_ostream_char__std__char_traits_char__* __os879;
  struct std__basic_ostream_char__std__char_traits_char__* __retval880;
  __os879 = v877;
  struct std__basic_ostream_char__std__char_traits_char__* t881 = __os879;
  struct std__basic_ostream_char__std__char_traits_char__* t882 = __os879;
  void** v883 = (void**)t882;
  void* v884 = *((void**)v883);
  unsigned char* cast885 = (unsigned char*)v884;
  long c886 = -24;
  unsigned char* ptr887 = &(cast885)[c886];
  long* cast888 = (long*)ptr887;
  long t889 = *cast888;
  unsigned char* cast890 = (unsigned char*)t882;
  unsigned char* ptr891 = &(cast890)[t889];
  struct std__basic_ostream_char__std__char_traits_char__* cast892 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr891;
  struct std__basic_ios_char__std__char_traits_char__* cast893 = (struct std__basic_ios_char__std__char_traits_char__*)cast892;
  char c894 = 10;
  char r895 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast893, c894);
  struct std__basic_ostream_char__std__char_traits_char__* r896 = std__ostream__put(t881, r895);
  struct std__basic_ostream_char__std__char_traits_char__* r897 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r896);
  __retval880 = r897;
  struct std__basic_ostream_char__std__char_traits_char__* t898 = __retval880;
  return t898;
}

// function: _ZNSt6vectorIiSaIiEE7reserveEm
void std__vector_int__std__allocator_int_____reserve(struct std__vector_int__std__allocator_int__* v899, unsigned long v900) {
bb901:
  struct std__vector_int__std__allocator_int__* this902;
  unsigned long __n903;
  this902 = v899;
  __n903 = v900;
  struct std__vector_int__std__allocator_int__* t904 = this902;
    unsigned long t905 = __n903;
    unsigned long r906 = std__vector_int__std__allocator_int_____max_size___const(t904);
    _Bool c907 = ((t905 > r906)) ? 1 : 0;
    if (c907) {
      char* cast908 = (char*)&(_str_6);
      std____throw_length_error(cast908);
    }
    unsigned long r909 = std__vector_int__std__allocator_int_____capacity___const(t904);
    unsigned long t910 = __n903;
    _Bool c911 = ((r909 < t910)) ? 1 : 0;
    if (c911) {
      unsigned long __old_size912;
      int* __tmp913;
      unsigned long r914 = std__vector_int__std__allocator_int_____size___const(t904);
      __old_size912 = r914;
        struct std___Vector_base_int__std__allocator_int__* base915 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t904 + 0);
        unsigned long t916 = __n903;
        int* r917 = std___Vector_base_int__std__allocator_int______M_allocate(base915, t916);
        __tmp913 = r917;
        struct std___Vector_base_int__std__allocator_int__* base918 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t904 + 0);
        struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base919 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base918->_M_impl) + 0);
        int* t920 = base919->_M_start;
        struct std___Vector_base_int__std__allocator_int__* base921 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t904 + 0);
        struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base922 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base921->_M_impl) + 0);
        int* t923 = base922->_M_finish;
        int* t924 = __tmp913;
        struct std___Vector_base_int__std__allocator_int__* base925 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t904 + 0);
        struct std__allocator_int_* r926 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base925);
        int* r927 = std__vector_int__std__allocator_int______S_relocate(t920, t923, t924, r926);
      struct std___Vector_base_int__std__allocator_int__* base928 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t904 + 0);
      struct std___Vector_base_int__std__allocator_int__* base929 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t904 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base930 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base929->_M_impl) + 0);
      int* t931 = base930->_M_start;
      struct std___Vector_base_int__std__allocator_int__* base932 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t904 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base933 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base932->_M_impl) + 0);
      int* t934 = base933->_M_end_of_storage;
      struct std___Vector_base_int__std__allocator_int__* base935 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t904 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base936 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base935->_M_impl) + 0);
      int* t937 = base936->_M_start;
      long diff938 = t934 - t937;
      unsigned long cast939 = (unsigned long)diff938;
      std___Vector_base_int__std__allocator_int______M_deallocate(base928, t931, cast939);
      int* t940 = __tmp913;
      struct std___Vector_base_int__std__allocator_int__* base941 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t904 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base942 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base941->_M_impl) + 0);
      base942->_M_start = t940;
      int* t943 = __tmp913;
      unsigned long t944 = __old_size912;
      int* ptr945 = &(t943)[t944];
      struct std___Vector_base_int__std__allocator_int__* base946 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t904 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base947 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base946->_M_impl) + 0);
      base947->_M_finish = ptr945;
      struct std___Vector_base_int__std__allocator_int__* base948 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t904 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base949 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base948->_M_impl) + 0);
      int* t950 = base949->_M_start;
      unsigned long t951 = __n903;
      int* ptr952 = &(t950)[t951];
      struct std___Vector_base_int__std__allocator_int__* base953 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t904 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base954 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base953->_M_impl) + 0);
      base954->_M_end_of_storage = ptr952;
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v955) {
bb956:
  struct std__vector_int__std__allocator_int__* this957;
  this957 = v955;
  struct std__vector_int__std__allocator_int__* t958 = this957;
    struct std___Vector_base_int__std__allocator_int__* base959 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t958 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base960 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base959->_M_impl) + 0);
    int* t961 = base960->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base962 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t958 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base963 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base962->_M_impl) + 0);
    int* t964 = base963->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base965 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t958 + 0);
    struct std__allocator_int_* r966 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base965);
    void_std___Destroy_int___int_(t961, t964, r966);
  {
    struct std___Vector_base_int__std__allocator_int__* base967 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t958 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base967);
  }
  return;
}

// function: main
int main() {
bb968:
  int __retval969;
  struct std__vector_int__std__allocator_int__ v1970;
  int ref_tmp0971;
  int c972 = 0;
  __retval969 = c972;
  std__vector_int__std__allocator_int_____vector(&v1970);
    int c973 = 1;
    ref_tmp0971 = c973;
    std__vector_int__std__allocator_int_____push_back(&v1970, &ref_tmp0971);
    char* cast974 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* r975 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast974);
    unsigned long r976 = std__vector_int__std__allocator_int_____capacity___const(&v1970);
    struct std__basic_ostream_char__std__char_traits_char__* r977 = std__ostream__operator__(r975, r976);
    struct std__basic_ostream_char__std__char_traits_char__* r978 = std__ostream__operator___std__ostream_____(r977, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    unsigned long c979 = 20;
    std__vector_int__std__allocator_int_____reserve(&v1970, c979);
    unsigned long r980 = std__vector_int__std__allocator_int_____capacity___const(&v1970);
    unsigned long c981 = 1;
    _Bool c982 = ((r980 == c981)) ? 1 : 0;
    if (c982) {
    } else {
      char* cast983 = (char*)&(_str_1);
      char* c984 = _str_2;
      unsigned int c985 = 21;
      char* cast986 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast983, c984, c985, cast986);
    }
    char* cast987 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* r988 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast987);
    unsigned long r989 = std__vector_int__std__allocator_int_____capacity___const(&v1970);
    struct std__basic_ostream_char__std__char_traits_char__* r990 = std__ostream__operator__(r988, r989);
    struct std__basic_ostream_char__std__char_traits_char__* r991 = std__ostream__operator___std__ostream_____(r990, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c992 = 0;
    __retval969 = c992;
    int t993 = __retval969;
    int ret_val994 = t993;
    {
      std__vector_int__std__allocator_int______vector(&v1970);
    }
    return ret_val994;
  int t995 = __retval969;
  return t995;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE
void _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v996) {
bb997:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this998;
  this998 = v996;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t999 = this998;
  struct std__allocator_int_* base1000 = (struct std__allocator_int_*)((char *)t999 + 0);
  std__allocator_int___allocator(base1000);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1001 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t999 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base1001);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1002) {
bb1003:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1004;
  this1004 = v1002;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1005 = this1004;
  {
    struct std__allocator_int_* base1006 = (struct std__allocator_int_*)((char *)t1005 + 0);
    std__allocator_int____allocator(base1006);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2Ev
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1007) {
bb1008:
  struct std___Vector_base_int__std__allocator_int__* this1009;
  this1009 = v1007;
  struct std___Vector_base_int__std__allocator_int__* t1010 = this1009;
  _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(&t1010->_M_impl);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1011:
  _Bool __retval1012;
    _Bool c1013 = 0;
    __retval1012 = c1013;
    _Bool t1014 = __retval1012;
    return t1014;
  abort();
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v1015, int* v1016, unsigned long v1017) {
bb1018:
  struct std____new_allocator_int_* this1019;
  int* __p1020;
  unsigned long __n1021;
  this1019 = v1015;
  __p1020 = v1016;
  __n1021 = v1017;
  struct std____new_allocator_int_* t1022 = this1019;
    unsigned long c1023 = 4;
    unsigned long c1024 = 16;
    _Bool c1025 = ((c1023 > c1024)) ? 1 : 0;
    if (c1025) {
      int* t1026 = __p1020;
      void* cast1027 = (void*)t1026;
      unsigned long t1028 = __n1021;
      unsigned long c1029 = 4;
      unsigned long b1030 = t1028 * c1029;
      unsigned long c1031 = 4;
      operator_delete_3(cast1027, b1030, c1031);
      return;
    }
  int* t1032 = __p1020;
  void* cast1033 = (void*)t1032;
  unsigned long t1034 = __n1021;
  unsigned long c1035 = 4;
  unsigned long b1036 = t1034 * c1035;
  operator_delete_2(cast1033, b1036);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1037, int* v1038, unsigned long v1039) {
bb1040:
  struct std__allocator_int_* this1041;
  int* __p1042;
  unsigned long __n1043;
  this1041 = v1037;
  __p1042 = v1038;
  __n1043 = v1039;
  struct std__allocator_int_* t1044 = this1041;
    _Bool r1045 = std____is_constant_evaluated();
    if (r1045) {
      int* t1046 = __p1042;
      void* cast1047 = (void*)t1046;
      operator_delete(cast1047);
      return;
    }
  struct std____new_allocator_int_* base1048 = (struct std____new_allocator_int_*)((char *)t1044 + 0);
  int* t1049 = __p1042;
  unsigned long t1050 = __n1043;
  std____new_allocator_int___deallocate(base1048, t1049, t1050);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1051, int* v1052, unsigned long v1053) {
bb1054:
  struct std__allocator_int_* __a1055;
  int* __p1056;
  unsigned long __n1057;
  __a1055 = v1051;
  __p1056 = v1052;
  __n1057 = v1053;
  struct std__allocator_int_* t1058 = __a1055;
  int* t1059 = __p1056;
  unsigned long t1060 = __n1057;
  std__allocator_int___deallocate(t1058, t1059, t1060);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v1061, int* v1062, unsigned long v1063) {
bb1064:
  struct std___Vector_base_int__std__allocator_int__* this1065;
  int* __p1066;
  unsigned long __n1067;
  this1065 = v1061;
  __p1066 = v1062;
  __n1067 = v1063;
  struct std___Vector_base_int__std__allocator_int__* t1068 = this1065;
    int* t1069 = __p1066;
    _Bool cast1070 = (_Bool)t1069;
    if (cast1070) {
      struct std__allocator_int_* base1071 = (struct std__allocator_int_*)((char *)&(t1068->_M_impl) + 0);
      int* t1072 = __p1066;
      unsigned long t1073 = __n1067;
      std__allocator_traits_std__allocator_int_____deallocate(base1071, t1072, t1073);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1074) {
bb1075:
  struct std___Vector_base_int__std__allocator_int__* this1076;
  this1076 = v1074;
  struct std___Vector_base_int__std__allocator_int__* t1077 = this1076;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1078 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1077->_M_impl) + 0);
    int* t1079 = base1078->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1080 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1077->_M_impl) + 0);
    int* t1081 = base1080->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1082 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1077->_M_impl) + 0);
    int* t1083 = base1082->_M_start;
    long diff1084 = t1081 - t1083;
    unsigned long cast1085 = (unsigned long)diff1084;
    std___Vector_base_int__std__allocator_int______M_deallocate(t1077, t1079, cast1085);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t1077->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1086) {
bb1087:
  struct std____new_allocator_int_* this1088;
  this1088 = v1086;
  struct std____new_allocator_int_* t1089 = this1088;
  return;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator(struct std__allocator_int_* v1090) {
bb1091:
  struct std__allocator_int_* this1092;
  this1092 = v1090;
  struct std__allocator_int_* t1093 = this1092;
  struct std____new_allocator_int_* base1094 = (struct std____new_allocator_int_*)((char *)t1093 + 0);
  std____new_allocator_int_____new_allocator(base1094);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v1095) {
bb1096:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this1097;
  this1097 = v1095;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1098 = this1097;
  int* c1099 = ((void*)0);
  t1098->_M_start = c1099;
  int* c1100 = ((void*)0);
  t1098->_M_finish = c1100;
  int* c1101 = ((void*)0);
  t1098->_M_end_of_storage = c1101;
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v1102) {
bb1103:
  struct std__allocator_int_* this1104;
  this1104 = v1102;
  struct std__allocator_int_* t1105 = this1104;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1106, int* v1107) {
bb1108:
  int* __first1109;
  int* __last1110;
  __first1109 = v1106;
  __last1110 = v1107;
      _Bool r1111 = std____is_constant_evaluated();
      if (r1111) {
          while (1) {
            int* t1113 = __first1109;
            int* t1114 = __last1110;
            _Bool c1115 = ((t1113 != t1114)) ? 1 : 0;
            if (!c1115) break;
            int* t1116 = __first1109;
            void_std__destroy_at_int_(t1116);
          for_step1112: ;
            int* t1117 = __first1109;
            int c1118 = 1;
            int* ptr1119 = &(t1117)[c1118];
            __first1109 = ptr1119;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v1120, int* v1121, struct std__allocator_int_* v1122) {
bb1123:
  int* __first1124;
  int* __last1125;
  struct std__allocator_int_* unnamed1126;
  __first1124 = v1120;
  __last1125 = v1121;
  unnamed1126 = v1122;
  int* t1127 = __first1124;
  int* t1128 = __last1125;
  void_std___Destroy_int__(t1127, t1128);
  return;
}

