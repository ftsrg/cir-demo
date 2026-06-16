extern void abort(void);
// Struct definitions (auto-parsed)
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____normal_iterator_int____void_ { int* _M_current; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
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
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

int __const_main_myints[7] = {10, 20, 30, 40, 50, 60, 70};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[21] = "myvector.size() == 7";
char _str_1[106] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/vector/algorithm13/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[18] = "myvector[3] == 40";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[19] = "myvector contains:";
char _str_4[2] = " ";
char _str_5[26] = "vector::_M_default_append";
char _str_6[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_7[19] = "__n < this->size()";
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* p0);
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Vector_base_int__std__allocator_int__* p0);
unsigned long std__vector_int__std__allocator_int_____max_size___const(struct std__vector_int__std__allocator_int__* p0);
_Bool std__is_constant_evaluated();
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* p0, int** p1);
int* _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* p0);
void void_std___Construct_int_(int* p0);
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* p0);
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* p0);
int* int__std____uninitialized_default_n_1_false_____uninit_default_n_int___unsigned_long_(int* p0, unsigned long p1);
void void_std____fill_a1_int___int_(int* p0, int* p1, int* p2);
void void_std____fill_a_int___int_(int* p0, int* p1, int* p2);
int* int__std____fill_n_a_int___unsigned_long__int_(int* p0, unsigned long p1, int* p2, struct std__random_access_iterator_tag p3);
unsigned long std____size_to_integer(unsigned long p0);
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** p0);
int* int__std__fill_n_int___unsigned_long__int_(int* p0, unsigned long p1, int* p2);
int* int__std____uninitialized_default_n_1_true_____uninit_default_n_int___unsigned_long_(int* p0, unsigned long p1);
int* int__std____uninitialized_default_n_int___unsigned_long_(int* p0, unsigned long p1);
int* int__std____uninitialized_default_n_a_int___unsigned_long__int_(int* p0, unsigned long p1, struct std__allocator_int_* p2);
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* p0);
extern void std____throw_length_error(char* p0);
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, char* p2);
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
void __gnu_cxx____normal_iterator_int___void_____normal_iterator(struct __gnu_cxx____normal_iterator_int____void_* p0, int** p1);
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std__allocator_int_* p0, int* p1, int* p2);
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
void std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* p0);
void std__vector_int__std__allocator_int______M_default_append(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
void void_std___Destroy_int___int_(int* p0, int* p1, struct std__allocator_int_* p2);
void std__vector_int__std__allocator_int______M_erase_at_end(struct std__vector_int__std__allocator_int__* p0, int* p1);
void std__vector_int__std__allocator_int_____resize(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______copy_int____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(int* p0, int* p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* p0);
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
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
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
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
void void_std__destroy_at_int_(int* p0);
void void_std___Destroy_int__(int* p0, int* p1);

// function: _ZNSt6vectorIiSaIiEEC2Ev
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* v0) {
bb1: ;
  struct std__vector_int__std__allocator_int__* this2;
  this2 = v0;
  struct std__vector_int__std__allocator_int__* t3 = this2;
  struct std___Vector_base_int__std__allocator_int__* base4 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t3 + 0);
  std___Vector_base_int__std__allocator_int______Vector_base(base4);
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2Ev
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v5) {
bb6: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this7;
  this7 = v5;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t8 = this7;
  int* c9 = ((void*)0);
  t8->_M_current = c9;
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v10, unsigned long* v11) {
bb12: ;
  unsigned long* __a13;
  unsigned long* __b14;
  unsigned long* __retval15;
  __a13 = v10;
  __b14 = v11;
    unsigned long* t16 = __b14;
    unsigned long t17 = *t16;
    unsigned long* t18 = __a13;
    unsigned long t19 = *t18;
    _Bool c20 = ((t17 < t19)) ? 1 : 0;
    if (c20) {
      unsigned long* t21 = __b14;
      __retval15 = t21;
      unsigned long* t22 = __retval15;
      return t22;
    }
  unsigned long* t23 = __a13;
  __retval15 = t23;
  unsigned long* t24 = __retval15;
  return t24;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v25) {
bb26: ;
  struct std__allocator_int_* __a27;
  unsigned long __retval28;
  unsigned long __diffmax29;
  unsigned long __allocmax30;
  __a27 = v25;
  unsigned long c31 = 2305843009213693951;
  __diffmax29 = c31;
  unsigned long c32 = 4611686018427387903;
  __allocmax30 = c32;
  unsigned long* r33 = unsigned_long_const__std__min_unsigned_long_(&__diffmax29, &__allocmax30);
  unsigned long t34 = *r33;
  __retval28 = t34;
  unsigned long t35 = __retval28;
  return t35;
}

// function: _ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Vector_base_int__std__allocator_int__* v36) {
bb37: ;
  struct std___Vector_base_int__std__allocator_int__* this38;
  struct std__allocator_int_* __retval39;
  this38 = v36;
  struct std___Vector_base_int__std__allocator_int__* t40 = this38;
  struct std__allocator_int_* base41 = (struct std__allocator_int_*)((char *)&(t40->_M_impl) + 0);
  __retval39 = base41;
  struct std__allocator_int_* t42 = __retval39;
  return t42;
}

// function: _ZNKSt6vectorIiSaIiEE8max_sizeEv
unsigned long std__vector_int__std__allocator_int_____max_size___const(struct std__vector_int__std__allocator_int__* v43) {
bb44: ;
  struct std__vector_int__std__allocator_int__* this45;
  unsigned long __retval46;
  this45 = v43;
  struct std__vector_int__std__allocator_int__* t47 = this45;
  struct std___Vector_base_int__std__allocator_int__* base48 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t47 + 0);
  struct std__allocator_int_* r49 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(base48);
  unsigned long r50 = std__vector_int__std__allocator_int______S_max_size(r49);
  __retval46 = r50;
  unsigned long t51 = __retval46;
  return t51;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb52: ;
  _Bool __retval53;
    _Bool c54 = 0;
    __retval53 = c54;
    _Bool t55 = __retval53;
    return t55;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v56, int** v57) {
bb58: ;
  struct std___UninitDestroyGuard_int____void_* this59;
  int** __first60;
  this59 = v56;
  __first60 = v57;
  struct std___UninitDestroyGuard_int____void_* t61 = this59;
  int** t62 = __first60;
  int* t63 = *t62;
  t61->_M_first = t63;
  int** t64 = __first60;
  t61->_M_cur = t64;
  return;
}

// function: _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v65) {
bb66: ;
  int* __location67;
  int* __retval68;
  void* __loc69;
  __location67 = v65;
  int* t70 = __location67;
  void* cast71 = (void*)t70;
  __loc69 = cast71;
    void* t72 = __loc69;
    int* cast73 = (int*)t72;
    int c74 = 0;
    *cast73 = c74;
    __retval68 = cast73;
    int* t75 = __retval68;
    return t75;
  abort();
}

// function: _ZSt10_ConstructIiJEEvPT_DpOT0_
void void_std___Construct_int_(int* v76) {
bb77: ;
  int* __p78;
  __p78 = v76;
    _Bool r79 = std____is_constant_evaluated();
    if (r79) {
      int* t80 = __p78;
      int* r81 = _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t80);
      return;
    }
  int* t82 = __p78;
  void* cast83 = (void*)t82;
  int* cast84 = (int*)cast83;
  int c85 = 0;
  *cast84 = c85;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v86) {
bb87: ;
  struct std___UninitDestroyGuard_int____void_* this88;
  this88 = v86;
  struct std___UninitDestroyGuard_int____void_* t89 = this88;
  int** c90 = ((void*)0);
  t89->_M_cur = c90;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v91) {
bb92: ;
  struct std___UninitDestroyGuard_int____void_* this93;
  this93 = v91;
  struct std___UninitDestroyGuard_int____void_* t94 = this93;
    int** t95 = t94->_M_cur;
    int** c96 = ((void*)0);
    _Bool c97 = ((t95 != c96)) ? 1 : 0;
    if (c97) {
      int* t98 = t94->_M_first;
      int** t99 = t94->_M_cur;
      int* t100 = *t99;
      void_std___Destroy_int__(t98, t100);
    }
  return;
}

// function: _ZNSt27__uninitialized_default_n_1ILb0EE18__uninit_default_nIPimEET_S3_T0_
int* int__std____uninitialized_default_n_1_false_____uninit_default_n_int___unsigned_long_(int* v101, unsigned long v102) {
bb103: ;
  int* __first104;
  unsigned long __n105;
  int* __retval106;
  struct std___UninitDestroyGuard_int____void_ __guard107;
  __first104 = v101;
  __n105 = v102;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard107, &__first104);
      while (1) {
        unsigned long t109 = __n105;
        unsigned long c110 = 0;
        _Bool c111 = ((t109 > c110)) ? 1 : 0;
        if (!c111) break;
        int* t112 = __first104;
        void_std___Construct_int_(t112);
      for_step108: ;
        unsigned long t113 = __n105;
        unsigned long u114 = t113 - 1;
        __n105 = u114;
        int* t115 = __first104;
        int c116 = 1;
        int* ptr117 = &(t115)[c116];
        __first104 = ptr117;
      }
    std___UninitDestroyGuard_int___void___release(&__guard107);
    int* t118 = __first104;
    __retval106 = t118;
    int* t119 = __retval106;
    int* ret_val120 = t119;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard107);
    }
    return ret_val120;
  abort();
}

// function: _ZSt9__fill_a1IPiiEvT_S1_RKT0_
void void_std____fill_a1_int___int_(int* v121, int* v122, int* v123) {
bb124: ;
  int* __first125;
  int* __last126;
  int* __value127;
  _Bool __load_outside_loop128;
  int __val129;
  __first125 = v121;
  __last126 = v122;
  __value127 = v123;
  _Bool c130 = 1;
  __load_outside_loop128 = c130;
  int* t131 = __value127;
  int t132 = *t131;
  __val129 = t132;
    while (1) {
      int* t134 = __first125;
      int* t135 = __last126;
      _Bool c136 = ((t134 != t135)) ? 1 : 0;
      if (!c136) break;
      int t137 = __val129;
      int* t138 = __first125;
      *t138 = t137;
    for_step133: ;
      int* t139 = __first125;
      int c140 = 1;
      int* ptr141 = &(t139)[c140];
      __first125 = ptr141;
    }
  return;
}

// function: _ZSt8__fill_aIPiiEvT_S1_RKT0_
void void_std____fill_a_int___int_(int* v142, int* v143, int* v144) {
bb145: ;
  int* __first146;
  int* __last147;
  int* __value148;
  __first146 = v142;
  __last147 = v143;
  __value148 = v144;
  int* t149 = __first146;
  int* t150 = __last147;
  int* t151 = __value148;
  void_std____fill_a1_int___int_(t149, t150, t151);
  return;
}

// function: _ZSt10__fill_n_aIPimiET_S1_T0_RKT1_St26random_access_iterator_tag
int* int__std____fill_n_a_int___unsigned_long__int_(int* v152, unsigned long v153, int* v154, struct std__random_access_iterator_tag v155) {
bb156: ;
  int* __first157;
  unsigned long __n158;
  int* __value159;
  struct std__random_access_iterator_tag unnamed160;
  int* __retval161;
  __first157 = v152;
  __n158 = v153;
  __value159 = v154;
  unnamed160 = v155;
    unsigned long t162 = __n158;
    unsigned long c163 = 0;
    _Bool c164 = ((t162 <= c163)) ? 1 : 0;
    if (c164) {
      int* t165 = __first157;
      __retval161 = t165;
      int* t166 = __retval161;
      return t166;
    }
  int* t167 = __first157;
  int* t168 = __first157;
  unsigned long t169 = __n158;
  int* ptr170 = &(t168)[t169];
  int* t171 = __value159;
  void_std____fill_a_int___int_(t167, ptr170, t171);
  int* t172 = __first157;
  unsigned long t173 = __n158;
  int* ptr174 = &(t172)[t173];
  __retval161 = ptr174;
  int* t175 = __retval161;
  return t175;
}

// function: _ZSt17__size_to_integerm
unsigned long std____size_to_integer(unsigned long v176) {
bb177: ;
  unsigned long __n178;
  unsigned long __retval179;
  __n178 = v176;
  unsigned long t180 = __n178;
  __retval179 = t180;
  unsigned long t181 = __retval179;
  return t181;
}

// function: _ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** v182) {
bb183: ;
  int** unnamed184;
  struct std__random_access_iterator_tag __retval185;
  unnamed184 = v182;
  struct std__random_access_iterator_tag t186 = __retval185;
  return t186;
}

// function: _ZSt6fill_nIPimiET_S1_T0_RKT1_
int* int__std__fill_n_int___unsigned_long__int_(int* v187, unsigned long v188, int* v189) {
bb190: ;
  int* __first191;
  unsigned long __n192;
  int* __value193;
  int* __retval194;
  struct std__random_access_iterator_tag agg_tmp0195;
  __first191 = v187;
  __n192 = v188;
  __value193 = v189;
  int* t196 = __first191;
  unsigned long t197 = __n192;
  unsigned long r198 = std____size_to_integer(t197);
  int* t199 = __value193;
  struct std__random_access_iterator_tag r200 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first191);
  agg_tmp0195 = r200;
  struct std__random_access_iterator_tag t201 = agg_tmp0195;
  int* r202 = int__std____fill_n_a_int___unsigned_long__int_(t196, r198, t199, t201);
  __retval194 = r202;
  int* t203 = __retval194;
  return t203;
}

// function: _ZNSt27__uninitialized_default_n_1ILb1EE18__uninit_default_nIPimEET_S3_T0_
int* int__std____uninitialized_default_n_1_true_____uninit_default_n_int___unsigned_long_(int* v204, unsigned long v205) {
bb206: ;
  int* __first207;
  unsigned long __n208;
  int* __retval209;
  __first207 = v204;
  __n208 = v205;
    unsigned long t210 = __n208;
    unsigned long c211 = 0;
    _Bool c212 = ((t210 > c211)) ? 1 : 0;
    if (c212) {
      int* __val213;
      int* t214 = __first207;
      __val213 = t214;
      int* t215 = __val213;
      void_std___Construct_int_(t215);
      int* t216 = __first207;
      int c217 = 1;
      int* ptr218 = &(t216)[c217];
      __first207 = ptr218;
      int* t219 = __first207;
      unsigned long t220 = __n208;
      unsigned long c221 = 1;
      unsigned long b222 = t220 - c221;
      int* t223 = __val213;
      int* r224 = int__std__fill_n_int___unsigned_long__int_(t219, b222, t223);
      __first207 = r224;
    }
  int* t225 = __first207;
  __retval209 = t225;
  int* t226 = __retval209;
  return t226;
}

// function: _ZSt25__uninitialized_default_nIPimET_S1_T0_
int* int__std____uninitialized_default_n_int___unsigned_long_(int* v227, unsigned long v228) {
bb229: ;
  int* __first230;
  unsigned long __n231;
  int* __retval232;
  _Bool __can_fill233;
  __first230 = v227;
  __n231 = v228;
    _Bool r234 = std__is_constant_evaluated();
    if (r234) {
      int* t235 = __first230;
      unsigned long t236 = __n231;
      int* r237 = int__std____uninitialized_default_n_1_false_____uninit_default_n_int___unsigned_long_(t235, t236);
      __retval232 = r237;
      int* t238 = __retval232;
      return t238;
    }
  _Bool c239 = 1;
  __can_fill233 = c239;
  int* t240 = __first230;
  unsigned long t241 = __n231;
  int* r242 = int__std____uninitialized_default_n_1_true_____uninit_default_n_int___unsigned_long_(t240, t241);
  __retval232 = r242;
  int* t243 = __retval232;
  return t243;
}

// function: _ZSt27__uninitialized_default_n_aIPimiET_S1_T0_RSaIT1_E
int* int__std____uninitialized_default_n_a_int___unsigned_long__int_(int* v244, unsigned long v245, struct std__allocator_int_* v246) {
bb247: ;
  int* __first248;
  unsigned long __n249;
  struct std__allocator_int_* unnamed250;
  int* __retval251;
  __first248 = v244;
  __n249 = v245;
  unnamed250 = v246;
  int* t252 = __first248;
  unsigned long t253 = __n249;
  int* r254 = int__std____uninitialized_default_n_int___unsigned_long_(t252, t253);
  __retval251 = r254;
  int* t255 = __retval251;
  return t255;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v256) {
bb257: ;
  struct std___Vector_base_int__std__allocator_int__* this258;
  struct std__allocator_int_* __retval259;
  this258 = v256;
  struct std___Vector_base_int__std__allocator_int__* t260 = this258;
  struct std__allocator_int_* base261 = (struct std__allocator_int_*)((char *)&(t260->_M_impl) + 0);
  __retval259 = base261;
  struct std__allocator_int_* t262 = __retval259;
  return t262;
}

// function: _ZSt3maxImERKT_S2_S2_
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* v263, unsigned long* v264) {
bb265: ;
  unsigned long* __a266;
  unsigned long* __b267;
  unsigned long* __retval268;
  __a266 = v263;
  __b267 = v264;
    unsigned long* t269 = __a266;
    unsigned long t270 = *t269;
    unsigned long* t271 = __b267;
    unsigned long t272 = *t271;
    _Bool c273 = ((t270 < t272)) ? 1 : 0;
    if (c273) {
      unsigned long* t274 = __b267;
      __retval268 = t274;
      unsigned long* t275 = __retval268;
      return t275;
    }
  unsigned long* t276 = __a266;
  __retval268 = t276;
  unsigned long* t277 = __retval268;
  return t277;
}

// function: _ZNKSt6vectorIiSaIiEE12_M_check_lenEmPKc
unsigned long std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(struct std__vector_int__std__allocator_int__* v278, unsigned long v279, char* v280) {
bb281: ;
  struct std__vector_int__std__allocator_int__* this282;
  unsigned long __n283;
  char* __s284;
  unsigned long __retval285;
  unsigned long __len286;
  unsigned long ref_tmp0287;
  this282 = v278;
  __n283 = v279;
  __s284 = v280;
  struct std__vector_int__std__allocator_int__* t288 = this282;
    unsigned long r289 = std__vector_int__std__allocator_int_____max_size___const(t288);
    unsigned long r290 = std__vector_int__std__allocator_int_____size___const(t288);
    unsigned long b291 = r289 - r290;
    unsigned long t292 = __n283;
    _Bool c293 = ((b291 < t292)) ? 1 : 0;
    if (c293) {
      char* t294 = __s284;
      std____throw_length_error(t294);
    }
  unsigned long r295 = std__vector_int__std__allocator_int_____size___const(t288);
  unsigned long r296 = std__vector_int__std__allocator_int_____size___const(t288);
  ref_tmp0287 = r296;
  unsigned long* r297 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp0287, &__n283);
  unsigned long t298 = *r297;
  unsigned long b299 = r295 + t298;
  __len286 = b299;
  unsigned long t300 = __len286;
  unsigned long r301 = std__vector_int__std__allocator_int_____size___const(t288);
  _Bool c302 = ((t300 < r301)) ? 1 : 0;
  _Bool ternary303;
  if (c302) {
    _Bool c304 = 1;
    ternary303 = (_Bool)c304;
  } else {
    unsigned long t305 = __len286;
    unsigned long r306 = std__vector_int__std__allocator_int_____max_size___const(t288);
    _Bool c307 = ((t305 > r306)) ? 1 : 0;
    ternary303 = (_Bool)c307;
  }
  unsigned long ternary308;
  if (ternary303) {
    unsigned long r309 = std__vector_int__std__allocator_int_____max_size___const(t288);
    ternary308 = (unsigned long)r309;
  } else {
    unsigned long t310 = __len286;
    ternary308 = (unsigned long)t310;
  }
  __retval285 = ternary308;
  unsigned long t311 = __retval285;
  return t311;
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v312) {
bb313: ;
  struct std____new_allocator_int_* this314;
  unsigned long __retval315;
  this314 = v312;
  struct std____new_allocator_int_* t316 = this314;
  unsigned long c317 = 9223372036854775807;
  unsigned long c318 = 4;
  unsigned long b319 = c317 / c318;
  __retval315 = b319;
  unsigned long t320 = __retval315;
  return t320;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v321, unsigned long v322, void* v323) {
bb324: ;
  struct std____new_allocator_int_* this325;
  unsigned long __n326;
  void* unnamed327;
  int* __retval328;
  this325 = v321;
  __n326 = v322;
  unnamed327 = v323;
  struct std____new_allocator_int_* t329 = this325;
    unsigned long t330 = __n326;
    unsigned long r331 = std____new_allocator_int____M_max_size___const(t329);
    _Bool c332 = ((t330 > r331)) ? 1 : 0;
    if (c332) {
        unsigned long t333 = __n326;
        unsigned long c334 = -1;
        unsigned long c335 = 4;
        unsigned long b336 = c334 / c335;
        _Bool c337 = ((t333 > b336)) ? 1 : 0;
        if (c337) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c338 = 4;
    unsigned long c339 = 16;
    _Bool c340 = ((c338 > c339)) ? 1 : 0;
    if (c340) {
      unsigned long __al341;
      unsigned long c342 = 4;
      __al341 = c342;
      unsigned long t343 = __n326;
      unsigned long c344 = 4;
      unsigned long b345 = t343 * c344;
      unsigned long t346 = __al341;
      void* r347 = operator_new_2(b345, t346);
      int* cast348 = (int*)r347;
      __retval328 = cast348;
      int* t349 = __retval328;
      return t349;
    }
  unsigned long t350 = __n326;
  unsigned long c351 = 4;
  unsigned long b352 = t350 * c351;
  void* r353 = operator_new(b352);
  int* cast354 = (int*)r353;
  __retval328 = cast354;
  int* t355 = __retval328;
  return t355;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v356, unsigned long v357) {
bb358: ;
  struct std__allocator_int_* this359;
  unsigned long __n360;
  int* __retval361;
  this359 = v356;
  __n360 = v357;
  struct std__allocator_int_* t362 = this359;
    _Bool r363 = std____is_constant_evaluated();
    if (r363) {
        unsigned long t364 = __n360;
        unsigned long c365 = 4;
        unsigned long ovr366;
        _Bool ovf367 = __builtin_mul_overflow(t364, c365, &ovr366);
        __n360 = ovr366;
        if (ovf367) {
          std____throw_bad_array_new_length();
        }
      unsigned long t368 = __n360;
      void* r369 = operator_new(t368);
      int* cast370 = (int*)r369;
      __retval361 = cast370;
      int* t371 = __retval361;
      return t371;
    }
  struct std____new_allocator_int_* base372 = (struct std____new_allocator_int_*)((char *)t362 + 0);
  unsigned long t373 = __n360;
  void* c374 = ((void*)0);
  int* r375 = std____new_allocator_int___allocate(base372, t373, c374);
  __retval361 = r375;
  int* t376 = __retval361;
  return t376;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v377, unsigned long v378) {
bb379: ;
  struct std__allocator_int_* __a380;
  unsigned long __n381;
  int* __retval382;
  __a380 = v377;
  __n381 = v378;
  struct std__allocator_int_* t383 = __a380;
  unsigned long t384 = __n381;
  int* r385 = std__allocator_int___allocate(t383, t384);
  __retval382 = r385;
  int* t386 = __retval382;
  return t386;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v387, unsigned long v388) {
bb389: ;
  struct std___Vector_base_int__std__allocator_int__* this390;
  unsigned long __n391;
  int* __retval392;
  this390 = v387;
  __n391 = v388;
  struct std___Vector_base_int__std__allocator_int__* t393 = this390;
  unsigned long t394 = __n391;
  unsigned long c395 = 0;
  _Bool c396 = ((t394 != c395)) ? 1 : 0;
  int* ternary397;
  if (c396) {
    struct std__allocator_int_* base398 = (struct std__allocator_int_*)((char *)&(t393->_M_impl) + 0);
    unsigned long t399 = __n391;
    int* r400 = std__allocator_traits_std__allocator_int_____allocate(base398, t399);
    ternary397 = (int*)r400;
  } else {
    int* c401 = ((void*)0);
    ternary397 = (int*)c401;
  }
  __retval392 = ternary397;
  int* t402 = __retval392;
  return t402;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocC2EPimRSt12_Vector_baseIiS0_E
void std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v403, int* v404, unsigned long v405, struct std___Vector_base_int__std__allocator_int__* v406) {
bb407: ;
  struct std__vector_int__std__allocator_int_____Guard_alloc* this408;
  int* __s409;
  unsigned long __l410;
  struct std___Vector_base_int__std__allocator_int__* __vect411;
  this408 = v403;
  __s409 = v404;
  __l410 = v405;
  __vect411 = v406;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t412 = this408;
  int* t413 = __s409;
  t412->_M_storage = t413;
  unsigned long t414 = __l410;
  t412->_M_len = t414;
  struct std___Vector_base_int__std__allocator_int__* t415 = __vect411;
  t412->_M_vect = t415;
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEC2ERKS1_
void __gnu_cxx____normal_iterator_int___void_____normal_iterator(struct __gnu_cxx____normal_iterator_int____void_* v416, int** v417) {
bb418: ;
  struct __gnu_cxx____normal_iterator_int____void_* this419;
  int** __i420;
  this419 = v416;
  __i420 = v417;
  struct __gnu_cxx____normal_iterator_int____void_* t421 = this419;
  int** t422 = __i420;
  int* t423 = *t422;
  t421->_M_current = t423;
  return;
}

// function: _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v424, int* v425) {
bb426: ;
  int* __location427;
  int* __args428;
  int* __retval429;
  void* __loc430;
  __location427 = v424;
  __args428 = v425;
  int* t431 = __location427;
  void* cast432 = (void*)t431;
  __loc430 = cast432;
    void* t433 = __loc430;
    int* cast434 = (int*)t433;
    int* t435 = __args428;
    int t436 = *t435;
    *cast434 = t436;
    __retval429 = cast434;
    int* t437 = __retval429;
    return t437;
  abort();
}

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std__allocator_int_* v438, int* v439, int* v440) {
bb441: ;
  struct std__allocator_int_* __a442;
  int* __p443;
  int* __args444;
  __a442 = v438;
  __p443 = v439;
  __args444 = v440;
  int* t445 = __p443;
  int* t446 = __args444;
  int* r447 = _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t445, t446);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE7destroyIiEEvRS0_PT_
void void_std__allocator_traits_std__allocator_int_____destroy_int_(struct std__allocator_int_* v448, int* v449) {
bb450: ;
  struct std__allocator_int_* __a451;
  int* __p452;
  __a451 = v448;
  __p452 = v449;
  int* t453 = __p452;
  void_std__destroy_at_int_(t453);
  return;
}

// function: _ZSt19__relocate_object_aIiiSaIiEEvPT_PT0_RT1_
void void_std____relocate_object_a_int__int__std__allocator_int___(int* v454, int* v455, struct std__allocator_int_* v456) {
bb457: ;
  int* __dest458;
  int* __orig459;
  struct std__allocator_int_* __alloc460;
  __dest458 = v454;
  __orig459 = v455;
  __alloc460 = v456;
  struct std__allocator_int_* t461 = __alloc460;
  int* t462 = __dest458;
  int* t463 = __orig459;
  void_std__allocator_traits_std__allocator_int_____construct_int__int_(t461, t462, t463);
  struct std__allocator_int_* t464 = __alloc460;
  int* t465 = __orig459;
  void_std__allocator_traits_std__allocator_int_____destroy_int_(t464, t465);
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivEdeEv
int* __gnu_cxx____normal_iterator_int___void___operator____const(struct __gnu_cxx____normal_iterator_int____void_* v466) {
bb467: ;
  struct __gnu_cxx____normal_iterator_int____void_* this468;
  int* __retval469;
  this468 = v466;
  struct __gnu_cxx____normal_iterator_int____void_* t470 = this468;
  int* t471 = t470->_M_current;
  __retval469 = t471;
  int* t472 = __retval469;
  return t472;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEppEv
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator__(struct __gnu_cxx____normal_iterator_int____void_* v473) {
bb474: ;
  struct __gnu_cxx____normal_iterator_int____void_* this475;
  struct __gnu_cxx____normal_iterator_int____void_* __retval476;
  this475 = v473;
  struct __gnu_cxx____normal_iterator_int____void_* t477 = this475;
  int* t478 = t477->_M_current;
  int c479 = 1;
  int* ptr480 = &(t478)[c479];
  t477->_M_current = ptr480;
  __retval476 = t477;
  struct __gnu_cxx____normal_iterator_int____void_* t481 = __retval476;
  return t481;
}

// function: _ZSt14__relocate_a_1IPiN9__gnu_cxx17__normal_iteratorIS0_vEESaIiEET0_T_S6_S5_RT1_
struct __gnu_cxx____normal_iterator_int____void_ __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(int* v482, int* v483, struct __gnu_cxx____normal_iterator_int____void_ v484, struct std__allocator_int_* v485) {
bb486: ;
  int* __first487;
  int* __last488;
  struct __gnu_cxx____normal_iterator_int____void_ __result489;
  struct std__allocator_int_* __alloc490;
  struct __gnu_cxx____normal_iterator_int____void_ __retval491;
  __first487 = v482;
  __last488 = v483;
  __result489 = v484;
  __alloc490 = v485;
  __retval491 = __result489; // copy
    while (1) {
      int* t493 = __first487;
      int* t494 = __last488;
      _Bool c495 = ((t493 != t494)) ? 1 : 0;
      if (!c495) break;
      int* r496 = __gnu_cxx____normal_iterator_int___void___operator____const(&__retval491);
      int* t497 = __first487;
      struct std__allocator_int_* t498 = __alloc490;
      void_std____relocate_object_a_int__int__std__allocator_int___(r496, t497, t498);
    for_step492: ;
      int* t499 = __first487;
      int c500 = 1;
      int* ptr501 = &(t499)[c500];
      __first487 = ptr501;
      struct __gnu_cxx____normal_iterator_int____void_* r502 = __gnu_cxx____normal_iterator_int___void___operator__(&__retval491);
    }
  struct __gnu_cxx____normal_iterator_int____void_ t503 = __retval491;
  return t503;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEaSEOS2_
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator_(struct __gnu_cxx____normal_iterator_int____void_* v504, struct __gnu_cxx____normal_iterator_int____void_* v505) {
bb506: ;
  struct __gnu_cxx____normal_iterator_int____void_* this507;
  struct __gnu_cxx____normal_iterator_int____void_* unnamed508;
  struct __gnu_cxx____normal_iterator_int____void_* __retval509;
  this507 = v504;
  unnamed508 = v505;
  struct __gnu_cxx____normal_iterator_int____void_* t510 = this507;
  struct __gnu_cxx____normal_iterator_int____void_* t511 = unnamed508;
  int* t512 = t511->_M_current;
  t510->_M_current = t512;
  __retval509 = t510;
  struct __gnu_cxx____normal_iterator_int____void_* t513 = __retval509;
  return t513;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivE4baseEv
int** __gnu_cxx____normal_iterator_int___void___base___const(struct __gnu_cxx____normal_iterator_int____void_* v514) {
bb515: ;
  struct __gnu_cxx____normal_iterator_int____void_* this516;
  int** __retval517;
  this516 = v514;
  struct __gnu_cxx____normal_iterator_int____void_* t518 = this516;
  __retval517 = &t518->_M_current;
  int** t519 = __retval517;
  return t519;
}

// function: _ZSt14__relocate_a_1IiiENSt9enable_ifIXsr3std24__is_bitwise_relocatableIT_EE5valueEPS1_E4typeES2_S2_S2_RSaIT0_E
int* std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(int* v520, int* v521, int* v522, struct std__allocator_int_* v523) {
bb524: ;
  int* __first525;
  int* __last526;
  int* __result527;
  struct std__allocator_int_* __alloc528;
  int* __retval529;
  long __count530;
  __first525 = v520;
  __last526 = v521;
  __result527 = v522;
  __alloc528 = v523;
  int* t531 = __last526;
  int* t532 = __first525;
  long diff533 = t531 - t532;
  __count530 = diff533;
    long t534 = __count530;
    long c535 = 0;
    _Bool c536 = ((t534 > c535)) ? 1 : 0;
    if (c536) {
        _Bool r537 = std__is_constant_evaluated();
        if (r537) {
          struct __gnu_cxx____normal_iterator_int____void_ __out538;
          struct __gnu_cxx____normal_iterator_int____void_ ref_tmp0539;
          struct __gnu_cxx____normal_iterator_int____void_ agg_tmp0540;
          __gnu_cxx____normal_iterator_int___void_____normal_iterator(&__out538, &__result527);
          int* t541 = __first525;
          int* t542 = __last526;
          agg_tmp0540 = __out538; // copy
          struct std__allocator_int_* t543 = __alloc528;
          struct __gnu_cxx____normal_iterator_int____void_ t544 = agg_tmp0540;
          struct __gnu_cxx____normal_iterator_int____void_ r545 = __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(t541, t542, t544, t543);
          ref_tmp0539 = r545;
          struct __gnu_cxx____normal_iterator_int____void_* r546 = __gnu_cxx____normal_iterator_int___void___operator_(&__out538, &ref_tmp0539);
          int** r547 = __gnu_cxx____normal_iterator_int___void___base___const(&__out538);
          int* t548 = *r547;
          __retval529 = t548;
          int* t549 = __retval529;
          return t549;
        }
      int* t550 = __result527;
      void* cast551 = (void*)t550;
      int* t552 = __first525;
      void* cast553 = (void*)t552;
      long t554 = __count530;
      unsigned long cast555 = (unsigned long)t554;
      unsigned long c556 = 4;
      unsigned long b557 = cast555 * c556;
      void* r558 = memcpy(cast551, cast553, b557);
    }
  int* t559 = __result527;
  long t560 = __count530;
  int* ptr561 = &(t559)[t560];
  __retval529 = ptr561;
  int* t562 = __retval529;
  return t562;
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v563) {
bb564: ;
  int* __it565;
  int* __retval566;
  __it565 = v563;
  int* t567 = __it565;
  __retval566 = t567;
  int* t568 = __retval566;
  return t568;
}

// function: _ZSt12__relocate_aIPiS0_SaIiEET0_T_S3_S2_RT1_
int* int__std____relocate_a_int___int___std__allocator_int___(int* v569, int* v570, int* v571, struct std__allocator_int_* v572) {
bb573: ;
  int* __first574;
  int* __last575;
  int* __result576;
  struct std__allocator_int_* __alloc577;
  int* __retval578;
  __first574 = v569;
  __last575 = v570;
  __result576 = v571;
  __alloc577 = v572;
  int* t579 = __first574;
  int* r580 = int__std____niter_base_int__(t579);
  int* t581 = __last575;
  int* r582 = int__std____niter_base_int__(t581);
  int* t583 = __result576;
  int* r584 = int__std____niter_base_int__(t583);
  struct std__allocator_int_* t585 = __alloc577;
  int* r586 = std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(r580, r582, r584, t585);
  __retval578 = r586;
  int* t587 = __retval578;
  return t587;
}

// function: _ZNSt6vectorIiSaIiEE11_S_relocateEPiS2_S2_RS0_
int* std__vector_int__std__allocator_int______S_relocate(int* v588, int* v589, int* v590, struct std__allocator_int_* v591) {
bb592: ;
  int* __first593;
  int* __last594;
  int* __result595;
  struct std__allocator_int_* __alloc596;
  int* __retval597;
  __first593 = v588;
  __last594 = v589;
  __result595 = v590;
  __alloc596 = v591;
  int* t598 = __first593;
  int* t599 = __last594;
  int* t600 = __result595;
  struct std__allocator_int_* t601 = __alloc596;
  int* r602 = int__std____relocate_a_int___int___std__allocator_int___(t598, t599, t600, t601);
  __retval597 = r602;
  int* t603 = __retval597;
  return t603;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocD2Ev
void std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v604) {
bb605: ;
  struct std__vector_int__std__allocator_int_____Guard_alloc* this606;
  this606 = v604;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t607 = this606;
    int* t608 = t607->_M_storage;
    _Bool cast609 = (_Bool)t608;
    if (cast609) {
      struct std___Vector_base_int__std__allocator_int__* t610 = t607->_M_vect;
      int* t611 = t607->_M_storage;
      unsigned long t612 = t607->_M_len;
      std___Vector_base_int__std__allocator_int______M_deallocate(t610, t611, t612);
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_M_default_appendEm
void std__vector_int__std__allocator_int______M_default_append(struct std__vector_int__std__allocator_int__* v613, unsigned long v614) {
bb615: ;
  struct std__vector_int__std__allocator_int__* this616;
  unsigned long __n617;
  this616 = v613;
  __n617 = v614;
  struct std__vector_int__std__allocator_int__* t618 = this616;
    unsigned long t619 = __n617;
    unsigned long c620 = 0;
    _Bool c621 = ((t619 != c620)) ? 1 : 0;
    if (c621) {
      unsigned long __size622;
      unsigned long __navail623;
      unsigned long r624 = std__vector_int__std__allocator_int_____size___const(t618);
      __size622 = r624;
      struct std___Vector_base_int__std__allocator_int__* base625 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t618 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base626 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base625->_M_impl) + 0);
      int* t627 = base626->_M_end_of_storage;
      struct std___Vector_base_int__std__allocator_int__* base628 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t618 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base629 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base628->_M_impl) + 0);
      int* t630 = base629->_M_finish;
      long diff631 = t627 - t630;
      unsigned long cast632 = (unsigned long)diff631;
      __navail623 = cast632;
        unsigned long t633 = __size622;
        unsigned long r634 = std__vector_int__std__allocator_int_____max_size___const(t618);
        _Bool c635 = ((t633 > r634)) ? 1 : 0;
        _Bool ternary636;
        if (c635) {
          _Bool c637 = 1;
          ternary636 = (_Bool)c637;
        } else {
          unsigned long t638 = __navail623;
          unsigned long r639 = std__vector_int__std__allocator_int_____max_size___const(t618);
          unsigned long t640 = __size622;
          unsigned long b641 = r639 - t640;
          _Bool c642 = ((t638 > b641)) ? 1 : 0;
          ternary636 = (_Bool)c642;
        }
        if (ternary636) {
          __builtin_unreachable();
        }
        unsigned long t643 = __navail623;
        unsigned long t644 = __n617;
        _Bool c645 = ((t643 >= t644)) ? 1 : 0;
        if (c645) {
            struct std___Vector_base_int__std__allocator_int__* base646 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t618 + 0);
            struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base647 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base646->_M_impl) + 0);
            int* t648 = base647->_M_finish;
            _Bool cast649 = (_Bool)t648;
            _Bool u650 = !cast649;
            if (u650) {
              __builtin_unreachable();
            }
          struct std___Vector_base_int__std__allocator_int__* base651 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t618 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base652 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base651->_M_impl) + 0);
          int* t653 = base652->_M_finish;
          unsigned long t654 = __n617;
          struct std___Vector_base_int__std__allocator_int__* base655 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t618 + 0);
          struct std__allocator_int_* r656 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base655);
          int* r657 = int__std____uninitialized_default_n_a_int___unsigned_long__int_(t653, t654, r656);
          struct std___Vector_base_int__std__allocator_int__* base658 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t618 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base659 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base658->_M_impl) + 0);
          base659->_M_finish = r657;
        } else {
          int* __old_start660;
          int* __old_finish661;
          unsigned long __len662;
          int* __new_start663;
          struct std___Vector_base_int__std__allocator_int__* base664 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t618 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base665 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base664->_M_impl) + 0);
          int* t666 = base665->_M_start;
          __old_start660 = t666;
          struct std___Vector_base_int__std__allocator_int__* base667 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t618 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base668 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base667->_M_impl) + 0);
          int* t669 = base668->_M_finish;
          __old_finish661 = t669;
          unsigned long t670 = __n617;
          char* cast671 = (char*)&(_str_5);
          unsigned long r672 = std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(t618, t670, cast671);
          __len662 = r672;
          struct std___Vector_base_int__std__allocator_int__* base673 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t618 + 0);
          unsigned long t674 = __len662;
          int* r675 = std___Vector_base_int__std__allocator_int______M_allocate(base673, t674);
          __new_start663 = r675;
            struct std__vector_int__std__allocator_int_____Guard_alloc __guard676;
            int* t677 = __new_start663;
            unsigned long t678 = __len662;
            struct std___Vector_base_int__std__allocator_int__* base679 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t618 + 0);
            std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(&__guard676, t677, t678, base679);
              int* t680 = __new_start663;
              unsigned long t681 = __size622;
              int* ptr682 = &(t680)[t681];
              unsigned long t683 = __n617;
              struct std___Vector_base_int__std__allocator_int__* base684 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t618 + 0);
              struct std__allocator_int_* r685 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base684);
              int* r686 = int__std____uninitialized_default_n_a_int___unsigned_long__int_(ptr682, t683, r685);
                int* t687 = __old_start660;
                int* t688 = __old_finish661;
                int* t689 = __new_start663;
                struct std___Vector_base_int__std__allocator_int__* base690 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t618 + 0);
                struct std__allocator_int_* r691 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base690);
                int* r692 = std__vector_int__std__allocator_int______S_relocate(t687, t688, t689, r691);
              int* t693 = __old_start660;
              __guard676._M_storage = t693;
              struct std___Vector_base_int__std__allocator_int__* base694 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t618 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base695 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base694->_M_impl) + 0);
              int* t696 = base695->_M_end_of_storage;
              int* t697 = __old_start660;
              long diff698 = t696 - t697;
              unsigned long cast699 = (unsigned long)diff698;
              __guard676._M_len = cast699;
            {
              std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(&__guard676);
            }
          int* t700 = __new_start663;
          struct std___Vector_base_int__std__allocator_int__* base701 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t618 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base702 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base701->_M_impl) + 0);
          base702->_M_start = t700;
          int* t703 = __new_start663;
          unsigned long t704 = __size622;
          int* ptr705 = &(t703)[t704];
          unsigned long t706 = __n617;
          int* ptr707 = &(ptr705)[t706];
          struct std___Vector_base_int__std__allocator_int__* base708 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t618 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base709 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base708->_M_impl) + 0);
          base709->_M_finish = ptr707;
          int* t710 = __new_start663;
          unsigned long t711 = __len662;
          int* ptr712 = &(t710)[t711];
          struct std___Vector_base_int__std__allocator_int__* base713 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t618 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base714 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base713->_M_impl) + 0);
          base714->_M_end_of_storage = ptr712;
        }
    }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v715, int* v716, struct std__allocator_int_* v717) {
bb718: ;
  int* __first719;
  int* __last720;
  struct std__allocator_int_* unnamed721;
  __first719 = v715;
  __last720 = v716;
  unnamed721 = v717;
  int* t722 = __first719;
  int* t723 = __last720;
  void_std___Destroy_int__(t722, t723);
  return;
}

// function: _ZNSt6vectorIiSaIiEE15_M_erase_at_endEPi
void std__vector_int__std__allocator_int______M_erase_at_end(struct std__vector_int__std__allocator_int__* v724, int* v725) {
bb726: ;
  struct std__vector_int__std__allocator_int__* this727;
  int* __pos728;
  this727 = v724;
  __pos728 = v725;
  struct std__vector_int__std__allocator_int__* t729 = this727;
    unsigned long __n730;
    struct std___Vector_base_int__std__allocator_int__* base731 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t729 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base732 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base731->_M_impl) + 0);
    int* t733 = base732->_M_finish;
    int* t734 = __pos728;
    long diff735 = t733 - t734;
    unsigned long cast736 = (unsigned long)diff735;
    __n730 = cast736;
    unsigned long t737 = __n730;
    _Bool cast738 = (_Bool)t737;
    if (cast738) {
      int* t739 = __pos728;
      struct std___Vector_base_int__std__allocator_int__* base740 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t729 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base741 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base740->_M_impl) + 0);
      int* t742 = base741->_M_finish;
      struct std___Vector_base_int__std__allocator_int__* base743 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t729 + 0);
      struct std__allocator_int_* r744 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base743);
      void_std___Destroy_int___int_(t739, t742, r744);
      int* t745 = __pos728;
      struct std___Vector_base_int__std__allocator_int__* base746 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t729 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base747 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base746->_M_impl) + 0);
      base747->_M_finish = t745;
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE6resizeEm
void std__vector_int__std__allocator_int_____resize(struct std__vector_int__std__allocator_int__* v748, unsigned long v749) {
bb750: ;
  struct std__vector_int__std__allocator_int__* this751;
  unsigned long __new_size752;
  this751 = v748;
  __new_size752 = v749;
  struct std__vector_int__std__allocator_int__* t753 = this751;
    unsigned long t754 = __new_size752;
    unsigned long r755 = std__vector_int__std__allocator_int_____size___const(t753);
    _Bool c756 = ((t754 > r755)) ? 1 : 0;
    if (c756) {
      unsigned long t757 = __new_size752;
      unsigned long r758 = std__vector_int__std__allocator_int_____size___const(t753);
      unsigned long b759 = t757 - r758;
      std__vector_int__std__allocator_int______M_default_append(t753, b759);
    } else {
        unsigned long t760 = __new_size752;
        unsigned long r761 = std__vector_int__std__allocator_int_____size___const(t753);
        _Bool c762 = ((t760 < r761)) ? 1 : 0;
        if (c762) {
          struct std___Vector_base_int__std__allocator_int__* base763 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t753 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base764 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base763->_M_impl) + 0);
          int* t765 = base764->_M_start;
          unsigned long t766 = __new_size752;
          int* ptr767 = &(t765)[t766];
          std__vector_int__std__allocator_int______M_erase_at_end(t753, ptr767);
        }
    }
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEi
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v768, int v769) {
bb770: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this771;
  int unnamed772;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval773;
  int* ref_tmp0774;
  this771 = v768;
  unnamed772 = v769;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t775 = this771;
  int* t776 = t775->_M_current;
  int c777 = 1;
  int* ptr778 = &(t776)[c777];
  t775->_M_current = ptr778;
  ref_tmp0774 = t776;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval773, &ref_tmp0774);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t779 = __retval773;
  return t779;
}

// function: _Z4copyIiN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEET0_PT_S9_S7_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______copy_int____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(int* v780, int* v781, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v782) {
bb783: ;
  int* first784;
  int* last785;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ dest786;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval787;
  first784 = v780;
  last785 = v781;
  dest786 = v782;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0788;
    while (1) {
      int* t789 = first784;
      int* t790 = last785;
      _Bool c791 = ((t789 != t790)) ? 1 : 0;
      if (!c791) break;
      int* t792 = first784;
      int c793 = 1;
      int* ptr794 = &(t792)[c793];
      first784 = ptr794;
      int t795 = *t792;
      int c796 = 0;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r797 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&dest786, c796);
      ref_tmp0788 = r797;
      int* r798 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp0788);
      *r798 = t795;
    }
  __retval787 = dest786; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t799 = __retval787;
  return t799;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v800, int** v801) {
bb802: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this803;
  int** __i804;
  this803 = v800;
  __i804 = v801;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t805 = this803;
  int** t806 = __i804;
  int* t807 = *t806;
  t805->_M_current = t807;
  return;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v808) {
bb809: ;
  struct std__vector_int__std__allocator_int__* this810;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval811;
  this810 = v808;
  struct std__vector_int__std__allocator_int__* t812 = this810;
  struct std___Vector_base_int__std__allocator_int__* base813 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t812 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base814 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base813->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval811, &base814->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t815 = __retval811;
  return t815;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v816) {
bb817: ;
  struct std__vector_int__std__allocator_int__* this818;
  unsigned long __retval819;
  long __dif820;
  this818 = v816;
  struct std__vector_int__std__allocator_int__* t821 = this818;
  struct std___Vector_base_int__std__allocator_int__* base822 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t821 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base823 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base822->_M_impl) + 0);
  int* t824 = base823->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base825 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t821 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base826 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base825->_M_impl) + 0);
  int* t827 = base826->_M_start;
  long diff828 = t824 - t827;
  __dif820 = diff828;
    long t829 = __dif820;
    long c830 = 0;
    _Bool c831 = ((t829 < c830)) ? 1 : 0;
    if (c831) {
      __builtin_unreachable();
    }
  long t832 = __dif820;
  unsigned long cast833 = (unsigned long)t832;
  __retval819 = cast833;
  unsigned long t834 = __retval819;
  return t834;
}

// function: _ZNSt6vectorIiSaIiEEixEm
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* v835, unsigned long v836) {
bb837: ;
  struct std__vector_int__std__allocator_int__* this838;
  unsigned long __n839;
  int* __retval840;
  this838 = v835;
  __n839 = v836;
  struct std__vector_int__std__allocator_int__* t841 = this838;
    do {
          unsigned long t842 = __n839;
          unsigned long r843 = std__vector_int__std__allocator_int_____size___const(t841);
          _Bool c844 = ((t842 < r843)) ? 1 : 0;
          _Bool u845 = !c844;
          if (u845) {
            char* cast846 = (char*)&(_str_6);
            int c847 = 1263;
            char* cast848 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm);
            char* cast849 = (char*)&(_str_7);
            std____glibcxx_assert_fail(cast846, c847, cast848, cast849);
          }
      _Bool c850 = 0;
      if (!c850) break;
    } while (1);
  struct std___Vector_base_int__std__allocator_int__* base851 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t841 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base852 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base851->_M_impl) + 0);
  int* t853 = base852->_M_start;
  unsigned long t854 = __n839;
  int* ptr855 = &(t853)[t854];
  __retval840 = ptr855;
  int* t856 = __retval840;
  return t856;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v857, int v858) {
bb859: ;
  int __a860;
  int __b861;
  int __retval862;
  __a860 = v857;
  __b861 = v858;
  int t863 = __a860;
  int t864 = __b861;
  int b865 = t863 | t864;
  __retval862 = b865;
  int t866 = __retval862;
  return t866;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v867) {
bb868: ;
  struct std__basic_ios_char__std__char_traits_char__* this869;
  int __retval870;
  this869 = v867;
  struct std__basic_ios_char__std__char_traits_char__* t871 = this869;
  struct std__ios_base* base872 = (struct std__ios_base*)((char *)t871 + 0);
  int t873 = base872->_M_streambuf_state;
  __retval870 = t873;
  int t874 = __retval870;
  return t874;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v875, int v876) {
bb877: ;
  struct std__basic_ios_char__std__char_traits_char__* this878;
  int __state879;
  this878 = v875;
  __state879 = v876;
  struct std__basic_ios_char__std__char_traits_char__* t880 = this878;
  int r881 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t880);
  int t882 = __state879;
  int r883 = std__operator_(r881, t882);
  std__basic_ios_char__std__char_traits_char_____clear(t880, r883);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v884, char* v885) {
bb886: ;
  char* __c1887;
  char* __c2888;
  _Bool __retval889;
  __c1887 = v884;
  __c2888 = v885;
  char* t890 = __c1887;
  char t891 = *t890;
  int cast892 = (int)t891;
  char* t893 = __c2888;
  char t894 = *t893;
  int cast895 = (int)t894;
  _Bool c896 = ((cast892 == cast895)) ? 1 : 0;
  __retval889 = c896;
  _Bool t897 = __retval889;
  return t897;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v898) {
bb899: ;
  char* __p900;
  unsigned long __retval901;
  unsigned long __i902;
  __p900 = v898;
  unsigned long c903 = 0;
  __i902 = c903;
    char ref_tmp0904;
    while (1) {
      unsigned long t905 = __i902;
      char* t906 = __p900;
      char* ptr907 = &(t906)[t905];
      char c908 = 0;
      ref_tmp0904 = c908;
      _Bool r909 = __gnu_cxx__char_traits_char___eq(ptr907, &ref_tmp0904);
      _Bool u910 = !r909;
      if (!u910) break;
      unsigned long t911 = __i902;
      unsigned long u912 = t911 + 1;
      __i902 = u912;
    }
  unsigned long t913 = __i902;
  __retval901 = t913;
  unsigned long t914 = __retval901;
  return t914;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v915) {
bb916: ;
  char* __s917;
  unsigned long __retval918;
  __s917 = v915;
    _Bool r919 = std____is_constant_evaluated();
    if (r919) {
      char* t920 = __s917;
      unsigned long r921 = __gnu_cxx__char_traits_char___length(t920);
      __retval918 = r921;
      unsigned long t922 = __retval918;
      return t922;
    }
  char* t923 = __s917;
  unsigned long r924 = strlen(t923);
  __retval918 = r924;
  unsigned long t925 = __retval918;
  return t925;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v926, char* v927) {
bb928: ;
  struct std__basic_ostream_char__std__char_traits_char__* __out929;
  char* __s930;
  struct std__basic_ostream_char__std__char_traits_char__* __retval931;
  __out929 = v926;
  __s930 = v927;
    char* t932 = __s930;
    _Bool cast933 = (_Bool)t932;
    _Bool u934 = !cast933;
    if (u934) {
      struct std__basic_ostream_char__std__char_traits_char__* t935 = __out929;
      void** v936 = (void**)t935;
      void* v937 = *((void**)v936);
      unsigned char* cast938 = (unsigned char*)v937;
      long c939 = -24;
      unsigned char* ptr940 = &(cast938)[c939];
      long* cast941 = (long*)ptr940;
      long t942 = *cast941;
      unsigned char* cast943 = (unsigned char*)t935;
      unsigned char* ptr944 = &(cast943)[t942];
      struct std__basic_ostream_char__std__char_traits_char__* cast945 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr944;
      struct std__basic_ios_char__std__char_traits_char__* cast946 = (struct std__basic_ios_char__std__char_traits_char__*)cast945;
      int t947 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast946, t947);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t948 = __out929;
      char* t949 = __s930;
      char* t950 = __s930;
      unsigned long r951 = std__char_traits_char___length(t950);
      long cast952 = (long)r951;
      struct std__basic_ostream_char__std__char_traits_char__* r953 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t948, t949, cast952);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t954 = __out929;
  __retval931 = t954;
  struct std__basic_ostream_char__std__char_traits_char__* t955 = __retval931;
  return t955;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEaSEOS5_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v956, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v957) {
bb958: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this959;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed960;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval961;
  this959 = v956;
  unnamed960 = v957;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t962 = this959;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t963 = unnamed960;
  int* t964 = t963->_M_current;
  t962->_M_current = t964;
  __retval961 = t962;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t965 = __retval961;
  return t965;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v966) {
bb967: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this968;
  int** __retval969;
  this968 = v966;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t970 = this968;
  __retval969 = &t970->_M_current;
  int** t971 = __retval969;
  return t971;
}

// function: _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v972, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v973) {
bb974: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs975;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs976;
  _Bool __retval977;
  __lhs975 = v972;
  __rhs976 = v973;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t978 = __lhs975;
  int** r979 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t978);
  int* t980 = *r979;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t981 = __rhs976;
  int** r982 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t981);
  int* t983 = *r982;
  _Bool c984 = ((t980 == t983)) ? 1 : 0;
  __retval977 = c984;
  _Bool t985 = __retval977;
  return t985;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v986) {
bb987: ;
  struct std__vector_int__std__allocator_int__* this988;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval989;
  this988 = v986;
  struct std__vector_int__std__allocator_int__* t990 = this988;
  struct std___Vector_base_int__std__allocator_int__* base991 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t990 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base992 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base991->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval989, &base992->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t993 = __retval989;
  return t993;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v994) {
bb995: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this996;
  int* __retval997;
  this996 = v994;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t998 = this996;
  int* t999 = t998->_M_current;
  __retval997 = t999;
  int* t1000 = __retval997;
  return t1000;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1001) {
bb1002: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this1003;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval1004;
  this1003 = v1001;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1005 = this1003;
  int* t1006 = t1005->_M_current;
  int c1007 = 1;
  int* ptr1008 = &(t1006)[c1007];
  t1005->_M_current = ptr1008;
  __retval1004 = t1005;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1009 = __retval1004;
  return t1009;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v1010, void* v1011) {
bb1012: ;
  struct std__basic_ostream_char__std__char_traits_char__* this1013;
  void* __pf1014;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1015;
  this1013 = v1010;
  __pf1014 = v1011;
  struct std__basic_ostream_char__std__char_traits_char__* t1016 = this1013;
  void* t1017 = __pf1014;
  struct std__basic_ostream_char__std__char_traits_char__* r1018 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t1017)(t1016);
  __retval1015 = r1018;
  struct std__basic_ostream_char__std__char_traits_char__* t1019 = __retval1015;
  return t1019;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1020) {
bb1021: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os1022;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1023;
  __os1022 = v1020;
  struct std__basic_ostream_char__std__char_traits_char__* t1024 = __os1022;
  struct std__basic_ostream_char__std__char_traits_char__* r1025 = std__ostream__flush(t1024);
  __retval1023 = r1025;
  struct std__basic_ostream_char__std__char_traits_char__* t1026 = __retval1023;
  return t1026;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v1027) {
bb1028: ;
  struct std__ctype_char_* __f1029;
  struct std__ctype_char_* __retval1030;
  __f1029 = v1027;
    struct std__ctype_char_* t1031 = __f1029;
    _Bool cast1032 = (_Bool)t1031;
    _Bool u1033 = !cast1032;
    if (u1033) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t1034 = __f1029;
  __retval1030 = t1034;
  struct std__ctype_char_* t1035 = __retval1030;
  return t1035;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v1036, char v1037) {
bb1038: ;
  struct std__ctype_char_* this1039;
  char __c1040;
  char __retval1041;
  this1039 = v1036;
  __c1040 = v1037;
  struct std__ctype_char_* t1042 = this1039;
    char t1043 = t1042->_M_widen_ok;
    _Bool cast1044 = (_Bool)t1043;
    if (cast1044) {
      char t1045 = __c1040;
      unsigned char cast1046 = (unsigned char)t1045;
      unsigned long cast1047 = (unsigned long)cast1046;
      char t1048 = t1042->_M_widen[cast1047];
      __retval1041 = t1048;
      char t1049 = __retval1041;
      return t1049;
    }
  std__ctype_char____M_widen_init___const(t1042);
  char t1050 = __c1040;
  void** v1051 = (void**)t1042;
  void* v1052 = *((void**)v1051);
  char vcall1055 = (char)__VERIFIER_virtual_call_char_char(t1042, 6, t1050);
  __retval1041 = vcall1055;
  char t1056 = __retval1041;
  return t1056;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v1057, char v1058) {
bb1059: ;
  struct std__basic_ios_char__std__char_traits_char__* this1060;
  char __c1061;
  char __retval1062;
  this1060 = v1057;
  __c1061 = v1058;
  struct std__basic_ios_char__std__char_traits_char__* t1063 = this1060;
  struct std__ctype_char_* t1064 = t1063->_M_ctype;
  struct std__ctype_char_* r1065 = std__ctype_char__const__std____check_facet_std__ctype_char___(t1064);
  char t1066 = __c1061;
  char r1067 = std__ctype_char___widen_char__const(r1065, t1066);
  __retval1062 = r1067;
  char t1068 = __retval1062;
  return t1068;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1069) {
bb1070: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os1071;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1072;
  __os1071 = v1069;
  struct std__basic_ostream_char__std__char_traits_char__* t1073 = __os1071;
  struct std__basic_ostream_char__std__char_traits_char__* t1074 = __os1071;
  void** v1075 = (void**)t1074;
  void* v1076 = *((void**)v1075);
  unsigned char* cast1077 = (unsigned char*)v1076;
  long c1078 = -24;
  unsigned char* ptr1079 = &(cast1077)[c1078];
  long* cast1080 = (long*)ptr1079;
  long t1081 = *cast1080;
  unsigned char* cast1082 = (unsigned char*)t1074;
  unsigned char* ptr1083 = &(cast1082)[t1081];
  struct std__basic_ostream_char__std__char_traits_char__* cast1084 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1083;
  struct std__basic_ios_char__std__char_traits_char__* cast1085 = (struct std__basic_ios_char__std__char_traits_char__*)cast1084;
  char c1086 = 10;
  char r1087 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast1085, c1086);
  struct std__basic_ostream_char__std__char_traits_char__* r1088 = std__ostream__put(t1073, r1087);
  struct std__basic_ostream_char__std__char_traits_char__* r1089 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r1088);
  __retval1072 = r1089;
  struct std__basic_ostream_char__std__char_traits_char__* t1090 = __retval1072;
  return t1090;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v1091) {
bb1092: ;
  struct std__vector_int__std__allocator_int__* this1093;
  this1093 = v1091;
  struct std__vector_int__std__allocator_int__* t1094 = this1093;
    struct std___Vector_base_int__std__allocator_int__* base1095 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1094 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1096 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1095->_M_impl) + 0);
    int* t1097 = base1096->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base1098 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1094 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1099 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1098->_M_impl) + 0);
    int* t1100 = base1099->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base1101 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1094 + 0);
    struct std__allocator_int_* r1102 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1101);
    void_std___Destroy_int___int_(t1097, t1100, r1102);
  {
    struct std___Vector_base_int__std__allocator_int__* base1103 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1094 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base1103);
  }
  return;
}

// function: main
int main() {
bb1104: ;
  int __retval1105;
  int myints1106[7];
  struct std__vector_int__std__allocator_int__ myvector1107;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it1108;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01109;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11110;
  int c1111 = 0;
  __retval1105 = c1111;
  // array copy
  __builtin_memcpy(myints1106, __const_main_myints, (unsigned long)7 * sizeof(__const_main_myints[0]));
  std__vector_int__std__allocator_int_____vector(&myvector1107);
    __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(&it1108);
    unsigned long c1112 = 7;
    std__vector_int__std__allocator_int_____resize(&myvector1107, c1112);
    int* cast1113 = (int*)&(myints1106);
    int* cast1114 = (int*)&(myints1106);
    int c1115 = 7;
    int* ptr1116 = &(cast1114)[c1115];
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1117 = std__vector_int__std__allocator_int_____begin(&myvector1107);
    agg_tmp01109 = r1117;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1118 = agg_tmp01109;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1119 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______copy_int____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(cast1113, ptr1116, t1118);
    agg_tmp11110 = r1119;
    unsigned long r1120 = std__vector_int__std__allocator_int_____size___const(&myvector1107);
    unsigned long c1121 = 7;
    _Bool c1122 = ((r1120 == c1121)) ? 1 : 0;
    if (c1122) {
    } else {
      char* cast1123 = (char*)&(_str);
      char* c1124 = (char*)_str_1;
      unsigned int c1125 = 36;
      char* cast1126 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1123, c1124, c1125, cast1126);
    }
    unsigned long c1127 = 3;
    int* r1128 = std__vector_int__std__allocator_int_____operator__(&myvector1107, c1127);
    int t1129 = *r1128;
    int c1130 = 40;
    _Bool c1131 = ((t1129 == c1130)) ? 1 : 0;
    if (c1131) {
    } else {
      char* cast1132 = (char*)&(_str_2);
      char* c1133 = (char*)_str_1;
      unsigned int c1134 = 37;
      char* cast1135 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1132, c1133, c1134, cast1135);
    }
    char* cast1136 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* r1137 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1136);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp01138;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp11139;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1140 = std__vector_int__std__allocator_int_____begin(&myvector1107);
      ref_tmp01138 = r1140;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1141 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&it1108, &ref_tmp01138);
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1143 = std__vector_int__std__allocator_int_____end(&myvector1107);
        ref_tmp11139 = r1143;
        _Bool r1144 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&it1108, &ref_tmp11139);
        _Bool u1145 = !r1144;
        if (!u1145) break;
        char* cast1146 = (char*)&(_str_4);
        struct std__basic_ostream_char__std__char_traits_char__* r1147 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1146);
        int* r1148 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&it1108);
        int t1149 = *r1148;
        struct std__basic_ostream_char__std__char_traits_char__* r1150 = std__ostream__operator__(r1147, t1149);
      for_step1142: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1151 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(&it1108);
      }
    struct std__basic_ostream_char__std__char_traits_char__* r1152 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c1153 = 0;
    __retval1105 = c1153;
    int t1154 = __retval1105;
    int ret_val1155 = t1154;
    {
      std__vector_int__std__allocator_int______vector(&myvector1107);
    }
    return ret_val1155;
  int t1156 = __retval1105;
  return t1156;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE
void _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1157) {
bb1158: ;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1159;
  this1159 = v1157;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1160 = this1159;
  struct std__allocator_int_* base1161 = (struct std__allocator_int_*)((char *)t1160 + 0);
  std__allocator_int___allocator(base1161);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1162 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t1160 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base1162);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1163) {
bb1164: ;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1165;
  this1165 = v1163;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1166 = this1165;
  {
    struct std__allocator_int_* base1167 = (struct std__allocator_int_*)((char *)t1166 + 0);
    std__allocator_int____allocator(base1167);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2Ev
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1168) {
bb1169: ;
  struct std___Vector_base_int__std__allocator_int__* this1170;
  this1170 = v1168;
  struct std___Vector_base_int__std__allocator_int__* t1171 = this1170;
  _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(&t1171->_M_impl);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1172: ;
  _Bool __retval1173;
    _Bool c1174 = 0;
    __retval1173 = c1174;
    _Bool t1175 = __retval1173;
    return t1175;
  abort();
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v1176, int* v1177, unsigned long v1178) {
bb1179: ;
  struct std____new_allocator_int_* this1180;
  int* __p1181;
  unsigned long __n1182;
  this1180 = v1176;
  __p1181 = v1177;
  __n1182 = v1178;
  struct std____new_allocator_int_* t1183 = this1180;
    unsigned long c1184 = 4;
    unsigned long c1185 = 16;
    _Bool c1186 = ((c1184 > c1185)) ? 1 : 0;
    if (c1186) {
      int* t1187 = __p1181;
      void* cast1188 = (void*)t1187;
      unsigned long t1189 = __n1182;
      unsigned long c1190 = 4;
      unsigned long b1191 = t1189 * c1190;
      unsigned long c1192 = 4;
      operator_delete_3(cast1188, b1191, c1192);
      return;
    }
  int* t1193 = __p1181;
  void* cast1194 = (void*)t1193;
  unsigned long t1195 = __n1182;
  unsigned long c1196 = 4;
  unsigned long b1197 = t1195 * c1196;
  operator_delete_2(cast1194, b1197);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1198, int* v1199, unsigned long v1200) {
bb1201: ;
  struct std__allocator_int_* this1202;
  int* __p1203;
  unsigned long __n1204;
  this1202 = v1198;
  __p1203 = v1199;
  __n1204 = v1200;
  struct std__allocator_int_* t1205 = this1202;
    _Bool r1206 = std____is_constant_evaluated();
    if (r1206) {
      int* t1207 = __p1203;
      void* cast1208 = (void*)t1207;
      operator_delete(cast1208);
      return;
    }
  struct std____new_allocator_int_* base1209 = (struct std____new_allocator_int_*)((char *)t1205 + 0);
  int* t1210 = __p1203;
  unsigned long t1211 = __n1204;
  std____new_allocator_int___deallocate(base1209, t1210, t1211);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1212, int* v1213, unsigned long v1214) {
bb1215: ;
  struct std__allocator_int_* __a1216;
  int* __p1217;
  unsigned long __n1218;
  __a1216 = v1212;
  __p1217 = v1213;
  __n1218 = v1214;
  struct std__allocator_int_* t1219 = __a1216;
  int* t1220 = __p1217;
  unsigned long t1221 = __n1218;
  std__allocator_int___deallocate(t1219, t1220, t1221);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v1222, int* v1223, unsigned long v1224) {
bb1225: ;
  struct std___Vector_base_int__std__allocator_int__* this1226;
  int* __p1227;
  unsigned long __n1228;
  this1226 = v1222;
  __p1227 = v1223;
  __n1228 = v1224;
  struct std___Vector_base_int__std__allocator_int__* t1229 = this1226;
    int* t1230 = __p1227;
    _Bool cast1231 = (_Bool)t1230;
    if (cast1231) {
      struct std__allocator_int_* base1232 = (struct std__allocator_int_*)((char *)&(t1229->_M_impl) + 0);
      int* t1233 = __p1227;
      unsigned long t1234 = __n1228;
      std__allocator_traits_std__allocator_int_____deallocate(base1232, t1233, t1234);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1235) {
bb1236: ;
  struct std___Vector_base_int__std__allocator_int__* this1237;
  this1237 = v1235;
  struct std___Vector_base_int__std__allocator_int__* t1238 = this1237;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1239 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1238->_M_impl) + 0);
    int* t1240 = base1239->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1241 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1238->_M_impl) + 0);
    int* t1242 = base1241->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1243 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1238->_M_impl) + 0);
    int* t1244 = base1243->_M_start;
    long diff1245 = t1242 - t1244;
    unsigned long cast1246 = (unsigned long)diff1245;
    std___Vector_base_int__std__allocator_int______M_deallocate(t1238, t1240, cast1246);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t1238->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1247) {
bb1248: ;
  struct std____new_allocator_int_* this1249;
  this1249 = v1247;
  struct std____new_allocator_int_* t1250 = this1249;
  return;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator(struct std__allocator_int_* v1251) {
bb1252: ;
  struct std__allocator_int_* this1253;
  this1253 = v1251;
  struct std__allocator_int_* t1254 = this1253;
  struct std____new_allocator_int_* base1255 = (struct std____new_allocator_int_*)((char *)t1254 + 0);
  std____new_allocator_int_____new_allocator(base1255);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v1256) {
bb1257: ;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this1258;
  this1258 = v1256;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1259 = this1258;
  int* c1260 = ((void*)0);
  t1259->_M_start = c1260;
  int* c1261 = ((void*)0);
  t1259->_M_finish = c1261;
  int* c1262 = ((void*)0);
  t1259->_M_end_of_storage = c1262;
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v1263) {
bb1264: ;
  struct std__allocator_int_* this1265;
  this1265 = v1263;
  struct std__allocator_int_* t1266 = this1265;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v1267) {
bb1268: ;
  int* __location1269;
  __location1269 = v1267;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1270, int* v1271) {
bb1272: ;
  int* __first1273;
  int* __last1274;
  __first1273 = v1270;
  __last1274 = v1271;
      _Bool r1275 = std____is_constant_evaluated();
      if (r1275) {
          while (1) {
            int* t1277 = __first1273;
            int* t1278 = __last1274;
            _Bool c1279 = ((t1277 != t1278)) ? 1 : 0;
            if (!c1279) break;
            int* t1280 = __first1273;
            void_std__destroy_at_int_(t1280);
          for_step1276: ;
            int* t1281 = __first1273;
            int c1282 = 1;
            int* ptr1283 = &(t1281)[c1282];
            __first1273 = ptr1283;
          }
      }
  return;
}

