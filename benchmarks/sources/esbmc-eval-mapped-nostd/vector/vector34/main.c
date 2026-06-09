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
char _str[24] = "myvector.back() == test";
char _str_1[103] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/vector/vector34/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[33] = "The elements of myvector summed ";
char _str_3[26] = "vector::_M_realloc_append";
char _str_4[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv[77] = "reference std::vector<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_5[15] = "!this->empty()";
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
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
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
            char* cast680 = (char*)&(_str_4);
            int c681 = 1370;
            char* cast682 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv);
            char* cast683 = (char*)&(_str_5);
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

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v690, void* v691) {
bb692:
  struct std__basic_ostream_char__std__char_traits_char__* this693;
  void* __pf694;
  struct std__basic_ostream_char__std__char_traits_char__* __retval695;
  this693 = v690;
  __pf694 = v691;
  struct std__basic_ostream_char__std__char_traits_char__* t696 = this693;
  void* t697 = __pf694;
  struct std__basic_ostream_char__std__char_traits_char__* r698 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t697)(t696);
  __retval695 = r698;
  struct std__basic_ostream_char__std__char_traits_char__* t699 = __retval695;
  return t699;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v700) {
bb701:
  struct std__basic_ostream_char__std__char_traits_char__* __os702;
  struct std__basic_ostream_char__std__char_traits_char__* __retval703;
  __os702 = v700;
  struct std__basic_ostream_char__std__char_traits_char__* t704 = __os702;
  struct std__basic_ostream_char__std__char_traits_char__* r705 = std__ostream__flush(t704);
  __retval703 = r705;
  struct std__basic_ostream_char__std__char_traits_char__* t706 = __retval703;
  return t706;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v707) {
bb708:
  struct std__ctype_char_* __f709;
  struct std__ctype_char_* __retval710;
  __f709 = v707;
    struct std__ctype_char_* t711 = __f709;
    _Bool cast712 = (_Bool)t711;
    _Bool u713 = !cast712;
    if (u713) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t714 = __f709;
  __retval710 = t714;
  struct std__ctype_char_* t715 = __retval710;
  return t715;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v716, char v717) {
bb718:
  struct std__ctype_char_* this719;
  char __c720;
  char __retval721;
  this719 = v716;
  __c720 = v717;
  struct std__ctype_char_* t722 = this719;
    char t723 = t722->_M_widen_ok;
    _Bool cast724 = (_Bool)t723;
    if (cast724) {
      char t725 = __c720;
      unsigned char cast726 = (unsigned char)t725;
      unsigned long cast727 = (unsigned long)cast726;
      char t728 = t722->_M_widen[cast727];
      __retval721 = t728;
      char t729 = __retval721;
      return t729;
    }
  std__ctype_char____M_widen_init___const(t722);
  char t730 = __c720;
  void** v731 = (void**)t722;
  void* v732 = *((void**)v731);
  char vcall735 = (char)__VERIFIER_virtual_call_char_char(t722, 6, t730);
  __retval721 = vcall735;
  char t736 = __retval721;
  return t736;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v737, char v738) {
bb739:
  struct std__basic_ios_char__std__char_traits_char__* this740;
  char __c741;
  char __retval742;
  this740 = v737;
  __c741 = v738;
  struct std__basic_ios_char__std__char_traits_char__* t743 = this740;
  struct std__ctype_char_* t744 = t743->_M_ctype;
  struct std__ctype_char_* r745 = std__ctype_char__const__std____check_facet_std__ctype_char___(t744);
  char t746 = __c741;
  char r747 = std__ctype_char___widen_char__const(r745, t746);
  __retval742 = r747;
  char t748 = __retval742;
  return t748;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v749) {
bb750:
  struct std__basic_ostream_char__std__char_traits_char__* __os751;
  struct std__basic_ostream_char__std__char_traits_char__* __retval752;
  __os751 = v749;
  struct std__basic_ostream_char__std__char_traits_char__* t753 = __os751;
  struct std__basic_ostream_char__std__char_traits_char__* t754 = __os751;
  void** v755 = (void**)t754;
  void* v756 = *((void**)v755);
  unsigned char* cast757 = (unsigned char*)v756;
  long c758 = -24;
  unsigned char* ptr759 = &(cast757)[c758];
  long* cast760 = (long*)ptr759;
  long t761 = *cast760;
  unsigned char* cast762 = (unsigned char*)t754;
  unsigned char* ptr763 = &(cast762)[t761];
  struct std__basic_ostream_char__std__char_traits_char__* cast764 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr763;
  struct std__basic_ios_char__std__char_traits_char__* cast765 = (struct std__basic_ios_char__std__char_traits_char__*)cast764;
  char c766 = 10;
  char r767 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast765, c766);
  struct std__basic_ostream_char__std__char_traits_char__* r768 = std__ostream__put(t753, r767);
  struct std__basic_ostream_char__std__char_traits_char__* r769 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r768);
  __retval752 = r769;
  struct std__basic_ostream_char__std__char_traits_char__* t770 = __retval752;
  return t770;
}

// function: _ZNSt6vectorIiSaIiEE8pop_backEv
void std__vector_int__std__allocator_int_____pop_back(struct std__vector_int__std__allocator_int__* v771) {
bb772:
  struct std__vector_int__std__allocator_int__* this773;
  this773 = v771;
  struct std__vector_int__std__allocator_int__* t774 = this773;
    do {
          _Bool r775 = std__vector_int__std__allocator_int_____empty___const(t774);
          if (r775) {
            char* cast776 = (char*)&(_str_4);
            int c777 = 1459;
            char* cast778 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE8pop_backEv);
            char* cast779 = (char*)&(_str_5);
            std____glibcxx_assert_fail(cast776, c777, cast778, cast779);
          }
      _Bool c780 = 0;
      if (!c780) break;
    } while (1);
  struct std___Vector_base_int__std__allocator_int__* base781 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t774 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base782 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base781->_M_impl) + 0);
  int* t783 = base782->_M_finish;
  int c784 = -1;
  int* ptr785 = &(t783)[c784];
  base782->_M_finish = ptr785;
  struct std___Vector_base_int__std__allocator_int__* base786 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t774 + 0);
  struct std__allocator_int_* base787 = (struct std__allocator_int_*)((char *)&(base786->_M_impl) + 0);
  struct std___Vector_base_int__std__allocator_int__* base788 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t774 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base789 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base788->_M_impl) + 0);
  int* t790 = base789->_M_finish;
  void_std__allocator_traits_std__allocator_int_____destroy_int_(base787, t790);
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v791, int v792) {
bb793:
  int __a794;
  int __b795;
  int __retval796;
  __a794 = v791;
  __b795 = v792;
  int t797 = __a794;
  int t798 = __b795;
  int b799 = t797 | t798;
  __retval796 = b799;
  int t800 = __retval796;
  return t800;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v801) {
bb802:
  struct std__basic_ios_char__std__char_traits_char__* this803;
  int __retval804;
  this803 = v801;
  struct std__basic_ios_char__std__char_traits_char__* t805 = this803;
  struct std__ios_base* base806 = (struct std__ios_base*)((char *)t805 + 0);
  int t807 = base806->_M_streambuf_state;
  __retval804 = t807;
  int t808 = __retval804;
  return t808;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v809, int v810) {
bb811:
  struct std__basic_ios_char__std__char_traits_char__* this812;
  int __state813;
  this812 = v809;
  __state813 = v810;
  struct std__basic_ios_char__std__char_traits_char__* t814 = this812;
  int r815 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t814);
  int t816 = __state813;
  int r817 = std__operator_(r815, t816);
  std__basic_ios_char__std__char_traits_char_____clear(t814, r817);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v818, char* v819) {
bb820:
  char* __c1821;
  char* __c2822;
  _Bool __retval823;
  __c1821 = v818;
  __c2822 = v819;
  char* t824 = __c1821;
  char t825 = *t824;
  int cast826 = (int)t825;
  char* t827 = __c2822;
  char t828 = *t827;
  int cast829 = (int)t828;
  _Bool c830 = ((cast826 == cast829)) ? 1 : 0;
  __retval823 = c830;
  _Bool t831 = __retval823;
  return t831;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v832) {
bb833:
  char* __p834;
  unsigned long __retval835;
  unsigned long __i836;
  __p834 = v832;
  unsigned long c837 = 0;
  __i836 = c837;
    char ref_tmp0838;
    while (1) {
      unsigned long t839 = __i836;
      char* t840 = __p834;
      char* ptr841 = &(t840)[t839];
      char c842 = 0;
      ref_tmp0838 = c842;
      _Bool r843 = __gnu_cxx__char_traits_char___eq(ptr841, &ref_tmp0838);
      _Bool u844 = !r843;
      if (!u844) break;
      unsigned long t845 = __i836;
      unsigned long u846 = t845 + 1;
      __i836 = u846;
    }
  unsigned long t847 = __i836;
  __retval835 = t847;
  unsigned long t848 = __retval835;
  return t848;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v849) {
bb850:
  char* __s851;
  unsigned long __retval852;
  __s851 = v849;
    _Bool r853 = std____is_constant_evaluated();
    if (r853) {
      char* t854 = __s851;
      unsigned long r855 = __gnu_cxx__char_traits_char___length(t854);
      __retval852 = r855;
      unsigned long t856 = __retval852;
      return t856;
    }
  char* t857 = __s851;
  unsigned long r858 = strlen(t857);
  __retval852 = r858;
  unsigned long t859 = __retval852;
  return t859;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v860, char* v861) {
bb862:
  struct std__basic_ostream_char__std__char_traits_char__* __out863;
  char* __s864;
  struct std__basic_ostream_char__std__char_traits_char__* __retval865;
  __out863 = v860;
  __s864 = v861;
    char* t866 = __s864;
    _Bool cast867 = (_Bool)t866;
    _Bool u868 = !cast867;
    if (u868) {
      struct std__basic_ostream_char__std__char_traits_char__* t869 = __out863;
      void** v870 = (void**)t869;
      void* v871 = *((void**)v870);
      unsigned char* cast872 = (unsigned char*)v871;
      long c873 = -24;
      unsigned char* ptr874 = &(cast872)[c873];
      long* cast875 = (long*)ptr874;
      long t876 = *cast875;
      unsigned char* cast877 = (unsigned char*)t869;
      unsigned char* ptr878 = &(cast877)[t876];
      struct std__basic_ostream_char__std__char_traits_char__* cast879 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr878;
      struct std__basic_ios_char__std__char_traits_char__* cast880 = (struct std__basic_ios_char__std__char_traits_char__*)cast879;
      int t881 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast880, t881);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t882 = __out863;
      char* t883 = __s864;
      char* t884 = __s864;
      unsigned long r885 = std__char_traits_char___length(t884);
      long cast886 = (long)r885;
      struct std__basic_ostream_char__std__char_traits_char__* r887 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t882, t883, cast886);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t888 = __out863;
  __retval865 = t888;
  struct std__basic_ostream_char__std__char_traits_char__* t889 = __retval865;
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
  int test910;
  int c911 = 0;
  __retval904 = c911;
  std__vector_int__std__allocator_int_____vector(&myvector905);
    int c912 = 0;
    sum906 = c912;
    int c913 = 100;
    ref_tmp0907 = c913;
    std__vector_int__std__allocator_int_____push_back(&myvector905, &ref_tmp0907);
    int c914 = 200;
    ref_tmp1908 = c914;
    std__vector_int__std__allocator_int_____push_back(&myvector905, &ref_tmp1908);
    int c915 = 300;
    ref_tmp2909 = c915;
    std__vector_int__std__allocator_int_____push_back(&myvector905, &ref_tmp2909);
    int c916 = 300;
    test910 = c916;
      while (1) {
        _Bool r917 = std__vector_int__std__allocator_int_____empty___const(&myvector905);
        _Bool u918 = !r917;
        if (!u918) break;
          int* r919 = std__vector_int__std__allocator_int_____back(&myvector905);
          int t920 = *r919;
          int t921 = sum906;
          int b922 = t921 + t920;
          sum906 = b922;
          int t923 = test910;
          struct std__basic_ostream_char__std__char_traits_char__* r924 = std__ostream__operator__(&_ZSt4cout, t923);
          struct std__basic_ostream_char__std__char_traits_char__* r925 = std__ostream__operator___std__ostream_____(r924, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
          int* r926 = std__vector_int__std__allocator_int_____back(&myvector905);
          int t927 = *r926;
          int t928 = test910;
          _Bool c929 = ((t927 == t928)) ? 1 : 0;
          if (c929) {
          } else {
            char* cast930 = (char*)&(_str);
            char* c931 = _str_1;
            unsigned int c932 = 27;
            char* cast933 = (char*)&(__PRETTY_FUNCTION___main);
            __assert_fail(cast930, c931, c932, cast933);
          }
          int c934 = -100;
          int t935 = test910;
          int b936 = t935 + c934;
          test910 = b936;
          std__vector_int__std__allocator_int_____pop_back(&myvector905);
      }
    char* cast937 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* r938 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast937);
    int t939 = sum906;
    struct std__basic_ostream_char__std__char_traits_char__* r940 = std__ostream__operator__(r938, t939);
    struct std__basic_ostream_char__std__char_traits_char__* r941 = std__ostream__operator___std__ostream_____(r940, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c942 = 0;
    __retval904 = c942;
    int t943 = __retval904;
    int ret_val944 = t943;
    {
      std__vector_int__std__allocator_int______vector(&myvector905);
    }
    return ret_val944;
  int t945 = __retval904;
  return t945;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE
void _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v946) {
bb947:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this948;
  this948 = v946;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t949 = this948;
  struct std__allocator_int_* base950 = (struct std__allocator_int_*)((char *)t949 + 0);
  std__allocator_int___allocator(base950);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base951 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t949 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base951);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v952) {
bb953:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this954;
  this954 = v952;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t955 = this954;
  {
    struct std__allocator_int_* base956 = (struct std__allocator_int_*)((char *)t955 + 0);
    std__allocator_int____allocator(base956);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2Ev
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v957) {
bb958:
  struct std___Vector_base_int__std__allocator_int__* this959;
  this959 = v957;
  struct std___Vector_base_int__std__allocator_int__* t960 = this959;
  _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(&t960->_M_impl);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb961:
  _Bool __retval962;
    _Bool c963 = 0;
    __retval962 = c963;
    _Bool t964 = __retval962;
    return t964;
  abort();
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v965, int* v966, unsigned long v967) {
bb968:
  struct std____new_allocator_int_* this969;
  int* __p970;
  unsigned long __n971;
  this969 = v965;
  __p970 = v966;
  __n971 = v967;
  struct std____new_allocator_int_* t972 = this969;
    unsigned long c973 = 4;
    unsigned long c974 = 16;
    _Bool c975 = ((c973 > c974)) ? 1 : 0;
    if (c975) {
      int* t976 = __p970;
      void* cast977 = (void*)t976;
      unsigned long t978 = __n971;
      unsigned long c979 = 4;
      unsigned long b980 = t978 * c979;
      unsigned long c981 = 4;
      operator_delete_3(cast977, b980, c981);
      return;
    }
  int* t982 = __p970;
  void* cast983 = (void*)t982;
  unsigned long t984 = __n971;
  unsigned long c985 = 4;
  unsigned long b986 = t984 * c985;
  operator_delete_2(cast983, b986);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v987, int* v988, unsigned long v989) {
bb990:
  struct std__allocator_int_* this991;
  int* __p992;
  unsigned long __n993;
  this991 = v987;
  __p992 = v988;
  __n993 = v989;
  struct std__allocator_int_* t994 = this991;
    _Bool r995 = std____is_constant_evaluated();
    if (r995) {
      int* t996 = __p992;
      void* cast997 = (void*)t996;
      operator_delete(cast997);
      return;
    }
  struct std____new_allocator_int_* base998 = (struct std____new_allocator_int_*)((char *)t994 + 0);
  int* t999 = __p992;
  unsigned long t1000 = __n993;
  std____new_allocator_int___deallocate(base998, t999, t1000);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1001, int* v1002, unsigned long v1003) {
bb1004:
  struct std__allocator_int_* __a1005;
  int* __p1006;
  unsigned long __n1007;
  __a1005 = v1001;
  __p1006 = v1002;
  __n1007 = v1003;
  struct std__allocator_int_* t1008 = __a1005;
  int* t1009 = __p1006;
  unsigned long t1010 = __n1007;
  std__allocator_int___deallocate(t1008, t1009, t1010);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v1011, int* v1012, unsigned long v1013) {
bb1014:
  struct std___Vector_base_int__std__allocator_int__* this1015;
  int* __p1016;
  unsigned long __n1017;
  this1015 = v1011;
  __p1016 = v1012;
  __n1017 = v1013;
  struct std___Vector_base_int__std__allocator_int__* t1018 = this1015;
    int* t1019 = __p1016;
    _Bool cast1020 = (_Bool)t1019;
    if (cast1020) {
      struct std__allocator_int_* base1021 = (struct std__allocator_int_*)((char *)&(t1018->_M_impl) + 0);
      int* t1022 = __p1016;
      unsigned long t1023 = __n1017;
      std__allocator_traits_std__allocator_int_____deallocate(base1021, t1022, t1023);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1024) {
bb1025:
  struct std___Vector_base_int__std__allocator_int__* this1026;
  this1026 = v1024;
  struct std___Vector_base_int__std__allocator_int__* t1027 = this1026;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1028 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1027->_M_impl) + 0);
    int* t1029 = base1028->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1030 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1027->_M_impl) + 0);
    int* t1031 = base1030->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1032 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1027->_M_impl) + 0);
    int* t1033 = base1032->_M_start;
    long diff1034 = t1031 - t1033;
    unsigned long cast1035 = (unsigned long)diff1034;
    std___Vector_base_int__std__allocator_int______M_deallocate(t1027, t1029, cast1035);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t1027->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1036) {
bb1037:
  struct std____new_allocator_int_* this1038;
  this1038 = v1036;
  struct std____new_allocator_int_* t1039 = this1038;
  return;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator(struct std__allocator_int_* v1040) {
bb1041:
  struct std__allocator_int_* this1042;
  this1042 = v1040;
  struct std__allocator_int_* t1043 = this1042;
  struct std____new_allocator_int_* base1044 = (struct std____new_allocator_int_*)((char *)t1043 + 0);
  std____new_allocator_int_____new_allocator(base1044);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v1045) {
bb1046:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this1047;
  this1047 = v1045;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1048 = this1047;
  int* c1049 = ((void*)0);
  t1048->_M_start = c1049;
  int* c1050 = ((void*)0);
  t1048->_M_finish = c1050;
  int* c1051 = ((void*)0);
  t1048->_M_end_of_storage = c1051;
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v1052) {
bb1053:
  struct std__allocator_int_* this1054;
  this1054 = v1052;
  struct std__allocator_int_* t1055 = this1054;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1056, int* v1057) {
bb1058:
  int* __first1059;
  int* __last1060;
  __first1059 = v1056;
  __last1060 = v1057;
      _Bool r1061 = std____is_constant_evaluated();
      if (r1061) {
          while (1) {
            int* t1063 = __first1059;
            int* t1064 = __last1060;
            _Bool c1065 = ((t1063 != t1064)) ? 1 : 0;
            if (!c1065) break;
            int* t1066 = __first1059;
            void_std__destroy_at_int_(t1066);
          for_step1062: ;
            int* t1067 = __first1059;
            int c1068 = 1;
            int* ptr1069 = &(t1067)[c1068];
            __first1059 = ptr1069;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v1070, int* v1071, struct std__allocator_int_* v1072) {
bb1073:
  int* __first1074;
  int* __last1075;
  struct std__allocator_int_* unnamed1076;
  __first1074 = v1070;
  __last1075 = v1071;
  unnamed1076 = v1072;
  int* t1077 = __first1074;
  int* t1078 = __last1075;
  void_std___Destroy_int__(t1077, t1078);
  return;
}

