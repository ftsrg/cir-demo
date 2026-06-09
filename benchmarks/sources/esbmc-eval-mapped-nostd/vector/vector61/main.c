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
char _str[23] = "myvector.front() != 62";
char _str_1[103] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/vector/vector61/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[25] = "myvector.front() is now ";
char _str_3[26] = "vector::_M_realloc_append";
char _str_4[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv[77] = "reference std::vector<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_5[15] = "!this->empty()";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE5frontEv[78] = "reference std::vector<int>::front() [_Tp = int, _Alloc = std::allocator<int>]";
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
int* std__vector_int__std__allocator_int_____front(struct std__vector_int__std__allocator_int__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
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

// function: _ZNSt6vectorIiSaIiEE5frontEv
int* std__vector_int__std__allocator_int_____front(struct std__vector_int__std__allocator_int__* v690) {
bb691:
  struct std__vector_int__std__allocator_int__* this692;
  int* __retval693;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0694;
  this692 = v690;
  struct std__vector_int__std__allocator_int__* t695 = this692;
    do {
          _Bool r696 = std__vector_int__std__allocator_int_____empty___const(t695);
          if (r696) {
            char* cast697 = (char*)&(_str_4);
            int c698 = 1346;
            char* cast699 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE5frontEv);
            char* cast700 = (char*)&(_str_5);
            std____glibcxx_assert_fail(cast697, c698, cast699, cast700);
          }
      _Bool c701 = 0;
      if (!c701) break;
    } while (1);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r702 = std__vector_int__std__allocator_int_____begin(t695);
  ref_tmp0694 = r702;
  int* r703 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp0694);
  __retval693 = r703;
  int* t704 = __retval693;
  return t704;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v705, int v706) {
bb707:
  int __a708;
  int __b709;
  int __retval710;
  __a708 = v705;
  __b709 = v706;
  int t711 = __a708;
  int t712 = __b709;
  int b713 = t711 | t712;
  __retval710 = b713;
  int t714 = __retval710;
  return t714;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v715) {
bb716:
  struct std__basic_ios_char__std__char_traits_char__* this717;
  int __retval718;
  this717 = v715;
  struct std__basic_ios_char__std__char_traits_char__* t719 = this717;
  struct std__ios_base* base720 = (struct std__ios_base*)((char *)t719 + 0);
  int t721 = base720->_M_streambuf_state;
  __retval718 = t721;
  int t722 = __retval718;
  return t722;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v723, int v724) {
bb725:
  struct std__basic_ios_char__std__char_traits_char__* this726;
  int __state727;
  this726 = v723;
  __state727 = v724;
  struct std__basic_ios_char__std__char_traits_char__* t728 = this726;
  int r729 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t728);
  int t730 = __state727;
  int r731 = std__operator_(r729, t730);
  std__basic_ios_char__std__char_traits_char_____clear(t728, r731);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v732, char* v733) {
bb734:
  char* __c1735;
  char* __c2736;
  _Bool __retval737;
  __c1735 = v732;
  __c2736 = v733;
  char* t738 = __c1735;
  char t739 = *t738;
  int cast740 = (int)t739;
  char* t741 = __c2736;
  char t742 = *t741;
  int cast743 = (int)t742;
  _Bool c744 = ((cast740 == cast743)) ? 1 : 0;
  __retval737 = c744;
  _Bool t745 = __retval737;
  return t745;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v746) {
bb747:
  char* __p748;
  unsigned long __retval749;
  unsigned long __i750;
  __p748 = v746;
  unsigned long c751 = 0;
  __i750 = c751;
    char ref_tmp0752;
    while (1) {
      unsigned long t753 = __i750;
      char* t754 = __p748;
      char* ptr755 = &(t754)[t753];
      char c756 = 0;
      ref_tmp0752 = c756;
      _Bool r757 = __gnu_cxx__char_traits_char___eq(ptr755, &ref_tmp0752);
      _Bool u758 = !r757;
      if (!u758) break;
      unsigned long t759 = __i750;
      unsigned long u760 = t759 + 1;
      __i750 = u760;
    }
  unsigned long t761 = __i750;
  __retval749 = t761;
  unsigned long t762 = __retval749;
  return t762;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v763) {
bb764:
  char* __s765;
  unsigned long __retval766;
  __s765 = v763;
    _Bool r767 = std____is_constant_evaluated();
    if (r767) {
      char* t768 = __s765;
      unsigned long r769 = __gnu_cxx__char_traits_char___length(t768);
      __retval766 = r769;
      unsigned long t770 = __retval766;
      return t770;
    }
  char* t771 = __s765;
  unsigned long r772 = strlen(t771);
  __retval766 = r772;
  unsigned long t773 = __retval766;
  return t773;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v774, char* v775) {
bb776:
  struct std__basic_ostream_char__std__char_traits_char__* __out777;
  char* __s778;
  struct std__basic_ostream_char__std__char_traits_char__* __retval779;
  __out777 = v774;
  __s778 = v775;
    char* t780 = __s778;
    _Bool cast781 = (_Bool)t780;
    _Bool u782 = !cast781;
    if (u782) {
      struct std__basic_ostream_char__std__char_traits_char__* t783 = __out777;
      void** v784 = (void**)t783;
      void* v785 = *((void**)v784);
      unsigned char* cast786 = (unsigned char*)v785;
      long c787 = -24;
      unsigned char* ptr788 = &(cast786)[c787];
      long* cast789 = (long*)ptr788;
      long t790 = *cast789;
      unsigned char* cast791 = (unsigned char*)t783;
      unsigned char* ptr792 = &(cast791)[t790];
      struct std__basic_ostream_char__std__char_traits_char__* cast793 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr792;
      struct std__basic_ios_char__std__char_traits_char__* cast794 = (struct std__basic_ios_char__std__char_traits_char__*)cast793;
      int t795 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast794, t795);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t796 = __out777;
      char* t797 = __s778;
      char* t798 = __s778;
      unsigned long r799 = std__char_traits_char___length(t798);
      long cast800 = (long)r799;
      struct std__basic_ostream_char__std__char_traits_char__* r801 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t796, t797, cast800);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t802 = __out777;
  __retval779 = t802;
  struct std__basic_ostream_char__std__char_traits_char__* t803 = __retval779;
  return t803;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v804, void* v805) {
bb806:
  struct std__basic_ostream_char__std__char_traits_char__* this807;
  void* __pf808;
  struct std__basic_ostream_char__std__char_traits_char__* __retval809;
  this807 = v804;
  __pf808 = v805;
  struct std__basic_ostream_char__std__char_traits_char__* t810 = this807;
  void* t811 = __pf808;
  struct std__basic_ostream_char__std__char_traits_char__* r812 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t811)(t810);
  __retval809 = r812;
  struct std__basic_ostream_char__std__char_traits_char__* t813 = __retval809;
  return t813;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v814) {
bb815:
  struct std__basic_ostream_char__std__char_traits_char__* __os816;
  struct std__basic_ostream_char__std__char_traits_char__* __retval817;
  __os816 = v814;
  struct std__basic_ostream_char__std__char_traits_char__* t818 = __os816;
  struct std__basic_ostream_char__std__char_traits_char__* r819 = std__ostream__flush(t818);
  __retval817 = r819;
  struct std__basic_ostream_char__std__char_traits_char__* t820 = __retval817;
  return t820;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v821) {
bb822:
  struct std__ctype_char_* __f823;
  struct std__ctype_char_* __retval824;
  __f823 = v821;
    struct std__ctype_char_* t825 = __f823;
    _Bool cast826 = (_Bool)t825;
    _Bool u827 = !cast826;
    if (u827) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t828 = __f823;
  __retval824 = t828;
  struct std__ctype_char_* t829 = __retval824;
  return t829;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v830, char v831) {
bb832:
  struct std__ctype_char_* this833;
  char __c834;
  char __retval835;
  this833 = v830;
  __c834 = v831;
  struct std__ctype_char_* t836 = this833;
    char t837 = t836->_M_widen_ok;
    _Bool cast838 = (_Bool)t837;
    if (cast838) {
      char t839 = __c834;
      unsigned char cast840 = (unsigned char)t839;
      unsigned long cast841 = (unsigned long)cast840;
      char t842 = t836->_M_widen[cast841];
      __retval835 = t842;
      char t843 = __retval835;
      return t843;
    }
  std__ctype_char____M_widen_init___const(t836);
  char t844 = __c834;
  void** v845 = (void**)t836;
  void* v846 = *((void**)v845);
  char vcall849 = (char)__VERIFIER_virtual_call_char_char(t836, 6, t844);
  __retval835 = vcall849;
  char t850 = __retval835;
  return t850;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v851, char v852) {
bb853:
  struct std__basic_ios_char__std__char_traits_char__* this854;
  char __c855;
  char __retval856;
  this854 = v851;
  __c855 = v852;
  struct std__basic_ios_char__std__char_traits_char__* t857 = this854;
  struct std__ctype_char_* t858 = t857->_M_ctype;
  struct std__ctype_char_* r859 = std__ctype_char__const__std____check_facet_std__ctype_char___(t858);
  char t860 = __c855;
  char r861 = std__ctype_char___widen_char__const(r859, t860);
  __retval856 = r861;
  char t862 = __retval856;
  return t862;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v863) {
bb864:
  struct std__basic_ostream_char__std__char_traits_char__* __os865;
  struct std__basic_ostream_char__std__char_traits_char__* __retval866;
  __os865 = v863;
  struct std__basic_ostream_char__std__char_traits_char__* t867 = __os865;
  struct std__basic_ostream_char__std__char_traits_char__* t868 = __os865;
  void** v869 = (void**)t868;
  void* v870 = *((void**)v869);
  unsigned char* cast871 = (unsigned char*)v870;
  long c872 = -24;
  unsigned char* ptr873 = &(cast871)[c872];
  long* cast874 = (long*)ptr873;
  long t875 = *cast874;
  unsigned char* cast876 = (unsigned char*)t868;
  unsigned char* ptr877 = &(cast876)[t875];
  struct std__basic_ostream_char__std__char_traits_char__* cast878 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr877;
  struct std__basic_ios_char__std__char_traits_char__* cast879 = (struct std__basic_ios_char__std__char_traits_char__*)cast878;
  char c880 = 10;
  char r881 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast879, c880);
  struct std__basic_ostream_char__std__char_traits_char__* r882 = std__ostream__put(t867, r881);
  struct std__basic_ostream_char__std__char_traits_char__* r883 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r882);
  __retval866 = r883;
  struct std__basic_ostream_char__std__char_traits_char__* t884 = __retval866;
  return t884;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v885) {
bb886:
  struct std__vector_int__std__allocator_int__* this887;
  this887 = v885;
  struct std__vector_int__std__allocator_int__* t888 = this887;
    struct std___Vector_base_int__std__allocator_int__* base889 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t888 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base890 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base889->_M_impl) + 0);
    int* t891 = base890->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base892 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t888 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base893 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base892->_M_impl) + 0);
    int* t894 = base893->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base895 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t888 + 0);
    struct std__allocator_int_* r896 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base895);
    void_std___Destroy_int___int_(t891, t894, r896);
  {
    struct std___Vector_base_int__std__allocator_int__* base897 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t888 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base897);
  }
  return;
}

// function: main
int main() {
bb898:
  int __retval899;
  struct std__vector_int__std__allocator_int__ myvector900;
  int ref_tmp0901;
  int ref_tmp1902;
  int c903 = 0;
  __retval899 = c903;
  std__vector_int__std__allocator_int_____vector(&myvector900);
    int c904 = 78;
    ref_tmp0901 = c904;
    std__vector_int__std__allocator_int_____push_back(&myvector900, &ref_tmp0901);
    int c905 = 16;
    ref_tmp1902 = c905;
    std__vector_int__std__allocator_int_____push_back(&myvector900, &ref_tmp1902);
    int* r906 = std__vector_int__std__allocator_int_____back(&myvector900);
    int t907 = *r906;
    int* r908 = std__vector_int__std__allocator_int_____front(&myvector900);
    int t909 = *r908;
    int b910 = t909 - t907;
    *r908 = b910;
    int* r911 = std__vector_int__std__allocator_int_____front(&myvector900);
    int t912 = *r911;
    int c913 = 62;
    _Bool c914 = ((t912 != c913)) ? 1 : 0;
    if (c914) {
    } else {
      char* cast915 = (char*)&(_str);
      char* c916 = _str_1;
      unsigned int c917 = 25;
      char* cast918 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast915, c916, c917, cast918);
    }
    char* cast919 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* r920 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast919);
    int* r921 = std__vector_int__std__allocator_int_____front(&myvector900);
    int t922 = *r921;
    struct std__basic_ostream_char__std__char_traits_char__* r923 = std__ostream__operator__(r920, t922);
    struct std__basic_ostream_char__std__char_traits_char__* r924 = std__ostream__operator___std__ostream_____(r923, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c925 = 0;
    __retval899 = c925;
    int t926 = __retval899;
    int ret_val927 = t926;
    {
      std__vector_int__std__allocator_int______vector(&myvector900);
    }
    return ret_val927;
  int t928 = __retval899;
  return t928;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE
void _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v929) {
bb930:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this931;
  this931 = v929;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t932 = this931;
  struct std__allocator_int_* base933 = (struct std__allocator_int_*)((char *)t932 + 0);
  std__allocator_int___allocator(base933);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base934 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t932 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base934);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v935) {
bb936:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this937;
  this937 = v935;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t938 = this937;
  {
    struct std__allocator_int_* base939 = (struct std__allocator_int_*)((char *)t938 + 0);
    std__allocator_int____allocator(base939);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2Ev
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v940) {
bb941:
  struct std___Vector_base_int__std__allocator_int__* this942;
  this942 = v940;
  struct std___Vector_base_int__std__allocator_int__* t943 = this942;
  _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(&t943->_M_impl);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb944:
  _Bool __retval945;
    _Bool c946 = 0;
    __retval945 = c946;
    _Bool t947 = __retval945;
    return t947;
  abort();
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v948, int* v949, unsigned long v950) {
bb951:
  struct std____new_allocator_int_* this952;
  int* __p953;
  unsigned long __n954;
  this952 = v948;
  __p953 = v949;
  __n954 = v950;
  struct std____new_allocator_int_* t955 = this952;
    unsigned long c956 = 4;
    unsigned long c957 = 16;
    _Bool c958 = ((c956 > c957)) ? 1 : 0;
    if (c958) {
      int* t959 = __p953;
      void* cast960 = (void*)t959;
      unsigned long t961 = __n954;
      unsigned long c962 = 4;
      unsigned long b963 = t961 * c962;
      unsigned long c964 = 4;
      operator_delete_3(cast960, b963, c964);
      return;
    }
  int* t965 = __p953;
  void* cast966 = (void*)t965;
  unsigned long t967 = __n954;
  unsigned long c968 = 4;
  unsigned long b969 = t967 * c968;
  operator_delete_2(cast966, b969);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v970, int* v971, unsigned long v972) {
bb973:
  struct std__allocator_int_* this974;
  int* __p975;
  unsigned long __n976;
  this974 = v970;
  __p975 = v971;
  __n976 = v972;
  struct std__allocator_int_* t977 = this974;
    _Bool r978 = std____is_constant_evaluated();
    if (r978) {
      int* t979 = __p975;
      void* cast980 = (void*)t979;
      operator_delete(cast980);
      return;
    }
  struct std____new_allocator_int_* base981 = (struct std____new_allocator_int_*)((char *)t977 + 0);
  int* t982 = __p975;
  unsigned long t983 = __n976;
  std____new_allocator_int___deallocate(base981, t982, t983);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v984, int* v985, unsigned long v986) {
bb987:
  struct std__allocator_int_* __a988;
  int* __p989;
  unsigned long __n990;
  __a988 = v984;
  __p989 = v985;
  __n990 = v986;
  struct std__allocator_int_* t991 = __a988;
  int* t992 = __p989;
  unsigned long t993 = __n990;
  std__allocator_int___deallocate(t991, t992, t993);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v994, int* v995, unsigned long v996) {
bb997:
  struct std___Vector_base_int__std__allocator_int__* this998;
  int* __p999;
  unsigned long __n1000;
  this998 = v994;
  __p999 = v995;
  __n1000 = v996;
  struct std___Vector_base_int__std__allocator_int__* t1001 = this998;
    int* t1002 = __p999;
    _Bool cast1003 = (_Bool)t1002;
    if (cast1003) {
      struct std__allocator_int_* base1004 = (struct std__allocator_int_*)((char *)&(t1001->_M_impl) + 0);
      int* t1005 = __p999;
      unsigned long t1006 = __n1000;
      std__allocator_traits_std__allocator_int_____deallocate(base1004, t1005, t1006);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1007) {
bb1008:
  struct std___Vector_base_int__std__allocator_int__* this1009;
  this1009 = v1007;
  struct std___Vector_base_int__std__allocator_int__* t1010 = this1009;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1011 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1010->_M_impl) + 0);
    int* t1012 = base1011->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1013 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1010->_M_impl) + 0);
    int* t1014 = base1013->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1015 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1010->_M_impl) + 0);
    int* t1016 = base1015->_M_start;
    long diff1017 = t1014 - t1016;
    unsigned long cast1018 = (unsigned long)diff1017;
    std___Vector_base_int__std__allocator_int______M_deallocate(t1010, t1012, cast1018);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t1010->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1019) {
bb1020:
  struct std____new_allocator_int_* this1021;
  this1021 = v1019;
  struct std____new_allocator_int_* t1022 = this1021;
  return;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator(struct std__allocator_int_* v1023) {
bb1024:
  struct std__allocator_int_* this1025;
  this1025 = v1023;
  struct std__allocator_int_* t1026 = this1025;
  struct std____new_allocator_int_* base1027 = (struct std____new_allocator_int_*)((char *)t1026 + 0);
  std____new_allocator_int_____new_allocator(base1027);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v1028) {
bb1029:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this1030;
  this1030 = v1028;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1031 = this1030;
  int* c1032 = ((void*)0);
  t1031->_M_start = c1032;
  int* c1033 = ((void*)0);
  t1031->_M_finish = c1033;
  int* c1034 = ((void*)0);
  t1031->_M_end_of_storage = c1034;
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v1035) {
bb1036:
  struct std__allocator_int_* this1037;
  this1037 = v1035;
  struct std__allocator_int_* t1038 = this1037;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1039, int* v1040) {
bb1041:
  int* __first1042;
  int* __last1043;
  __first1042 = v1039;
  __last1043 = v1040;
      _Bool r1044 = std____is_constant_evaluated();
      if (r1044) {
          while (1) {
            int* t1046 = __first1042;
            int* t1047 = __last1043;
            _Bool c1048 = ((t1046 != t1047)) ? 1 : 0;
            if (!c1048) break;
            int* t1049 = __first1042;
            void_std__destroy_at_int_(t1049);
          for_step1045: ;
            int* t1050 = __first1042;
            int c1051 = 1;
            int* ptr1052 = &(t1050)[c1051];
            __first1042 = ptr1052;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v1053, int* v1054, struct std__allocator_int_* v1055) {
bb1056:
  int* __first1057;
  int* __last1058;
  struct std__allocator_int_* unnamed1059;
  __first1057 = v1053;
  __last1058 = v1054;
  unnamed1059 = v1055;
  int* t1060 = __first1057;
  int* t1061 = __last1058;
  void_std___Destroy_int__(t1060, t1061);
  return;
}

