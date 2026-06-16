extern void abort(void);
// Struct definitions (auto-parsed)
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ { int* _M_current; };
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

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[18] = "myvector[3] == 10";
char _str_1[106] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/vector/algorithm14/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[18] = "myvector[7] != 50";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[19] = "myvector contains:";
char _str_4[2] = " ";
char _str_5[26] = "vector::_M_realloc_append";
char _str_6[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv[77] = "reference std::vector<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_7[15] = "!this->empty()";
char _str_8[26] = "vector::_M_default_append";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_9[19] = "__n < this->size()";
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
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
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, long p1);
int* std__vector_int__std__allocator_int_____back(struct std__vector_int__std__allocator_int__* p0);
int* int__std__vector_int__std__allocator_int_____emplace_back_int_(struct std__vector_int__std__allocator_int__* p0, int* p1);
void std__vector_int__std__allocator_int_____push_back(struct std__vector_int__std__allocator_int__* p0, int* p1);
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
void std__vector_int__std__allocator_int______M_default_append(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
void void_std___Destroy_int___int_(int* p0, int* p1, struct std__allocator_int_* p2);
void std__vector_int__std__allocator_int______M_erase_at_end(struct std__vector_int__std__allocator_int__* p0, int* p1);
void std__vector_int__std__allocator_int_____resize(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______copy_backward_esbmc___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, long p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* p0);
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
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
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
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

// function: _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v10, int* v11) {
bb12: ;
  int* __location13;
  int* __args14;
  int* __retval15;
  void* __loc16;
  __location13 = v10;
  __args14 = v11;
  int* t17 = __location13;
  void* cast18 = (void*)t17;
  __loc16 = cast18;
    void* t19 = __loc16;
    int* cast20 = (int*)t19;
    int* t21 = __args14;
    int t22 = *t21;
    *cast20 = t22;
    __retval15 = cast20;
    int* t23 = __retval15;
    return t23;
  abort();
}

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std__allocator_int_* v24, int* v25, int* v26) {
bb27: ;
  struct std__allocator_int_* __a28;
  int* __p29;
  int* __args30;
  __a28 = v24;
  __p29 = v25;
  __args30 = v26;
  int* t31 = __p29;
  int* t32 = __args30;
  int* r33 = _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t31, t32);
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v34, unsigned long* v35) {
bb36: ;
  unsigned long* __a37;
  unsigned long* __b38;
  unsigned long* __retval39;
  __a37 = v34;
  __b38 = v35;
    unsigned long* t40 = __b38;
    unsigned long t41 = *t40;
    unsigned long* t42 = __a37;
    unsigned long t43 = *t42;
    _Bool c44 = ((t41 < t43)) ? 1 : 0;
    if (c44) {
      unsigned long* t45 = __b38;
      __retval39 = t45;
      unsigned long* t46 = __retval39;
      return t46;
    }
  unsigned long* t47 = __a37;
  __retval39 = t47;
  unsigned long* t48 = __retval39;
  return t48;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v49) {
bb50: ;
  struct std__allocator_int_* __a51;
  unsigned long __retval52;
  unsigned long __diffmax53;
  unsigned long __allocmax54;
  __a51 = v49;
  unsigned long c55 = 2305843009213693951;
  __diffmax53 = c55;
  unsigned long c56 = 4611686018427387903;
  __allocmax54 = c56;
  unsigned long* r57 = unsigned_long_const__std__min_unsigned_long_(&__diffmax53, &__allocmax54);
  unsigned long t58 = *r57;
  __retval52 = t58;
  unsigned long t59 = __retval52;
  return t59;
}

// function: _ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Vector_base_int__std__allocator_int__* v60) {
bb61: ;
  struct std___Vector_base_int__std__allocator_int__* this62;
  struct std__allocator_int_* __retval63;
  this62 = v60;
  struct std___Vector_base_int__std__allocator_int__* t64 = this62;
  struct std__allocator_int_* base65 = (struct std__allocator_int_*)((char *)&(t64->_M_impl) + 0);
  __retval63 = base65;
  struct std__allocator_int_* t66 = __retval63;
  return t66;
}

// function: _ZNKSt6vectorIiSaIiEE8max_sizeEv
unsigned long std__vector_int__std__allocator_int_____max_size___const(struct std__vector_int__std__allocator_int__* v67) {
bb68: ;
  struct std__vector_int__std__allocator_int__* this69;
  unsigned long __retval70;
  this69 = v67;
  struct std__vector_int__std__allocator_int__* t71 = this69;
  struct std___Vector_base_int__std__allocator_int__* base72 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t71 + 0);
  struct std__allocator_int_* r73 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(base72);
  unsigned long r74 = std__vector_int__std__allocator_int______S_max_size(r73);
  __retval70 = r74;
  unsigned long t75 = __retval70;
  return t75;
}

// function: _ZSt3maxImERKT_S2_S2_
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* v76, unsigned long* v77) {
bb78: ;
  unsigned long* __a79;
  unsigned long* __b80;
  unsigned long* __retval81;
  __a79 = v76;
  __b80 = v77;
    unsigned long* t82 = __a79;
    unsigned long t83 = *t82;
    unsigned long* t84 = __b80;
    unsigned long t85 = *t84;
    _Bool c86 = ((t83 < t85)) ? 1 : 0;
    if (c86) {
      unsigned long* t87 = __b80;
      __retval81 = t87;
      unsigned long* t88 = __retval81;
      return t88;
    }
  unsigned long* t89 = __a79;
  __retval81 = t89;
  unsigned long* t90 = __retval81;
  return t90;
}

// function: _ZNKSt6vectorIiSaIiEE12_M_check_lenEmPKc
unsigned long std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(struct std__vector_int__std__allocator_int__* v91, unsigned long v92, char* v93) {
bb94: ;
  struct std__vector_int__std__allocator_int__* this95;
  unsigned long __n96;
  char* __s97;
  unsigned long __retval98;
  unsigned long __len99;
  unsigned long ref_tmp0100;
  this95 = v91;
  __n96 = v92;
  __s97 = v93;
  struct std__vector_int__std__allocator_int__* t101 = this95;
    unsigned long r102 = std__vector_int__std__allocator_int_____max_size___const(t101);
    unsigned long r103 = std__vector_int__std__allocator_int_____size___const(t101);
    unsigned long b104 = r102 - r103;
    unsigned long t105 = __n96;
    _Bool c106 = ((b104 < t105)) ? 1 : 0;
    if (c106) {
      char* t107 = __s97;
      std____throw_length_error(t107);
    }
  unsigned long r108 = std__vector_int__std__allocator_int_____size___const(t101);
  unsigned long r109 = std__vector_int__std__allocator_int_____size___const(t101);
  ref_tmp0100 = r109;
  unsigned long* r110 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp0100, &__n96);
  unsigned long t111 = *r110;
  unsigned long b112 = r108 + t111;
  __len99 = b112;
  unsigned long t113 = __len99;
  unsigned long r114 = std__vector_int__std__allocator_int_____size___const(t101);
  _Bool c115 = ((t113 < r114)) ? 1 : 0;
  _Bool ternary116;
  if (c115) {
    _Bool c117 = 1;
    ternary116 = (_Bool)c117;
  } else {
    unsigned long t118 = __len99;
    unsigned long r119 = std__vector_int__std__allocator_int_____max_size___const(t101);
    _Bool c120 = ((t118 > r119)) ? 1 : 0;
    ternary116 = (_Bool)c120;
  }
  unsigned long ternary121;
  if (ternary116) {
    unsigned long r122 = std__vector_int__std__allocator_int_____max_size___const(t101);
    ternary121 = (unsigned long)r122;
  } else {
    unsigned long t123 = __len99;
    ternary121 = (unsigned long)t123;
  }
  __retval98 = ternary121;
  unsigned long t124 = __retval98;
  return t124;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v125) {
bb126: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this127;
  int** __retval128;
  this127 = v125;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t129 = this127;
  __retval128 = &t129->_M_current;
  int** t130 = __retval128;
  return t130;
}

// function: _ZN9__gnu_cxxmiIPiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v131, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v132) {
bb133: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs134;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs135;
  long __retval136;
  __lhs134 = v131;
  __rhs135 = v132;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t137 = __lhs134;
  int** r138 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t137);
  int* t139 = *r138;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t140 = __rhs135;
  int** r141 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t140);
  int* t142 = *r141;
  long diff143 = t139 - t142;
  __retval136 = diff143;
  long t144 = __retval136;
  return t144;
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v145) {
bb146: ;
  struct std____new_allocator_int_* this147;
  unsigned long __retval148;
  this147 = v145;
  struct std____new_allocator_int_* t149 = this147;
  unsigned long c150 = 9223372036854775807;
  unsigned long c151 = 4;
  unsigned long b152 = c150 / c151;
  __retval148 = b152;
  unsigned long t153 = __retval148;
  return t153;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v154, unsigned long v155, void* v156) {
bb157: ;
  struct std____new_allocator_int_* this158;
  unsigned long __n159;
  void* unnamed160;
  int* __retval161;
  this158 = v154;
  __n159 = v155;
  unnamed160 = v156;
  struct std____new_allocator_int_* t162 = this158;
    unsigned long t163 = __n159;
    unsigned long r164 = std____new_allocator_int____M_max_size___const(t162);
    _Bool c165 = ((t163 > r164)) ? 1 : 0;
    if (c165) {
        unsigned long t166 = __n159;
        unsigned long c167 = -1;
        unsigned long c168 = 4;
        unsigned long b169 = c167 / c168;
        _Bool c170 = ((t166 > b169)) ? 1 : 0;
        if (c170) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c171 = 4;
    unsigned long c172 = 16;
    _Bool c173 = ((c171 > c172)) ? 1 : 0;
    if (c173) {
      unsigned long __al174;
      unsigned long c175 = 4;
      __al174 = c175;
      unsigned long t176 = __n159;
      unsigned long c177 = 4;
      unsigned long b178 = t176 * c177;
      unsigned long t179 = __al174;
      void* r180 = operator_new_2(b178, t179);
      int* cast181 = (int*)r180;
      __retval161 = cast181;
      int* t182 = __retval161;
      return t182;
    }
  unsigned long t183 = __n159;
  unsigned long c184 = 4;
  unsigned long b185 = t183 * c184;
  void* r186 = operator_new(b185);
  int* cast187 = (int*)r186;
  __retval161 = cast187;
  int* t188 = __retval161;
  return t188;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v189, unsigned long v190) {
bb191: ;
  struct std__allocator_int_* this192;
  unsigned long __n193;
  int* __retval194;
  this192 = v189;
  __n193 = v190;
  struct std__allocator_int_* t195 = this192;
    _Bool r196 = std____is_constant_evaluated();
    if (r196) {
        unsigned long t197 = __n193;
        unsigned long c198 = 4;
        unsigned long ovr199;
        _Bool ovf200 = __builtin_mul_overflow(t197, c198, &ovr199);
        __n193 = ovr199;
        if (ovf200) {
          std____throw_bad_array_new_length();
        }
      unsigned long t201 = __n193;
      void* r202 = operator_new(t201);
      int* cast203 = (int*)r202;
      __retval194 = cast203;
      int* t204 = __retval194;
      return t204;
    }
  struct std____new_allocator_int_* base205 = (struct std____new_allocator_int_*)((char *)t195 + 0);
  unsigned long t206 = __n193;
  void* c207 = ((void*)0);
  int* r208 = std____new_allocator_int___allocate(base205, t206, c207);
  __retval194 = r208;
  int* t209 = __retval194;
  return t209;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v210, unsigned long v211) {
bb212: ;
  struct std__allocator_int_* __a213;
  unsigned long __n214;
  int* __retval215;
  __a213 = v210;
  __n214 = v211;
  struct std__allocator_int_* t216 = __a213;
  unsigned long t217 = __n214;
  int* r218 = std__allocator_int___allocate(t216, t217);
  __retval215 = r218;
  int* t219 = __retval215;
  return t219;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v220, unsigned long v221) {
bb222: ;
  struct std___Vector_base_int__std__allocator_int__* this223;
  unsigned long __n224;
  int* __retval225;
  this223 = v220;
  __n224 = v221;
  struct std___Vector_base_int__std__allocator_int__* t226 = this223;
  unsigned long t227 = __n224;
  unsigned long c228 = 0;
  _Bool c229 = ((t227 != c228)) ? 1 : 0;
  int* ternary230;
  if (c229) {
    struct std__allocator_int_* base231 = (struct std__allocator_int_*)((char *)&(t226->_M_impl) + 0);
    unsigned long t232 = __n224;
    int* r233 = std__allocator_traits_std__allocator_int_____allocate(base231, t232);
    ternary230 = (int*)r233;
  } else {
    int* c234 = ((void*)0);
    ternary230 = (int*)c234;
  }
  __retval225 = ternary230;
  int* t235 = __retval225;
  return t235;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocC2EPimRSt12_Vector_baseIiS0_E
void std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v236, int* v237, unsigned long v238, struct std___Vector_base_int__std__allocator_int__* v239) {
bb240: ;
  struct std__vector_int__std__allocator_int_____Guard_alloc* this241;
  int* __s242;
  unsigned long __l243;
  struct std___Vector_base_int__std__allocator_int__* __vect244;
  this241 = v236;
  __s242 = v237;
  __l243 = v238;
  __vect244 = v239;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t245 = this241;
  int* t246 = __s242;
  t245->_M_storage = t246;
  unsigned long t247 = __l243;
  t245->_M_len = t247;
  struct std___Vector_base_int__std__allocator_int__* t248 = __vect244;
  t245->_M_vect = t248;
  return;
}

// function: _ZSt10to_addressIiEPT_S1_
int* int__std__to_address_int_(int* v249) {
bb250: ;
  int* __ptr251;
  int* __retval252;
  __ptr251 = v249;
  int* t253 = __ptr251;
  __retval252 = t253;
  int* t254 = __retval252;
  return t254;
}

// function: _ZSt12__to_addressIPiEDaRKT_
int* auto_std____to_address_int__(int** v255) {
bb256: ;
  int** __ptr257;
  int* __retval258;
  __ptr257 = v255;
  int** t259 = __ptr257;
  int* t260 = *t259;
  int* r261 = int__std__to_address_int_(t260);
  __retval258 = r261;
  int* t262 = __retval258;
  return t262;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb263: ;
  _Bool __retval264;
    _Bool c265 = 0;
    __retval264 = c265;
    _Bool t266 = __retval264;
    return t266;
  abort();
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEC2ERKS1_
void __gnu_cxx____normal_iterator_int___void_____normal_iterator(struct __gnu_cxx____normal_iterator_int____void_* v267, int** v268) {
bb269: ;
  struct __gnu_cxx____normal_iterator_int____void_* this270;
  int** __i271;
  this270 = v267;
  __i271 = v268;
  struct __gnu_cxx____normal_iterator_int____void_* t272 = this270;
  int** t273 = __i271;
  int* t274 = *t273;
  t272->_M_current = t274;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v275) {
bb276: ;
  int* __location277;
  __location277 = v275;
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE7destroyIiEEvRS0_PT_
void void_std__allocator_traits_std__allocator_int_____destroy_int_(struct std__allocator_int_* v278, int* v279) {
bb280: ;
  struct std__allocator_int_* __a281;
  int* __p282;
  __a281 = v278;
  __p282 = v279;
  int* t283 = __p282;
  void_std__destroy_at_int_(t283);
  return;
}

// function: _ZSt19__relocate_object_aIiiSaIiEEvPT_PT0_RT1_
void void_std____relocate_object_a_int__int__std__allocator_int___(int* v284, int* v285, struct std__allocator_int_* v286) {
bb287: ;
  int* __dest288;
  int* __orig289;
  struct std__allocator_int_* __alloc290;
  __dest288 = v284;
  __orig289 = v285;
  __alloc290 = v286;
  struct std__allocator_int_* t291 = __alloc290;
  int* t292 = __dest288;
  int* t293 = __orig289;
  void_std__allocator_traits_std__allocator_int_____construct_int__int_(t291, t292, t293);
  struct std__allocator_int_* t294 = __alloc290;
  int* t295 = __orig289;
  void_std__allocator_traits_std__allocator_int_____destroy_int_(t294, t295);
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivEdeEv
int* __gnu_cxx____normal_iterator_int___void___operator____const(struct __gnu_cxx____normal_iterator_int____void_* v296) {
bb297: ;
  struct __gnu_cxx____normal_iterator_int____void_* this298;
  int* __retval299;
  this298 = v296;
  struct __gnu_cxx____normal_iterator_int____void_* t300 = this298;
  int* t301 = t300->_M_current;
  __retval299 = t301;
  int* t302 = __retval299;
  return t302;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEppEv
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator__(struct __gnu_cxx____normal_iterator_int____void_* v303) {
bb304: ;
  struct __gnu_cxx____normal_iterator_int____void_* this305;
  struct __gnu_cxx____normal_iterator_int____void_* __retval306;
  this305 = v303;
  struct __gnu_cxx____normal_iterator_int____void_* t307 = this305;
  int* t308 = t307->_M_current;
  int c309 = 1;
  int* ptr310 = &(t308)[c309];
  t307->_M_current = ptr310;
  __retval306 = t307;
  struct __gnu_cxx____normal_iterator_int____void_* t311 = __retval306;
  return t311;
}

// function: _ZSt14__relocate_a_1IPiN9__gnu_cxx17__normal_iteratorIS0_vEESaIiEET0_T_S6_S5_RT1_
struct __gnu_cxx____normal_iterator_int____void_ __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(int* v312, int* v313, struct __gnu_cxx____normal_iterator_int____void_ v314, struct std__allocator_int_* v315) {
bb316: ;
  int* __first317;
  int* __last318;
  struct __gnu_cxx____normal_iterator_int____void_ __result319;
  struct std__allocator_int_* __alloc320;
  struct __gnu_cxx____normal_iterator_int____void_ __retval321;
  __first317 = v312;
  __last318 = v313;
  __result319 = v314;
  __alloc320 = v315;
  __retval321 = __result319; // copy
    while (1) {
      int* t323 = __first317;
      int* t324 = __last318;
      _Bool c325 = ((t323 != t324)) ? 1 : 0;
      if (!c325) break;
      int* r326 = __gnu_cxx____normal_iterator_int___void___operator____const(&__retval321);
      int* t327 = __first317;
      struct std__allocator_int_* t328 = __alloc320;
      void_std____relocate_object_a_int__int__std__allocator_int___(r326, t327, t328);
    for_step322: ;
      int* t329 = __first317;
      int c330 = 1;
      int* ptr331 = &(t329)[c330];
      __first317 = ptr331;
      struct __gnu_cxx____normal_iterator_int____void_* r332 = __gnu_cxx____normal_iterator_int___void___operator__(&__retval321);
    }
  struct __gnu_cxx____normal_iterator_int____void_ t333 = __retval321;
  return t333;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEaSEOS2_
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator_(struct __gnu_cxx____normal_iterator_int____void_* v334, struct __gnu_cxx____normal_iterator_int____void_* v335) {
bb336: ;
  struct __gnu_cxx____normal_iterator_int____void_* this337;
  struct __gnu_cxx____normal_iterator_int____void_* unnamed338;
  struct __gnu_cxx____normal_iterator_int____void_* __retval339;
  this337 = v334;
  unnamed338 = v335;
  struct __gnu_cxx____normal_iterator_int____void_* t340 = this337;
  struct __gnu_cxx____normal_iterator_int____void_* t341 = unnamed338;
  int* t342 = t341->_M_current;
  t340->_M_current = t342;
  __retval339 = t340;
  struct __gnu_cxx____normal_iterator_int____void_* t343 = __retval339;
  return t343;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivE4baseEv
int** __gnu_cxx____normal_iterator_int___void___base___const(struct __gnu_cxx____normal_iterator_int____void_* v344) {
bb345: ;
  struct __gnu_cxx____normal_iterator_int____void_* this346;
  int** __retval347;
  this346 = v344;
  struct __gnu_cxx____normal_iterator_int____void_* t348 = this346;
  __retval347 = &t348->_M_current;
  int** t349 = __retval347;
  return t349;
}

// function: _ZSt14__relocate_a_1IiiENSt9enable_ifIXsr3std24__is_bitwise_relocatableIT_EE5valueEPS1_E4typeES2_S2_S2_RSaIT0_E
int* std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(int* v350, int* v351, int* v352, struct std__allocator_int_* v353) {
bb354: ;
  int* __first355;
  int* __last356;
  int* __result357;
  struct std__allocator_int_* __alloc358;
  int* __retval359;
  long __count360;
  __first355 = v350;
  __last356 = v351;
  __result357 = v352;
  __alloc358 = v353;
  int* t361 = __last356;
  int* t362 = __first355;
  long diff363 = t361 - t362;
  __count360 = diff363;
    long t364 = __count360;
    long c365 = 0;
    _Bool c366 = ((t364 > c365)) ? 1 : 0;
    if (c366) {
        _Bool r367 = std__is_constant_evaluated();
        if (r367) {
          struct __gnu_cxx____normal_iterator_int____void_ __out368;
          struct __gnu_cxx____normal_iterator_int____void_ ref_tmp0369;
          struct __gnu_cxx____normal_iterator_int____void_ agg_tmp0370;
          __gnu_cxx____normal_iterator_int___void_____normal_iterator(&__out368, &__result357);
          int* t371 = __first355;
          int* t372 = __last356;
          agg_tmp0370 = __out368; // copy
          struct std__allocator_int_* t373 = __alloc358;
          struct __gnu_cxx____normal_iterator_int____void_ t374 = agg_tmp0370;
          struct __gnu_cxx____normal_iterator_int____void_ r375 = __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(t371, t372, t374, t373);
          ref_tmp0369 = r375;
          struct __gnu_cxx____normal_iterator_int____void_* r376 = __gnu_cxx____normal_iterator_int___void___operator_(&__out368, &ref_tmp0369);
          int** r377 = __gnu_cxx____normal_iterator_int___void___base___const(&__out368);
          int* t378 = *r377;
          __retval359 = t378;
          int* t379 = __retval359;
          return t379;
        }
      int* t380 = __result357;
      void* cast381 = (void*)t380;
      int* t382 = __first355;
      void* cast383 = (void*)t382;
      long t384 = __count360;
      unsigned long cast385 = (unsigned long)t384;
      unsigned long c386 = 4;
      unsigned long b387 = cast385 * c386;
      void* r388 = memcpy(cast381, cast383, b387);
    }
  int* t389 = __result357;
  long t390 = __count360;
  int* ptr391 = &(t389)[t390];
  __retval359 = ptr391;
  int* t392 = __retval359;
  return t392;
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v393) {
bb394: ;
  int* __it395;
  int* __retval396;
  __it395 = v393;
  int* t397 = __it395;
  __retval396 = t397;
  int* t398 = __retval396;
  return t398;
}

// function: _ZSt12__relocate_aIPiS0_SaIiEET0_T_S3_S2_RT1_
int* int__std____relocate_a_int___int___std__allocator_int___(int* v399, int* v400, int* v401, struct std__allocator_int_* v402) {
bb403: ;
  int* __first404;
  int* __last405;
  int* __result406;
  struct std__allocator_int_* __alloc407;
  int* __retval408;
  __first404 = v399;
  __last405 = v400;
  __result406 = v401;
  __alloc407 = v402;
  int* t409 = __first404;
  int* r410 = int__std____niter_base_int__(t409);
  int* t411 = __last405;
  int* r412 = int__std____niter_base_int__(t411);
  int* t413 = __result406;
  int* r414 = int__std____niter_base_int__(t413);
  struct std__allocator_int_* t415 = __alloc407;
  int* r416 = std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(r410, r412, r414, t415);
  __retval408 = r416;
  int* t417 = __retval408;
  return t417;
}

// function: _ZNSt6vectorIiSaIiEE11_S_relocateEPiS2_S2_RS0_
int* std__vector_int__std__allocator_int______S_relocate(int* v418, int* v419, int* v420, struct std__allocator_int_* v421) {
bb422: ;
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
  int* t429 = __last424;
  int* t430 = __result425;
  struct std__allocator_int_* t431 = __alloc426;
  int* r432 = int__std____relocate_a_int___int___std__allocator_int___(t428, t429, t430, t431);
  __retval427 = r432;
  int* t433 = __retval427;
  return t433;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v434) {
bb435: ;
  struct std___Vector_base_int__std__allocator_int__* this436;
  struct std__allocator_int_* __retval437;
  this436 = v434;
  struct std___Vector_base_int__std__allocator_int__* t438 = this436;
  struct std__allocator_int_* base439 = (struct std__allocator_int_*)((char *)&(t438->_M_impl) + 0);
  __retval437 = base439;
  struct std__allocator_int_* t440 = __retval437;
  return t440;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocD2Ev
void std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v441) {
bb442: ;
  struct std__vector_int__std__allocator_int_____Guard_alloc* this443;
  this443 = v441;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t444 = this443;
    int* t445 = t444->_M_storage;
    _Bool cast446 = (_Bool)t445;
    if (cast446) {
      struct std___Vector_base_int__std__allocator_int__* t447 = t444->_M_vect;
      int* t448 = t444->_M_storage;
      unsigned long t449 = t444->_M_len;
      std___Vector_base_int__std__allocator_int______M_deallocate(t447, t448, t449);
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_M_realloc_appendIJiEEEvDpOT_
void void_std__vector_int__std__allocator_int______M_realloc_append_int_(struct std__vector_int__std__allocator_int__* v450, int* v451) {
bb452: ;
  struct std__vector_int__std__allocator_int__* this453;
  int* __args454;
  unsigned long __len455;
  int* __old_start456;
  int* __old_finish457;
  unsigned long __elems458;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0459;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1460;
  int* __new_start461;
  int* __new_finish462;
  this453 = v450;
  __args454 = v451;
  struct std__vector_int__std__allocator_int__* t463 = this453;
  unsigned long c464 = 1;
  char* cast465 = (char*)&(_str_5);
  unsigned long r466 = std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(t463, c464, cast465);
  __len455 = r466;
    unsigned long t467 = __len455;
    unsigned long c468 = 0;
    _Bool c469 = ((t467 <= c468)) ? 1 : 0;
    if (c469) {
      __builtin_unreachable();
    }
  struct std___Vector_base_int__std__allocator_int__* base470 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t463 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base471 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base470->_M_impl) + 0);
  int* t472 = base471->_M_start;
  __old_start456 = t472;
  struct std___Vector_base_int__std__allocator_int__* base473 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t463 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base474 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base473->_M_impl) + 0);
  int* t475 = base474->_M_finish;
  __old_finish457 = t475;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r476 = std__vector_int__std__allocator_int_____end(t463);
  ref_tmp0459 = r476;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r477 = std__vector_int__std__allocator_int_____begin(t463);
  ref_tmp1460 = r477;
  long r478 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&ref_tmp0459, &ref_tmp1460);
  unsigned long cast479 = (unsigned long)r478;
  __elems458 = cast479;
  struct std___Vector_base_int__std__allocator_int__* base480 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t463 + 0);
  unsigned long t481 = __len455;
  int* r482 = std___Vector_base_int__std__allocator_int______M_allocate(base480, t481);
  __new_start461 = r482;
  int* t483 = __new_start461;
  __new_finish462 = t483;
    struct std__vector_int__std__allocator_int_____Guard_alloc __guard484;
    int* ref_tmp2485;
    int* t486 = __new_start461;
    unsigned long t487 = __len455;
    struct std___Vector_base_int__std__allocator_int__* base488 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t463 + 0);
    std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(&__guard484, t486, t487, base488);
      struct std___Vector_base_int__std__allocator_int__* base489 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t463 + 0);
      struct std__allocator_int_* base490 = (struct std__allocator_int_*)((char *)&(base489->_M_impl) + 0);
      int* t491 = __new_start461;
      unsigned long t492 = __elems458;
      int* ptr493 = &(t491)[t492];
      ref_tmp2485 = ptr493;
      int* r494 = auto_std____to_address_int__(&ref_tmp2485);
      int* t495 = __args454;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_(base490, r494, t495);
        int* t496 = __old_start456;
        int* t497 = __old_finish457;
        int* t498 = __new_start461;
        struct std___Vector_base_int__std__allocator_int__* base499 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t463 + 0);
        struct std__allocator_int_* r500 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base499);
        int* r501 = std__vector_int__std__allocator_int______S_relocate(t496, t497, t498, r500);
        __new_finish462 = r501;
        int* t502 = __new_finish462;
        int c503 = 1;
        int* ptr504 = &(t502)[c503];
        __new_finish462 = ptr504;
      int* t505 = __old_start456;
      __guard484._M_storage = t505;
      struct std___Vector_base_int__std__allocator_int__* base506 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t463 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base507 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base506->_M_impl) + 0);
      int* t508 = base507->_M_end_of_storage;
      int* t509 = __old_start456;
      long diff510 = t508 - t509;
      unsigned long cast511 = (unsigned long)diff510;
      __guard484._M_len = cast511;
    {
      std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(&__guard484);
    }
  int* t512 = __new_start461;
  struct std___Vector_base_int__std__allocator_int__* base513 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t463 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base514 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base513->_M_impl) + 0);
  base514->_M_start = t512;
  int* t515 = __new_finish462;
  struct std___Vector_base_int__std__allocator_int__* base516 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t463 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base517 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base516->_M_impl) + 0);
  base517->_M_finish = t515;
  int* t518 = __new_start461;
  unsigned long t519 = __len455;
  int* ptr520 = &(t518)[t519];
  struct std___Vector_base_int__std__allocator_int__* base521 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t463 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base522 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base521->_M_impl) + 0);
  base522->_M_end_of_storage = ptr520;
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v523) {
bb524: ;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this525;
  int** __retval526;
  this525 = v523;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t527 = this525;
  __retval526 = &t527->_M_current;
  int** t528 = __retval526;
  return t528;
}

// function: _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v529, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v530) {
bb531: ;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __lhs532;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __rhs533;
  _Bool __retval534;
  __lhs532 = v529;
  __rhs533 = v530;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t535 = __lhs532;
  int** r536 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t535);
  int* t537 = *r536;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t538 = __rhs533;
  int** r539 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t538);
  int* t540 = *r539;
  _Bool c541 = ((t537 == t540)) ? 1 : 0;
  __retval534 = c541;
  _Bool t542 = __retval534;
  return t542;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2ERKS2_
void __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v543, int** v544) {
bb545: ;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this546;
  int** __i547;
  this546 = v543;
  __i547 = v544;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t548 = this546;
  int** t549 = __i547;
  int* t550 = *t549;
  t548->_M_current = t550;
  return;
}

// function: _ZNKSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin___const(struct std__vector_int__std__allocator_int__* v551) {
bb552: ;
  struct std__vector_int__std__allocator_int__* this553;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __retval554;
  this553 = v551;
  struct std__vector_int__std__allocator_int__* t555 = this553;
  struct std___Vector_base_int__std__allocator_int__* base556 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t555 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base557 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base556->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(&__retval554, &base557->_M_start);
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t558 = __retval554;
  return t558;
}

// function: _ZNKSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end___const(struct std__vector_int__std__allocator_int__* v559) {
bb560: ;
  struct std__vector_int__std__allocator_int__* this561;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __retval562;
  this561 = v559;
  struct std__vector_int__std__allocator_int__* t563 = this561;
  struct std___Vector_base_int__std__allocator_int__* base564 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t563 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base565 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base564->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(&__retval562, &base565->_M_finish);
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t566 = __retval562;
  return t566;
}

// function: _ZNKSt6vectorIiSaIiEE5emptyEv
_Bool std__vector_int__std__allocator_int_____empty___const(struct std__vector_int__std__allocator_int__* v567) {
bb568: ;
  struct std__vector_int__std__allocator_int__* this569;
  _Bool __retval570;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ ref_tmp0571;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ ref_tmp1572;
  this569 = v567;
  struct std__vector_int__std__allocator_int__* t573 = this569;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r574 = std__vector_int__std__allocator_int_____begin___const(t573);
  ref_tmp0571 = r574;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r575 = std__vector_int__std__allocator_int_____end___const(t573);
  ref_tmp1572 = r575;
  _Bool r576 = _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&ref_tmp0571, &ref_tmp1572);
  __retval570 = r576;
  _Bool t577 = __retval570;
  return t577;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v578, int** v579) {
bb580: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this581;
  int** __i582;
  this581 = v578;
  __i582 = v579;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t583 = this581;
  int** t584 = __i582;
  int* t585 = *t584;
  t583->_M_current = t585;
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEmiEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v586, long v587) {
bb588: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this589;
  long __n590;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval591;
  int* ref_tmp0592;
  this589 = v586;
  __n590 = v587;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t593 = this589;
  int* t594 = t593->_M_current;
  long t595 = __n590;
  long u596 = -t595;
  int* ptr597 = &(t594)[u596];
  ref_tmp0592 = ptr597;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval591, &ref_tmp0592);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t598 = __retval591;
  return t598;
}

// function: _ZNSt6vectorIiSaIiEE4backEv
int* std__vector_int__std__allocator_int_____back(struct std__vector_int__std__allocator_int__* v599) {
bb600: ;
  struct std__vector_int__std__allocator_int__* this601;
  int* __retval602;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0603;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1604;
  this601 = v599;
  struct std__vector_int__std__allocator_int__* t605 = this601;
    do {
          _Bool r606 = std__vector_int__std__allocator_int_____empty___const(t605);
          if (r606) {
            char* cast607 = (char*)&(_str_6);
            int c608 = 1370;
            char* cast609 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv);
            char* cast610 = (char*)&(_str_7);
            std____glibcxx_assert_fail(cast607, c608, cast609, cast610);
          }
      _Bool c611 = 0;
      if (!c611) break;
    } while (1);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r612 = std__vector_int__std__allocator_int_____end(t605);
  ref_tmp1604 = r612;
  long c613 = 1;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r614 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&ref_tmp1604, c613);
  ref_tmp0603 = r614;
  int* r615 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp0603);
  __retval602 = r615;
  int* t616 = __retval602;
  return t616;
}

// function: _ZNSt6vectorIiSaIiEE12emplace_backIJiEEERiDpOT_
int* int__std__vector_int__std__allocator_int_____emplace_back_int_(struct std__vector_int__std__allocator_int__* v617, int* v618) {
bb619: ;
  struct std__vector_int__std__allocator_int__* this620;
  int* __args621;
  int* __retval622;
  this620 = v617;
  __args621 = v618;
  struct std__vector_int__std__allocator_int__* t623 = this620;
    struct std___Vector_base_int__std__allocator_int__* base624 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t623 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base625 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base624->_M_impl) + 0);
    int* t626 = base625->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base627 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t623 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base628 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base627->_M_impl) + 0);
    int* t629 = base628->_M_end_of_storage;
    _Bool c630 = ((t626 != t629)) ? 1 : 0;
    if (c630) {
      struct std___Vector_base_int__std__allocator_int__* base631 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t623 + 0);
      struct std__allocator_int_* base632 = (struct std__allocator_int_*)((char *)&(base631->_M_impl) + 0);
      struct std___Vector_base_int__std__allocator_int__* base633 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t623 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base634 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base633->_M_impl) + 0);
      int* t635 = base634->_M_finish;
      int* t636 = __args621;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_(base632, t635, t636);
      struct std___Vector_base_int__std__allocator_int__* base637 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t623 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base638 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base637->_M_impl) + 0);
      int* t639 = base638->_M_finish;
      int c640 = 1;
      int* ptr641 = &(t639)[c640];
      base638->_M_finish = ptr641;
    } else {
      int* t642 = __args621;
      void_std__vector_int__std__allocator_int______M_realloc_append_int_(t623, t642);
    }
  int* r643 = std__vector_int__std__allocator_int_____back(t623);
  __retval622 = r643;
  int* t644 = __retval622;
  return t644;
}

// function: _ZNSt6vectorIiSaIiEE9push_backEOi
void std__vector_int__std__allocator_int_____push_back(struct std__vector_int__std__allocator_int__* v645, int* v646) {
bb647: ;
  struct std__vector_int__std__allocator_int__* this648;
  int* __x649;
  this648 = v645;
  __x649 = v646;
  struct std__vector_int__std__allocator_int__* t650 = this648;
  int* t651 = __x649;
  int* r652 = int__std__vector_int__std__allocator_int_____emplace_back_int_(t650, t651);
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v653, int** v654) {
bb655: ;
  struct std___UninitDestroyGuard_int____void_* this656;
  int** __first657;
  this656 = v653;
  __first657 = v654;
  struct std___UninitDestroyGuard_int____void_* t658 = this656;
  int** t659 = __first657;
  int* t660 = *t659;
  t658->_M_first = t660;
  int** t661 = __first657;
  t658->_M_cur = t661;
  return;
}

// function: _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v662) {
bb663: ;
  int* __location664;
  int* __retval665;
  void* __loc666;
  __location664 = v662;
  int* t667 = __location664;
  void* cast668 = (void*)t667;
  __loc666 = cast668;
    void* t669 = __loc666;
    int* cast670 = (int*)t669;
    int c671 = 0;
    *cast670 = c671;
    __retval665 = cast670;
    int* t672 = __retval665;
    return t672;
  abort();
}

// function: _ZSt10_ConstructIiJEEvPT_DpOT0_
void void_std___Construct_int_(int* v673) {
bb674: ;
  int* __p675;
  __p675 = v673;
    _Bool r676 = std____is_constant_evaluated();
    if (r676) {
      int* t677 = __p675;
      int* r678 = _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t677);
      return;
    }
  int* t679 = __p675;
  void* cast680 = (void*)t679;
  int* cast681 = (int*)cast680;
  int c682 = 0;
  *cast681 = c682;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v683) {
bb684: ;
  struct std___UninitDestroyGuard_int____void_* this685;
  this685 = v683;
  struct std___UninitDestroyGuard_int____void_* t686 = this685;
  int** c687 = ((void*)0);
  t686->_M_cur = c687;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v688) {
bb689: ;
  struct std___UninitDestroyGuard_int____void_* this690;
  this690 = v688;
  struct std___UninitDestroyGuard_int____void_* t691 = this690;
    int** t692 = t691->_M_cur;
    int** c693 = ((void*)0);
    _Bool c694 = ((t692 != c693)) ? 1 : 0;
    if (c694) {
      int* t695 = t691->_M_first;
      int** t696 = t691->_M_cur;
      int* t697 = *t696;
      void_std___Destroy_int__(t695, t697);
    }
  return;
}

// function: _ZNSt27__uninitialized_default_n_1ILb0EE18__uninit_default_nIPimEET_S3_T0_
int* int__std____uninitialized_default_n_1_false_____uninit_default_n_int___unsigned_long_(int* v698, unsigned long v699) {
bb700: ;
  int* __first701;
  unsigned long __n702;
  int* __retval703;
  struct std___UninitDestroyGuard_int____void_ __guard704;
  __first701 = v698;
  __n702 = v699;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard704, &__first701);
      while (1) {
        unsigned long t706 = __n702;
        unsigned long c707 = 0;
        _Bool c708 = ((t706 > c707)) ? 1 : 0;
        if (!c708) break;
        int* t709 = __first701;
        void_std___Construct_int_(t709);
      for_step705: ;
        unsigned long t710 = __n702;
        unsigned long u711 = t710 - 1;
        __n702 = u711;
        int* t712 = __first701;
        int c713 = 1;
        int* ptr714 = &(t712)[c713];
        __first701 = ptr714;
      }
    std___UninitDestroyGuard_int___void___release(&__guard704);
    int* t715 = __first701;
    __retval703 = t715;
    int* t716 = __retval703;
    int* ret_val717 = t716;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard704);
    }
    return ret_val717;
  abort();
}

// function: _ZSt9__fill_a1IPiiEvT_S1_RKT0_
void void_std____fill_a1_int___int_(int* v718, int* v719, int* v720) {
bb721: ;
  int* __first722;
  int* __last723;
  int* __value724;
  _Bool __load_outside_loop725;
  int __val726;
  __first722 = v718;
  __last723 = v719;
  __value724 = v720;
  _Bool c727 = 1;
  __load_outside_loop725 = c727;
  int* t728 = __value724;
  int t729 = *t728;
  __val726 = t729;
    while (1) {
      int* t731 = __first722;
      int* t732 = __last723;
      _Bool c733 = ((t731 != t732)) ? 1 : 0;
      if (!c733) break;
      int t734 = __val726;
      int* t735 = __first722;
      *t735 = t734;
    for_step730: ;
      int* t736 = __first722;
      int c737 = 1;
      int* ptr738 = &(t736)[c737];
      __first722 = ptr738;
    }
  return;
}

// function: _ZSt8__fill_aIPiiEvT_S1_RKT0_
void void_std____fill_a_int___int_(int* v739, int* v740, int* v741) {
bb742: ;
  int* __first743;
  int* __last744;
  int* __value745;
  __first743 = v739;
  __last744 = v740;
  __value745 = v741;
  int* t746 = __first743;
  int* t747 = __last744;
  int* t748 = __value745;
  void_std____fill_a1_int___int_(t746, t747, t748);
  return;
}

// function: _ZSt10__fill_n_aIPimiET_S1_T0_RKT1_St26random_access_iterator_tag
int* int__std____fill_n_a_int___unsigned_long__int_(int* v749, unsigned long v750, int* v751, struct std__random_access_iterator_tag v752) {
bb753: ;
  int* __first754;
  unsigned long __n755;
  int* __value756;
  struct std__random_access_iterator_tag unnamed757;
  int* __retval758;
  __first754 = v749;
  __n755 = v750;
  __value756 = v751;
  unnamed757 = v752;
    unsigned long t759 = __n755;
    unsigned long c760 = 0;
    _Bool c761 = ((t759 <= c760)) ? 1 : 0;
    if (c761) {
      int* t762 = __first754;
      __retval758 = t762;
      int* t763 = __retval758;
      return t763;
    }
  int* t764 = __first754;
  int* t765 = __first754;
  unsigned long t766 = __n755;
  int* ptr767 = &(t765)[t766];
  int* t768 = __value756;
  void_std____fill_a_int___int_(t764, ptr767, t768);
  int* t769 = __first754;
  unsigned long t770 = __n755;
  int* ptr771 = &(t769)[t770];
  __retval758 = ptr771;
  int* t772 = __retval758;
  return t772;
}

// function: _ZSt17__size_to_integerm
unsigned long std____size_to_integer(unsigned long v773) {
bb774: ;
  unsigned long __n775;
  unsigned long __retval776;
  __n775 = v773;
  unsigned long t777 = __n775;
  __retval776 = t777;
  unsigned long t778 = __retval776;
  return t778;
}

// function: _ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** v779) {
bb780: ;
  int** unnamed781;
  struct std__random_access_iterator_tag __retval782;
  unnamed781 = v779;
  struct std__random_access_iterator_tag t783 = __retval782;
  return t783;
}

// function: _ZSt6fill_nIPimiET_S1_T0_RKT1_
int* int__std__fill_n_int___unsigned_long__int_(int* v784, unsigned long v785, int* v786) {
bb787: ;
  int* __first788;
  unsigned long __n789;
  int* __value790;
  int* __retval791;
  struct std__random_access_iterator_tag agg_tmp0792;
  __first788 = v784;
  __n789 = v785;
  __value790 = v786;
  int* t793 = __first788;
  unsigned long t794 = __n789;
  unsigned long r795 = std____size_to_integer(t794);
  int* t796 = __value790;
  struct std__random_access_iterator_tag r797 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first788);
  agg_tmp0792 = r797;
  struct std__random_access_iterator_tag t798 = agg_tmp0792;
  int* r799 = int__std____fill_n_a_int___unsigned_long__int_(t793, r795, t796, t798);
  __retval791 = r799;
  int* t800 = __retval791;
  return t800;
}

// function: _ZNSt27__uninitialized_default_n_1ILb1EE18__uninit_default_nIPimEET_S3_T0_
int* int__std____uninitialized_default_n_1_true_____uninit_default_n_int___unsigned_long_(int* v801, unsigned long v802) {
bb803: ;
  int* __first804;
  unsigned long __n805;
  int* __retval806;
  __first804 = v801;
  __n805 = v802;
    unsigned long t807 = __n805;
    unsigned long c808 = 0;
    _Bool c809 = ((t807 > c808)) ? 1 : 0;
    if (c809) {
      int* __val810;
      int* t811 = __first804;
      __val810 = t811;
      int* t812 = __val810;
      void_std___Construct_int_(t812);
      int* t813 = __first804;
      int c814 = 1;
      int* ptr815 = &(t813)[c814];
      __first804 = ptr815;
      int* t816 = __first804;
      unsigned long t817 = __n805;
      unsigned long c818 = 1;
      unsigned long b819 = t817 - c818;
      int* t820 = __val810;
      int* r821 = int__std__fill_n_int___unsigned_long__int_(t816, b819, t820);
      __first804 = r821;
    }
  int* t822 = __first804;
  __retval806 = t822;
  int* t823 = __retval806;
  return t823;
}

// function: _ZSt25__uninitialized_default_nIPimET_S1_T0_
int* int__std____uninitialized_default_n_int___unsigned_long_(int* v824, unsigned long v825) {
bb826: ;
  int* __first827;
  unsigned long __n828;
  int* __retval829;
  _Bool __can_fill830;
  __first827 = v824;
  __n828 = v825;
    _Bool r831 = std__is_constant_evaluated();
    if (r831) {
      int* t832 = __first827;
      unsigned long t833 = __n828;
      int* r834 = int__std____uninitialized_default_n_1_false_____uninit_default_n_int___unsigned_long_(t832, t833);
      __retval829 = r834;
      int* t835 = __retval829;
      return t835;
    }
  _Bool c836 = 1;
  __can_fill830 = c836;
  int* t837 = __first827;
  unsigned long t838 = __n828;
  int* r839 = int__std____uninitialized_default_n_1_true_____uninit_default_n_int___unsigned_long_(t837, t838);
  __retval829 = r839;
  int* t840 = __retval829;
  return t840;
}

// function: _ZSt27__uninitialized_default_n_aIPimiET_S1_T0_RSaIT1_E
int* int__std____uninitialized_default_n_a_int___unsigned_long__int_(int* v841, unsigned long v842, struct std__allocator_int_* v843) {
bb844: ;
  int* __first845;
  unsigned long __n846;
  struct std__allocator_int_* unnamed847;
  int* __retval848;
  __first845 = v841;
  __n846 = v842;
  unnamed847 = v843;
  int* t849 = __first845;
  unsigned long t850 = __n846;
  int* r851 = int__std____uninitialized_default_n_int___unsigned_long_(t849, t850);
  __retval848 = r851;
  int* t852 = __retval848;
  return t852;
}

// function: _ZNSt6vectorIiSaIiEE17_M_default_appendEm
void std__vector_int__std__allocator_int______M_default_append(struct std__vector_int__std__allocator_int__* v853, unsigned long v854) {
bb855: ;
  struct std__vector_int__std__allocator_int__* this856;
  unsigned long __n857;
  this856 = v853;
  __n857 = v854;
  struct std__vector_int__std__allocator_int__* t858 = this856;
    unsigned long t859 = __n857;
    unsigned long c860 = 0;
    _Bool c861 = ((t859 != c860)) ? 1 : 0;
    if (c861) {
      unsigned long __size862;
      unsigned long __navail863;
      unsigned long r864 = std__vector_int__std__allocator_int_____size___const(t858);
      __size862 = r864;
      struct std___Vector_base_int__std__allocator_int__* base865 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t858 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base866 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base865->_M_impl) + 0);
      int* t867 = base866->_M_end_of_storage;
      struct std___Vector_base_int__std__allocator_int__* base868 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t858 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base869 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base868->_M_impl) + 0);
      int* t870 = base869->_M_finish;
      long diff871 = t867 - t870;
      unsigned long cast872 = (unsigned long)diff871;
      __navail863 = cast872;
        unsigned long t873 = __size862;
        unsigned long r874 = std__vector_int__std__allocator_int_____max_size___const(t858);
        _Bool c875 = ((t873 > r874)) ? 1 : 0;
        _Bool ternary876;
        if (c875) {
          _Bool c877 = 1;
          ternary876 = (_Bool)c877;
        } else {
          unsigned long t878 = __navail863;
          unsigned long r879 = std__vector_int__std__allocator_int_____max_size___const(t858);
          unsigned long t880 = __size862;
          unsigned long b881 = r879 - t880;
          _Bool c882 = ((t878 > b881)) ? 1 : 0;
          ternary876 = (_Bool)c882;
        }
        if (ternary876) {
          __builtin_unreachable();
        }
        unsigned long t883 = __navail863;
        unsigned long t884 = __n857;
        _Bool c885 = ((t883 >= t884)) ? 1 : 0;
        if (c885) {
            struct std___Vector_base_int__std__allocator_int__* base886 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t858 + 0);
            struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base887 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base886->_M_impl) + 0);
            int* t888 = base887->_M_finish;
            _Bool cast889 = (_Bool)t888;
            _Bool u890 = !cast889;
            if (u890) {
              __builtin_unreachable();
            }
          struct std___Vector_base_int__std__allocator_int__* base891 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t858 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base892 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base891->_M_impl) + 0);
          int* t893 = base892->_M_finish;
          unsigned long t894 = __n857;
          struct std___Vector_base_int__std__allocator_int__* base895 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t858 + 0);
          struct std__allocator_int_* r896 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base895);
          int* r897 = int__std____uninitialized_default_n_a_int___unsigned_long__int_(t893, t894, r896);
          struct std___Vector_base_int__std__allocator_int__* base898 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t858 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base899 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base898->_M_impl) + 0);
          base899->_M_finish = r897;
        } else {
          int* __old_start900;
          int* __old_finish901;
          unsigned long __len902;
          int* __new_start903;
          struct std___Vector_base_int__std__allocator_int__* base904 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t858 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base905 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base904->_M_impl) + 0);
          int* t906 = base905->_M_start;
          __old_start900 = t906;
          struct std___Vector_base_int__std__allocator_int__* base907 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t858 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base908 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base907->_M_impl) + 0);
          int* t909 = base908->_M_finish;
          __old_finish901 = t909;
          unsigned long t910 = __n857;
          char* cast911 = (char*)&(_str_8);
          unsigned long r912 = std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(t858, t910, cast911);
          __len902 = r912;
          struct std___Vector_base_int__std__allocator_int__* base913 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t858 + 0);
          unsigned long t914 = __len902;
          int* r915 = std___Vector_base_int__std__allocator_int______M_allocate(base913, t914);
          __new_start903 = r915;
            struct std__vector_int__std__allocator_int_____Guard_alloc __guard916;
            int* t917 = __new_start903;
            unsigned long t918 = __len902;
            struct std___Vector_base_int__std__allocator_int__* base919 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t858 + 0);
            std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(&__guard916, t917, t918, base919);
              int* t920 = __new_start903;
              unsigned long t921 = __size862;
              int* ptr922 = &(t920)[t921];
              unsigned long t923 = __n857;
              struct std___Vector_base_int__std__allocator_int__* base924 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t858 + 0);
              struct std__allocator_int_* r925 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base924);
              int* r926 = int__std____uninitialized_default_n_a_int___unsigned_long__int_(ptr922, t923, r925);
                int* t927 = __old_start900;
                int* t928 = __old_finish901;
                int* t929 = __new_start903;
                struct std___Vector_base_int__std__allocator_int__* base930 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t858 + 0);
                struct std__allocator_int_* r931 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base930);
                int* r932 = std__vector_int__std__allocator_int______S_relocate(t927, t928, t929, r931);
              int* t933 = __old_start900;
              __guard916._M_storage = t933;
              struct std___Vector_base_int__std__allocator_int__* base934 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t858 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base935 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base934->_M_impl) + 0);
              int* t936 = base935->_M_end_of_storage;
              int* t937 = __old_start900;
              long diff938 = t936 - t937;
              unsigned long cast939 = (unsigned long)diff938;
              __guard916._M_len = cast939;
            {
              std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(&__guard916);
            }
          int* t940 = __new_start903;
          struct std___Vector_base_int__std__allocator_int__* base941 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t858 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base942 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base941->_M_impl) + 0);
          base942->_M_start = t940;
          int* t943 = __new_start903;
          unsigned long t944 = __size862;
          int* ptr945 = &(t943)[t944];
          unsigned long t946 = __n857;
          int* ptr947 = &(ptr945)[t946];
          struct std___Vector_base_int__std__allocator_int__* base948 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t858 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base949 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base948->_M_impl) + 0);
          base949->_M_finish = ptr947;
          int* t950 = __new_start903;
          unsigned long t951 = __len902;
          int* ptr952 = &(t950)[t951];
          struct std___Vector_base_int__std__allocator_int__* base953 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t858 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base954 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base953->_M_impl) + 0);
          base954->_M_end_of_storage = ptr952;
        }
    }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v955, int* v956, struct std__allocator_int_* v957) {
bb958: ;
  int* __first959;
  int* __last960;
  struct std__allocator_int_* unnamed961;
  __first959 = v955;
  __last960 = v956;
  unnamed961 = v957;
  int* t962 = __first959;
  int* t963 = __last960;
  void_std___Destroy_int__(t962, t963);
  return;
}

// function: _ZNSt6vectorIiSaIiEE15_M_erase_at_endEPi
void std__vector_int__std__allocator_int______M_erase_at_end(struct std__vector_int__std__allocator_int__* v964, int* v965) {
bb966: ;
  struct std__vector_int__std__allocator_int__* this967;
  int* __pos968;
  this967 = v964;
  __pos968 = v965;
  struct std__vector_int__std__allocator_int__* t969 = this967;
    unsigned long __n970;
    struct std___Vector_base_int__std__allocator_int__* base971 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t969 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base972 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base971->_M_impl) + 0);
    int* t973 = base972->_M_finish;
    int* t974 = __pos968;
    long diff975 = t973 - t974;
    unsigned long cast976 = (unsigned long)diff975;
    __n970 = cast976;
    unsigned long t977 = __n970;
    _Bool cast978 = (_Bool)t977;
    if (cast978) {
      int* t979 = __pos968;
      struct std___Vector_base_int__std__allocator_int__* base980 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t969 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base981 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base980->_M_impl) + 0);
      int* t982 = base981->_M_finish;
      struct std___Vector_base_int__std__allocator_int__* base983 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t969 + 0);
      struct std__allocator_int_* r984 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base983);
      void_std___Destroy_int___int_(t979, t982, r984);
      int* t985 = __pos968;
      struct std___Vector_base_int__std__allocator_int__* base986 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t969 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base987 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base986->_M_impl) + 0);
      base987->_M_finish = t985;
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE6resizeEm
void std__vector_int__std__allocator_int_____resize(struct std__vector_int__std__allocator_int__* v988, unsigned long v989) {
bb990: ;
  struct std__vector_int__std__allocator_int__* this991;
  unsigned long __new_size992;
  this991 = v988;
  __new_size992 = v989;
  struct std__vector_int__std__allocator_int__* t993 = this991;
    unsigned long t994 = __new_size992;
    unsigned long r995 = std__vector_int__std__allocator_int_____size___const(t993);
    _Bool c996 = ((t994 > r995)) ? 1 : 0;
    if (c996) {
      unsigned long t997 = __new_size992;
      unsigned long r998 = std__vector_int__std__allocator_int_____size___const(t993);
      unsigned long b999 = t997 - r998;
      std__vector_int__std__allocator_int______M_default_append(t993, b999);
    } else {
        unsigned long t1000 = __new_size992;
        unsigned long r1001 = std__vector_int__std__allocator_int_____size___const(t993);
        _Bool c1002 = ((t1000 < r1001)) ? 1 : 0;
        if (c1002) {
          struct std___Vector_base_int__std__allocator_int__* base1003 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t993 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1004 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1003->_M_impl) + 0);
          int* t1005 = base1004->_M_start;
          unsigned long t1006 = __new_size992;
          int* ptr1007 = &(t1005)[t1006];
          std__vector_int__std__allocator_int______M_erase_at_end(t993, ptr1007);
        }
    }
  return;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v1008) {
bb1009: ;
  struct std__vector_int__std__allocator_int__* this1010;
  unsigned long __retval1011;
  long __dif1012;
  this1010 = v1008;
  struct std__vector_int__std__allocator_int__* t1013 = this1010;
  struct std___Vector_base_int__std__allocator_int__* base1014 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1013 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1015 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1014->_M_impl) + 0);
  int* t1016 = base1015->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base1017 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1013 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1018 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1017->_M_impl) + 0);
  int* t1019 = base1018->_M_start;
  long diff1020 = t1016 - t1019;
  __dif1012 = diff1020;
    long t1021 = __dif1012;
    long c1022 = 0;
    _Bool c1023 = ((t1021 < c1022)) ? 1 : 0;
    if (c1023) {
      __builtin_unreachable();
    }
  long t1024 = __dif1012;
  unsigned long cast1025 = (unsigned long)t1024;
  __retval1011 = cast1025;
  unsigned long t1026 = __retval1011;
  return t1026;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEmmEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1027) {
bb1028: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this1029;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval1030;
  this1029 = v1027;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1031 = this1029;
  int* t1032 = t1031->_M_current;
  int c1033 = -1;
  int* ptr1034 = &(t1032)[c1033];
  t1031->_M_current = ptr1034;
  __retval1030 = t1031;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1035 = __retval1030;
  return t1035;
}

// function: _Z19copy_backward_esbmcIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_ET0_T_S8_S7_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______copy_backward_esbmc___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1036, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1037, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1038) {
bb1039: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ first1040;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ last1041;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ dest1042;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval1043;
  first1040 = v1036;
  last1041 = v1037;
  dest1042 = v1038;
    while (1) {
      _Bool r1044 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&last1041, &first1040);
      _Bool u1045 = !r1044;
      if (!u1045) break;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1046 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&last1041);
      int* r1047 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(r1046);
      int t1048 = *r1047;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1049 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&dest1042);
      int* r1050 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(r1049);
      *r1050 = t1048;
    }
  __retval1043 = dest1042; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1051 = __retval1043;
  return t1051;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v1052) {
bb1053: ;
  struct std__vector_int__std__allocator_int__* this1054;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval1055;
  this1054 = v1052;
  struct std__vector_int__std__allocator_int__* t1056 = this1054;
  struct std___Vector_base_int__std__allocator_int__* base1057 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1056 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1058 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1057->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval1055, &base1058->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1059 = __retval1055;
  return t1059;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEplEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1060, long v1061) {
bb1062: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this1063;
  long __n1064;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval1065;
  int* ref_tmp01066;
  this1063 = v1060;
  __n1064 = v1061;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1067 = this1063;
  int* t1068 = t1067->_M_current;
  long t1069 = __n1064;
  int* ptr1070 = &(t1068)[t1069];
  ref_tmp01066 = ptr1070;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval1065, &ref_tmp01066);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1071 = __retval1065;
  return t1071;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v1072) {
bb1073: ;
  struct std__vector_int__std__allocator_int__* this1074;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval1075;
  this1074 = v1072;
  struct std__vector_int__std__allocator_int__* t1076 = this1074;
  struct std___Vector_base_int__std__allocator_int__* base1077 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1076 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1078 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1077->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval1075, &base1078->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1079 = __retval1075;
  return t1079;
}

// function: _ZNSt6vectorIiSaIiEEixEm
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* v1080, unsigned long v1081) {
bb1082: ;
  struct std__vector_int__std__allocator_int__* this1083;
  unsigned long __n1084;
  int* __retval1085;
  this1083 = v1080;
  __n1084 = v1081;
  struct std__vector_int__std__allocator_int__* t1086 = this1083;
    do {
          unsigned long t1087 = __n1084;
          unsigned long r1088 = std__vector_int__std__allocator_int_____size___const(t1086);
          _Bool c1089 = ((t1087 < r1088)) ? 1 : 0;
          _Bool u1090 = !c1089;
          if (u1090) {
            char* cast1091 = (char*)&(_str_6);
            int c1092 = 1263;
            char* cast1093 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm);
            char* cast1094 = (char*)&(_str_9);
            std____glibcxx_assert_fail(cast1091, c1092, cast1093, cast1094);
          }
      _Bool c1095 = 0;
      if (!c1095) break;
    } while (1);
  struct std___Vector_base_int__std__allocator_int__* base1096 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1086 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1097 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1096->_M_impl) + 0);
  int* t1098 = base1097->_M_start;
  unsigned long t1099 = __n1084;
  int* ptr1100 = &(t1098)[t1099];
  __retval1085 = ptr1100;
  int* t1101 = __retval1085;
  return t1101;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v1102, int v1103) {
bb1104: ;
  int __a1105;
  int __b1106;
  int __retval1107;
  __a1105 = v1102;
  __b1106 = v1103;
  int t1108 = __a1105;
  int t1109 = __b1106;
  int b1110 = t1108 | t1109;
  __retval1107 = b1110;
  int t1111 = __retval1107;
  return t1111;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v1112) {
bb1113: ;
  struct std__basic_ios_char__std__char_traits_char__* this1114;
  int __retval1115;
  this1114 = v1112;
  struct std__basic_ios_char__std__char_traits_char__* t1116 = this1114;
  struct std__ios_base* base1117 = (struct std__ios_base*)((char *)t1116 + 0);
  int t1118 = base1117->_M_streambuf_state;
  __retval1115 = t1118;
  int t1119 = __retval1115;
  return t1119;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v1120, int v1121) {
bb1122: ;
  struct std__basic_ios_char__std__char_traits_char__* this1123;
  int __state1124;
  this1123 = v1120;
  __state1124 = v1121;
  struct std__basic_ios_char__std__char_traits_char__* t1125 = this1123;
  int r1126 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t1125);
  int t1127 = __state1124;
  int r1128 = std__operator_(r1126, t1127);
  std__basic_ios_char__std__char_traits_char_____clear(t1125, r1128);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v1129, char* v1130) {
bb1131: ;
  char* __c11132;
  char* __c21133;
  _Bool __retval1134;
  __c11132 = v1129;
  __c21133 = v1130;
  char* t1135 = __c11132;
  char t1136 = *t1135;
  int cast1137 = (int)t1136;
  char* t1138 = __c21133;
  char t1139 = *t1138;
  int cast1140 = (int)t1139;
  _Bool c1141 = ((cast1137 == cast1140)) ? 1 : 0;
  __retval1134 = c1141;
  _Bool t1142 = __retval1134;
  return t1142;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v1143) {
bb1144: ;
  char* __p1145;
  unsigned long __retval1146;
  unsigned long __i1147;
  __p1145 = v1143;
  unsigned long c1148 = 0;
  __i1147 = c1148;
    char ref_tmp01149;
    while (1) {
      unsigned long t1150 = __i1147;
      char* t1151 = __p1145;
      char* ptr1152 = &(t1151)[t1150];
      char c1153 = 0;
      ref_tmp01149 = c1153;
      _Bool r1154 = __gnu_cxx__char_traits_char___eq(ptr1152, &ref_tmp01149);
      _Bool u1155 = !r1154;
      if (!u1155) break;
      unsigned long t1156 = __i1147;
      unsigned long u1157 = t1156 + 1;
      __i1147 = u1157;
    }
  unsigned long t1158 = __i1147;
  __retval1146 = t1158;
  unsigned long t1159 = __retval1146;
  return t1159;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v1160) {
bb1161: ;
  char* __s1162;
  unsigned long __retval1163;
  __s1162 = v1160;
    _Bool r1164 = std____is_constant_evaluated();
    if (r1164) {
      char* t1165 = __s1162;
      unsigned long r1166 = __gnu_cxx__char_traits_char___length(t1165);
      __retval1163 = r1166;
      unsigned long t1167 = __retval1163;
      return t1167;
    }
  char* t1168 = __s1162;
  unsigned long r1169 = strlen(t1168);
  __retval1163 = r1169;
  unsigned long t1170 = __retval1163;
  return t1170;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1171, char* v1172) {
bb1173: ;
  struct std__basic_ostream_char__std__char_traits_char__* __out1174;
  char* __s1175;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1176;
  __out1174 = v1171;
  __s1175 = v1172;
    char* t1177 = __s1175;
    _Bool cast1178 = (_Bool)t1177;
    _Bool u1179 = !cast1178;
    if (u1179) {
      struct std__basic_ostream_char__std__char_traits_char__* t1180 = __out1174;
      void** v1181 = (void**)t1180;
      void* v1182 = *((void**)v1181);
      unsigned char* cast1183 = (unsigned char*)v1182;
      long c1184 = -24;
      unsigned char* ptr1185 = &(cast1183)[c1184];
      long* cast1186 = (long*)ptr1185;
      long t1187 = *cast1186;
      unsigned char* cast1188 = (unsigned char*)t1180;
      unsigned char* ptr1189 = &(cast1188)[t1187];
      struct std__basic_ostream_char__std__char_traits_char__* cast1190 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1189;
      struct std__basic_ios_char__std__char_traits_char__* cast1191 = (struct std__basic_ios_char__std__char_traits_char__*)cast1190;
      int t1192 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast1191, t1192);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t1193 = __out1174;
      char* t1194 = __s1175;
      char* t1195 = __s1175;
      unsigned long r1196 = std__char_traits_char___length(t1195);
      long cast1197 = (long)r1196;
      struct std__basic_ostream_char__std__char_traits_char__* r1198 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t1193, t1194, cast1197);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t1199 = __out1174;
  __retval1176 = t1199;
  struct std__basic_ostream_char__std__char_traits_char__* t1200 = __retval1176;
  return t1200;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEaSEOS5_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1201, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1202) {
bb1203: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this1204;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed1205;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval1206;
  this1204 = v1201;
  unnamed1205 = v1202;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1207 = this1204;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1208 = unnamed1205;
  int* t1209 = t1208->_M_current;
  t1207->_M_current = t1209;
  __retval1206 = t1207;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1210 = __retval1206;
  return t1210;
}

// function: _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1211, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1212) {
bb1213: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs1214;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs1215;
  _Bool __retval1216;
  __lhs1214 = v1211;
  __rhs1215 = v1212;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1217 = __lhs1214;
  int** r1218 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t1217);
  int* t1219 = *r1218;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1220 = __rhs1215;
  int** r1221 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t1220);
  int* t1222 = *r1221;
  _Bool c1223 = ((t1219 == t1222)) ? 1 : 0;
  __retval1216 = c1223;
  _Bool t1224 = __retval1216;
  return t1224;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1225) {
bb1226: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this1227;
  int* __retval1228;
  this1227 = v1225;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1229 = this1227;
  int* t1230 = t1229->_M_current;
  __retval1228 = t1230;
  int* t1231 = __retval1228;
  return t1231;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1232) {
bb1233: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this1234;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval1235;
  this1234 = v1232;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1236 = this1234;
  int* t1237 = t1236->_M_current;
  int c1238 = 1;
  int* ptr1239 = &(t1237)[c1238];
  t1236->_M_current = ptr1239;
  __retval1235 = t1236;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1240 = __retval1235;
  return t1240;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v1241, void* v1242) {
bb1243: ;
  struct std__basic_ostream_char__std__char_traits_char__* this1244;
  void* __pf1245;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1246;
  this1244 = v1241;
  __pf1245 = v1242;
  struct std__basic_ostream_char__std__char_traits_char__* t1247 = this1244;
  void* t1248 = __pf1245;
  struct std__basic_ostream_char__std__char_traits_char__* r1249 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t1248)(t1247);
  __retval1246 = r1249;
  struct std__basic_ostream_char__std__char_traits_char__* t1250 = __retval1246;
  return t1250;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1251) {
bb1252: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os1253;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1254;
  __os1253 = v1251;
  struct std__basic_ostream_char__std__char_traits_char__* t1255 = __os1253;
  struct std__basic_ostream_char__std__char_traits_char__* r1256 = std__ostream__flush(t1255);
  __retval1254 = r1256;
  struct std__basic_ostream_char__std__char_traits_char__* t1257 = __retval1254;
  return t1257;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v1258) {
bb1259: ;
  struct std__ctype_char_* __f1260;
  struct std__ctype_char_* __retval1261;
  __f1260 = v1258;
    struct std__ctype_char_* t1262 = __f1260;
    _Bool cast1263 = (_Bool)t1262;
    _Bool u1264 = !cast1263;
    if (u1264) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t1265 = __f1260;
  __retval1261 = t1265;
  struct std__ctype_char_* t1266 = __retval1261;
  return t1266;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v1267, char v1268) {
bb1269: ;
  struct std__ctype_char_* this1270;
  char __c1271;
  char __retval1272;
  this1270 = v1267;
  __c1271 = v1268;
  struct std__ctype_char_* t1273 = this1270;
    char t1274 = t1273->_M_widen_ok;
    _Bool cast1275 = (_Bool)t1274;
    if (cast1275) {
      char t1276 = __c1271;
      unsigned char cast1277 = (unsigned char)t1276;
      unsigned long cast1278 = (unsigned long)cast1277;
      char t1279 = t1273->_M_widen[cast1278];
      __retval1272 = t1279;
      char t1280 = __retval1272;
      return t1280;
    }
  std__ctype_char____M_widen_init___const(t1273);
  char t1281 = __c1271;
  void** v1282 = (void**)t1273;
  void* v1283 = *((void**)v1282);
  char vcall1286 = (char)__VERIFIER_virtual_call_char_char(t1273, 6, t1281);
  __retval1272 = vcall1286;
  char t1287 = __retval1272;
  return t1287;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v1288, char v1289) {
bb1290: ;
  struct std__basic_ios_char__std__char_traits_char__* this1291;
  char __c1292;
  char __retval1293;
  this1291 = v1288;
  __c1292 = v1289;
  struct std__basic_ios_char__std__char_traits_char__* t1294 = this1291;
  struct std__ctype_char_* t1295 = t1294->_M_ctype;
  struct std__ctype_char_* r1296 = std__ctype_char__const__std____check_facet_std__ctype_char___(t1295);
  char t1297 = __c1292;
  char r1298 = std__ctype_char___widen_char__const(r1296, t1297);
  __retval1293 = r1298;
  char t1299 = __retval1293;
  return t1299;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1300) {
bb1301: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os1302;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1303;
  __os1302 = v1300;
  struct std__basic_ostream_char__std__char_traits_char__* t1304 = __os1302;
  struct std__basic_ostream_char__std__char_traits_char__* t1305 = __os1302;
  void** v1306 = (void**)t1305;
  void* v1307 = *((void**)v1306);
  unsigned char* cast1308 = (unsigned char*)v1307;
  long c1309 = -24;
  unsigned char* ptr1310 = &(cast1308)[c1309];
  long* cast1311 = (long*)ptr1310;
  long t1312 = *cast1311;
  unsigned char* cast1313 = (unsigned char*)t1305;
  unsigned char* ptr1314 = &(cast1313)[t1312];
  struct std__basic_ostream_char__std__char_traits_char__* cast1315 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1314;
  struct std__basic_ios_char__std__char_traits_char__* cast1316 = (struct std__basic_ios_char__std__char_traits_char__*)cast1315;
  char c1317 = 10;
  char r1318 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast1316, c1317);
  struct std__basic_ostream_char__std__char_traits_char__* r1319 = std__ostream__put(t1304, r1318);
  struct std__basic_ostream_char__std__char_traits_char__* r1320 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r1319);
  __retval1303 = r1320;
  struct std__basic_ostream_char__std__char_traits_char__* t1321 = __retval1303;
  return t1321;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v1322) {
bb1323: ;
  struct std__vector_int__std__allocator_int__* this1324;
  this1324 = v1322;
  struct std__vector_int__std__allocator_int__* t1325 = this1324;
    struct std___Vector_base_int__std__allocator_int__* base1326 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1325 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1327 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1326->_M_impl) + 0);
    int* t1328 = base1327->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base1329 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1325 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1330 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1329->_M_impl) + 0);
    int* t1331 = base1330->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base1332 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1325 + 0);
    struct std__allocator_int_* r1333 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1332);
    void_std___Destroy_int___int_(t1328, t1331, r1333);
  {
    struct std___Vector_base_int__std__allocator_int__* base1334 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1325 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base1334);
  }
  return;
}

// function: main
int main() {
bb1335: ;
  int __retval1336;
  struct std__vector_int__std__allocator_int__ myvector1337;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it1338;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01339;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11340;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp11341;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp21342;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp31343;
  int c1344 = 0;
  __retval1336 = c1344;
  std__vector_int__std__allocator_int_____vector(&myvector1337);
    __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(&it1338);
      int i1345;
      int ref_tmp01346;
      int c1347 = 1;
      i1345 = c1347;
      while (1) {
        int t1349 = i1345;
        int c1350 = 5;
        _Bool c1351 = ((t1349 <= c1350)) ? 1 : 0;
        if (!c1351) break;
        int t1352 = i1345;
        int c1353 = 10;
        int b1354 = t1352 * c1353;
        ref_tmp01346 = b1354;
        std__vector_int__std__allocator_int_____push_back(&myvector1337, &ref_tmp01346);
      for_step1348: ;
        int t1355 = i1345;
        int u1356 = t1355 + 1;
        i1345 = u1356;
      }
    unsigned long r1357 = std__vector_int__std__allocator_int_____size___const(&myvector1337);
    unsigned long c1358 = 3;
    unsigned long b1359 = r1357 + c1358;
    std__vector_int__std__allocator_int_____resize(&myvector1337, b1359);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1360 = std__vector_int__std__allocator_int_____begin(&myvector1337);
    agg_tmp01339 = r1360;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1361 = std__vector_int__std__allocator_int_____begin(&myvector1337);
    ref_tmp11341 = r1361;
    long c1362 = 5;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1363 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&ref_tmp11341, c1362);
    agg_tmp11340 = r1363;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1364 = std__vector_int__std__allocator_int_____end(&myvector1337);
    agg_tmp21342 = r1364;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1365 = agg_tmp01339;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1366 = agg_tmp11340;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1367 = agg_tmp21342;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1368 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______copy_backward_esbmc___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t1365, t1366, t1367);
    agg_tmp31343 = r1368;
    unsigned long c1369 = 3;
    int* r1370 = std__vector_int__std__allocator_int_____operator__(&myvector1337, c1369);
    int t1371 = *r1370;
    int c1372 = 10;
    _Bool c1373 = ((t1371 == c1372)) ? 1 : 0;
    if (c1373) {
    } else {
      char* cast1374 = (char*)&(_str);
      char* c1375 = (char*)_str_1;
      unsigned int c1376 = 32;
      char* cast1377 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1374, c1375, c1376, cast1377);
    }
    unsigned long c1378 = 7;
    int* r1379 = std__vector_int__std__allocator_int_____operator__(&myvector1337, c1378);
    int t1380 = *r1379;
    int c1381 = 50;
    _Bool c1382 = ((t1380 != c1381)) ? 1 : 0;
    if (c1382) {
    } else {
      char* cast1383 = (char*)&(_str_2);
      char* c1384 = (char*)_str_1;
      unsigned int c1385 = 33;
      char* cast1386 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1383, c1384, c1385, cast1386);
    }
    char* cast1387 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* r1388 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1387);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp21389;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp31390;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1391 = std__vector_int__std__allocator_int_____begin(&myvector1337);
      ref_tmp21389 = r1391;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1392 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&it1338, &ref_tmp21389);
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1394 = std__vector_int__std__allocator_int_____end(&myvector1337);
        ref_tmp31390 = r1394;
        _Bool r1395 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&it1338, &ref_tmp31390);
        _Bool u1396 = !r1395;
        if (!u1396) break;
        char* cast1397 = (char*)&(_str_4);
        struct std__basic_ostream_char__std__char_traits_char__* r1398 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1397);
        int* r1399 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&it1338);
        int t1400 = *r1399;
        struct std__basic_ostream_char__std__char_traits_char__* r1401 = std__ostream__operator__(r1398, t1400);
      for_step1393: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1402 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(&it1338);
      }
    struct std__basic_ostream_char__std__char_traits_char__* r1403 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c1404 = 0;
    __retval1336 = c1404;
    int t1405 = __retval1336;
    int ret_val1406 = t1405;
    {
      std__vector_int__std__allocator_int______vector(&myvector1337);
    }
    return ret_val1406;
  int t1407 = __retval1336;
  return t1407;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE
void _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1408) {
bb1409: ;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1410;
  this1410 = v1408;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1411 = this1410;
  struct std__allocator_int_* base1412 = (struct std__allocator_int_*)((char *)t1411 + 0);
  std__allocator_int___allocator(base1412);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1413 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t1411 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base1413);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1414) {
bb1415: ;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1416;
  this1416 = v1414;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1417 = this1416;
  {
    struct std__allocator_int_* base1418 = (struct std__allocator_int_*)((char *)t1417 + 0);
    std__allocator_int____allocator(base1418);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2Ev
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1419) {
bb1420: ;
  struct std___Vector_base_int__std__allocator_int__* this1421;
  this1421 = v1419;
  struct std___Vector_base_int__std__allocator_int__* t1422 = this1421;
  _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(&t1422->_M_impl);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1423: ;
  _Bool __retval1424;
    _Bool c1425 = 0;
    __retval1424 = c1425;
    _Bool t1426 = __retval1424;
    return t1426;
  abort();
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v1427, int* v1428, unsigned long v1429) {
bb1430: ;
  struct std____new_allocator_int_* this1431;
  int* __p1432;
  unsigned long __n1433;
  this1431 = v1427;
  __p1432 = v1428;
  __n1433 = v1429;
  struct std____new_allocator_int_* t1434 = this1431;
    unsigned long c1435 = 4;
    unsigned long c1436 = 16;
    _Bool c1437 = ((c1435 > c1436)) ? 1 : 0;
    if (c1437) {
      int* t1438 = __p1432;
      void* cast1439 = (void*)t1438;
      unsigned long t1440 = __n1433;
      unsigned long c1441 = 4;
      unsigned long b1442 = t1440 * c1441;
      unsigned long c1443 = 4;
      operator_delete_3(cast1439, b1442, c1443);
      return;
    }
  int* t1444 = __p1432;
  void* cast1445 = (void*)t1444;
  unsigned long t1446 = __n1433;
  unsigned long c1447 = 4;
  unsigned long b1448 = t1446 * c1447;
  operator_delete_2(cast1445, b1448);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1449, int* v1450, unsigned long v1451) {
bb1452: ;
  struct std__allocator_int_* this1453;
  int* __p1454;
  unsigned long __n1455;
  this1453 = v1449;
  __p1454 = v1450;
  __n1455 = v1451;
  struct std__allocator_int_* t1456 = this1453;
    _Bool r1457 = std____is_constant_evaluated();
    if (r1457) {
      int* t1458 = __p1454;
      void* cast1459 = (void*)t1458;
      operator_delete(cast1459);
      return;
    }
  struct std____new_allocator_int_* base1460 = (struct std____new_allocator_int_*)((char *)t1456 + 0);
  int* t1461 = __p1454;
  unsigned long t1462 = __n1455;
  std____new_allocator_int___deallocate(base1460, t1461, t1462);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1463, int* v1464, unsigned long v1465) {
bb1466: ;
  struct std__allocator_int_* __a1467;
  int* __p1468;
  unsigned long __n1469;
  __a1467 = v1463;
  __p1468 = v1464;
  __n1469 = v1465;
  struct std__allocator_int_* t1470 = __a1467;
  int* t1471 = __p1468;
  unsigned long t1472 = __n1469;
  std__allocator_int___deallocate(t1470, t1471, t1472);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v1473, int* v1474, unsigned long v1475) {
bb1476: ;
  struct std___Vector_base_int__std__allocator_int__* this1477;
  int* __p1478;
  unsigned long __n1479;
  this1477 = v1473;
  __p1478 = v1474;
  __n1479 = v1475;
  struct std___Vector_base_int__std__allocator_int__* t1480 = this1477;
    int* t1481 = __p1478;
    _Bool cast1482 = (_Bool)t1481;
    if (cast1482) {
      struct std__allocator_int_* base1483 = (struct std__allocator_int_*)((char *)&(t1480->_M_impl) + 0);
      int* t1484 = __p1478;
      unsigned long t1485 = __n1479;
      std__allocator_traits_std__allocator_int_____deallocate(base1483, t1484, t1485);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1486) {
bb1487: ;
  struct std___Vector_base_int__std__allocator_int__* this1488;
  this1488 = v1486;
  struct std___Vector_base_int__std__allocator_int__* t1489 = this1488;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1490 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1489->_M_impl) + 0);
    int* t1491 = base1490->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1492 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1489->_M_impl) + 0);
    int* t1493 = base1492->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1494 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1489->_M_impl) + 0);
    int* t1495 = base1494->_M_start;
    long diff1496 = t1493 - t1495;
    unsigned long cast1497 = (unsigned long)diff1496;
    std___Vector_base_int__std__allocator_int______M_deallocate(t1489, t1491, cast1497);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t1489->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1498) {
bb1499: ;
  struct std____new_allocator_int_* this1500;
  this1500 = v1498;
  struct std____new_allocator_int_* t1501 = this1500;
  return;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator(struct std__allocator_int_* v1502) {
bb1503: ;
  struct std__allocator_int_* this1504;
  this1504 = v1502;
  struct std__allocator_int_* t1505 = this1504;
  struct std____new_allocator_int_* base1506 = (struct std____new_allocator_int_*)((char *)t1505 + 0);
  std____new_allocator_int_____new_allocator(base1506);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v1507) {
bb1508: ;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this1509;
  this1509 = v1507;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1510 = this1509;
  int* c1511 = ((void*)0);
  t1510->_M_start = c1511;
  int* c1512 = ((void*)0);
  t1510->_M_finish = c1512;
  int* c1513 = ((void*)0);
  t1510->_M_end_of_storage = c1513;
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v1514) {
bb1515: ;
  struct std__allocator_int_* this1516;
  this1516 = v1514;
  struct std__allocator_int_* t1517 = this1516;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1518, int* v1519) {
bb1520: ;
  int* __first1521;
  int* __last1522;
  __first1521 = v1518;
  __last1522 = v1519;
      _Bool r1523 = std____is_constant_evaluated();
      if (r1523) {
          while (1) {
            int* t1525 = __first1521;
            int* t1526 = __last1522;
            _Bool c1527 = ((t1525 != t1526)) ? 1 : 0;
            if (!c1527) break;
            int* t1528 = __first1521;
            void_std__destroy_at_int_(t1528);
          for_step1524: ;
            int* t1529 = __first1521;
            int c1530 = 1;
            int* ptr1531 = &(t1529)[c1530];
            __first1521 = ptr1531;
          }
      }
  return;
}

