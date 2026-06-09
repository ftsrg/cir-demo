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
struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ { void* _M_comp; };
struct __gnu_cxx____ops___Iter_equal_to_iter { unsigned char __field0; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_ { unsigned char __field0; };
struct std____pair_base___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_____int___ { unsigned char __field0; };
struct std__allocator_int_ { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_____int___ { struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ first; int* second; };
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
char _str[29] = "First mismatching elements: ";
char _str_1[6] = " and ";
char _str_2[30] = "Second mismatching elements: ";
char _str_3[26] = "vector::_M_realloc_append";
char _str_4[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv[77] = "reference std::vector<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_5[15] = "!this->empty()";
_Bool mypredicate(int p0, int p1);
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
void _ZNSt4pairIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES2_EC2EvQaa26is_default_constructible_vIT_E26is_default_constructible_vIT0_E(struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_____int___* p0);
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
_Bool bool___gnu_cxx____ops___Iter_equal_to_iter__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___const(struct __gnu_cxx____ops___Iter_equal_to_iter* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
void _ZNSt4pairIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES2_EC2IRS6_RS2_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesISB_SC_EEEEOT_OT0_(struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_____int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1, int** p2);
struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_____int___ std__pair___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___std____mismatch___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_____gnu_cxx____ops___Iter_equal_to_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2, struct __gnu_cxx____ops___Iter_equal_to_iter p3);
struct __gnu_cxx____ops___Iter_equal_to_iter __gnu_cxx____ops____iter_equal_to_iter();
struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_____int___ std__pair___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___std__mismatch___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_____int___* _ZNSt4pairIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES2_EaSEOS7_Qcl13_S_assignableIT_T0_EE(struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_____int___* p0, struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_____int___* p1);
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
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
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
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int p1);
_Bool bool___gnu_cxx____ops___Iter_comp_iter_bool_____int__int____operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2);
struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_____int___ std__pair___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___std____mismatch___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_____gnu_cxx____ops___Iter_comp_iter_bool_____int__int_______gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_____gnu_cxx____ops___Iter_comp_iter_bool____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2, struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ p3);
void __gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____Iter_comp_iter_bool____(struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* p0, void* p1);
struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ __gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____gnu_cxx____ops____iter_comp_iter_bool_____int__int___bool____(void* p0);
struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_____int___ std__pair___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___std__mismatch___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___bool_____int__int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___bool____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2, void* p3);
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
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
void void_std___Destroy_int__(int* p0, int* p1);
void void_std___Destroy_int___int_(int* p0, int* p1, struct std__allocator_int_* p2);

// function: _Z11mypredicateii
_Bool mypredicate(int v0, int v1) {
bb2:
  int i3;
  int j4;
  _Bool __retval5;
  i3 = v0;
  j4 = v1;
  int t6 = i3;
  int t7 = j4;
  _Bool c8 = ((t6 == t7)) ? 1 : 0;
  __retval5 = c8;
  _Bool t9 = __retval5;
  return t9;
}

// function: _ZNSt6vectorIiSaIiEEC2Ev
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* v10) {
bb11:
  struct std__vector_int__std__allocator_int__* this12;
  this12 = v10;
  struct std__vector_int__std__allocator_int__* t13 = this12;
  struct std___Vector_base_int__std__allocator_int__* base14 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t13 + 0);
  std___Vector_base_int__std__allocator_int______Vector_base(base14);
  return;
}

// function: _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v15, int* v16) {
bb17:
  int* __location18;
  int* __args19;
  int* __retval20;
  void* __loc21;
  __location18 = v15;
  __args19 = v16;
  int* t22 = __location18;
  void* cast23 = (void*)t22;
  __loc21 = cast23;
    void* t24 = __loc21;
    int* cast25 = (int*)t24;
    int* t26 = __args19;
    int t27 = *t26;
    *cast25 = t27;
    __retval20 = cast25;
    int* t28 = __retval20;
    return t28;
  abort();
}

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std__allocator_int_* v29, int* v30, int* v31) {
bb32:
  struct std__allocator_int_* __a33;
  int* __p34;
  int* __args35;
  __a33 = v29;
  __p34 = v30;
  __args35 = v31;
  int* t36 = __p34;
  int* t37 = __args35;
  int* r38 = _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t36, t37);
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v39, unsigned long* v40) {
bb41:
  unsigned long* __a42;
  unsigned long* __b43;
  unsigned long* __retval44;
  __a42 = v39;
  __b43 = v40;
    unsigned long* t45 = __b43;
    unsigned long t46 = *t45;
    unsigned long* t47 = __a42;
    unsigned long t48 = *t47;
    _Bool c49 = ((t46 < t48)) ? 1 : 0;
    if (c49) {
      unsigned long* t50 = __b43;
      __retval44 = t50;
      unsigned long* t51 = __retval44;
      return t51;
    }
  unsigned long* t52 = __a42;
  __retval44 = t52;
  unsigned long* t53 = __retval44;
  return t53;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v54) {
bb55:
  struct std__allocator_int_* __a56;
  unsigned long __retval57;
  unsigned long __diffmax58;
  unsigned long __allocmax59;
  __a56 = v54;
  unsigned long c60 = 2305843009213693951;
  __diffmax58 = c60;
  unsigned long c61 = 4611686018427387903;
  __allocmax59 = c61;
  unsigned long* r62 = unsigned_long_const__std__min_unsigned_long_(&__diffmax58, &__allocmax59);
  unsigned long t63 = *r62;
  __retval57 = t63;
  unsigned long t64 = __retval57;
  return t64;
}

// function: _ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Vector_base_int__std__allocator_int__* v65) {
bb66:
  struct std___Vector_base_int__std__allocator_int__* this67;
  struct std__allocator_int_* __retval68;
  this67 = v65;
  struct std___Vector_base_int__std__allocator_int__* t69 = this67;
  struct std__allocator_int_* base70 = (struct std__allocator_int_*)((char *)&(t69->_M_impl) + 0);
  __retval68 = base70;
  struct std__allocator_int_* t71 = __retval68;
  return t71;
}

// function: _ZNKSt6vectorIiSaIiEE8max_sizeEv
unsigned long std__vector_int__std__allocator_int_____max_size___const(struct std__vector_int__std__allocator_int__* v72) {
bb73:
  struct std__vector_int__std__allocator_int__* this74;
  unsigned long __retval75;
  this74 = v72;
  struct std__vector_int__std__allocator_int__* t76 = this74;
  struct std___Vector_base_int__std__allocator_int__* base77 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t76 + 0);
  struct std__allocator_int_* r78 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(base77);
  unsigned long r79 = std__vector_int__std__allocator_int______S_max_size(r78);
  __retval75 = r79;
  unsigned long t80 = __retval75;
  return t80;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v81) {
bb82:
  struct std__vector_int__std__allocator_int__* this83;
  unsigned long __retval84;
  long __dif85;
  this83 = v81;
  struct std__vector_int__std__allocator_int__* t86 = this83;
  struct std___Vector_base_int__std__allocator_int__* base87 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t86 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base88 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base87->_M_impl) + 0);
  int* t89 = base88->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base90 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t86 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base91 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base90->_M_impl) + 0);
  int* t92 = base91->_M_start;
  long diff93 = t89 - t92;
  __dif85 = diff93;
    long t94 = __dif85;
    long c95 = 0;
    _Bool c96 = ((t94 < c95)) ? 1 : 0;
    if (c96) {
      __builtin_unreachable();
    }
  long t97 = __dif85;
  unsigned long cast98 = (unsigned long)t97;
  __retval84 = cast98;
  unsigned long t99 = __retval84;
  return t99;
}

// function: _ZSt3maxImERKT_S2_S2_
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* v100, unsigned long* v101) {
bb102:
  unsigned long* __a103;
  unsigned long* __b104;
  unsigned long* __retval105;
  __a103 = v100;
  __b104 = v101;
    unsigned long* t106 = __a103;
    unsigned long t107 = *t106;
    unsigned long* t108 = __b104;
    unsigned long t109 = *t108;
    _Bool c110 = ((t107 < t109)) ? 1 : 0;
    if (c110) {
      unsigned long* t111 = __b104;
      __retval105 = t111;
      unsigned long* t112 = __retval105;
      return t112;
    }
  unsigned long* t113 = __a103;
  __retval105 = t113;
  unsigned long* t114 = __retval105;
  return t114;
}

// function: _ZNKSt6vectorIiSaIiEE12_M_check_lenEmPKc
unsigned long std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(struct std__vector_int__std__allocator_int__* v115, unsigned long v116, char* v117) {
bb118:
  struct std__vector_int__std__allocator_int__* this119;
  unsigned long __n120;
  char* __s121;
  unsigned long __retval122;
  unsigned long __len123;
  unsigned long ref_tmp0124;
  this119 = v115;
  __n120 = v116;
  __s121 = v117;
  struct std__vector_int__std__allocator_int__* t125 = this119;
    unsigned long r126 = std__vector_int__std__allocator_int_____max_size___const(t125);
    unsigned long r127 = std__vector_int__std__allocator_int_____size___const(t125);
    unsigned long b128 = r126 - r127;
    unsigned long t129 = __n120;
    _Bool c130 = ((b128 < t129)) ? 1 : 0;
    if (c130) {
      char* t131 = __s121;
      std____throw_length_error(t131);
    }
  unsigned long r132 = std__vector_int__std__allocator_int_____size___const(t125);
  unsigned long r133 = std__vector_int__std__allocator_int_____size___const(t125);
  ref_tmp0124 = r133;
  unsigned long* r134 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp0124, &__n120);
  unsigned long t135 = *r134;
  unsigned long b136 = r132 + t135;
  __len123 = b136;
  unsigned long t137 = __len123;
  unsigned long r138 = std__vector_int__std__allocator_int_____size___const(t125);
  _Bool c139 = ((t137 < r138)) ? 1 : 0;
  _Bool ternary140;
  if (c139) {
    _Bool c141 = 1;
    ternary140 = (_Bool)c141;
  } else {
    unsigned long t142 = __len123;
    unsigned long r143 = std__vector_int__std__allocator_int_____max_size___const(t125);
    _Bool c144 = ((t142 > r143)) ? 1 : 0;
    ternary140 = (_Bool)c144;
  }
  unsigned long ternary145;
  if (ternary140) {
    unsigned long r146 = std__vector_int__std__allocator_int_____max_size___const(t125);
    ternary145 = (unsigned long)r146;
  } else {
    unsigned long t147 = __len123;
    ternary145 = (unsigned long)t147;
  }
  __retval122 = ternary145;
  unsigned long t148 = __retval122;
  return t148;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v149) {
bb150:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this151;
  int** __retval152;
  this151 = v149;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t153 = this151;
  __retval152 = &t153->_M_current;
  int** t154 = __retval152;
  return t154;
}

// function: _ZN9__gnu_cxxmiIPiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v155, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v156) {
bb157:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs158;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs159;
  long __retval160;
  __lhs158 = v155;
  __rhs159 = v156;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t161 = __lhs158;
  int** r162 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t161);
  int* t163 = *r162;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t164 = __rhs159;
  int** r165 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t164);
  int* t166 = *r165;
  long diff167 = t163 - t166;
  __retval160 = diff167;
  long t168 = __retval160;
  return t168;
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v169) {
bb170:
  struct std____new_allocator_int_* this171;
  unsigned long __retval172;
  this171 = v169;
  struct std____new_allocator_int_* t173 = this171;
  unsigned long c174 = 9223372036854775807;
  unsigned long c175 = 4;
  unsigned long b176 = c174 / c175;
  __retval172 = b176;
  unsigned long t177 = __retval172;
  return t177;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v178, unsigned long v179, void* v180) {
bb181:
  struct std____new_allocator_int_* this182;
  unsigned long __n183;
  void* unnamed184;
  int* __retval185;
  this182 = v178;
  __n183 = v179;
  unnamed184 = v180;
  struct std____new_allocator_int_* t186 = this182;
    unsigned long t187 = __n183;
    unsigned long r188 = std____new_allocator_int____M_max_size___const(t186);
    _Bool c189 = ((t187 > r188)) ? 1 : 0;
    if (c189) {
        unsigned long t190 = __n183;
        unsigned long c191 = -1;
        unsigned long c192 = 4;
        unsigned long b193 = c191 / c192;
        _Bool c194 = ((t190 > b193)) ? 1 : 0;
        if (c194) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c195 = 4;
    unsigned long c196 = 16;
    _Bool c197 = ((c195 > c196)) ? 1 : 0;
    if (c197) {
      unsigned long __al198;
      unsigned long c199 = 4;
      __al198 = c199;
      unsigned long t200 = __n183;
      unsigned long c201 = 4;
      unsigned long b202 = t200 * c201;
      unsigned long t203 = __al198;
      void* r204 = operator_new_2(b202, t203);
      int* cast205 = (int*)r204;
      __retval185 = cast205;
      int* t206 = __retval185;
      return t206;
    }
  unsigned long t207 = __n183;
  unsigned long c208 = 4;
  unsigned long b209 = t207 * c208;
  void* r210 = operator_new(b209);
  int* cast211 = (int*)r210;
  __retval185 = cast211;
  int* t212 = __retval185;
  return t212;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v213, unsigned long v214) {
bb215:
  struct std__allocator_int_* this216;
  unsigned long __n217;
  int* __retval218;
  this216 = v213;
  __n217 = v214;
  struct std__allocator_int_* t219 = this216;
    _Bool r220 = std____is_constant_evaluated();
    if (r220) {
        unsigned long t221 = __n217;
        unsigned long c222 = 4;
        unsigned long ovr223;
        _Bool ovf224 = __builtin_mul_overflow(t221, c222, &ovr223);
        __n217 = ovr223;
        if (ovf224) {
          std____throw_bad_array_new_length();
        }
      unsigned long t225 = __n217;
      void* r226 = operator_new(t225);
      int* cast227 = (int*)r226;
      __retval218 = cast227;
      int* t228 = __retval218;
      return t228;
    }
  struct std____new_allocator_int_* base229 = (struct std____new_allocator_int_*)((char *)t219 + 0);
  unsigned long t230 = __n217;
  void* c231 = ((void*)0);
  int* r232 = std____new_allocator_int___allocate(base229, t230, c231);
  __retval218 = r232;
  int* t233 = __retval218;
  return t233;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v234, unsigned long v235) {
bb236:
  struct std__allocator_int_* __a237;
  unsigned long __n238;
  int* __retval239;
  __a237 = v234;
  __n238 = v235;
  struct std__allocator_int_* t240 = __a237;
  unsigned long t241 = __n238;
  int* r242 = std__allocator_int___allocate(t240, t241);
  __retval239 = r242;
  int* t243 = __retval239;
  return t243;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v244, unsigned long v245) {
bb246:
  struct std___Vector_base_int__std__allocator_int__* this247;
  unsigned long __n248;
  int* __retval249;
  this247 = v244;
  __n248 = v245;
  struct std___Vector_base_int__std__allocator_int__* t250 = this247;
  unsigned long t251 = __n248;
  unsigned long c252 = 0;
  _Bool c253 = ((t251 != c252)) ? 1 : 0;
  int* ternary254;
  if (c253) {
    struct std__allocator_int_* base255 = (struct std__allocator_int_*)((char *)&(t250->_M_impl) + 0);
    unsigned long t256 = __n248;
    int* r257 = std__allocator_traits_std__allocator_int_____allocate(base255, t256);
    ternary254 = (int*)r257;
  } else {
    int* c258 = ((void*)0);
    ternary254 = (int*)c258;
  }
  __retval249 = ternary254;
  int* t259 = __retval249;
  return t259;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocC2EPimRSt12_Vector_baseIiS0_E
void std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v260, int* v261, unsigned long v262, struct std___Vector_base_int__std__allocator_int__* v263) {
bb264:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this265;
  int* __s266;
  unsigned long __l267;
  struct std___Vector_base_int__std__allocator_int__* __vect268;
  this265 = v260;
  __s266 = v261;
  __l267 = v262;
  __vect268 = v263;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t269 = this265;
  int* t270 = __s266;
  t269->_M_storage = t270;
  unsigned long t271 = __l267;
  t269->_M_len = t271;
  struct std___Vector_base_int__std__allocator_int__* t272 = __vect268;
  t269->_M_vect = t272;
  return;
}

// function: _ZSt10to_addressIiEPT_S1_
int* int__std__to_address_int_(int* v273) {
bb274:
  int* __ptr275;
  int* __retval276;
  __ptr275 = v273;
  int* t277 = __ptr275;
  __retval276 = t277;
  int* t278 = __retval276;
  return t278;
}

// function: _ZSt12__to_addressIPiEDaRKT_
int* auto_std____to_address_int__(int** v279) {
bb280:
  int** __ptr281;
  int* __retval282;
  __ptr281 = v279;
  int** t283 = __ptr281;
  int* t284 = *t283;
  int* r285 = int__std__to_address_int_(t284);
  __retval282 = r285;
  int* t286 = __retval282;
  return t286;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb287:
  _Bool __retval288;
    _Bool c289 = 0;
    __retval288 = c289;
    _Bool t290 = __retval288;
    return t290;
  abort();
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEC2ERKS1_
void __gnu_cxx____normal_iterator_int___void_____normal_iterator(struct __gnu_cxx____normal_iterator_int____void_* v291, int** v292) {
bb293:
  struct __gnu_cxx____normal_iterator_int____void_* this294;
  int** __i295;
  this294 = v291;
  __i295 = v292;
  struct __gnu_cxx____normal_iterator_int____void_* t296 = this294;
  int** t297 = __i295;
  int* t298 = *t297;
  t296->_M_current = t298;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v299) {
bb300:
  int* __location301;
  __location301 = v299;
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE7destroyIiEEvRS0_PT_
void void_std__allocator_traits_std__allocator_int_____destroy_int_(struct std__allocator_int_* v302, int* v303) {
bb304:
  struct std__allocator_int_* __a305;
  int* __p306;
  __a305 = v302;
  __p306 = v303;
  int* t307 = __p306;
  void_std__destroy_at_int_(t307);
  return;
}

// function: _ZSt19__relocate_object_aIiiSaIiEEvPT_PT0_RT1_
void void_std____relocate_object_a_int__int__std__allocator_int___(int* v308, int* v309, struct std__allocator_int_* v310) {
bb311:
  int* __dest312;
  int* __orig313;
  struct std__allocator_int_* __alloc314;
  __dest312 = v308;
  __orig313 = v309;
  __alloc314 = v310;
  struct std__allocator_int_* t315 = __alloc314;
  int* t316 = __dest312;
  int* t317 = __orig313;
  void_std__allocator_traits_std__allocator_int_____construct_int__int_(t315, t316, t317);
  struct std__allocator_int_* t318 = __alloc314;
  int* t319 = __orig313;
  void_std__allocator_traits_std__allocator_int_____destroy_int_(t318, t319);
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivEdeEv
int* __gnu_cxx____normal_iterator_int___void___operator____const(struct __gnu_cxx____normal_iterator_int____void_* v320) {
bb321:
  struct __gnu_cxx____normal_iterator_int____void_* this322;
  int* __retval323;
  this322 = v320;
  struct __gnu_cxx____normal_iterator_int____void_* t324 = this322;
  int* t325 = t324->_M_current;
  __retval323 = t325;
  int* t326 = __retval323;
  return t326;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEppEv
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator__(struct __gnu_cxx____normal_iterator_int____void_* v327) {
bb328:
  struct __gnu_cxx____normal_iterator_int____void_* this329;
  struct __gnu_cxx____normal_iterator_int____void_* __retval330;
  this329 = v327;
  struct __gnu_cxx____normal_iterator_int____void_* t331 = this329;
  int* t332 = t331->_M_current;
  int c333 = 1;
  int* ptr334 = &(t332)[c333];
  t331->_M_current = ptr334;
  __retval330 = t331;
  struct __gnu_cxx____normal_iterator_int____void_* t335 = __retval330;
  return t335;
}

// function: _ZSt14__relocate_a_1IPiN9__gnu_cxx17__normal_iteratorIS0_vEESaIiEET0_T_S6_S5_RT1_
struct __gnu_cxx____normal_iterator_int____void_ __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(int* v336, int* v337, struct __gnu_cxx____normal_iterator_int____void_ v338, struct std__allocator_int_* v339) {
bb340:
  int* __first341;
  int* __last342;
  struct __gnu_cxx____normal_iterator_int____void_ __result343;
  struct std__allocator_int_* __alloc344;
  struct __gnu_cxx____normal_iterator_int____void_ __retval345;
  __first341 = v336;
  __last342 = v337;
  __result343 = v338;
  __alloc344 = v339;
  __retval345 = __result343; // copy
    while (1) {
      int* t347 = __first341;
      int* t348 = __last342;
      _Bool c349 = ((t347 != t348)) ? 1 : 0;
      if (!c349) break;
      int* r350 = __gnu_cxx____normal_iterator_int___void___operator____const(&__retval345);
      int* t351 = __first341;
      struct std__allocator_int_* t352 = __alloc344;
      void_std____relocate_object_a_int__int__std__allocator_int___(r350, t351, t352);
    for_step346: ;
      int* t353 = __first341;
      int c354 = 1;
      int* ptr355 = &(t353)[c354];
      __first341 = ptr355;
      struct __gnu_cxx____normal_iterator_int____void_* r356 = __gnu_cxx____normal_iterator_int___void___operator__(&__retval345);
    }
  struct __gnu_cxx____normal_iterator_int____void_ t357 = __retval345;
  return t357;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEaSEOS2_
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator_(struct __gnu_cxx____normal_iterator_int____void_* v358, struct __gnu_cxx____normal_iterator_int____void_* v359) {
bb360:
  struct __gnu_cxx____normal_iterator_int____void_* this361;
  struct __gnu_cxx____normal_iterator_int____void_* unnamed362;
  struct __gnu_cxx____normal_iterator_int____void_* __retval363;
  this361 = v358;
  unnamed362 = v359;
  struct __gnu_cxx____normal_iterator_int____void_* t364 = this361;
  struct __gnu_cxx____normal_iterator_int____void_* t365 = unnamed362;
  int* t366 = t365->_M_current;
  t364->_M_current = t366;
  __retval363 = t364;
  struct __gnu_cxx____normal_iterator_int____void_* t367 = __retval363;
  return t367;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivE4baseEv
int** __gnu_cxx____normal_iterator_int___void___base___const(struct __gnu_cxx____normal_iterator_int____void_* v368) {
bb369:
  struct __gnu_cxx____normal_iterator_int____void_* this370;
  int** __retval371;
  this370 = v368;
  struct __gnu_cxx____normal_iterator_int____void_* t372 = this370;
  __retval371 = &t372->_M_current;
  int** t373 = __retval371;
  return t373;
}

// function: _ZSt14__relocate_a_1IiiENSt9enable_ifIXsr3std24__is_bitwise_relocatableIT_EE5valueEPS1_E4typeES2_S2_S2_RSaIT0_E
int* std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(int* v374, int* v375, int* v376, struct std__allocator_int_* v377) {
bb378:
  int* __first379;
  int* __last380;
  int* __result381;
  struct std__allocator_int_* __alloc382;
  int* __retval383;
  long __count384;
  __first379 = v374;
  __last380 = v375;
  __result381 = v376;
  __alloc382 = v377;
  int* t385 = __last380;
  int* t386 = __first379;
  long diff387 = t385 - t386;
  __count384 = diff387;
    long t388 = __count384;
    long c389 = 0;
    _Bool c390 = ((t388 > c389)) ? 1 : 0;
    if (c390) {
        _Bool r391 = std__is_constant_evaluated();
        if (r391) {
          struct __gnu_cxx____normal_iterator_int____void_ __out392;
          struct __gnu_cxx____normal_iterator_int____void_ ref_tmp0393;
          struct __gnu_cxx____normal_iterator_int____void_ agg_tmp0394;
          __gnu_cxx____normal_iterator_int___void_____normal_iterator(&__out392, &__result381);
          int* t395 = __first379;
          int* t396 = __last380;
          agg_tmp0394 = __out392; // copy
          struct std__allocator_int_* t397 = __alloc382;
          struct __gnu_cxx____normal_iterator_int____void_ t398 = agg_tmp0394;
          struct __gnu_cxx____normal_iterator_int____void_ r399 = __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(t395, t396, t398, t397);
          ref_tmp0393 = r399;
          struct __gnu_cxx____normal_iterator_int____void_* r400 = __gnu_cxx____normal_iterator_int___void___operator_(&__out392, &ref_tmp0393);
          int** r401 = __gnu_cxx____normal_iterator_int___void___base___const(&__out392);
          int* t402 = *r401;
          __retval383 = t402;
          int* t403 = __retval383;
          return t403;
        }
      int* t404 = __result381;
      void* cast405 = (void*)t404;
      int* t406 = __first379;
      void* cast407 = (void*)t406;
      long t408 = __count384;
      unsigned long cast409 = (unsigned long)t408;
      unsigned long c410 = 4;
      unsigned long b411 = cast409 * c410;
      void* r412 = memcpy(cast405, cast407, b411);
    }
  int* t413 = __result381;
  long t414 = __count384;
  int* ptr415 = &(t413)[t414];
  __retval383 = ptr415;
  int* t416 = __retval383;
  return t416;
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v417) {
bb418:
  int* __it419;
  int* __retval420;
  __it419 = v417;
  int* t421 = __it419;
  __retval420 = t421;
  int* t422 = __retval420;
  return t422;
}

// function: _ZSt12__relocate_aIPiS0_SaIiEET0_T_S3_S2_RT1_
int* int__std____relocate_a_int___int___std__allocator_int___(int* v423, int* v424, int* v425, struct std__allocator_int_* v426) {
bb427:
  int* __first428;
  int* __last429;
  int* __result430;
  struct std__allocator_int_* __alloc431;
  int* __retval432;
  __first428 = v423;
  __last429 = v424;
  __result430 = v425;
  __alloc431 = v426;
  int* t433 = __first428;
  int* r434 = int__std____niter_base_int__(t433);
  int* t435 = __last429;
  int* r436 = int__std____niter_base_int__(t435);
  int* t437 = __result430;
  int* r438 = int__std____niter_base_int__(t437);
  struct std__allocator_int_* t439 = __alloc431;
  int* r440 = std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(r434, r436, r438, t439);
  __retval432 = r440;
  int* t441 = __retval432;
  return t441;
}

// function: _ZNSt6vectorIiSaIiEE11_S_relocateEPiS2_S2_RS0_
int* std__vector_int__std__allocator_int______S_relocate(int* v442, int* v443, int* v444, struct std__allocator_int_* v445) {
bb446:
  int* __first447;
  int* __last448;
  int* __result449;
  struct std__allocator_int_* __alloc450;
  int* __retval451;
  __first447 = v442;
  __last448 = v443;
  __result449 = v444;
  __alloc450 = v445;
  int* t452 = __first447;
  int* t453 = __last448;
  int* t454 = __result449;
  struct std__allocator_int_* t455 = __alloc450;
  int* r456 = int__std____relocate_a_int___int___std__allocator_int___(t452, t453, t454, t455);
  __retval451 = r456;
  int* t457 = __retval451;
  return t457;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v458) {
bb459:
  struct std___Vector_base_int__std__allocator_int__* this460;
  struct std__allocator_int_* __retval461;
  this460 = v458;
  struct std___Vector_base_int__std__allocator_int__* t462 = this460;
  struct std__allocator_int_* base463 = (struct std__allocator_int_*)((char *)&(t462->_M_impl) + 0);
  __retval461 = base463;
  struct std__allocator_int_* t464 = __retval461;
  return t464;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocD2Ev
void std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v465) {
bb466:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this467;
  this467 = v465;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t468 = this467;
    int* t469 = t468->_M_storage;
    _Bool cast470 = (_Bool)t469;
    if (cast470) {
      struct std___Vector_base_int__std__allocator_int__* t471 = t468->_M_vect;
      int* t472 = t468->_M_storage;
      unsigned long t473 = t468->_M_len;
      std___Vector_base_int__std__allocator_int______M_deallocate(t471, t472, t473);
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_M_realloc_appendIJiEEEvDpOT_
void void_std__vector_int__std__allocator_int______M_realloc_append_int_(struct std__vector_int__std__allocator_int__* v474, int* v475) {
bb476:
  struct std__vector_int__std__allocator_int__* this477;
  int* __args478;
  unsigned long __len479;
  int* __old_start480;
  int* __old_finish481;
  unsigned long __elems482;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0483;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1484;
  int* __new_start485;
  int* __new_finish486;
  this477 = v474;
  __args478 = v475;
  struct std__vector_int__std__allocator_int__* t487 = this477;
  unsigned long c488 = 1;
  char* cast489 = (char*)&(_str_3);
  unsigned long r490 = std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(t487, c488, cast489);
  __len479 = r490;
    unsigned long t491 = __len479;
    unsigned long c492 = 0;
    _Bool c493 = ((t491 <= c492)) ? 1 : 0;
    if (c493) {
      __builtin_unreachable();
    }
  struct std___Vector_base_int__std__allocator_int__* base494 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t487 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base495 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base494->_M_impl) + 0);
  int* t496 = base495->_M_start;
  __old_start480 = t496;
  struct std___Vector_base_int__std__allocator_int__* base497 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t487 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base498 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base497->_M_impl) + 0);
  int* t499 = base498->_M_finish;
  __old_finish481 = t499;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r500 = std__vector_int__std__allocator_int_____end(t487);
  ref_tmp0483 = r500;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r501 = std__vector_int__std__allocator_int_____begin(t487);
  ref_tmp1484 = r501;
  long r502 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&ref_tmp0483, &ref_tmp1484);
  unsigned long cast503 = (unsigned long)r502;
  __elems482 = cast503;
  struct std___Vector_base_int__std__allocator_int__* base504 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t487 + 0);
  unsigned long t505 = __len479;
  int* r506 = std___Vector_base_int__std__allocator_int______M_allocate(base504, t505);
  __new_start485 = r506;
  int* t507 = __new_start485;
  __new_finish486 = t507;
    struct std__vector_int__std__allocator_int_____Guard_alloc __guard508;
    int* ref_tmp2509;
    int* t510 = __new_start485;
    unsigned long t511 = __len479;
    struct std___Vector_base_int__std__allocator_int__* base512 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t487 + 0);
    std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(&__guard508, t510, t511, base512);
      struct std___Vector_base_int__std__allocator_int__* base513 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t487 + 0);
      struct std__allocator_int_* base514 = (struct std__allocator_int_*)((char *)&(base513->_M_impl) + 0);
      int* t515 = __new_start485;
      unsigned long t516 = __elems482;
      int* ptr517 = &(t515)[t516];
      ref_tmp2509 = ptr517;
      int* r518 = auto_std____to_address_int__(&ref_tmp2509);
      int* t519 = __args478;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_(base514, r518, t519);
        int* t520 = __old_start480;
        int* t521 = __old_finish481;
        int* t522 = __new_start485;
        struct std___Vector_base_int__std__allocator_int__* base523 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t487 + 0);
        struct std__allocator_int_* r524 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base523);
        int* r525 = std__vector_int__std__allocator_int______S_relocate(t520, t521, t522, r524);
        __new_finish486 = r525;
        int* t526 = __new_finish486;
        int c527 = 1;
        int* ptr528 = &(t526)[c527];
        __new_finish486 = ptr528;
      int* t529 = __old_start480;
      __guard508._M_storage = t529;
      struct std___Vector_base_int__std__allocator_int__* base530 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t487 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base531 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base530->_M_impl) + 0);
      int* t532 = base531->_M_end_of_storage;
      int* t533 = __old_start480;
      long diff534 = t532 - t533;
      unsigned long cast535 = (unsigned long)diff534;
      __guard508._M_len = cast535;
    {
      std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(&__guard508);
    }
  int* t536 = __new_start485;
  struct std___Vector_base_int__std__allocator_int__* base537 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t487 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base538 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base537->_M_impl) + 0);
  base538->_M_start = t536;
  int* t539 = __new_finish486;
  struct std___Vector_base_int__std__allocator_int__* base540 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t487 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base541 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base540->_M_impl) + 0);
  base541->_M_finish = t539;
  int* t542 = __new_start485;
  unsigned long t543 = __len479;
  int* ptr544 = &(t542)[t543];
  struct std___Vector_base_int__std__allocator_int__* base545 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t487 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base546 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base545->_M_impl) + 0);
  base546->_M_end_of_storage = ptr544;
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v547) {
bb548:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this549;
  int** __retval550;
  this549 = v547;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t551 = this549;
  __retval550 = &t551->_M_current;
  int** t552 = __retval550;
  return t552;
}

// function: _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v553, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v554) {
bb555:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __lhs556;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __rhs557;
  _Bool __retval558;
  __lhs556 = v553;
  __rhs557 = v554;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t559 = __lhs556;
  int** r560 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t559);
  int* t561 = *r560;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t562 = __rhs557;
  int** r563 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t562);
  int* t564 = *r563;
  _Bool c565 = ((t561 == t564)) ? 1 : 0;
  __retval558 = c565;
  _Bool t566 = __retval558;
  return t566;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2ERKS2_
void __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v567, int** v568) {
bb569:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this570;
  int** __i571;
  this570 = v567;
  __i571 = v568;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t572 = this570;
  int** t573 = __i571;
  int* t574 = *t573;
  t572->_M_current = t574;
  return;
}

// function: _ZNKSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin___const(struct std__vector_int__std__allocator_int__* v575) {
bb576:
  struct std__vector_int__std__allocator_int__* this577;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __retval578;
  this577 = v575;
  struct std__vector_int__std__allocator_int__* t579 = this577;
  struct std___Vector_base_int__std__allocator_int__* base580 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t579 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base581 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base580->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(&__retval578, &base581->_M_start);
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t582 = __retval578;
  return t582;
}

// function: _ZNKSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end___const(struct std__vector_int__std__allocator_int__* v583) {
bb584:
  struct std__vector_int__std__allocator_int__* this585;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __retval586;
  this585 = v583;
  struct std__vector_int__std__allocator_int__* t587 = this585;
  struct std___Vector_base_int__std__allocator_int__* base588 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t587 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base589 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base588->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(&__retval586, &base589->_M_finish);
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t590 = __retval586;
  return t590;
}

// function: _ZNKSt6vectorIiSaIiEE5emptyEv
_Bool std__vector_int__std__allocator_int_____empty___const(struct std__vector_int__std__allocator_int__* v591) {
bb592:
  struct std__vector_int__std__allocator_int__* this593;
  _Bool __retval594;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ ref_tmp0595;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ ref_tmp1596;
  this593 = v591;
  struct std__vector_int__std__allocator_int__* t597 = this593;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r598 = std__vector_int__std__allocator_int_____begin___const(t597);
  ref_tmp0595 = r598;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r599 = std__vector_int__std__allocator_int_____end___const(t597);
  ref_tmp1596 = r599;
  _Bool r600 = _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&ref_tmp0595, &ref_tmp1596);
  __retval594 = r600;
  _Bool t601 = __retval594;
  return t601;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v602, int** v603) {
bb604:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this605;
  int** __i606;
  this605 = v602;
  __i606 = v603;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t607 = this605;
  int** t608 = __i606;
  int* t609 = *t608;
  t607->_M_current = t609;
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEmiEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v610, long v611) {
bb612:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this613;
  long __n614;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval615;
  int* ref_tmp0616;
  this613 = v610;
  __n614 = v611;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t617 = this613;
  int* t618 = t617->_M_current;
  long t619 = __n614;
  long u620 = -t619;
  int* ptr621 = &(t618)[u620];
  ref_tmp0616 = ptr621;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval615, &ref_tmp0616);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t622 = __retval615;
  return t622;
}

// function: _ZNSt6vectorIiSaIiEE4backEv
int* std__vector_int__std__allocator_int_____back(struct std__vector_int__std__allocator_int__* v623) {
bb624:
  struct std__vector_int__std__allocator_int__* this625;
  int* __retval626;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0627;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1628;
  this625 = v623;
  struct std__vector_int__std__allocator_int__* t629 = this625;
    do {
          _Bool r630 = std__vector_int__std__allocator_int_____empty___const(t629);
          if (r630) {
            char* cast631 = (char*)&(_str_4);
            int c632 = 1370;
            char* cast633 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv);
            char* cast634 = (char*)&(_str_5);
            std____glibcxx_assert_fail(cast631, c632, cast633, cast634);
          }
      _Bool c635 = 0;
      if (!c635) break;
    } while (1);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r636 = std__vector_int__std__allocator_int_____end(t629);
  ref_tmp1628 = r636;
  long c637 = 1;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r638 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&ref_tmp1628, c637);
  ref_tmp0627 = r638;
  int* r639 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp0627);
  __retval626 = r639;
  int* t640 = __retval626;
  return t640;
}

// function: _ZNSt6vectorIiSaIiEE12emplace_backIJiEEERiDpOT_
int* int__std__vector_int__std__allocator_int_____emplace_back_int_(struct std__vector_int__std__allocator_int__* v641, int* v642) {
bb643:
  struct std__vector_int__std__allocator_int__* this644;
  int* __args645;
  int* __retval646;
  this644 = v641;
  __args645 = v642;
  struct std__vector_int__std__allocator_int__* t647 = this644;
    struct std___Vector_base_int__std__allocator_int__* base648 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t647 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base649 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base648->_M_impl) + 0);
    int* t650 = base649->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base651 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t647 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base652 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base651->_M_impl) + 0);
    int* t653 = base652->_M_end_of_storage;
    _Bool c654 = ((t650 != t653)) ? 1 : 0;
    if (c654) {
      struct std___Vector_base_int__std__allocator_int__* base655 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t647 + 0);
      struct std__allocator_int_* base656 = (struct std__allocator_int_*)((char *)&(base655->_M_impl) + 0);
      struct std___Vector_base_int__std__allocator_int__* base657 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t647 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base658 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base657->_M_impl) + 0);
      int* t659 = base658->_M_finish;
      int* t660 = __args645;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_(base656, t659, t660);
      struct std___Vector_base_int__std__allocator_int__* base661 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t647 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base662 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base661->_M_impl) + 0);
      int* t663 = base662->_M_finish;
      int c664 = 1;
      int* ptr665 = &(t663)[c664];
      base662->_M_finish = ptr665;
    } else {
      int* t666 = __args645;
      void_std__vector_int__std__allocator_int______M_realloc_append_int_(t647, t666);
    }
  int* r667 = std__vector_int__std__allocator_int_____back(t647);
  __retval646 = r667;
  int* t668 = __retval646;
  return t668;
}

// function: _ZNSt6vectorIiSaIiEE9push_backEOi
void std__vector_int__std__allocator_int_____push_back(struct std__vector_int__std__allocator_int__* v669, int* v670) {
bb671:
  struct std__vector_int__std__allocator_int__* this672;
  int* __x673;
  this672 = v669;
  __x673 = v670;
  struct std__vector_int__std__allocator_int__* t674 = this672;
  int* t675 = __x673;
  int* r676 = int__std__vector_int__std__allocator_int_____emplace_back_int_(t674, t675);
  return;
}

// function: _ZNSt4pairIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES2_EC2EvQaa26is_default_constructible_vIT_E26is_default_constructible_vIT0_E
void _ZNSt4pairIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES2_EC2EvQaa26is_default_constructible_vIT_E26is_default_constructible_vIT0_E(struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_____int___* v677) {
bb678:
  struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_____int___* this679;
  this679 = v677;
  struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_____int___* t680 = this679;
  struct std____pair_base___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_____int___* base681 = (struct std____pair_base___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_____int___*)((char *)t680 + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(&t680->first);
  int* c682 = ((void*)0);
  t680->second = c682;
  return;
}

// function: _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v683, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v684) {
bb685:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs686;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs687;
  _Bool __retval688;
  __lhs686 = v683;
  __rhs687 = v684;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t689 = __lhs686;
  int** r690 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t689);
  int* t691 = *r690;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t692 = __rhs687;
  int** r693 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t692);
  int* t694 = *r693;
  _Bool c695 = ((t691 == t694)) ? 1 : 0;
  __retval688 = c695;
  _Bool t696 = __retval688;
  return t696;
}

// function: _ZNK9__gnu_cxx5__ops19_Iter_equal_to_iterclINS_17__normal_iteratorIPiSt6vectorIiSaIiEEEES4_EEbT_T0_
_Bool bool___gnu_cxx____ops___Iter_equal_to_iter__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___const(struct __gnu_cxx____ops___Iter_equal_to_iter* v697, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v698, int* v699) {
bb700:
  struct __gnu_cxx____ops___Iter_equal_to_iter* this701;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it1702;
  int* __it2703;
  _Bool __retval704;
  this701 = v697;
  __it1702 = v698;
  __it2703 = v699;
  struct __gnu_cxx____ops___Iter_equal_to_iter* t705 = this701;
  int* r706 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it1702);
  int t707 = *r706;
  int* t708 = __it2703;
  int t709 = *t708;
  _Bool c710 = ((t707 == t709)) ? 1 : 0;
  __retval704 = c710;
  _Bool t711 = __retval704;
  return t711;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v712) {
bb713:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this714;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval715;
  this714 = v712;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t716 = this714;
  int* t717 = t716->_M_current;
  int c718 = 1;
  int* ptr719 = &(t717)[c718];
  t716->_M_current = ptr719;
  __retval715 = t716;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t720 = __retval715;
  return t720;
}

// function: _ZNSt4pairIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES2_EC2IRS6_RS2_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesISB_SC_EEEEOT_OT0_
void _ZNSt4pairIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES2_EC2IRS6_RS2_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesISB_SC_EEEEOT_OT0_(struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_____int___* v721, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v722, int** v723) {
bb724:
  struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_____int___* this725;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __x726;
  int** __y727;
  this725 = v721;
  __x726 = v722;
  __y727 = v723;
  struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_____int___* t728 = this725;
  struct std____pair_base___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_____int___* base729 = (struct std____pair_base___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_____int___*)((char *)t728 + 0);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t730 = __x726;
  t728->first = *t730; // copy
  int** t731 = __y727;
  int* t732 = *t731;
  t728->second = t732;
  return;
}

// function: _ZSt10__mismatchIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES2_NS0_5__ops19_Iter_equal_to_iterEESt4pairIT_T0_ESA_SA_SB_T1_
struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_____int___ std__pair___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___std____mismatch___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_____gnu_cxx____ops___Iter_equal_to_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v733, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v734, int* v735, struct __gnu_cxx____ops___Iter_equal_to_iter v736) {
bb737:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first1738;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last1739;
  int* __first2740;
  struct __gnu_cxx____ops___Iter_equal_to_iter __binary_pred741;
  struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_____int___ __retval742;
  __first1738 = v733;
  __last1739 = v734;
  __first2740 = v735;
  __binary_pred741 = v736;
    while (1) {
      _Bool r743 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first1738, &__last1739);
      _Bool u744 = !r743;
      _Bool ternary745;
      if (u744) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0746;
        agg_tmp0746 = __first1738; // copy
        int* t747 = __first2740;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t748 = agg_tmp0746;
        _Bool r749 = bool___gnu_cxx____ops___Iter_equal_to_iter__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___const(&__binary_pred741, t748, t747);
        ternary745 = (_Bool)r749;
      } else {
        _Bool c750 = 0;
        ternary745 = (_Bool)c750;
      }
      if (!ternary745) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r751 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(&__first1738);
        int* t752 = __first2740;
        int c753 = 1;
        int* ptr754 = &(t752)[c753];
        __first2740 = ptr754;
    }
  _ZNSt4pairIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES2_EC2IRS6_RS2_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesISB_SC_EEEEOT_OT0_(&__retval742, &__first1738, &__first2740);
  struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_____int___ t755 = __retval742;
  return t755;
}

// function: _ZN9__gnu_cxx5__ops20__iter_equal_to_iterEv
struct __gnu_cxx____ops___Iter_equal_to_iter __gnu_cxx____ops____iter_equal_to_iter() {
bb756:
  struct __gnu_cxx____ops___Iter_equal_to_iter __retval757;
  struct __gnu_cxx____ops___Iter_equal_to_iter t758 = __retval757;
  return t758;
}

// function: _ZSt8mismatchIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES2_ESt4pairIT_T0_ES8_S8_S9_
struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_____int___ std__pair___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___std__mismatch___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v759, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v760, int* v761) {
bb762:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first1763;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last1764;
  int* __first2765;
  struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_____int___ __retval766;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0767;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1768;
  struct __gnu_cxx____ops___Iter_equal_to_iter agg_tmp2769;
  __first1763 = v759;
  __last1764 = v760;
  __first2765 = v761;
  agg_tmp0767 = __first1763; // copy
  agg_tmp1768 = __last1764; // copy
  int* t770 = __first2765;
  struct __gnu_cxx____ops___Iter_equal_to_iter r771 = __gnu_cxx____ops____iter_equal_to_iter();
  agg_tmp2769 = r771;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t772 = agg_tmp0767;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t773 = agg_tmp1768;
  struct __gnu_cxx____ops___Iter_equal_to_iter t774 = agg_tmp2769;
  struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_____int___ r775 = std__pair___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___std____mismatch___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_____gnu_cxx____ops___Iter_equal_to_iter_(t772, t773, t770, t774);
  __retval766 = r775;
  struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_____int___ t776 = __retval766;
  return t776;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v777) {
bb778:
  struct std__vector_int__std__allocator_int__* this779;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval780;
  this779 = v777;
  struct std__vector_int__std__allocator_int__* t781 = this779;
  struct std___Vector_base_int__std__allocator_int__* base782 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t781 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base783 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base782->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval780, &base783->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t784 = __retval780;
  return t784;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v785) {
bb786:
  struct std__vector_int__std__allocator_int__* this787;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval788;
  this787 = v785;
  struct std__vector_int__std__allocator_int__* t789 = this787;
  struct std___Vector_base_int__std__allocator_int__* base790 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t789 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base791 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base790->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval788, &base791->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t792 = __retval788;
  return t792;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEaSEOS5_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v793, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v794) {
bb795:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this796;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed797;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval798;
  this796 = v793;
  unnamed797 = v794;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t799 = this796;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t800 = unnamed797;
  int* t801 = t800->_M_current;
  t799->_M_current = t801;
  __retval798 = t799;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t802 = __retval798;
  return t802;
}

// function: _ZNSt4pairIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES2_EaSEOS7_Qcl13_S_assignableIT_T0_EE
struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_____int___* _ZNSt4pairIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES2_EaSEOS7_Qcl13_S_assignableIT_T0_EE(struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_____int___* v803, struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_____int___* v804) {
bb805:
  struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_____int___* this806;
  struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_____int___* __p807;
  struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_____int___* __retval808;
  this806 = v803;
  __p807 = v804;
  struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_____int___* t809 = this806;
  struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_____int___* t810 = __p807;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r811 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&t809->first, &t810->first);
  struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_____int___* t812 = __p807;
  int* t813 = t812->second;
  t809->second = t813;
  __retval808 = t809;
  struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_____int___* t814 = __retval808;
  return t814;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v815, int v816) {
bb817:
  int __a818;
  int __b819;
  int __retval820;
  __a818 = v815;
  __b819 = v816;
  int t821 = __a818;
  int t822 = __b819;
  int b823 = t821 | t822;
  __retval820 = b823;
  int t824 = __retval820;
  return t824;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v825) {
bb826:
  struct std__basic_ios_char__std__char_traits_char__* this827;
  int __retval828;
  this827 = v825;
  struct std__basic_ios_char__std__char_traits_char__* t829 = this827;
  struct std__ios_base* base830 = (struct std__ios_base*)((char *)t829 + 0);
  int t831 = base830->_M_streambuf_state;
  __retval828 = t831;
  int t832 = __retval828;
  return t832;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v833, int v834) {
bb835:
  struct std__basic_ios_char__std__char_traits_char__* this836;
  int __state837;
  this836 = v833;
  __state837 = v834;
  struct std__basic_ios_char__std__char_traits_char__* t838 = this836;
  int r839 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t838);
  int t840 = __state837;
  int r841 = std__operator_(r839, t840);
  std__basic_ios_char__std__char_traits_char_____clear(t838, r841);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v842, char* v843) {
bb844:
  char* __c1845;
  char* __c2846;
  _Bool __retval847;
  __c1845 = v842;
  __c2846 = v843;
  char* t848 = __c1845;
  char t849 = *t848;
  int cast850 = (int)t849;
  char* t851 = __c2846;
  char t852 = *t851;
  int cast853 = (int)t852;
  _Bool c854 = ((cast850 == cast853)) ? 1 : 0;
  __retval847 = c854;
  _Bool t855 = __retval847;
  return t855;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v856) {
bb857:
  char* __p858;
  unsigned long __retval859;
  unsigned long __i860;
  __p858 = v856;
  unsigned long c861 = 0;
  __i860 = c861;
    char ref_tmp0862;
    while (1) {
      unsigned long t863 = __i860;
      char* t864 = __p858;
      char* ptr865 = &(t864)[t863];
      char c866 = 0;
      ref_tmp0862 = c866;
      _Bool r867 = __gnu_cxx__char_traits_char___eq(ptr865, &ref_tmp0862);
      _Bool u868 = !r867;
      if (!u868) break;
      unsigned long t869 = __i860;
      unsigned long u870 = t869 + 1;
      __i860 = u870;
    }
  unsigned long t871 = __i860;
  __retval859 = t871;
  unsigned long t872 = __retval859;
  return t872;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v873) {
bb874:
  char* __s875;
  unsigned long __retval876;
  __s875 = v873;
    _Bool r877 = std____is_constant_evaluated();
    if (r877) {
      char* t878 = __s875;
      unsigned long r879 = __gnu_cxx__char_traits_char___length(t878);
      __retval876 = r879;
      unsigned long t880 = __retval876;
      return t880;
    }
  char* t881 = __s875;
  unsigned long r882 = strlen(t881);
  __retval876 = r882;
  unsigned long t883 = __retval876;
  return t883;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v884, char* v885) {
bb886:
  struct std__basic_ostream_char__std__char_traits_char__* __out887;
  char* __s888;
  struct std__basic_ostream_char__std__char_traits_char__* __retval889;
  __out887 = v884;
  __s888 = v885;
    char* t890 = __s888;
    _Bool cast891 = (_Bool)t890;
    _Bool u892 = !cast891;
    if (u892) {
      struct std__basic_ostream_char__std__char_traits_char__* t893 = __out887;
      void** v894 = (void**)t893;
      void* v895 = *((void**)v894);
      unsigned char* cast896 = (unsigned char*)v895;
      long c897 = -24;
      unsigned char* ptr898 = &(cast896)[c897];
      long* cast899 = (long*)ptr898;
      long t900 = *cast899;
      unsigned char* cast901 = (unsigned char*)t893;
      unsigned char* ptr902 = &(cast901)[t900];
      struct std__basic_ostream_char__std__char_traits_char__* cast903 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr902;
      struct std__basic_ios_char__std__char_traits_char__* cast904 = (struct std__basic_ios_char__std__char_traits_char__*)cast903;
      int t905 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast904, t905);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t906 = __out887;
      char* t907 = __s888;
      char* t908 = __s888;
      unsigned long r909 = std__char_traits_char___length(t908);
      long cast910 = (long)r909;
      struct std__basic_ostream_char__std__char_traits_char__* r911 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t906, t907, cast910);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t912 = __out887;
  __retval889 = t912;
  struct std__basic_ostream_char__std__char_traits_char__* t913 = __retval889;
  return t913;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v914) {
bb915:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this916;
  int* __retval917;
  this916 = v914;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t918 = this916;
  int* t919 = t918->_M_current;
  __retval917 = t919;
  int* t920 = __retval917;
  return t920;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v921, void* v922) {
bb923:
  struct std__basic_ostream_char__std__char_traits_char__* this924;
  void* __pf925;
  struct std__basic_ostream_char__std__char_traits_char__* __retval926;
  this924 = v921;
  __pf925 = v922;
  struct std__basic_ostream_char__std__char_traits_char__* t927 = this924;
  void* t928 = __pf925;
  struct std__basic_ostream_char__std__char_traits_char__* r929 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t928)(t927);
  __retval926 = r929;
  struct std__basic_ostream_char__std__char_traits_char__* t930 = __retval926;
  return t930;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v931) {
bb932:
  struct std__basic_ostream_char__std__char_traits_char__* __os933;
  struct std__basic_ostream_char__std__char_traits_char__* __retval934;
  __os933 = v931;
  struct std__basic_ostream_char__std__char_traits_char__* t935 = __os933;
  struct std__basic_ostream_char__std__char_traits_char__* r936 = std__ostream__flush(t935);
  __retval934 = r936;
  struct std__basic_ostream_char__std__char_traits_char__* t937 = __retval934;
  return t937;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v938) {
bb939:
  struct std__ctype_char_* __f940;
  struct std__ctype_char_* __retval941;
  __f940 = v938;
    struct std__ctype_char_* t942 = __f940;
    _Bool cast943 = (_Bool)t942;
    _Bool u944 = !cast943;
    if (u944) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t945 = __f940;
  __retval941 = t945;
  struct std__ctype_char_* t946 = __retval941;
  return t946;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v947, char v948) {
bb949:
  struct std__ctype_char_* this950;
  char __c951;
  char __retval952;
  this950 = v947;
  __c951 = v948;
  struct std__ctype_char_* t953 = this950;
    char t954 = t953->_M_widen_ok;
    _Bool cast955 = (_Bool)t954;
    if (cast955) {
      char t956 = __c951;
      unsigned char cast957 = (unsigned char)t956;
      unsigned long cast958 = (unsigned long)cast957;
      char t959 = t953->_M_widen[cast958];
      __retval952 = t959;
      char t960 = __retval952;
      return t960;
    }
  std__ctype_char____M_widen_init___const(t953);
  char t961 = __c951;
  void** v962 = (void**)t953;
  void* v963 = *((void**)v962);
  char vcall966 = (char)__VERIFIER_virtual_call_char_char(t953, 6, t961);
  __retval952 = vcall966;
  char t967 = __retval952;
  return t967;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v968, char v969) {
bb970:
  struct std__basic_ios_char__std__char_traits_char__* this971;
  char __c972;
  char __retval973;
  this971 = v968;
  __c972 = v969;
  struct std__basic_ios_char__std__char_traits_char__* t974 = this971;
  struct std__ctype_char_* t975 = t974->_M_ctype;
  struct std__ctype_char_* r976 = std__ctype_char__const__std____check_facet_std__ctype_char___(t975);
  char t977 = __c972;
  char r978 = std__ctype_char___widen_char__const(r976, t977);
  __retval973 = r978;
  char t979 = __retval973;
  return t979;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v980) {
bb981:
  struct std__basic_ostream_char__std__char_traits_char__* __os982;
  struct std__basic_ostream_char__std__char_traits_char__* __retval983;
  __os982 = v980;
  struct std__basic_ostream_char__std__char_traits_char__* t984 = __os982;
  struct std__basic_ostream_char__std__char_traits_char__* t985 = __os982;
  void** v986 = (void**)t985;
  void* v987 = *((void**)v986);
  unsigned char* cast988 = (unsigned char*)v987;
  long c989 = -24;
  unsigned char* ptr990 = &(cast988)[c989];
  long* cast991 = (long*)ptr990;
  long t992 = *cast991;
  unsigned char* cast993 = (unsigned char*)t985;
  unsigned char* ptr994 = &(cast993)[t992];
  struct std__basic_ostream_char__std__char_traits_char__* cast995 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr994;
  struct std__basic_ios_char__std__char_traits_char__* cast996 = (struct std__basic_ios_char__std__char_traits_char__*)cast995;
  char c997 = 10;
  char r998 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast996, c997);
  struct std__basic_ostream_char__std__char_traits_char__* r999 = std__ostream__put(t984, r998);
  struct std__basic_ostream_char__std__char_traits_char__* r1000 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r999);
  __retval983 = r1000;
  struct std__basic_ostream_char__std__char_traits_char__* t1001 = __retval983;
  return t1001;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEi
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1002, int v1003) {
bb1004:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this1005;
  int unnamed1006;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval1007;
  int* ref_tmp01008;
  this1005 = v1002;
  unnamed1006 = v1003;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1009 = this1005;
  int* t1010 = t1009->_M_current;
  int c1011 = 1;
  int* ptr1012 = &(t1010)[c1011];
  t1009->_M_current = ptr1012;
  ref_tmp01008 = t1010;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval1007, &ref_tmp01008);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1013 = __retval1007;
  return t1013;
}

// function: _ZN9__gnu_cxx5__ops15_Iter_comp_iterIPFbiiEEclINS_17__normal_iteratorIPiSt6vectorIiSaIiEEEES7_EEbT_T0_
_Bool bool___gnu_cxx____ops___Iter_comp_iter_bool_____int__int____operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* v1014, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1015, int* v1016) {
bb1017:
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* this1018;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it11019;
  int* __it21020;
  _Bool __retval1021;
  this1018 = v1014;
  __it11019 = v1015;
  __it21020 = v1016;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* t1022 = this1018;
  void* t1023 = t1022->_M_comp;
  int* r1024 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it11019);
  int t1025 = *r1024;
  int* t1026 = __it21020;
  int t1027 = *t1026;
  _Bool r1028 = ((_Bool (*)(int, int))t1023)(t1025, t1027);
  __retval1021 = r1028;
  _Bool t1029 = __retval1021;
  return t1029;
}

// function: _ZSt10__mismatchIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES2_NS0_5__ops15_Iter_comp_iterIPFbiiEEEESt4pairIT_T0_ESD_SD_SE_T1_
struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_____int___ std__pair___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___std____mismatch___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_____gnu_cxx____ops___Iter_comp_iter_bool_____int__int_______gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_____gnu_cxx____ops___Iter_comp_iter_bool____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1030, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1031, int* v1032, struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ v1033) {
bb1034:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first11035;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last11036;
  int* __first21037;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ __binary_pred1038;
  struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_____int___ __retval1039;
  __first11035 = v1030;
  __last11036 = v1031;
  __first21037 = v1032;
  __binary_pred1038 = v1033;
    while (1) {
      _Bool r1040 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first11035, &__last11036);
      _Bool u1041 = !r1040;
      _Bool ternary1042;
      if (u1041) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01043;
        agg_tmp01043 = __first11035; // copy
        int* t1044 = __first21037;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1045 = agg_tmp01043;
        _Bool r1046 = bool___gnu_cxx____ops___Iter_comp_iter_bool_____int__int____operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(&__binary_pred1038, t1045, t1044);
        ternary1042 = (_Bool)r1046;
      } else {
        _Bool c1047 = 0;
        ternary1042 = (_Bool)c1047;
      }
      if (!ternary1042) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1048 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(&__first11035);
        int* t1049 = __first21037;
        int c1050 = 1;
        int* ptr1051 = &(t1049)[c1050];
        __first21037 = ptr1051;
    }
  _ZNSt4pairIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES2_EC2IRS6_RS2_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesISB_SC_EEEEOT_OT0_(&__retval1039, &__first11035, &__first21037);
  struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_____int___ t1052 = __retval1039;
  return t1052;
}

// function: _ZN9__gnu_cxx5__ops15_Iter_comp_iterIPFbiiEEC2ES3_
void __gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____Iter_comp_iter_bool____(struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* v1053, void* v1054) {
bb1055:
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* this1056;
  void* __comp1057;
  this1056 = v1053;
  __comp1057 = v1054;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* t1058 = this1056;
  void* t1059 = __comp1057;
  t1058->_M_comp = t1059;
  return;
}

// function: _ZN9__gnu_cxx5__ops16__iter_comp_iterIPFbiiEEENS0_15_Iter_comp_iterIT_EES5_
struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ __gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____gnu_cxx____ops____iter_comp_iter_bool_____int__int___bool____(void* v1060) {
bb1061:
  void* __comp1062;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ __retval1063;
  __comp1062 = v1060;
  void* t1064 = __comp1062;
  __gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____Iter_comp_iter_bool____(&__retval1063, t1064);
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ t1065 = __retval1063;
  return t1065;
}

// function: _ZSt8mismatchIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES2_PFbiiEESt4pairIT_T0_ESA_SA_SB_T1_
struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_____int___ std__pair___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___std__mismatch___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___bool_____int__int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___bool____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1066, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1067, int* v1068, void* v1069) {
bb1070:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first11071;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last11072;
  int* __first21073;
  void* __binary_pred1074;
  struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_____int___ __retval1075;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01076;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11077;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ agg_tmp21078;
  __first11071 = v1066;
  __last11072 = v1067;
  __first21073 = v1068;
  __binary_pred1074 = v1069;
  agg_tmp01076 = __first11071; // copy
  agg_tmp11077 = __last11072; // copy
  int* t1079 = __first21073;
  void* t1080 = __binary_pred1074;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ r1081 = __gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____gnu_cxx____ops____iter_comp_iter_bool_____int__int___bool____(t1080);
  agg_tmp21078 = r1081;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1082 = agg_tmp01076;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1083 = agg_tmp11077;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ t1084 = agg_tmp21078;
  struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_____int___ r1085 = std__pair___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___std____mismatch___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_____gnu_cxx____ops___Iter_comp_iter_bool_____int__int_______gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_____gnu_cxx____ops___Iter_comp_iter_bool____(t1082, t1083, t1079, t1084);
  __retval1075 = r1085;
  struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_____int___ t1086 = __retval1075;
  return t1086;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v1087) {
bb1088:
  struct std__vector_int__std__allocator_int__* this1089;
  this1089 = v1087;
  struct std__vector_int__std__allocator_int__* t1090 = this1089;
    struct std___Vector_base_int__std__allocator_int__* base1091 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1090 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1092 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1091->_M_impl) + 0);
    int* t1093 = base1092->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base1094 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1090 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1095 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1094->_M_impl) + 0);
    int* t1096 = base1095->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base1097 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1090 + 0);
    struct std__allocator_int_* r1098 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1097);
    void_std___Destroy_int___int_(t1093, t1096, r1098);
  {
    struct std___Vector_base_int__std__allocator_int__* base1099 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1090 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base1099);
  }
  return;
}

// function: main
int main() {
bb1100:
  int __retval1101;
  struct std__vector_int__std__allocator_int__ myvector1102;
  int myints1103[5];
  struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_____int___ mypair1104;
  struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_____int___ ref_tmp11105;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01106;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11107;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp21108;
  struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_____int___ ref_tmp21109;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp31110;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp41111;
  int c1112 = 0;
  __retval1101 = c1112;
  std__vector_int__std__allocator_int_____vector(&myvector1102);
      int i1113;
      int ref_tmp01114;
      int c1115 = 1;
      i1113 = c1115;
      while (1) {
        int t1117 = i1113;
        int c1118 = 6;
        _Bool c1119 = ((t1117 < c1118)) ? 1 : 0;
        if (!c1119) break;
        int t1120 = i1113;
        int c1121 = 10;
        int b1122 = t1120 * c1121;
        ref_tmp01114 = b1122;
        std__vector_int__std__allocator_int_____push_back(&myvector1102, &ref_tmp01114);
      for_step1116: ;
        int t1123 = i1113;
        int u1124 = t1123 + 1;
        i1113 = u1124;
      }
    int c1125 = 10;
    long c1126 = 0;
    myints1103[c1126] = c1125;
    int c1127 = 20;
    long c1128 = 1;
    myints1103[c1128] = c1127;
    int c1129 = 80;
    long c1130 = 2;
    myints1103[c1130] = c1129;
    int c1131 = 320;
    long c1132 = 3;
    myints1103[c1132] = c1131;
    int c1133 = 1024;
    long c1134 = 4;
    myints1103[c1134] = c1133;
    _ZNSt4pairIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES2_EC2EvQaa26is_default_constructible_vIT_E26is_default_constructible_vIT0_E(&mypair1104);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1135 = std__vector_int__std__allocator_int_____begin(&myvector1102);
    agg_tmp01106 = r1135;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1136 = std__vector_int__std__allocator_int_____end(&myvector1102);
    agg_tmp11107 = r1136;
    int* cast1137 = (int*)&(myints1103);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1138 = agg_tmp01106;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1139 = agg_tmp11107;
    struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_____int___ r1140 = std__pair___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___std__mismatch___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(t1138, t1139, cast1137);
    ref_tmp11105 = r1140;
    struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_____int___* r1141 = _ZNSt4pairIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES2_EaSEOS7_Qcl13_S_assignableIT_T0_EE(&mypair1104, &ref_tmp11105);
    char* cast1142 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* r1143 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1142);
    int* r1144 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&mypair1104.first);
    int t1145 = *r1144;
    struct std__basic_ostream_char__std__char_traits_char__* r1146 = std__ostream__operator__(r1143, t1145);
    char* cast1147 = (char*)&(_str_1);
    struct std__basic_ostream_char__std__char_traits_char__* r1148 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1147);
    int* t1149 = mypair1104.second;
    int t1150 = *t1149;
    struct std__basic_ostream_char__std__char_traits_char__* r1151 = std__ostream__operator__(r1148, t1150);
    struct std__basic_ostream_char__std__char_traits_char__* r1152 = std__ostream__operator___std__ostream_____(r1151, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c1153 = 0;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1154 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&mypair1104.first, c1153);
    agg_tmp21108 = r1154;
    int* t1155 = mypair1104.second;
    int c1156 = 1;
    int* ptr1157 = &(t1155)[c1156];
    mypair1104.second = ptr1157;
    agg_tmp31110 = mypair1104.first; // copy
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1158 = std__vector_int__std__allocator_int_____end(&myvector1102);
    agg_tmp41111 = r1158;
    int* t1159 = mypair1104.second;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1160 = agg_tmp31110;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1161 = agg_tmp41111;
    struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_____int___ r1162 = std__pair___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___std__mismatch___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___bool_____int__int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___bool____(t1160, t1161, t1159, &mypredicate);
    ref_tmp21109 = r1162;
    struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_____int___* r1163 = _ZNSt4pairIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES2_EaSEOS7_Qcl13_S_assignableIT_T0_EE(&mypair1104, &ref_tmp21109);
    char* cast1164 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* r1165 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1164);
    int* r1166 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&mypair1104.first);
    int t1167 = *r1166;
    struct std__basic_ostream_char__std__char_traits_char__* r1168 = std__ostream__operator__(r1165, t1167);
    char* cast1169 = (char*)&(_str_1);
    struct std__basic_ostream_char__std__char_traits_char__* r1170 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1169);
    int* t1171 = mypair1104.second;
    int t1172 = *t1171;
    struct std__basic_ostream_char__std__char_traits_char__* r1173 = std__ostream__operator__(r1170, t1172);
    struct std__basic_ostream_char__std__char_traits_char__* r1174 = std__ostream__operator___std__ostream_____(r1173, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c1175 = 0;
    __retval1101 = c1175;
    int t1176 = __retval1101;
    int ret_val1177 = t1176;
    {
      std__vector_int__std__allocator_int______vector(&myvector1102);
    }
    return ret_val1177;
  int t1178 = __retval1101;
  return t1178;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE
void _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1179) {
bb1180:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1181;
  this1181 = v1179;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1182 = this1181;
  struct std__allocator_int_* base1183 = (struct std__allocator_int_*)((char *)t1182 + 0);
  std__allocator_int___allocator(base1183);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1184 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t1182 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base1184);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1185) {
bb1186:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1187;
  this1187 = v1185;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1188 = this1187;
  {
    struct std__allocator_int_* base1189 = (struct std__allocator_int_*)((char *)t1188 + 0);
    std__allocator_int____allocator(base1189);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2Ev
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1190) {
bb1191:
  struct std___Vector_base_int__std__allocator_int__* this1192;
  this1192 = v1190;
  struct std___Vector_base_int__std__allocator_int__* t1193 = this1192;
  _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(&t1193->_M_impl);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1194:
  _Bool __retval1195;
    _Bool c1196 = 0;
    __retval1195 = c1196;
    _Bool t1197 = __retval1195;
    return t1197;
  abort();
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v1198, int* v1199, unsigned long v1200) {
bb1201:
  struct std____new_allocator_int_* this1202;
  int* __p1203;
  unsigned long __n1204;
  this1202 = v1198;
  __p1203 = v1199;
  __n1204 = v1200;
  struct std____new_allocator_int_* t1205 = this1202;
    unsigned long c1206 = 4;
    unsigned long c1207 = 16;
    _Bool c1208 = ((c1206 > c1207)) ? 1 : 0;
    if (c1208) {
      int* t1209 = __p1203;
      void* cast1210 = (void*)t1209;
      unsigned long t1211 = __n1204;
      unsigned long c1212 = 4;
      unsigned long b1213 = t1211 * c1212;
      unsigned long c1214 = 4;
      operator_delete_3(cast1210, b1213, c1214);
      return;
    }
  int* t1215 = __p1203;
  void* cast1216 = (void*)t1215;
  unsigned long t1217 = __n1204;
  unsigned long c1218 = 4;
  unsigned long b1219 = t1217 * c1218;
  operator_delete_2(cast1216, b1219);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1220, int* v1221, unsigned long v1222) {
bb1223:
  struct std__allocator_int_* this1224;
  int* __p1225;
  unsigned long __n1226;
  this1224 = v1220;
  __p1225 = v1221;
  __n1226 = v1222;
  struct std__allocator_int_* t1227 = this1224;
    _Bool r1228 = std____is_constant_evaluated();
    if (r1228) {
      int* t1229 = __p1225;
      void* cast1230 = (void*)t1229;
      operator_delete(cast1230);
      return;
    }
  struct std____new_allocator_int_* base1231 = (struct std____new_allocator_int_*)((char *)t1227 + 0);
  int* t1232 = __p1225;
  unsigned long t1233 = __n1226;
  std____new_allocator_int___deallocate(base1231, t1232, t1233);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1234, int* v1235, unsigned long v1236) {
bb1237:
  struct std__allocator_int_* __a1238;
  int* __p1239;
  unsigned long __n1240;
  __a1238 = v1234;
  __p1239 = v1235;
  __n1240 = v1236;
  struct std__allocator_int_* t1241 = __a1238;
  int* t1242 = __p1239;
  unsigned long t1243 = __n1240;
  std__allocator_int___deallocate(t1241, t1242, t1243);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v1244, int* v1245, unsigned long v1246) {
bb1247:
  struct std___Vector_base_int__std__allocator_int__* this1248;
  int* __p1249;
  unsigned long __n1250;
  this1248 = v1244;
  __p1249 = v1245;
  __n1250 = v1246;
  struct std___Vector_base_int__std__allocator_int__* t1251 = this1248;
    int* t1252 = __p1249;
    _Bool cast1253 = (_Bool)t1252;
    if (cast1253) {
      struct std__allocator_int_* base1254 = (struct std__allocator_int_*)((char *)&(t1251->_M_impl) + 0);
      int* t1255 = __p1249;
      unsigned long t1256 = __n1250;
      std__allocator_traits_std__allocator_int_____deallocate(base1254, t1255, t1256);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1257) {
bb1258:
  struct std___Vector_base_int__std__allocator_int__* this1259;
  this1259 = v1257;
  struct std___Vector_base_int__std__allocator_int__* t1260 = this1259;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1261 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1260->_M_impl) + 0);
    int* t1262 = base1261->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1263 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1260->_M_impl) + 0);
    int* t1264 = base1263->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1265 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1260->_M_impl) + 0);
    int* t1266 = base1265->_M_start;
    long diff1267 = t1264 - t1266;
    unsigned long cast1268 = (unsigned long)diff1267;
    std___Vector_base_int__std__allocator_int______M_deallocate(t1260, t1262, cast1268);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t1260->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1269) {
bb1270:
  struct std____new_allocator_int_* this1271;
  this1271 = v1269;
  struct std____new_allocator_int_* t1272 = this1271;
  return;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator(struct std__allocator_int_* v1273) {
bb1274:
  struct std__allocator_int_* this1275;
  this1275 = v1273;
  struct std__allocator_int_* t1276 = this1275;
  struct std____new_allocator_int_* base1277 = (struct std____new_allocator_int_*)((char *)t1276 + 0);
  std____new_allocator_int_____new_allocator(base1277);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v1278) {
bb1279:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this1280;
  this1280 = v1278;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1281 = this1280;
  int* c1282 = ((void*)0);
  t1281->_M_start = c1282;
  int* c1283 = ((void*)0);
  t1281->_M_finish = c1283;
  int* c1284 = ((void*)0);
  t1281->_M_end_of_storage = c1284;
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v1285) {
bb1286:
  struct std__allocator_int_* this1287;
  this1287 = v1285;
  struct std__allocator_int_* t1288 = this1287;
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2Ev
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1289) {
bb1290:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this1291;
  this1291 = v1289;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1292 = this1291;
  int* c1293 = ((void*)0);
  t1292->_M_current = c1293;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1294, int* v1295) {
bb1296:
  int* __first1297;
  int* __last1298;
  __first1297 = v1294;
  __last1298 = v1295;
      _Bool r1299 = std____is_constant_evaluated();
      if (r1299) {
          while (1) {
            int* t1301 = __first1297;
            int* t1302 = __last1298;
            _Bool c1303 = ((t1301 != t1302)) ? 1 : 0;
            if (!c1303) break;
            int* t1304 = __first1297;
            void_std__destroy_at_int_(t1304);
          for_step1300: ;
            int* t1305 = __first1297;
            int c1306 = 1;
            int* ptr1307 = &(t1305)[c1306];
            __first1297 = ptr1307;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v1308, int* v1309, struct std__allocator_int_* v1310) {
bb1311:
  int* __first1312;
  int* __last1313;
  struct std__allocator_int_* unnamed1314;
  __first1312 = v1308;
  __last1313 = v1309;
  unnamed1314 = v1310;
  int* t1315 = __first1312;
  int* t1316 = __last1313;
  void_std___Destroy_int__(t1315, t1316);
  return;
}

