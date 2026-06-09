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

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[16] = "second[0] == 11";
char _str_1[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm18/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[16] = "second[1] == 21";
char _str_3[16] = "second[2] == 31";
char _str_4[16] = "second[3] == 41";
char _str_5[16] = "second[4] == 51";
char _str_6[15] = "first[0] == 21";
char _str_7[15] = "first[1] == 41";
char _str_8[15] = "first[2] == 61";
char _str_9[15] = "first[3] == 81";
char _str_10[16] = "first[4] == 101";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_11[16] = "first contains:";
char _str_12[2] = " ";
char _str_13[26] = "vector::_M_realloc_append";
char _str_14[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv[77] = "reference std::vector<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_15[15] = "!this->empty()";
char _str_16[26] = "vector::_M_default_append";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_17[19] = "__n < this->size()";
int op_increase(int p0);
int op_sum(int p0, int p1);
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
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__transform___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_____int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2, void* p3);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* p0);
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__transform___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_____int__int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p3, void* p4);
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
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
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

// function: _Z11op_increasei
int op_increase(int v0) {
bb1:
  int i2;
  int __retval3;
  i2 = v0;
  int t4 = i2;
  int u5 = t4 + 1;
  i2 = u5;
  __retval3 = u5;
  int t6 = __retval3;
  return t6;
}

// function: _Z6op_sumii
int op_sum(int v7, int v8) {
bb9:
  int i10;
  int j11;
  int __retval12;
  i10 = v7;
  j11 = v8;
  int t13 = i10;
  int t14 = j11;
  int b15 = t13 + t14;
  __retval12 = b15;
  int t16 = __retval12;
  return t16;
}

// function: _ZNSt6vectorIiSaIiEEC2Ev
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* v17) {
bb18:
  struct std__vector_int__std__allocator_int__* this19;
  this19 = v17;
  struct std__vector_int__std__allocator_int__* t20 = this19;
  struct std___Vector_base_int__std__allocator_int__* base21 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t20 + 0);
  std___Vector_base_int__std__allocator_int______Vector_base(base21);
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2Ev
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v22) {
bb23:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this24;
  this24 = v22;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t25 = this24;
  int* c26 = ((void*)0);
  t25->_M_current = c26;
  return;
}

// function: _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v27, int* v28) {
bb29:
  int* __location30;
  int* __args31;
  int* __retval32;
  void* __loc33;
  __location30 = v27;
  __args31 = v28;
  int* t34 = __location30;
  void* cast35 = (void*)t34;
  __loc33 = cast35;
    void* t36 = __loc33;
    int* cast37 = (int*)t36;
    int* t38 = __args31;
    int t39 = *t38;
    *cast37 = t39;
    __retval32 = cast37;
    int* t40 = __retval32;
    return t40;
  abort();
}

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std__allocator_int_* v41, int* v42, int* v43) {
bb44:
  struct std__allocator_int_* __a45;
  int* __p46;
  int* __args47;
  __a45 = v41;
  __p46 = v42;
  __args47 = v43;
  int* t48 = __p46;
  int* t49 = __args47;
  int* r50 = _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t48, t49);
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v51, unsigned long* v52) {
bb53:
  unsigned long* __a54;
  unsigned long* __b55;
  unsigned long* __retval56;
  __a54 = v51;
  __b55 = v52;
    unsigned long* t57 = __b55;
    unsigned long t58 = *t57;
    unsigned long* t59 = __a54;
    unsigned long t60 = *t59;
    _Bool c61 = ((t58 < t60)) ? 1 : 0;
    if (c61) {
      unsigned long* t62 = __b55;
      __retval56 = t62;
      unsigned long* t63 = __retval56;
      return t63;
    }
  unsigned long* t64 = __a54;
  __retval56 = t64;
  unsigned long* t65 = __retval56;
  return t65;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v66) {
bb67:
  struct std__allocator_int_* __a68;
  unsigned long __retval69;
  unsigned long __diffmax70;
  unsigned long __allocmax71;
  __a68 = v66;
  unsigned long c72 = 2305843009213693951;
  __diffmax70 = c72;
  unsigned long c73 = 4611686018427387903;
  __allocmax71 = c73;
  unsigned long* r74 = unsigned_long_const__std__min_unsigned_long_(&__diffmax70, &__allocmax71);
  unsigned long t75 = *r74;
  __retval69 = t75;
  unsigned long t76 = __retval69;
  return t76;
}

// function: _ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Vector_base_int__std__allocator_int__* v77) {
bb78:
  struct std___Vector_base_int__std__allocator_int__* this79;
  struct std__allocator_int_* __retval80;
  this79 = v77;
  struct std___Vector_base_int__std__allocator_int__* t81 = this79;
  struct std__allocator_int_* base82 = (struct std__allocator_int_*)((char *)&(t81->_M_impl) + 0);
  __retval80 = base82;
  struct std__allocator_int_* t83 = __retval80;
  return t83;
}

// function: _ZNKSt6vectorIiSaIiEE8max_sizeEv
unsigned long std__vector_int__std__allocator_int_____max_size___const(struct std__vector_int__std__allocator_int__* v84) {
bb85:
  struct std__vector_int__std__allocator_int__* this86;
  unsigned long __retval87;
  this86 = v84;
  struct std__vector_int__std__allocator_int__* t88 = this86;
  struct std___Vector_base_int__std__allocator_int__* base89 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t88 + 0);
  struct std__allocator_int_* r90 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(base89);
  unsigned long r91 = std__vector_int__std__allocator_int______S_max_size(r90);
  __retval87 = r91;
  unsigned long t92 = __retval87;
  return t92;
}

// function: _ZSt3maxImERKT_S2_S2_
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* v93, unsigned long* v94) {
bb95:
  unsigned long* __a96;
  unsigned long* __b97;
  unsigned long* __retval98;
  __a96 = v93;
  __b97 = v94;
    unsigned long* t99 = __a96;
    unsigned long t100 = *t99;
    unsigned long* t101 = __b97;
    unsigned long t102 = *t101;
    _Bool c103 = ((t100 < t102)) ? 1 : 0;
    if (c103) {
      unsigned long* t104 = __b97;
      __retval98 = t104;
      unsigned long* t105 = __retval98;
      return t105;
    }
  unsigned long* t106 = __a96;
  __retval98 = t106;
  unsigned long* t107 = __retval98;
  return t107;
}

// function: _ZNKSt6vectorIiSaIiEE12_M_check_lenEmPKc
unsigned long std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(struct std__vector_int__std__allocator_int__* v108, unsigned long v109, char* v110) {
bb111:
  struct std__vector_int__std__allocator_int__* this112;
  unsigned long __n113;
  char* __s114;
  unsigned long __retval115;
  unsigned long __len116;
  unsigned long ref_tmp0117;
  this112 = v108;
  __n113 = v109;
  __s114 = v110;
  struct std__vector_int__std__allocator_int__* t118 = this112;
    unsigned long r119 = std__vector_int__std__allocator_int_____max_size___const(t118);
    unsigned long r120 = std__vector_int__std__allocator_int_____size___const(t118);
    unsigned long b121 = r119 - r120;
    unsigned long t122 = __n113;
    _Bool c123 = ((b121 < t122)) ? 1 : 0;
    if (c123) {
      char* t124 = __s114;
      std____throw_length_error(t124);
    }
  unsigned long r125 = std__vector_int__std__allocator_int_____size___const(t118);
  unsigned long r126 = std__vector_int__std__allocator_int_____size___const(t118);
  ref_tmp0117 = r126;
  unsigned long* r127 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp0117, &__n113);
  unsigned long t128 = *r127;
  unsigned long b129 = r125 + t128;
  __len116 = b129;
  unsigned long t130 = __len116;
  unsigned long r131 = std__vector_int__std__allocator_int_____size___const(t118);
  _Bool c132 = ((t130 < r131)) ? 1 : 0;
  _Bool ternary133;
  if (c132) {
    _Bool c134 = 1;
    ternary133 = (_Bool)c134;
  } else {
    unsigned long t135 = __len116;
    unsigned long r136 = std__vector_int__std__allocator_int_____max_size___const(t118);
    _Bool c137 = ((t135 > r136)) ? 1 : 0;
    ternary133 = (_Bool)c137;
  }
  unsigned long ternary138;
  if (ternary133) {
    unsigned long r139 = std__vector_int__std__allocator_int_____max_size___const(t118);
    ternary138 = (unsigned long)r139;
  } else {
    unsigned long t140 = __len116;
    ternary138 = (unsigned long)t140;
  }
  __retval115 = ternary138;
  unsigned long t141 = __retval115;
  return t141;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v142) {
bb143:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this144;
  int** __retval145;
  this144 = v142;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t146 = this144;
  __retval145 = &t146->_M_current;
  int** t147 = __retval145;
  return t147;
}

// function: _ZN9__gnu_cxxmiIPiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v148, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v149) {
bb150:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs151;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs152;
  long __retval153;
  __lhs151 = v148;
  __rhs152 = v149;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t154 = __lhs151;
  int** r155 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t154);
  int* t156 = *r155;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t157 = __rhs152;
  int** r158 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t157);
  int* t159 = *r158;
  long diff160 = t156 - t159;
  __retval153 = diff160;
  long t161 = __retval153;
  return t161;
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v162) {
bb163:
  struct std____new_allocator_int_* this164;
  unsigned long __retval165;
  this164 = v162;
  struct std____new_allocator_int_* t166 = this164;
  unsigned long c167 = 9223372036854775807;
  unsigned long c168 = 4;
  unsigned long b169 = c167 / c168;
  __retval165 = b169;
  unsigned long t170 = __retval165;
  return t170;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v171, unsigned long v172, void* v173) {
bb174:
  struct std____new_allocator_int_* this175;
  unsigned long __n176;
  void* unnamed177;
  int* __retval178;
  this175 = v171;
  __n176 = v172;
  unnamed177 = v173;
  struct std____new_allocator_int_* t179 = this175;
    unsigned long t180 = __n176;
    unsigned long r181 = std____new_allocator_int____M_max_size___const(t179);
    _Bool c182 = ((t180 > r181)) ? 1 : 0;
    if (c182) {
        unsigned long t183 = __n176;
        unsigned long c184 = -1;
        unsigned long c185 = 4;
        unsigned long b186 = c184 / c185;
        _Bool c187 = ((t183 > b186)) ? 1 : 0;
        if (c187) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c188 = 4;
    unsigned long c189 = 16;
    _Bool c190 = ((c188 > c189)) ? 1 : 0;
    if (c190) {
      unsigned long __al191;
      unsigned long c192 = 4;
      __al191 = c192;
      unsigned long t193 = __n176;
      unsigned long c194 = 4;
      unsigned long b195 = t193 * c194;
      unsigned long t196 = __al191;
      void* r197 = operator_new_2(b195, t196);
      int* cast198 = (int*)r197;
      __retval178 = cast198;
      int* t199 = __retval178;
      return t199;
    }
  unsigned long t200 = __n176;
  unsigned long c201 = 4;
  unsigned long b202 = t200 * c201;
  void* r203 = operator_new(b202);
  int* cast204 = (int*)r203;
  __retval178 = cast204;
  int* t205 = __retval178;
  return t205;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v206, unsigned long v207) {
bb208:
  struct std__allocator_int_* this209;
  unsigned long __n210;
  int* __retval211;
  this209 = v206;
  __n210 = v207;
  struct std__allocator_int_* t212 = this209;
    _Bool r213 = std____is_constant_evaluated();
    if (r213) {
        unsigned long t214 = __n210;
        unsigned long c215 = 4;
        unsigned long ovr216;
        _Bool ovf217 = __builtin_mul_overflow(t214, c215, &ovr216);
        __n210 = ovr216;
        if (ovf217) {
          std____throw_bad_array_new_length();
        }
      unsigned long t218 = __n210;
      void* r219 = operator_new(t218);
      int* cast220 = (int*)r219;
      __retval211 = cast220;
      int* t221 = __retval211;
      return t221;
    }
  struct std____new_allocator_int_* base222 = (struct std____new_allocator_int_*)((char *)t212 + 0);
  unsigned long t223 = __n210;
  void* c224 = ((void*)0);
  int* r225 = std____new_allocator_int___allocate(base222, t223, c224);
  __retval211 = r225;
  int* t226 = __retval211;
  return t226;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v227, unsigned long v228) {
bb229:
  struct std__allocator_int_* __a230;
  unsigned long __n231;
  int* __retval232;
  __a230 = v227;
  __n231 = v228;
  struct std__allocator_int_* t233 = __a230;
  unsigned long t234 = __n231;
  int* r235 = std__allocator_int___allocate(t233, t234);
  __retval232 = r235;
  int* t236 = __retval232;
  return t236;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v237, unsigned long v238) {
bb239:
  struct std___Vector_base_int__std__allocator_int__* this240;
  unsigned long __n241;
  int* __retval242;
  this240 = v237;
  __n241 = v238;
  struct std___Vector_base_int__std__allocator_int__* t243 = this240;
  unsigned long t244 = __n241;
  unsigned long c245 = 0;
  _Bool c246 = ((t244 != c245)) ? 1 : 0;
  int* ternary247;
  if (c246) {
    struct std__allocator_int_* base248 = (struct std__allocator_int_*)((char *)&(t243->_M_impl) + 0);
    unsigned long t249 = __n241;
    int* r250 = std__allocator_traits_std__allocator_int_____allocate(base248, t249);
    ternary247 = (int*)r250;
  } else {
    int* c251 = ((void*)0);
    ternary247 = (int*)c251;
  }
  __retval242 = ternary247;
  int* t252 = __retval242;
  return t252;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocC2EPimRSt12_Vector_baseIiS0_E
void std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v253, int* v254, unsigned long v255, struct std___Vector_base_int__std__allocator_int__* v256) {
bb257:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this258;
  int* __s259;
  unsigned long __l260;
  struct std___Vector_base_int__std__allocator_int__* __vect261;
  this258 = v253;
  __s259 = v254;
  __l260 = v255;
  __vect261 = v256;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t262 = this258;
  int* t263 = __s259;
  t262->_M_storage = t263;
  unsigned long t264 = __l260;
  t262->_M_len = t264;
  struct std___Vector_base_int__std__allocator_int__* t265 = __vect261;
  t262->_M_vect = t265;
  return;
}

// function: _ZSt10to_addressIiEPT_S1_
int* int__std__to_address_int_(int* v266) {
bb267:
  int* __ptr268;
  int* __retval269;
  __ptr268 = v266;
  int* t270 = __ptr268;
  __retval269 = t270;
  int* t271 = __retval269;
  return t271;
}

// function: _ZSt12__to_addressIPiEDaRKT_
int* auto_std____to_address_int__(int** v272) {
bb273:
  int** __ptr274;
  int* __retval275;
  __ptr274 = v272;
  int** t276 = __ptr274;
  int* t277 = *t276;
  int* r278 = int__std__to_address_int_(t277);
  __retval275 = r278;
  int* t279 = __retval275;
  return t279;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb280:
  _Bool __retval281;
    _Bool c282 = 0;
    __retval281 = c282;
    _Bool t283 = __retval281;
    return t283;
  abort();
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEC2ERKS1_
void __gnu_cxx____normal_iterator_int___void_____normal_iterator(struct __gnu_cxx____normal_iterator_int____void_* v284, int** v285) {
bb286:
  struct __gnu_cxx____normal_iterator_int____void_* this287;
  int** __i288;
  this287 = v284;
  __i288 = v285;
  struct __gnu_cxx____normal_iterator_int____void_* t289 = this287;
  int** t290 = __i288;
  int* t291 = *t290;
  t289->_M_current = t291;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v292) {
bb293:
  int* __location294;
  __location294 = v292;
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE7destroyIiEEvRS0_PT_
void void_std__allocator_traits_std__allocator_int_____destroy_int_(struct std__allocator_int_* v295, int* v296) {
bb297:
  struct std__allocator_int_* __a298;
  int* __p299;
  __a298 = v295;
  __p299 = v296;
  int* t300 = __p299;
  void_std__destroy_at_int_(t300);
  return;
}

// function: _ZSt19__relocate_object_aIiiSaIiEEvPT_PT0_RT1_
void void_std____relocate_object_a_int__int__std__allocator_int___(int* v301, int* v302, struct std__allocator_int_* v303) {
bb304:
  int* __dest305;
  int* __orig306;
  struct std__allocator_int_* __alloc307;
  __dest305 = v301;
  __orig306 = v302;
  __alloc307 = v303;
  struct std__allocator_int_* t308 = __alloc307;
  int* t309 = __dest305;
  int* t310 = __orig306;
  void_std__allocator_traits_std__allocator_int_____construct_int__int_(t308, t309, t310);
  struct std__allocator_int_* t311 = __alloc307;
  int* t312 = __orig306;
  void_std__allocator_traits_std__allocator_int_____destroy_int_(t311, t312);
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivEdeEv
int* __gnu_cxx____normal_iterator_int___void___operator____const(struct __gnu_cxx____normal_iterator_int____void_* v313) {
bb314:
  struct __gnu_cxx____normal_iterator_int____void_* this315;
  int* __retval316;
  this315 = v313;
  struct __gnu_cxx____normal_iterator_int____void_* t317 = this315;
  int* t318 = t317->_M_current;
  __retval316 = t318;
  int* t319 = __retval316;
  return t319;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEppEv
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator__(struct __gnu_cxx____normal_iterator_int____void_* v320) {
bb321:
  struct __gnu_cxx____normal_iterator_int____void_* this322;
  struct __gnu_cxx____normal_iterator_int____void_* __retval323;
  this322 = v320;
  struct __gnu_cxx____normal_iterator_int____void_* t324 = this322;
  int* t325 = t324->_M_current;
  int c326 = 1;
  int* ptr327 = &(t325)[c326];
  t324->_M_current = ptr327;
  __retval323 = t324;
  struct __gnu_cxx____normal_iterator_int____void_* t328 = __retval323;
  return t328;
}

// function: _ZSt14__relocate_a_1IPiN9__gnu_cxx17__normal_iteratorIS0_vEESaIiEET0_T_S6_S5_RT1_
struct __gnu_cxx____normal_iterator_int____void_ __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(int* v329, int* v330, struct __gnu_cxx____normal_iterator_int____void_ v331, struct std__allocator_int_* v332) {
bb333:
  int* __first334;
  int* __last335;
  struct __gnu_cxx____normal_iterator_int____void_ __result336;
  struct std__allocator_int_* __alloc337;
  struct __gnu_cxx____normal_iterator_int____void_ __retval338;
  __first334 = v329;
  __last335 = v330;
  __result336 = v331;
  __alloc337 = v332;
  __retval338 = __result336; // copy
    while (1) {
      int* t340 = __first334;
      int* t341 = __last335;
      _Bool c342 = ((t340 != t341)) ? 1 : 0;
      if (!c342) break;
      int* r343 = __gnu_cxx____normal_iterator_int___void___operator____const(&__retval338);
      int* t344 = __first334;
      struct std__allocator_int_* t345 = __alloc337;
      void_std____relocate_object_a_int__int__std__allocator_int___(r343, t344, t345);
    for_step339: ;
      int* t346 = __first334;
      int c347 = 1;
      int* ptr348 = &(t346)[c347];
      __first334 = ptr348;
      struct __gnu_cxx____normal_iterator_int____void_* r349 = __gnu_cxx____normal_iterator_int___void___operator__(&__retval338);
    }
  struct __gnu_cxx____normal_iterator_int____void_ t350 = __retval338;
  return t350;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEaSEOS2_
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator_(struct __gnu_cxx____normal_iterator_int____void_* v351, struct __gnu_cxx____normal_iterator_int____void_* v352) {
bb353:
  struct __gnu_cxx____normal_iterator_int____void_* this354;
  struct __gnu_cxx____normal_iterator_int____void_* unnamed355;
  struct __gnu_cxx____normal_iterator_int____void_* __retval356;
  this354 = v351;
  unnamed355 = v352;
  struct __gnu_cxx____normal_iterator_int____void_* t357 = this354;
  struct __gnu_cxx____normal_iterator_int____void_* t358 = unnamed355;
  int* t359 = t358->_M_current;
  t357->_M_current = t359;
  __retval356 = t357;
  struct __gnu_cxx____normal_iterator_int____void_* t360 = __retval356;
  return t360;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivE4baseEv
int** __gnu_cxx____normal_iterator_int___void___base___const(struct __gnu_cxx____normal_iterator_int____void_* v361) {
bb362:
  struct __gnu_cxx____normal_iterator_int____void_* this363;
  int** __retval364;
  this363 = v361;
  struct __gnu_cxx____normal_iterator_int____void_* t365 = this363;
  __retval364 = &t365->_M_current;
  int** t366 = __retval364;
  return t366;
}

// function: _ZSt14__relocate_a_1IiiENSt9enable_ifIXsr3std24__is_bitwise_relocatableIT_EE5valueEPS1_E4typeES2_S2_S2_RSaIT0_E
int* std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(int* v367, int* v368, int* v369, struct std__allocator_int_* v370) {
bb371:
  int* __first372;
  int* __last373;
  int* __result374;
  struct std__allocator_int_* __alloc375;
  int* __retval376;
  long __count377;
  __first372 = v367;
  __last373 = v368;
  __result374 = v369;
  __alloc375 = v370;
  int* t378 = __last373;
  int* t379 = __first372;
  long diff380 = t378 - t379;
  __count377 = diff380;
    long t381 = __count377;
    long c382 = 0;
    _Bool c383 = ((t381 > c382)) ? 1 : 0;
    if (c383) {
        _Bool r384 = std__is_constant_evaluated();
        if (r384) {
          struct __gnu_cxx____normal_iterator_int____void_ __out385;
          struct __gnu_cxx____normal_iterator_int____void_ ref_tmp0386;
          struct __gnu_cxx____normal_iterator_int____void_ agg_tmp0387;
          __gnu_cxx____normal_iterator_int___void_____normal_iterator(&__out385, &__result374);
          int* t388 = __first372;
          int* t389 = __last373;
          agg_tmp0387 = __out385; // copy
          struct std__allocator_int_* t390 = __alloc375;
          struct __gnu_cxx____normal_iterator_int____void_ t391 = agg_tmp0387;
          struct __gnu_cxx____normal_iterator_int____void_ r392 = __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(t388, t389, t391, t390);
          ref_tmp0386 = r392;
          struct __gnu_cxx____normal_iterator_int____void_* r393 = __gnu_cxx____normal_iterator_int___void___operator_(&__out385, &ref_tmp0386);
          int** r394 = __gnu_cxx____normal_iterator_int___void___base___const(&__out385);
          int* t395 = *r394;
          __retval376 = t395;
          int* t396 = __retval376;
          return t396;
        }
      int* t397 = __result374;
      void* cast398 = (void*)t397;
      int* t399 = __first372;
      void* cast400 = (void*)t399;
      long t401 = __count377;
      unsigned long cast402 = (unsigned long)t401;
      unsigned long c403 = 4;
      unsigned long b404 = cast402 * c403;
      void* r405 = memcpy(cast398, cast400, b404);
    }
  int* t406 = __result374;
  long t407 = __count377;
  int* ptr408 = &(t406)[t407];
  __retval376 = ptr408;
  int* t409 = __retval376;
  return t409;
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v410) {
bb411:
  int* __it412;
  int* __retval413;
  __it412 = v410;
  int* t414 = __it412;
  __retval413 = t414;
  int* t415 = __retval413;
  return t415;
}

// function: _ZSt12__relocate_aIPiS0_SaIiEET0_T_S3_S2_RT1_
int* int__std____relocate_a_int___int___std__allocator_int___(int* v416, int* v417, int* v418, struct std__allocator_int_* v419) {
bb420:
  int* __first421;
  int* __last422;
  int* __result423;
  struct std__allocator_int_* __alloc424;
  int* __retval425;
  __first421 = v416;
  __last422 = v417;
  __result423 = v418;
  __alloc424 = v419;
  int* t426 = __first421;
  int* r427 = int__std____niter_base_int__(t426);
  int* t428 = __last422;
  int* r429 = int__std____niter_base_int__(t428);
  int* t430 = __result423;
  int* r431 = int__std____niter_base_int__(t430);
  struct std__allocator_int_* t432 = __alloc424;
  int* r433 = std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(r427, r429, r431, t432);
  __retval425 = r433;
  int* t434 = __retval425;
  return t434;
}

// function: _ZNSt6vectorIiSaIiEE11_S_relocateEPiS2_S2_RS0_
int* std__vector_int__std__allocator_int______S_relocate(int* v435, int* v436, int* v437, struct std__allocator_int_* v438) {
bb439:
  int* __first440;
  int* __last441;
  int* __result442;
  struct std__allocator_int_* __alloc443;
  int* __retval444;
  __first440 = v435;
  __last441 = v436;
  __result442 = v437;
  __alloc443 = v438;
  int* t445 = __first440;
  int* t446 = __last441;
  int* t447 = __result442;
  struct std__allocator_int_* t448 = __alloc443;
  int* r449 = int__std____relocate_a_int___int___std__allocator_int___(t445, t446, t447, t448);
  __retval444 = r449;
  int* t450 = __retval444;
  return t450;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v451) {
bb452:
  struct std___Vector_base_int__std__allocator_int__* this453;
  struct std__allocator_int_* __retval454;
  this453 = v451;
  struct std___Vector_base_int__std__allocator_int__* t455 = this453;
  struct std__allocator_int_* base456 = (struct std__allocator_int_*)((char *)&(t455->_M_impl) + 0);
  __retval454 = base456;
  struct std__allocator_int_* t457 = __retval454;
  return t457;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocD2Ev
void std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v458) {
bb459:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this460;
  this460 = v458;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t461 = this460;
    int* t462 = t461->_M_storage;
    _Bool cast463 = (_Bool)t462;
    if (cast463) {
      struct std___Vector_base_int__std__allocator_int__* t464 = t461->_M_vect;
      int* t465 = t461->_M_storage;
      unsigned long t466 = t461->_M_len;
      std___Vector_base_int__std__allocator_int______M_deallocate(t464, t465, t466);
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_M_realloc_appendIJiEEEvDpOT_
void void_std__vector_int__std__allocator_int______M_realloc_append_int_(struct std__vector_int__std__allocator_int__* v467, int* v468) {
bb469:
  struct std__vector_int__std__allocator_int__* this470;
  int* __args471;
  unsigned long __len472;
  int* __old_start473;
  int* __old_finish474;
  unsigned long __elems475;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0476;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1477;
  int* __new_start478;
  int* __new_finish479;
  this470 = v467;
  __args471 = v468;
  struct std__vector_int__std__allocator_int__* t480 = this470;
  unsigned long c481 = 1;
  char* cast482 = (char*)&(_str_13);
  unsigned long r483 = std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(t480, c481, cast482);
  __len472 = r483;
    unsigned long t484 = __len472;
    unsigned long c485 = 0;
    _Bool c486 = ((t484 <= c485)) ? 1 : 0;
    if (c486) {
      __builtin_unreachable();
    }
  struct std___Vector_base_int__std__allocator_int__* base487 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t480 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base488 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base487->_M_impl) + 0);
  int* t489 = base488->_M_start;
  __old_start473 = t489;
  struct std___Vector_base_int__std__allocator_int__* base490 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t480 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base491 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base490->_M_impl) + 0);
  int* t492 = base491->_M_finish;
  __old_finish474 = t492;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r493 = std__vector_int__std__allocator_int_____end(t480);
  ref_tmp0476 = r493;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r494 = std__vector_int__std__allocator_int_____begin(t480);
  ref_tmp1477 = r494;
  long r495 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&ref_tmp0476, &ref_tmp1477);
  unsigned long cast496 = (unsigned long)r495;
  __elems475 = cast496;
  struct std___Vector_base_int__std__allocator_int__* base497 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t480 + 0);
  unsigned long t498 = __len472;
  int* r499 = std___Vector_base_int__std__allocator_int______M_allocate(base497, t498);
  __new_start478 = r499;
  int* t500 = __new_start478;
  __new_finish479 = t500;
    struct std__vector_int__std__allocator_int_____Guard_alloc __guard501;
    int* ref_tmp2502;
    int* t503 = __new_start478;
    unsigned long t504 = __len472;
    struct std___Vector_base_int__std__allocator_int__* base505 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t480 + 0);
    std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(&__guard501, t503, t504, base505);
      struct std___Vector_base_int__std__allocator_int__* base506 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t480 + 0);
      struct std__allocator_int_* base507 = (struct std__allocator_int_*)((char *)&(base506->_M_impl) + 0);
      int* t508 = __new_start478;
      unsigned long t509 = __elems475;
      int* ptr510 = &(t508)[t509];
      ref_tmp2502 = ptr510;
      int* r511 = auto_std____to_address_int__(&ref_tmp2502);
      int* t512 = __args471;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_(base507, r511, t512);
        int* t513 = __old_start473;
        int* t514 = __old_finish474;
        int* t515 = __new_start478;
        struct std___Vector_base_int__std__allocator_int__* base516 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t480 + 0);
        struct std__allocator_int_* r517 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base516);
        int* r518 = std__vector_int__std__allocator_int______S_relocate(t513, t514, t515, r517);
        __new_finish479 = r518;
        int* t519 = __new_finish479;
        int c520 = 1;
        int* ptr521 = &(t519)[c520];
        __new_finish479 = ptr521;
      int* t522 = __old_start473;
      __guard501._M_storage = t522;
      struct std___Vector_base_int__std__allocator_int__* base523 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t480 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base524 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base523->_M_impl) + 0);
      int* t525 = base524->_M_end_of_storage;
      int* t526 = __old_start473;
      long diff527 = t525 - t526;
      unsigned long cast528 = (unsigned long)diff527;
      __guard501._M_len = cast528;
    {
      std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(&__guard501);
    }
  int* t529 = __new_start478;
  struct std___Vector_base_int__std__allocator_int__* base530 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t480 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base531 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base530->_M_impl) + 0);
  base531->_M_start = t529;
  int* t532 = __new_finish479;
  struct std___Vector_base_int__std__allocator_int__* base533 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t480 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base534 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base533->_M_impl) + 0);
  base534->_M_finish = t532;
  int* t535 = __new_start478;
  unsigned long t536 = __len472;
  int* ptr537 = &(t535)[t536];
  struct std___Vector_base_int__std__allocator_int__* base538 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t480 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base539 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base538->_M_impl) + 0);
  base539->_M_end_of_storage = ptr537;
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v540) {
bb541:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this542;
  int** __retval543;
  this542 = v540;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t544 = this542;
  __retval543 = &t544->_M_current;
  int** t545 = __retval543;
  return t545;
}

// function: _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v546, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v547) {
bb548:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __lhs549;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __rhs550;
  _Bool __retval551;
  __lhs549 = v546;
  __rhs550 = v547;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t552 = __lhs549;
  int** r553 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t552);
  int* t554 = *r553;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t555 = __rhs550;
  int** r556 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t555);
  int* t557 = *r556;
  _Bool c558 = ((t554 == t557)) ? 1 : 0;
  __retval551 = c558;
  _Bool t559 = __retval551;
  return t559;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2ERKS2_
void __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v560, int** v561) {
bb562:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this563;
  int** __i564;
  this563 = v560;
  __i564 = v561;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t565 = this563;
  int** t566 = __i564;
  int* t567 = *t566;
  t565->_M_current = t567;
  return;
}

// function: _ZNKSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin___const(struct std__vector_int__std__allocator_int__* v568) {
bb569:
  struct std__vector_int__std__allocator_int__* this570;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __retval571;
  this570 = v568;
  struct std__vector_int__std__allocator_int__* t572 = this570;
  struct std___Vector_base_int__std__allocator_int__* base573 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t572 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base574 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base573->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(&__retval571, &base574->_M_start);
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t575 = __retval571;
  return t575;
}

// function: _ZNKSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end___const(struct std__vector_int__std__allocator_int__* v576) {
bb577:
  struct std__vector_int__std__allocator_int__* this578;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __retval579;
  this578 = v576;
  struct std__vector_int__std__allocator_int__* t580 = this578;
  struct std___Vector_base_int__std__allocator_int__* base581 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t580 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base582 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base581->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(&__retval579, &base582->_M_finish);
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t583 = __retval579;
  return t583;
}

// function: _ZNKSt6vectorIiSaIiEE5emptyEv
_Bool std__vector_int__std__allocator_int_____empty___const(struct std__vector_int__std__allocator_int__* v584) {
bb585:
  struct std__vector_int__std__allocator_int__* this586;
  _Bool __retval587;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ ref_tmp0588;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ ref_tmp1589;
  this586 = v584;
  struct std__vector_int__std__allocator_int__* t590 = this586;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r591 = std__vector_int__std__allocator_int_____begin___const(t590);
  ref_tmp0588 = r591;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r592 = std__vector_int__std__allocator_int_____end___const(t590);
  ref_tmp1589 = r592;
  _Bool r593 = _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&ref_tmp0588, &ref_tmp1589);
  __retval587 = r593;
  _Bool t594 = __retval587;
  return t594;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v595, int** v596) {
bb597:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this598;
  int** __i599;
  this598 = v595;
  __i599 = v596;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t600 = this598;
  int** t601 = __i599;
  int* t602 = *t601;
  t600->_M_current = t602;
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEmiEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v603, long v604) {
bb605:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this606;
  long __n607;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval608;
  int* ref_tmp0609;
  this606 = v603;
  __n607 = v604;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t610 = this606;
  int* t611 = t610->_M_current;
  long t612 = __n607;
  long u613 = -t612;
  int* ptr614 = &(t611)[u613];
  ref_tmp0609 = ptr614;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval608, &ref_tmp0609);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t615 = __retval608;
  return t615;
}

// function: _ZNSt6vectorIiSaIiEE4backEv
int* std__vector_int__std__allocator_int_____back(struct std__vector_int__std__allocator_int__* v616) {
bb617:
  struct std__vector_int__std__allocator_int__* this618;
  int* __retval619;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0620;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1621;
  this618 = v616;
  struct std__vector_int__std__allocator_int__* t622 = this618;
    do {
          _Bool r623 = std__vector_int__std__allocator_int_____empty___const(t622);
          if (r623) {
            char* cast624 = (char*)&(_str_14);
            int c625 = 1370;
            char* cast626 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv);
            char* cast627 = (char*)&(_str_15);
            std____glibcxx_assert_fail(cast624, c625, cast626, cast627);
          }
      _Bool c628 = 0;
      if (!c628) break;
    } while (1);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r629 = std__vector_int__std__allocator_int_____end(t622);
  ref_tmp1621 = r629;
  long c630 = 1;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r631 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&ref_tmp1621, c630);
  ref_tmp0620 = r631;
  int* r632 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp0620);
  __retval619 = r632;
  int* t633 = __retval619;
  return t633;
}

// function: _ZNSt6vectorIiSaIiEE12emplace_backIJiEEERiDpOT_
int* int__std__vector_int__std__allocator_int_____emplace_back_int_(struct std__vector_int__std__allocator_int__* v634, int* v635) {
bb636:
  struct std__vector_int__std__allocator_int__* this637;
  int* __args638;
  int* __retval639;
  this637 = v634;
  __args638 = v635;
  struct std__vector_int__std__allocator_int__* t640 = this637;
    struct std___Vector_base_int__std__allocator_int__* base641 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t640 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base642 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base641->_M_impl) + 0);
    int* t643 = base642->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base644 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t640 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base645 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base644->_M_impl) + 0);
    int* t646 = base645->_M_end_of_storage;
    _Bool c647 = ((t643 != t646)) ? 1 : 0;
    if (c647) {
      struct std___Vector_base_int__std__allocator_int__* base648 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t640 + 0);
      struct std__allocator_int_* base649 = (struct std__allocator_int_*)((char *)&(base648->_M_impl) + 0);
      struct std___Vector_base_int__std__allocator_int__* base650 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t640 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base651 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base650->_M_impl) + 0);
      int* t652 = base651->_M_finish;
      int* t653 = __args638;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_(base649, t652, t653);
      struct std___Vector_base_int__std__allocator_int__* base654 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t640 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base655 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base654->_M_impl) + 0);
      int* t656 = base655->_M_finish;
      int c657 = 1;
      int* ptr658 = &(t656)[c657];
      base655->_M_finish = ptr658;
    } else {
      int* t659 = __args638;
      void_std__vector_int__std__allocator_int______M_realloc_append_int_(t640, t659);
    }
  int* r660 = std__vector_int__std__allocator_int_____back(t640);
  __retval639 = r660;
  int* t661 = __retval639;
  return t661;
}

// function: _ZNSt6vectorIiSaIiEE9push_backEOi
void std__vector_int__std__allocator_int_____push_back(struct std__vector_int__std__allocator_int__* v662, int* v663) {
bb664:
  struct std__vector_int__std__allocator_int__* this665;
  int* __x666;
  this665 = v662;
  __x666 = v663;
  struct std__vector_int__std__allocator_int__* t667 = this665;
  int* t668 = __x666;
  int* r669 = int__std__vector_int__std__allocator_int_____emplace_back_int_(t667, t668);
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v670, int** v671) {
bb672:
  struct std___UninitDestroyGuard_int____void_* this673;
  int** __first674;
  this673 = v670;
  __first674 = v671;
  struct std___UninitDestroyGuard_int____void_* t675 = this673;
  int** t676 = __first674;
  int* t677 = *t676;
  t675->_M_first = t677;
  int** t678 = __first674;
  t675->_M_cur = t678;
  return;
}

// function: _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v679) {
bb680:
  int* __location681;
  int* __retval682;
  void* __loc683;
  __location681 = v679;
  int* t684 = __location681;
  void* cast685 = (void*)t684;
  __loc683 = cast685;
    void* t686 = __loc683;
    int* cast687 = (int*)t686;
    int c688 = 0;
    *cast687 = c688;
    __retval682 = cast687;
    int* t689 = __retval682;
    return t689;
  abort();
}

// function: _ZSt10_ConstructIiJEEvPT_DpOT0_
void void_std___Construct_int_(int* v690) {
bb691:
  int* __p692;
  __p692 = v690;
    _Bool r693 = std____is_constant_evaluated();
    if (r693) {
      int* t694 = __p692;
      int* r695 = _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t694);
      return;
    }
  int* t696 = __p692;
  void* cast697 = (void*)t696;
  int* cast698 = (int*)cast697;
  int c699 = 0;
  *cast698 = c699;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v700) {
bb701:
  struct std___UninitDestroyGuard_int____void_* this702;
  this702 = v700;
  struct std___UninitDestroyGuard_int____void_* t703 = this702;
  int** c704 = ((void*)0);
  t703->_M_cur = c704;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v705) {
bb706:
  struct std___UninitDestroyGuard_int____void_* this707;
  this707 = v705;
  struct std___UninitDestroyGuard_int____void_* t708 = this707;
    int** t709 = t708->_M_cur;
    int** c710 = ((void*)0);
    _Bool c711 = ((t709 != c710)) ? 1 : 0;
    if (c711) {
      int* t712 = t708->_M_first;
      int** t713 = t708->_M_cur;
      int* t714 = *t713;
      void_std___Destroy_int__(t712, t714);
    }
  return;
}

// function: _ZNSt27__uninitialized_default_n_1ILb0EE18__uninit_default_nIPimEET_S3_T0_
int* int__std____uninitialized_default_n_1_false_____uninit_default_n_int___unsigned_long_(int* v715, unsigned long v716) {
bb717:
  int* __first718;
  unsigned long __n719;
  int* __retval720;
  struct std___UninitDestroyGuard_int____void_ __guard721;
  __first718 = v715;
  __n719 = v716;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard721, &__first718);
      while (1) {
        unsigned long t723 = __n719;
        unsigned long c724 = 0;
        _Bool c725 = ((t723 > c724)) ? 1 : 0;
        if (!c725) break;
        int* t726 = __first718;
        void_std___Construct_int_(t726);
      for_step722: ;
        unsigned long t727 = __n719;
        unsigned long u728 = t727 - 1;
        __n719 = u728;
        int* t729 = __first718;
        int c730 = 1;
        int* ptr731 = &(t729)[c730];
        __first718 = ptr731;
      }
    std___UninitDestroyGuard_int___void___release(&__guard721);
    int* t732 = __first718;
    __retval720 = t732;
    int* t733 = __retval720;
    int* ret_val734 = t733;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard721);
    }
    return ret_val734;
  abort();
}

// function: _ZSt9__fill_a1IPiiEvT_S1_RKT0_
void void_std____fill_a1_int___int_(int* v735, int* v736, int* v737) {
bb738:
  int* __first739;
  int* __last740;
  int* __value741;
  _Bool __load_outside_loop742;
  int __val743;
  __first739 = v735;
  __last740 = v736;
  __value741 = v737;
  _Bool c744 = 1;
  __load_outside_loop742 = c744;
  int* t745 = __value741;
  int t746 = *t745;
  __val743 = t746;
    while (1) {
      int* t748 = __first739;
      int* t749 = __last740;
      _Bool c750 = ((t748 != t749)) ? 1 : 0;
      if (!c750) break;
      int t751 = __val743;
      int* t752 = __first739;
      *t752 = t751;
    for_step747: ;
      int* t753 = __first739;
      int c754 = 1;
      int* ptr755 = &(t753)[c754];
      __first739 = ptr755;
    }
  return;
}

// function: _ZSt8__fill_aIPiiEvT_S1_RKT0_
void void_std____fill_a_int___int_(int* v756, int* v757, int* v758) {
bb759:
  int* __first760;
  int* __last761;
  int* __value762;
  __first760 = v756;
  __last761 = v757;
  __value762 = v758;
  int* t763 = __first760;
  int* t764 = __last761;
  int* t765 = __value762;
  void_std____fill_a1_int___int_(t763, t764, t765);
  return;
}

// function: _ZSt10__fill_n_aIPimiET_S1_T0_RKT1_St26random_access_iterator_tag
int* int__std____fill_n_a_int___unsigned_long__int_(int* v766, unsigned long v767, int* v768, struct std__random_access_iterator_tag v769) {
bb770:
  int* __first771;
  unsigned long __n772;
  int* __value773;
  struct std__random_access_iterator_tag unnamed774;
  int* __retval775;
  __first771 = v766;
  __n772 = v767;
  __value773 = v768;
  unnamed774 = v769;
    unsigned long t776 = __n772;
    unsigned long c777 = 0;
    _Bool c778 = ((t776 <= c777)) ? 1 : 0;
    if (c778) {
      int* t779 = __first771;
      __retval775 = t779;
      int* t780 = __retval775;
      return t780;
    }
  int* t781 = __first771;
  int* t782 = __first771;
  unsigned long t783 = __n772;
  int* ptr784 = &(t782)[t783];
  int* t785 = __value773;
  void_std____fill_a_int___int_(t781, ptr784, t785);
  int* t786 = __first771;
  unsigned long t787 = __n772;
  int* ptr788 = &(t786)[t787];
  __retval775 = ptr788;
  int* t789 = __retval775;
  return t789;
}

// function: _ZSt17__size_to_integerm
unsigned long std____size_to_integer(unsigned long v790) {
bb791:
  unsigned long __n792;
  unsigned long __retval793;
  __n792 = v790;
  unsigned long t794 = __n792;
  __retval793 = t794;
  unsigned long t795 = __retval793;
  return t795;
}

// function: _ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** v796) {
bb797:
  int** unnamed798;
  struct std__random_access_iterator_tag __retval799;
  unnamed798 = v796;
  struct std__random_access_iterator_tag t800 = __retval799;
  return t800;
}

// function: _ZSt6fill_nIPimiET_S1_T0_RKT1_
int* int__std__fill_n_int___unsigned_long__int_(int* v801, unsigned long v802, int* v803) {
bb804:
  int* __first805;
  unsigned long __n806;
  int* __value807;
  int* __retval808;
  struct std__random_access_iterator_tag agg_tmp0809;
  __first805 = v801;
  __n806 = v802;
  __value807 = v803;
  int* t810 = __first805;
  unsigned long t811 = __n806;
  unsigned long r812 = std____size_to_integer(t811);
  int* t813 = __value807;
  struct std__random_access_iterator_tag r814 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first805);
  agg_tmp0809 = r814;
  struct std__random_access_iterator_tag t815 = agg_tmp0809;
  int* r816 = int__std____fill_n_a_int___unsigned_long__int_(t810, r812, t813, t815);
  __retval808 = r816;
  int* t817 = __retval808;
  return t817;
}

// function: _ZNSt27__uninitialized_default_n_1ILb1EE18__uninit_default_nIPimEET_S3_T0_
int* int__std____uninitialized_default_n_1_true_____uninit_default_n_int___unsigned_long_(int* v818, unsigned long v819) {
bb820:
  int* __first821;
  unsigned long __n822;
  int* __retval823;
  __first821 = v818;
  __n822 = v819;
    unsigned long t824 = __n822;
    unsigned long c825 = 0;
    _Bool c826 = ((t824 > c825)) ? 1 : 0;
    if (c826) {
      int* __val827;
      int* t828 = __first821;
      __val827 = t828;
      int* t829 = __val827;
      void_std___Construct_int_(t829);
      int* t830 = __first821;
      int c831 = 1;
      int* ptr832 = &(t830)[c831];
      __first821 = ptr832;
      int* t833 = __first821;
      unsigned long t834 = __n822;
      unsigned long c835 = 1;
      unsigned long b836 = t834 - c835;
      int* t837 = __val827;
      int* r838 = int__std__fill_n_int___unsigned_long__int_(t833, b836, t837);
      __first821 = r838;
    }
  int* t839 = __first821;
  __retval823 = t839;
  int* t840 = __retval823;
  return t840;
}

// function: _ZSt25__uninitialized_default_nIPimET_S1_T0_
int* int__std____uninitialized_default_n_int___unsigned_long_(int* v841, unsigned long v842) {
bb843:
  int* __first844;
  unsigned long __n845;
  int* __retval846;
  _Bool __can_fill847;
  __first844 = v841;
  __n845 = v842;
    _Bool r848 = std__is_constant_evaluated();
    if (r848) {
      int* t849 = __first844;
      unsigned long t850 = __n845;
      int* r851 = int__std____uninitialized_default_n_1_false_____uninit_default_n_int___unsigned_long_(t849, t850);
      __retval846 = r851;
      int* t852 = __retval846;
      return t852;
    }
  _Bool c853 = 1;
  __can_fill847 = c853;
  int* t854 = __first844;
  unsigned long t855 = __n845;
  int* r856 = int__std____uninitialized_default_n_1_true_____uninit_default_n_int___unsigned_long_(t854, t855);
  __retval846 = r856;
  int* t857 = __retval846;
  return t857;
}

// function: _ZSt27__uninitialized_default_n_aIPimiET_S1_T0_RSaIT1_E
int* int__std____uninitialized_default_n_a_int___unsigned_long__int_(int* v858, unsigned long v859, struct std__allocator_int_* v860) {
bb861:
  int* __first862;
  unsigned long __n863;
  struct std__allocator_int_* unnamed864;
  int* __retval865;
  __first862 = v858;
  __n863 = v859;
  unnamed864 = v860;
  int* t866 = __first862;
  unsigned long t867 = __n863;
  int* r868 = int__std____uninitialized_default_n_int___unsigned_long_(t866, t867);
  __retval865 = r868;
  int* t869 = __retval865;
  return t869;
}

// function: _ZNSt6vectorIiSaIiEE17_M_default_appendEm
void std__vector_int__std__allocator_int______M_default_append(struct std__vector_int__std__allocator_int__* v870, unsigned long v871) {
bb872:
  struct std__vector_int__std__allocator_int__* this873;
  unsigned long __n874;
  this873 = v870;
  __n874 = v871;
  struct std__vector_int__std__allocator_int__* t875 = this873;
    unsigned long t876 = __n874;
    unsigned long c877 = 0;
    _Bool c878 = ((t876 != c877)) ? 1 : 0;
    if (c878) {
      unsigned long __size879;
      unsigned long __navail880;
      unsigned long r881 = std__vector_int__std__allocator_int_____size___const(t875);
      __size879 = r881;
      struct std___Vector_base_int__std__allocator_int__* base882 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t875 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base883 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base882->_M_impl) + 0);
      int* t884 = base883->_M_end_of_storage;
      struct std___Vector_base_int__std__allocator_int__* base885 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t875 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base886 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base885->_M_impl) + 0);
      int* t887 = base886->_M_finish;
      long diff888 = t884 - t887;
      unsigned long cast889 = (unsigned long)diff888;
      __navail880 = cast889;
        unsigned long t890 = __size879;
        unsigned long r891 = std__vector_int__std__allocator_int_____max_size___const(t875);
        _Bool c892 = ((t890 > r891)) ? 1 : 0;
        _Bool ternary893;
        if (c892) {
          _Bool c894 = 1;
          ternary893 = (_Bool)c894;
        } else {
          unsigned long t895 = __navail880;
          unsigned long r896 = std__vector_int__std__allocator_int_____max_size___const(t875);
          unsigned long t897 = __size879;
          unsigned long b898 = r896 - t897;
          _Bool c899 = ((t895 > b898)) ? 1 : 0;
          ternary893 = (_Bool)c899;
        }
        if (ternary893) {
          __builtin_unreachable();
        }
        unsigned long t900 = __navail880;
        unsigned long t901 = __n874;
        _Bool c902 = ((t900 >= t901)) ? 1 : 0;
        if (c902) {
            struct std___Vector_base_int__std__allocator_int__* base903 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t875 + 0);
            struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base904 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base903->_M_impl) + 0);
            int* t905 = base904->_M_finish;
            _Bool cast906 = (_Bool)t905;
            _Bool u907 = !cast906;
            if (u907) {
              __builtin_unreachable();
            }
          struct std___Vector_base_int__std__allocator_int__* base908 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t875 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base909 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base908->_M_impl) + 0);
          int* t910 = base909->_M_finish;
          unsigned long t911 = __n874;
          struct std___Vector_base_int__std__allocator_int__* base912 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t875 + 0);
          struct std__allocator_int_* r913 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base912);
          int* r914 = int__std____uninitialized_default_n_a_int___unsigned_long__int_(t910, t911, r913);
          struct std___Vector_base_int__std__allocator_int__* base915 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t875 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base916 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base915->_M_impl) + 0);
          base916->_M_finish = r914;
        } else {
          int* __old_start917;
          int* __old_finish918;
          unsigned long __len919;
          int* __new_start920;
          struct std___Vector_base_int__std__allocator_int__* base921 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t875 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base922 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base921->_M_impl) + 0);
          int* t923 = base922->_M_start;
          __old_start917 = t923;
          struct std___Vector_base_int__std__allocator_int__* base924 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t875 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base925 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base924->_M_impl) + 0);
          int* t926 = base925->_M_finish;
          __old_finish918 = t926;
          unsigned long t927 = __n874;
          char* cast928 = (char*)&(_str_16);
          unsigned long r929 = std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(t875, t927, cast928);
          __len919 = r929;
          struct std___Vector_base_int__std__allocator_int__* base930 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t875 + 0);
          unsigned long t931 = __len919;
          int* r932 = std___Vector_base_int__std__allocator_int______M_allocate(base930, t931);
          __new_start920 = r932;
            struct std__vector_int__std__allocator_int_____Guard_alloc __guard933;
            int* t934 = __new_start920;
            unsigned long t935 = __len919;
            struct std___Vector_base_int__std__allocator_int__* base936 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t875 + 0);
            std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(&__guard933, t934, t935, base936);
              int* t937 = __new_start920;
              unsigned long t938 = __size879;
              int* ptr939 = &(t937)[t938];
              unsigned long t940 = __n874;
              struct std___Vector_base_int__std__allocator_int__* base941 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t875 + 0);
              struct std__allocator_int_* r942 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base941);
              int* r943 = int__std____uninitialized_default_n_a_int___unsigned_long__int_(ptr939, t940, r942);
                int* t944 = __old_start917;
                int* t945 = __old_finish918;
                int* t946 = __new_start920;
                struct std___Vector_base_int__std__allocator_int__* base947 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t875 + 0);
                struct std__allocator_int_* r948 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base947);
                int* r949 = std__vector_int__std__allocator_int______S_relocate(t944, t945, t946, r948);
              int* t950 = __old_start917;
              __guard933._M_storage = t950;
              struct std___Vector_base_int__std__allocator_int__* base951 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t875 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base952 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base951->_M_impl) + 0);
              int* t953 = base952->_M_end_of_storage;
              int* t954 = __old_start917;
              long diff955 = t953 - t954;
              unsigned long cast956 = (unsigned long)diff955;
              __guard933._M_len = cast956;
            {
              std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(&__guard933);
            }
          int* t957 = __new_start920;
          struct std___Vector_base_int__std__allocator_int__* base958 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t875 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base959 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base958->_M_impl) + 0);
          base959->_M_start = t957;
          int* t960 = __new_start920;
          unsigned long t961 = __size879;
          int* ptr962 = &(t960)[t961];
          unsigned long t963 = __n874;
          int* ptr964 = &(ptr962)[t963];
          struct std___Vector_base_int__std__allocator_int__* base965 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t875 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base966 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base965->_M_impl) + 0);
          base966->_M_finish = ptr964;
          int* t967 = __new_start920;
          unsigned long t968 = __len919;
          int* ptr969 = &(t967)[t968];
          struct std___Vector_base_int__std__allocator_int__* base970 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t875 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base971 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base970->_M_impl) + 0);
          base971->_M_end_of_storage = ptr969;
        }
    }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v972, int* v973, struct std__allocator_int_* v974) {
bb975:
  int* __first976;
  int* __last977;
  struct std__allocator_int_* unnamed978;
  __first976 = v972;
  __last977 = v973;
  unnamed978 = v974;
  int* t979 = __first976;
  int* t980 = __last977;
  void_std___Destroy_int__(t979, t980);
  return;
}

// function: _ZNSt6vectorIiSaIiEE15_M_erase_at_endEPi
void std__vector_int__std__allocator_int______M_erase_at_end(struct std__vector_int__std__allocator_int__* v981, int* v982) {
bb983:
  struct std__vector_int__std__allocator_int__* this984;
  int* __pos985;
  this984 = v981;
  __pos985 = v982;
  struct std__vector_int__std__allocator_int__* t986 = this984;
    unsigned long __n987;
    struct std___Vector_base_int__std__allocator_int__* base988 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t986 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base989 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base988->_M_impl) + 0);
    int* t990 = base989->_M_finish;
    int* t991 = __pos985;
    long diff992 = t990 - t991;
    unsigned long cast993 = (unsigned long)diff992;
    __n987 = cast993;
    unsigned long t994 = __n987;
    _Bool cast995 = (_Bool)t994;
    if (cast995) {
      int* t996 = __pos985;
      struct std___Vector_base_int__std__allocator_int__* base997 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t986 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base998 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base997->_M_impl) + 0);
      int* t999 = base998->_M_finish;
      struct std___Vector_base_int__std__allocator_int__* base1000 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t986 + 0);
      struct std__allocator_int_* r1001 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1000);
      void_std___Destroy_int___int_(t996, t999, r1001);
      int* t1002 = __pos985;
      struct std___Vector_base_int__std__allocator_int__* base1003 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t986 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1004 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1003->_M_impl) + 0);
      base1004->_M_finish = t1002;
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE6resizeEm
void std__vector_int__std__allocator_int_____resize(struct std__vector_int__std__allocator_int__* v1005, unsigned long v1006) {
bb1007:
  struct std__vector_int__std__allocator_int__* this1008;
  unsigned long __new_size1009;
  this1008 = v1005;
  __new_size1009 = v1006;
  struct std__vector_int__std__allocator_int__* t1010 = this1008;
    unsigned long t1011 = __new_size1009;
    unsigned long r1012 = std__vector_int__std__allocator_int_____size___const(t1010);
    _Bool c1013 = ((t1011 > r1012)) ? 1 : 0;
    if (c1013) {
      unsigned long t1014 = __new_size1009;
      unsigned long r1015 = std__vector_int__std__allocator_int_____size___const(t1010);
      unsigned long b1016 = t1014 - r1015;
      std__vector_int__std__allocator_int______M_default_append(t1010, b1016);
    } else {
        unsigned long t1017 = __new_size1009;
        unsigned long r1018 = std__vector_int__std__allocator_int_____size___const(t1010);
        _Bool c1019 = ((t1017 < r1018)) ? 1 : 0;
        if (c1019) {
          struct std___Vector_base_int__std__allocator_int__* base1020 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1010 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1021 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1020->_M_impl) + 0);
          int* t1022 = base1021->_M_start;
          unsigned long t1023 = __new_size1009;
          int* ptr1024 = &(t1022)[t1023];
          std__vector_int__std__allocator_int______M_erase_at_end(t1010, ptr1024);
        }
    }
  return;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v1025) {
bb1026:
  struct std__vector_int__std__allocator_int__* this1027;
  unsigned long __retval1028;
  long __dif1029;
  this1027 = v1025;
  struct std__vector_int__std__allocator_int__* t1030 = this1027;
  struct std___Vector_base_int__std__allocator_int__* base1031 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1030 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1032 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1031->_M_impl) + 0);
  int* t1033 = base1032->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base1034 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1030 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1035 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1034->_M_impl) + 0);
  int* t1036 = base1035->_M_start;
  long diff1037 = t1033 - t1036;
  __dif1029 = diff1037;
    long t1038 = __dif1029;
    long c1039 = 0;
    _Bool c1040 = ((t1038 < c1039)) ? 1 : 0;
    if (c1040) {
      __builtin_unreachable();
    }
  long t1041 = __dif1029;
  unsigned long cast1042 = (unsigned long)t1041;
  __retval1028 = cast1042;
  unsigned long t1043 = __retval1028;
  return t1043;
}

// function: _ZSt9transformIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_PFiiEET0_T_SA_S9_T1_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__transform___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_____int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1044, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1045, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1046, void* v1047) {
bb1048:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first1049;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last1050;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result1051;
  void* __unary_op1052;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval1053;
  __first1049 = v1044;
  __last1050 = v1045;
  __result1051 = v1046;
  __unary_op1052 = v1047;
    while (1) {
      _Bool r1055 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first1049, &__last1050);
      _Bool u1056 = !r1055;
      if (!u1056) break;
      void* t1057 = __unary_op1052;
      int* r1058 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__first1049);
      int t1059 = *r1058;
      int r1060 = ((int (*)(int))t1057)(t1059);
      int* r1061 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__result1051);
      *r1061 = r1060;
    for_step1054: ;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1062 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__first1049);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1063 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__result1051);
    }
  __retval1053 = __result1051; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1064 = __retval1053;
  return t1064;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v1065) {
bb1066:
  struct std__vector_int__std__allocator_int__* this1067;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval1068;
  this1067 = v1065;
  struct std__vector_int__std__allocator_int__* t1069 = this1067;
  struct std___Vector_base_int__std__allocator_int__* base1070 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1069 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1071 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1070->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval1068, &base1071->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1072 = __retval1068;
  return t1072;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v1073) {
bb1074:
  struct std__vector_int__std__allocator_int__* this1075;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval1076;
  this1075 = v1073;
  struct std__vector_int__std__allocator_int__* t1077 = this1075;
  struct std___Vector_base_int__std__allocator_int__* base1078 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1077 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1079 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1078->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval1076, &base1079->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1080 = __retval1076;
  return t1080;
}

// function: _ZNSt6vectorIiSaIiEEixEm
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* v1081, unsigned long v1082) {
bb1083:
  struct std__vector_int__std__allocator_int__* this1084;
  unsigned long __n1085;
  int* __retval1086;
  this1084 = v1081;
  __n1085 = v1082;
  struct std__vector_int__std__allocator_int__* t1087 = this1084;
    do {
          unsigned long t1088 = __n1085;
          unsigned long r1089 = std__vector_int__std__allocator_int_____size___const(t1087);
          _Bool c1090 = ((t1088 < r1089)) ? 1 : 0;
          _Bool u1091 = !c1090;
          if (u1091) {
            char* cast1092 = (char*)&(_str_14);
            int c1093 = 1263;
            char* cast1094 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm);
            char* cast1095 = (char*)&(_str_17);
            std____glibcxx_assert_fail(cast1092, c1093, cast1094, cast1095);
          }
      _Bool c1096 = 0;
      if (!c1096) break;
    } while (1);
  struct std___Vector_base_int__std__allocator_int__* base1097 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1087 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1098 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1097->_M_impl) + 0);
  int* t1099 = base1098->_M_start;
  unsigned long t1100 = __n1085;
  int* ptr1101 = &(t1099)[t1100];
  __retval1086 = ptr1101;
  int* t1102 = __retval1086;
  return t1102;
}

// function: _ZSt9transformIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_S6_PFiiiEET1_T_SA_T0_S9_T2_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__transform___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_____int__int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1103, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1104, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1105, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1106, void* v1107) {
bb1108:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first11109;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last11110;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first21111;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result1112;
  void* __binary_op1113;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval1114;
  __first11109 = v1103;
  __last11110 = v1104;
  __first21111 = v1105;
  __result1112 = v1106;
  __binary_op1113 = v1107;
    while (1) {
      _Bool r1116 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first11109, &__last11110);
      _Bool u1117 = !r1116;
      if (!u1117) break;
      void* t1118 = __binary_op1113;
      int* r1119 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__first11109);
      int t1120 = *r1119;
      int* r1121 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__first21111);
      int t1122 = *r1121;
      int r1123 = ((int (*)(int, int))t1118)(t1120, t1122);
      int* r1124 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__result1112);
      *r1124 = r1123;
    for_step1115: ;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1125 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__first11109);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1126 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__first21111);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1127 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__result1112);
    }
  __retval1114 = __result1112; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1128 = __retval1114;
  return t1128;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v1129, int v1130) {
bb1131:
  int __a1132;
  int __b1133;
  int __retval1134;
  __a1132 = v1129;
  __b1133 = v1130;
  int t1135 = __a1132;
  int t1136 = __b1133;
  int b1137 = t1135 | t1136;
  __retval1134 = b1137;
  int t1138 = __retval1134;
  return t1138;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v1139) {
bb1140:
  struct std__basic_ios_char__std__char_traits_char__* this1141;
  int __retval1142;
  this1141 = v1139;
  struct std__basic_ios_char__std__char_traits_char__* t1143 = this1141;
  struct std__ios_base* base1144 = (struct std__ios_base*)((char *)t1143 + 0);
  int t1145 = base1144->_M_streambuf_state;
  __retval1142 = t1145;
  int t1146 = __retval1142;
  return t1146;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v1147, int v1148) {
bb1149:
  struct std__basic_ios_char__std__char_traits_char__* this1150;
  int __state1151;
  this1150 = v1147;
  __state1151 = v1148;
  struct std__basic_ios_char__std__char_traits_char__* t1152 = this1150;
  int r1153 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t1152);
  int t1154 = __state1151;
  int r1155 = std__operator_(r1153, t1154);
  std__basic_ios_char__std__char_traits_char_____clear(t1152, r1155);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v1156, char* v1157) {
bb1158:
  char* __c11159;
  char* __c21160;
  _Bool __retval1161;
  __c11159 = v1156;
  __c21160 = v1157;
  char* t1162 = __c11159;
  char t1163 = *t1162;
  int cast1164 = (int)t1163;
  char* t1165 = __c21160;
  char t1166 = *t1165;
  int cast1167 = (int)t1166;
  _Bool c1168 = ((cast1164 == cast1167)) ? 1 : 0;
  __retval1161 = c1168;
  _Bool t1169 = __retval1161;
  return t1169;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v1170) {
bb1171:
  char* __p1172;
  unsigned long __retval1173;
  unsigned long __i1174;
  __p1172 = v1170;
  unsigned long c1175 = 0;
  __i1174 = c1175;
    char ref_tmp01176;
    while (1) {
      unsigned long t1177 = __i1174;
      char* t1178 = __p1172;
      char* ptr1179 = &(t1178)[t1177];
      char c1180 = 0;
      ref_tmp01176 = c1180;
      _Bool r1181 = __gnu_cxx__char_traits_char___eq(ptr1179, &ref_tmp01176);
      _Bool u1182 = !r1181;
      if (!u1182) break;
      unsigned long t1183 = __i1174;
      unsigned long u1184 = t1183 + 1;
      __i1174 = u1184;
    }
  unsigned long t1185 = __i1174;
  __retval1173 = t1185;
  unsigned long t1186 = __retval1173;
  return t1186;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v1187) {
bb1188:
  char* __s1189;
  unsigned long __retval1190;
  __s1189 = v1187;
    _Bool r1191 = std____is_constant_evaluated();
    if (r1191) {
      char* t1192 = __s1189;
      unsigned long r1193 = __gnu_cxx__char_traits_char___length(t1192);
      __retval1190 = r1193;
      unsigned long t1194 = __retval1190;
      return t1194;
    }
  char* t1195 = __s1189;
  unsigned long r1196 = strlen(t1195);
  __retval1190 = r1196;
  unsigned long t1197 = __retval1190;
  return t1197;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1198, char* v1199) {
bb1200:
  struct std__basic_ostream_char__std__char_traits_char__* __out1201;
  char* __s1202;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1203;
  __out1201 = v1198;
  __s1202 = v1199;
    char* t1204 = __s1202;
    _Bool cast1205 = (_Bool)t1204;
    _Bool u1206 = !cast1205;
    if (u1206) {
      struct std__basic_ostream_char__std__char_traits_char__* t1207 = __out1201;
      void** v1208 = (void**)t1207;
      void* v1209 = *((void**)v1208);
      unsigned char* cast1210 = (unsigned char*)v1209;
      long c1211 = -24;
      unsigned char* ptr1212 = &(cast1210)[c1211];
      long* cast1213 = (long*)ptr1212;
      long t1214 = *cast1213;
      unsigned char* cast1215 = (unsigned char*)t1207;
      unsigned char* ptr1216 = &(cast1215)[t1214];
      struct std__basic_ostream_char__std__char_traits_char__* cast1217 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1216;
      struct std__basic_ios_char__std__char_traits_char__* cast1218 = (struct std__basic_ios_char__std__char_traits_char__*)cast1217;
      int t1219 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast1218, t1219);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t1220 = __out1201;
      char* t1221 = __s1202;
      char* t1222 = __s1202;
      unsigned long r1223 = std__char_traits_char___length(t1222);
      long cast1224 = (long)r1223;
      struct std__basic_ostream_char__std__char_traits_char__* r1225 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t1220, t1221, cast1224);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t1226 = __out1201;
  __retval1203 = t1226;
  struct std__basic_ostream_char__std__char_traits_char__* t1227 = __retval1203;
  return t1227;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEaSEOS5_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1228, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1229) {
bb1230:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this1231;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed1232;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval1233;
  this1231 = v1228;
  unnamed1232 = v1229;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1234 = this1231;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1235 = unnamed1232;
  int* t1236 = t1235->_M_current;
  t1234->_M_current = t1236;
  __retval1233 = t1234;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1237 = __retval1233;
  return t1237;
}

// function: _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1238, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1239) {
bb1240:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs1241;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs1242;
  _Bool __retval1243;
  __lhs1241 = v1238;
  __rhs1242 = v1239;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1244 = __lhs1241;
  int** r1245 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t1244);
  int* t1246 = *r1245;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1247 = __rhs1242;
  int** r1248 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t1247);
  int* t1249 = *r1248;
  _Bool c1250 = ((t1246 == t1249)) ? 1 : 0;
  __retval1243 = c1250;
  _Bool t1251 = __retval1243;
  return t1251;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1252) {
bb1253:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this1254;
  int* __retval1255;
  this1254 = v1252;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1256 = this1254;
  int* t1257 = t1256->_M_current;
  __retval1255 = t1257;
  int* t1258 = __retval1255;
  return t1258;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1259) {
bb1260:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this1261;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval1262;
  this1261 = v1259;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1263 = this1261;
  int* t1264 = t1263->_M_current;
  int c1265 = 1;
  int* ptr1266 = &(t1264)[c1265];
  t1263->_M_current = ptr1266;
  __retval1262 = t1263;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1267 = __retval1262;
  return t1267;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v1268, void* v1269) {
bb1270:
  struct std__basic_ostream_char__std__char_traits_char__* this1271;
  void* __pf1272;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1273;
  this1271 = v1268;
  __pf1272 = v1269;
  struct std__basic_ostream_char__std__char_traits_char__* t1274 = this1271;
  void* t1275 = __pf1272;
  struct std__basic_ostream_char__std__char_traits_char__* r1276 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t1275)(t1274);
  __retval1273 = r1276;
  struct std__basic_ostream_char__std__char_traits_char__* t1277 = __retval1273;
  return t1277;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1278) {
bb1279:
  struct std__basic_ostream_char__std__char_traits_char__* __os1280;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1281;
  __os1280 = v1278;
  struct std__basic_ostream_char__std__char_traits_char__* t1282 = __os1280;
  struct std__basic_ostream_char__std__char_traits_char__* r1283 = std__ostream__flush(t1282);
  __retval1281 = r1283;
  struct std__basic_ostream_char__std__char_traits_char__* t1284 = __retval1281;
  return t1284;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v1285) {
bb1286:
  struct std__ctype_char_* __f1287;
  struct std__ctype_char_* __retval1288;
  __f1287 = v1285;
    struct std__ctype_char_* t1289 = __f1287;
    _Bool cast1290 = (_Bool)t1289;
    _Bool u1291 = !cast1290;
    if (u1291) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t1292 = __f1287;
  __retval1288 = t1292;
  struct std__ctype_char_* t1293 = __retval1288;
  return t1293;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v1294, char v1295) {
bb1296:
  struct std__ctype_char_* this1297;
  char __c1298;
  char __retval1299;
  this1297 = v1294;
  __c1298 = v1295;
  struct std__ctype_char_* t1300 = this1297;
    char t1301 = t1300->_M_widen_ok;
    _Bool cast1302 = (_Bool)t1301;
    if (cast1302) {
      char t1303 = __c1298;
      unsigned char cast1304 = (unsigned char)t1303;
      unsigned long cast1305 = (unsigned long)cast1304;
      char t1306 = t1300->_M_widen[cast1305];
      __retval1299 = t1306;
      char t1307 = __retval1299;
      return t1307;
    }
  std__ctype_char____M_widen_init___const(t1300);
  char t1308 = __c1298;
  void** v1309 = (void**)t1300;
  void* v1310 = *((void**)v1309);
  char vcall1313 = (char)__VERIFIER_virtual_call_char_char(t1300, 6, t1308);
  __retval1299 = vcall1313;
  char t1314 = __retval1299;
  return t1314;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v1315, char v1316) {
bb1317:
  struct std__basic_ios_char__std__char_traits_char__* this1318;
  char __c1319;
  char __retval1320;
  this1318 = v1315;
  __c1319 = v1316;
  struct std__basic_ios_char__std__char_traits_char__* t1321 = this1318;
  struct std__ctype_char_* t1322 = t1321->_M_ctype;
  struct std__ctype_char_* r1323 = std__ctype_char__const__std____check_facet_std__ctype_char___(t1322);
  char t1324 = __c1319;
  char r1325 = std__ctype_char___widen_char__const(r1323, t1324);
  __retval1320 = r1325;
  char t1326 = __retval1320;
  return t1326;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1327) {
bb1328:
  struct std__basic_ostream_char__std__char_traits_char__* __os1329;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1330;
  __os1329 = v1327;
  struct std__basic_ostream_char__std__char_traits_char__* t1331 = __os1329;
  struct std__basic_ostream_char__std__char_traits_char__* t1332 = __os1329;
  void** v1333 = (void**)t1332;
  void* v1334 = *((void**)v1333);
  unsigned char* cast1335 = (unsigned char*)v1334;
  long c1336 = -24;
  unsigned char* ptr1337 = &(cast1335)[c1336];
  long* cast1338 = (long*)ptr1337;
  long t1339 = *cast1338;
  unsigned char* cast1340 = (unsigned char*)t1332;
  unsigned char* ptr1341 = &(cast1340)[t1339];
  struct std__basic_ostream_char__std__char_traits_char__* cast1342 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1341;
  struct std__basic_ios_char__std__char_traits_char__* cast1343 = (struct std__basic_ios_char__std__char_traits_char__*)cast1342;
  char c1344 = 10;
  char r1345 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast1343, c1344);
  struct std__basic_ostream_char__std__char_traits_char__* r1346 = std__ostream__put(t1331, r1345);
  struct std__basic_ostream_char__std__char_traits_char__* r1347 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r1346);
  __retval1330 = r1347;
  struct std__basic_ostream_char__std__char_traits_char__* t1348 = __retval1330;
  return t1348;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v1349) {
bb1350:
  struct std__vector_int__std__allocator_int__* this1351;
  this1351 = v1349;
  struct std__vector_int__std__allocator_int__* t1352 = this1351;
    struct std___Vector_base_int__std__allocator_int__* base1353 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1352 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1354 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1353->_M_impl) + 0);
    int* t1355 = base1354->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base1356 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1352 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1357 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1356->_M_impl) + 0);
    int* t1358 = base1357->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base1359 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1352 + 0);
    struct std__allocator_int_* r1360 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1359);
    void_std___Destroy_int___int_(t1355, t1358, r1360);
  {
    struct std___Vector_base_int__std__allocator_int__* base1361 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1352 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base1361);
  }
  return;
}

// function: main
int main() {
bb1362:
  int __retval1363;
  struct std__vector_int__std__allocator_int__ first1364;
  struct std__vector_int__std__allocator_int__ second1365;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it1366;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01367;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11368;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp21369;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp31370;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp41371;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp51372;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp61373;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp71374;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp81375;
  int c1376 = 0;
  __retval1363 = c1376;
  std__vector_int__std__allocator_int_____vector(&first1364);
    std__vector_int__std__allocator_int_____vector(&second1365);
      __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(&it1366);
        int i1377;
        int ref_tmp01378;
        int c1379 = 1;
        i1377 = c1379;
        while (1) {
          int t1381 = i1377;
          int c1382 = 6;
          _Bool c1383 = ((t1381 < c1382)) ? 1 : 0;
          if (!c1383) break;
          int t1384 = i1377;
          int c1385 = 10;
          int b1386 = t1384 * c1385;
          ref_tmp01378 = b1386;
          std__vector_int__std__allocator_int_____push_back(&first1364, &ref_tmp01378);
        for_step1380: ;
          int t1387 = i1377;
          int u1388 = t1387 + 1;
          i1377 = u1388;
        }
      unsigned long r1389 = std__vector_int__std__allocator_int_____size___const(&first1364);
      std__vector_int__std__allocator_int_____resize(&second1365, r1389);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1390 = std__vector_int__std__allocator_int_____begin(&first1364);
      agg_tmp01367 = r1390;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1391 = std__vector_int__std__allocator_int_____end(&first1364);
      agg_tmp11368 = r1391;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1392 = std__vector_int__std__allocator_int_____begin(&second1365);
      agg_tmp21369 = r1392;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1393 = agg_tmp01367;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1394 = agg_tmp11368;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1395 = agg_tmp21369;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1396 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__transform___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_____int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int____(t1393, t1394, t1395, &op_increase);
      agg_tmp31370 = r1396;
      unsigned long c1397 = 0;
      int* r1398 = std__vector_int__std__allocator_int_____operator__(&second1365, c1397);
      int t1399 = *r1398;
      int c1400 = 11;
      _Bool c1401 = ((t1399 == c1400)) ? 1 : 0;
      if (c1401) {
      } else {
        char* cast1402 = (char*)&(_str);
        char* c1403 = _str_1;
        unsigned int c1404 = 29;
        char* cast1405 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast1402, c1403, c1404, cast1405);
      }
      unsigned long c1406 = 1;
      int* r1407 = std__vector_int__std__allocator_int_____operator__(&second1365, c1406);
      int t1408 = *r1407;
      int c1409 = 21;
      _Bool c1410 = ((t1408 == c1409)) ? 1 : 0;
      if (c1410) {
      } else {
        char* cast1411 = (char*)&(_str_2);
        char* c1412 = _str_1;
        unsigned int c1413 = 30;
        char* cast1414 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast1411, c1412, c1413, cast1414);
      }
      unsigned long c1415 = 2;
      int* r1416 = std__vector_int__std__allocator_int_____operator__(&second1365, c1415);
      int t1417 = *r1416;
      int c1418 = 31;
      _Bool c1419 = ((t1417 == c1418)) ? 1 : 0;
      if (c1419) {
      } else {
        char* cast1420 = (char*)&(_str_3);
        char* c1421 = _str_1;
        unsigned int c1422 = 31;
        char* cast1423 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast1420, c1421, c1422, cast1423);
      }
      unsigned long c1424 = 3;
      int* r1425 = std__vector_int__std__allocator_int_____operator__(&second1365, c1424);
      int t1426 = *r1425;
      int c1427 = 41;
      _Bool c1428 = ((t1426 == c1427)) ? 1 : 0;
      if (c1428) {
      } else {
        char* cast1429 = (char*)&(_str_4);
        char* c1430 = _str_1;
        unsigned int c1431 = 32;
        char* cast1432 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast1429, c1430, c1431, cast1432);
      }
      unsigned long c1433 = 4;
      int* r1434 = std__vector_int__std__allocator_int_____operator__(&second1365, c1433);
      int t1435 = *r1434;
      int c1436 = 51;
      _Bool c1437 = ((t1435 == c1436)) ? 1 : 0;
      if (c1437) {
      } else {
        char* cast1438 = (char*)&(_str_5);
        char* c1439 = _str_1;
        unsigned int c1440 = 33;
        char* cast1441 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast1438, c1439, c1440, cast1441);
      }
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1442 = std__vector_int__std__allocator_int_____begin(&first1364);
      agg_tmp41371 = r1442;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1443 = std__vector_int__std__allocator_int_____end(&first1364);
      agg_tmp51372 = r1443;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1444 = std__vector_int__std__allocator_int_____begin(&second1365);
      agg_tmp61373 = r1444;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1445 = std__vector_int__std__allocator_int_____begin(&first1364);
      agg_tmp71374 = r1445;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1446 = agg_tmp41371;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1447 = agg_tmp51372;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1448 = agg_tmp61373;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1449 = agg_tmp71374;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1450 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__transform___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_____int__int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int____(t1446, t1447, t1448, t1449, &op_sum);
      agg_tmp81375 = r1450;
      unsigned long c1451 = 0;
      int* r1452 = std__vector_int__std__allocator_int_____operator__(&first1364, c1451);
      int t1453 = *r1452;
      int c1454 = 21;
      _Bool c1455 = ((t1453 == c1454)) ? 1 : 0;
      if (c1455) {
      } else {
        char* cast1456 = (char*)&(_str_6);
        char* c1457 = _str_1;
        unsigned int c1458 = 37;
        char* cast1459 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast1456, c1457, c1458, cast1459);
      }
      unsigned long c1460 = 1;
      int* r1461 = std__vector_int__std__allocator_int_____operator__(&first1364, c1460);
      int t1462 = *r1461;
      int c1463 = 41;
      _Bool c1464 = ((t1462 == c1463)) ? 1 : 0;
      if (c1464) {
      } else {
        char* cast1465 = (char*)&(_str_7);
        char* c1466 = _str_1;
        unsigned int c1467 = 38;
        char* cast1468 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast1465, c1466, c1467, cast1468);
      }
      unsigned long c1469 = 2;
      int* r1470 = std__vector_int__std__allocator_int_____operator__(&first1364, c1469);
      int t1471 = *r1470;
      int c1472 = 61;
      _Bool c1473 = ((t1471 == c1472)) ? 1 : 0;
      if (c1473) {
      } else {
        char* cast1474 = (char*)&(_str_8);
        char* c1475 = _str_1;
        unsigned int c1476 = 39;
        char* cast1477 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast1474, c1475, c1476, cast1477);
      }
      unsigned long c1478 = 3;
      int* r1479 = std__vector_int__std__allocator_int_____operator__(&first1364, c1478);
      int t1480 = *r1479;
      int c1481 = 81;
      _Bool c1482 = ((t1480 == c1481)) ? 1 : 0;
      if (c1482) {
      } else {
        char* cast1483 = (char*)&(_str_9);
        char* c1484 = _str_1;
        unsigned int c1485 = 40;
        char* cast1486 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast1483, c1484, c1485, cast1486);
      }
      unsigned long c1487 = 4;
      int* r1488 = std__vector_int__std__allocator_int_____operator__(&first1364, c1487);
      int t1489 = *r1488;
      int c1490 = 101;
      _Bool c1491 = ((t1489 == c1490)) ? 1 : 0;
      if (c1491) {
      } else {
        char* cast1492 = (char*)&(_str_10);
        char* c1493 = _str_1;
        unsigned int c1494 = 41;
        char* cast1495 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast1492, c1493, c1494, cast1495);
      }
      char* cast1496 = (char*)&(_str_11);
      struct std__basic_ostream_char__std__char_traits_char__* r1497 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1496);
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp11498;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp21499;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1500 = std__vector_int__std__allocator_int_____begin(&first1364);
        ref_tmp11498 = r1500;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1501 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&it1366, &ref_tmp11498);
        while (1) {
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1503 = std__vector_int__std__allocator_int_____end(&first1364);
          ref_tmp21499 = r1503;
          _Bool r1504 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&it1366, &ref_tmp21499);
          _Bool u1505 = !r1504;
          if (!u1505) break;
          char* cast1506 = (char*)&(_str_12);
          struct std__basic_ostream_char__std__char_traits_char__* r1507 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1506);
          int* r1508 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&it1366);
          int t1509 = *r1508;
          struct std__basic_ostream_char__std__char_traits_char__* r1510 = std__ostream__operator__(r1507, t1509);
        for_step1502: ;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1511 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&it1366);
        }
      struct std__basic_ostream_char__std__char_traits_char__* r1512 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      int c1513 = 0;
      __retval1363 = c1513;
      int t1514 = __retval1363;
      int ret_val1515 = t1514;
      {
        std__vector_int__std__allocator_int______vector(&second1365);
      }
      {
        std__vector_int__std__allocator_int______vector(&first1364);
      }
      return ret_val1515;
  int t1516 = __retval1363;
  return t1516;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE
void _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1517) {
bb1518:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1519;
  this1519 = v1517;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1520 = this1519;
  struct std__allocator_int_* base1521 = (struct std__allocator_int_*)((char *)t1520 + 0);
  std__allocator_int___allocator(base1521);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1522 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t1520 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base1522);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1523) {
bb1524:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1525;
  this1525 = v1523;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1526 = this1525;
  {
    struct std__allocator_int_* base1527 = (struct std__allocator_int_*)((char *)t1526 + 0);
    std__allocator_int____allocator(base1527);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2Ev
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1528) {
bb1529:
  struct std___Vector_base_int__std__allocator_int__* this1530;
  this1530 = v1528;
  struct std___Vector_base_int__std__allocator_int__* t1531 = this1530;
  _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(&t1531->_M_impl);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1532:
  _Bool __retval1533;
    _Bool c1534 = 0;
    __retval1533 = c1534;
    _Bool t1535 = __retval1533;
    return t1535;
  abort();
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v1536, int* v1537, unsigned long v1538) {
bb1539:
  struct std____new_allocator_int_* this1540;
  int* __p1541;
  unsigned long __n1542;
  this1540 = v1536;
  __p1541 = v1537;
  __n1542 = v1538;
  struct std____new_allocator_int_* t1543 = this1540;
    unsigned long c1544 = 4;
    unsigned long c1545 = 16;
    _Bool c1546 = ((c1544 > c1545)) ? 1 : 0;
    if (c1546) {
      int* t1547 = __p1541;
      void* cast1548 = (void*)t1547;
      unsigned long t1549 = __n1542;
      unsigned long c1550 = 4;
      unsigned long b1551 = t1549 * c1550;
      unsigned long c1552 = 4;
      operator_delete_3(cast1548, b1551, c1552);
      return;
    }
  int* t1553 = __p1541;
  void* cast1554 = (void*)t1553;
  unsigned long t1555 = __n1542;
  unsigned long c1556 = 4;
  unsigned long b1557 = t1555 * c1556;
  operator_delete_2(cast1554, b1557);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1558, int* v1559, unsigned long v1560) {
bb1561:
  struct std__allocator_int_* this1562;
  int* __p1563;
  unsigned long __n1564;
  this1562 = v1558;
  __p1563 = v1559;
  __n1564 = v1560;
  struct std__allocator_int_* t1565 = this1562;
    _Bool r1566 = std____is_constant_evaluated();
    if (r1566) {
      int* t1567 = __p1563;
      void* cast1568 = (void*)t1567;
      operator_delete(cast1568);
      return;
    }
  struct std____new_allocator_int_* base1569 = (struct std____new_allocator_int_*)((char *)t1565 + 0);
  int* t1570 = __p1563;
  unsigned long t1571 = __n1564;
  std____new_allocator_int___deallocate(base1569, t1570, t1571);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1572, int* v1573, unsigned long v1574) {
bb1575:
  struct std__allocator_int_* __a1576;
  int* __p1577;
  unsigned long __n1578;
  __a1576 = v1572;
  __p1577 = v1573;
  __n1578 = v1574;
  struct std__allocator_int_* t1579 = __a1576;
  int* t1580 = __p1577;
  unsigned long t1581 = __n1578;
  std__allocator_int___deallocate(t1579, t1580, t1581);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v1582, int* v1583, unsigned long v1584) {
bb1585:
  struct std___Vector_base_int__std__allocator_int__* this1586;
  int* __p1587;
  unsigned long __n1588;
  this1586 = v1582;
  __p1587 = v1583;
  __n1588 = v1584;
  struct std___Vector_base_int__std__allocator_int__* t1589 = this1586;
    int* t1590 = __p1587;
    _Bool cast1591 = (_Bool)t1590;
    if (cast1591) {
      struct std__allocator_int_* base1592 = (struct std__allocator_int_*)((char *)&(t1589->_M_impl) + 0);
      int* t1593 = __p1587;
      unsigned long t1594 = __n1588;
      std__allocator_traits_std__allocator_int_____deallocate(base1592, t1593, t1594);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1595) {
bb1596:
  struct std___Vector_base_int__std__allocator_int__* this1597;
  this1597 = v1595;
  struct std___Vector_base_int__std__allocator_int__* t1598 = this1597;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1599 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1598->_M_impl) + 0);
    int* t1600 = base1599->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1601 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1598->_M_impl) + 0);
    int* t1602 = base1601->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1603 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1598->_M_impl) + 0);
    int* t1604 = base1603->_M_start;
    long diff1605 = t1602 - t1604;
    unsigned long cast1606 = (unsigned long)diff1605;
    std___Vector_base_int__std__allocator_int______M_deallocate(t1598, t1600, cast1606);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t1598->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1607) {
bb1608:
  struct std____new_allocator_int_* this1609;
  this1609 = v1607;
  struct std____new_allocator_int_* t1610 = this1609;
  return;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator(struct std__allocator_int_* v1611) {
bb1612:
  struct std__allocator_int_* this1613;
  this1613 = v1611;
  struct std__allocator_int_* t1614 = this1613;
  struct std____new_allocator_int_* base1615 = (struct std____new_allocator_int_*)((char *)t1614 + 0);
  std____new_allocator_int_____new_allocator(base1615);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v1616) {
bb1617:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this1618;
  this1618 = v1616;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1619 = this1618;
  int* c1620 = ((void*)0);
  t1619->_M_start = c1620;
  int* c1621 = ((void*)0);
  t1619->_M_finish = c1621;
  int* c1622 = ((void*)0);
  t1619->_M_end_of_storage = c1622;
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v1623) {
bb1624:
  struct std__allocator_int_* this1625;
  this1625 = v1623;
  struct std__allocator_int_* t1626 = this1625;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1627, int* v1628) {
bb1629:
  int* __first1630;
  int* __last1631;
  __first1630 = v1627;
  __last1631 = v1628;
      _Bool r1632 = std____is_constant_evaluated();
      if (r1632) {
          while (1) {
            int* t1634 = __first1630;
            int* t1635 = __last1631;
            _Bool c1636 = ((t1634 != t1635)) ? 1 : 0;
            if (!c1636) break;
            int* t1637 = __first1630;
            void_std__destroy_at_int_(t1637);
          for_step1633: ;
            int* t1638 = __first1630;
            int c1639 = 1;
            int* ptr1640 = &(t1638)[c1639];
            __first1630 = ptr1640;
          }
      }
  return;
}

