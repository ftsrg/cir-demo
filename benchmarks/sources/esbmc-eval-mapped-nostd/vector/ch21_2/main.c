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
struct std__iterator_std__random_access_iterator_tag__int__long__int____int___ { unsigned char __field0; };
struct std__iterator_std__random_access_iterator_tag__int__long_int___int___ { unsigned char __field0; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__reverse_iterator___gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int____ { struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ current; };
struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ { struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ current; };
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long _M_width; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int __const_main_array[6] = {1, 2, 3, 4, 5, 6};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[34] = "The initial size of integers is: ";
char _str_1[39] = "\nThe initial capacity of integers is: ";
char _str_2[27] = "\nThe size of integers is: ";
char _str_3[31] = "\nThe capacity of integers is: ";
char _str_4[40] = "\n\nOutput array using pointer notation: ";
char _str_5[41] = "\nOutput vector using iterator notation: ";
char _str_6[40] = "\nReversed contents of vector integers: ";
char _str_7[26] = "vector::_M_realloc_append";
char _str_8[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv[77] = "reference std::vector<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_9[15] = "!this->empty()";
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0);
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
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___2(struct std__basic_ostream_char__std__char_traits_char__* p0, unsigned long p1);
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* p0);
unsigned long std__vector_int__std__allocator_int_____capacity___const(struct std__vector_int__std__allocator_int__* p0);
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
long std__ios_base__width___const(struct std__ios_base* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__put(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______operator___2(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0);
void void_printVector_int_(struct std__vector_int__std__allocator_int__* p0);
void std__reverse_iterator___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________reverse_iterator(struct std__reverse_iterator___gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int____* p0);
void std__reverse_iterator___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________reverse_iterator(struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1);
struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ std__vector_int__std__allocator_int_____rend(struct std__vector_int__std__allocator_int__* p0);
void _ZNSt16reverse_iteratorIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEEC2INS1_IPiS6_EEQ13__convertibleITL0__EEERKS_IT_E(struct std__reverse_iterator___gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int____* p0, struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* p1);
struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ std__vector_int__std__allocator_int_____rbegin(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p1);
struct std__reverse_iterator___gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int____* _ZNSt16reverse_iteratorIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEEaSINS1_IPiS6_EEQaa13__convertibleITL0__E15assignable_fromIRT_RKSC_EEERS8_RKS_ISD_E(struct std__reverse_iterator___gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int____* p0, struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* p1);
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__reverse_iterator___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________base___const(struct std__reverse_iterator___gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int____* p0);
_Bool _ZSteqIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEEbRKSt16reverse_iteratorIT_ESC_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct std__reverse_iterator___gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int____* p0, struct std__reverse_iterator___gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int____* p1);
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0);
int* __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0);
int* std__reverse_iterator___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________operator____const(struct std__reverse_iterator___gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int____* p0);
struct std__reverse_iterator___gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int____* std__reverse_iterator___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________operator__(struct std__reverse_iterator___gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int____* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__flush(struct std__basic_ostream_char__std__char_traits_char__* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
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
void __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0);
void _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2IPiQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISA_S5_EE(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
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

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v5, int v6) {
bb7:
  int __a8;
  int __b9;
  int __retval10;
  __a8 = v5;
  __b9 = v6;
  int t11 = __a8;
  int t12 = __b9;
  int b13 = t11 | t12;
  __retval10 = b13;
  int t14 = __retval10;
  return t14;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v15) {
bb16:
  struct std__basic_ios_char__std__char_traits_char__* this17;
  int __retval18;
  this17 = v15;
  struct std__basic_ios_char__std__char_traits_char__* t19 = this17;
  struct std__ios_base* base20 = (struct std__ios_base*)((char *)t19 + 0);
  int t21 = base20->_M_streambuf_state;
  __retval18 = t21;
  int t22 = __retval18;
  return t22;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v23, int v24) {
bb25:
  struct std__basic_ios_char__std__char_traits_char__* this26;
  int __state27;
  this26 = v23;
  __state27 = v24;
  struct std__basic_ios_char__std__char_traits_char__* t28 = this26;
  int r29 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t28);
  int t30 = __state27;
  int r31 = std__operator_(r29, t30);
  std__basic_ios_char__std__char_traits_char_____clear(t28, r31);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v32, char* v33) {
bb34:
  char* __c135;
  char* __c236;
  _Bool __retval37;
  __c135 = v32;
  __c236 = v33;
  char* t38 = __c135;
  char t39 = *t38;
  int cast40 = (int)t39;
  char* t41 = __c236;
  char t42 = *t41;
  int cast43 = (int)t42;
  _Bool c44 = ((cast40 == cast43)) ? 1 : 0;
  __retval37 = c44;
  _Bool t45 = __retval37;
  return t45;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v46) {
bb47:
  char* __p48;
  unsigned long __retval49;
  unsigned long __i50;
  __p48 = v46;
  unsigned long c51 = 0;
  __i50 = c51;
    char ref_tmp052;
    while (1) {
      unsigned long t53 = __i50;
      char* t54 = __p48;
      char* ptr55 = &(t54)[t53];
      char c56 = 0;
      ref_tmp052 = c56;
      _Bool r57 = __gnu_cxx__char_traits_char___eq(ptr55, &ref_tmp052);
      _Bool u58 = !r57;
      if (!u58) break;
      unsigned long t59 = __i50;
      unsigned long u60 = t59 + 1;
      __i50 = u60;
    }
  unsigned long t61 = __i50;
  __retval49 = t61;
  unsigned long t62 = __retval49;
  return t62;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v63) {
bb64:
  char* __s65;
  unsigned long __retval66;
  __s65 = v63;
    _Bool r67 = std____is_constant_evaluated();
    if (r67) {
      char* t68 = __s65;
      unsigned long r69 = __gnu_cxx__char_traits_char___length(t68);
      __retval66 = r69;
      unsigned long t70 = __retval66;
      return t70;
    }
  char* t71 = __s65;
  unsigned long r72 = strlen(t71);
  __retval66 = r72;
  unsigned long t73 = __retval66;
  return t73;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v74, char* v75) {
bb76:
  struct std__basic_ostream_char__std__char_traits_char__* __out77;
  char* __s78;
  struct std__basic_ostream_char__std__char_traits_char__* __retval79;
  __out77 = v74;
  __s78 = v75;
    char* t80 = __s78;
    _Bool cast81 = (_Bool)t80;
    _Bool u82 = !cast81;
    if (u82) {
      struct std__basic_ostream_char__std__char_traits_char__* t83 = __out77;
      void** v84 = (void**)t83;
      void* v85 = *((void**)v84);
      unsigned char* cast86 = (unsigned char*)v85;
      long c87 = -24;
      unsigned char* ptr88 = &(cast86)[c87];
      long* cast89 = (long*)ptr88;
      long t90 = *cast89;
      unsigned char* cast91 = (unsigned char*)t83;
      unsigned char* ptr92 = &(cast91)[t90];
      struct std__basic_ostream_char__std__char_traits_char__* cast93 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr92;
      struct std__basic_ios_char__std__char_traits_char__* cast94 = (struct std__basic_ios_char__std__char_traits_char__*)cast93;
      int t95 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast94, t95);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t96 = __out77;
      char* t97 = __s78;
      char* t98 = __s78;
      unsigned long r99 = std__char_traits_char___length(t98);
      long cast100 = (long)r99;
      struct std__basic_ostream_char__std__char_traits_char__* r101 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t96, t97, cast100);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t102 = __out77;
  __retval79 = t102;
  struct std__basic_ostream_char__std__char_traits_char__* t103 = __retval79;
  return t103;
}

// function: _ZNSolsEm
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___2(struct std__basic_ostream_char__std__char_traits_char__* v104, unsigned long v105) {
bb106:
  struct std__basic_ostream_char__std__char_traits_char__* this107;
  unsigned long __n108;
  struct std__basic_ostream_char__std__char_traits_char__* __retval109;
  this107 = v104;
  __n108 = v105;
  struct std__basic_ostream_char__std__char_traits_char__* t110 = this107;
  unsigned long t111 = __n108;
  struct std__basic_ostream_char__std__char_traits_char__* r112 = std__ostream__std__ostream___M_insert_unsigned_long_(t110, t111);
  __retval109 = r112;
  struct std__basic_ostream_char__std__char_traits_char__* t113 = __retval109;
  return t113;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v114) {
bb115:
  struct std__vector_int__std__allocator_int__* this116;
  unsigned long __retval117;
  long __dif118;
  this116 = v114;
  struct std__vector_int__std__allocator_int__* t119 = this116;
  struct std___Vector_base_int__std__allocator_int__* base120 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t119 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base121 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base120->_M_impl) + 0);
  int* t122 = base121->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base123 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t119 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base124 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base123->_M_impl) + 0);
  int* t125 = base124->_M_start;
  long diff126 = t122 - t125;
  __dif118 = diff126;
    long t127 = __dif118;
    long c128 = 0;
    _Bool c129 = ((t127 < c128)) ? 1 : 0;
    if (c129) {
      __builtin_unreachable();
    }
  long t130 = __dif118;
  unsigned long cast131 = (unsigned long)t130;
  __retval117 = cast131;
  unsigned long t132 = __retval117;
  return t132;
}

// function: _ZNKSt6vectorIiSaIiEE8capacityEv
unsigned long std__vector_int__std__allocator_int_____capacity___const(struct std__vector_int__std__allocator_int__* v133) {
bb134:
  struct std__vector_int__std__allocator_int__* this135;
  unsigned long __retval136;
  long __dif137;
  this135 = v133;
  struct std__vector_int__std__allocator_int__* t138 = this135;
  struct std___Vector_base_int__std__allocator_int__* base139 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t138 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base140 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base139->_M_impl) + 0);
  int* t141 = base140->_M_end_of_storage;
  struct std___Vector_base_int__std__allocator_int__* base142 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t138 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base143 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base142->_M_impl) + 0);
  int* t144 = base143->_M_start;
  long diff145 = t141 - t144;
  __dif137 = diff145;
    long t146 = __dif137;
    long c147 = 0;
    _Bool c148 = ((t146 < c147)) ? 1 : 0;
    if (c148) {
      __builtin_unreachable();
    }
  long t149 = __dif137;
  unsigned long cast150 = (unsigned long)t149;
  __retval136 = cast150;
  unsigned long t151 = __retval136;
  return t151;
}

// function: _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v152, int* v153) {
bb154:
  int* __location155;
  int* __args156;
  int* __retval157;
  void* __loc158;
  __location155 = v152;
  __args156 = v153;
  int* t159 = __location155;
  void* cast160 = (void*)t159;
  __loc158 = cast160;
    void* t161 = __loc158;
    int* cast162 = (int*)t161;
    int* t163 = __args156;
    int t164 = *t163;
    *cast162 = t164;
    __retval157 = cast162;
    int* t165 = __retval157;
    return t165;
  abort();
}

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std__allocator_int_* v166, int* v167, int* v168) {
bb169:
  struct std__allocator_int_* __a170;
  int* __p171;
  int* __args172;
  __a170 = v166;
  __p171 = v167;
  __args172 = v168;
  int* t173 = __p171;
  int* t174 = __args172;
  int* r175 = _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t173, t174);
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v176, unsigned long* v177) {
bb178:
  unsigned long* __a179;
  unsigned long* __b180;
  unsigned long* __retval181;
  __a179 = v176;
  __b180 = v177;
    unsigned long* t182 = __b180;
    unsigned long t183 = *t182;
    unsigned long* t184 = __a179;
    unsigned long t185 = *t184;
    _Bool c186 = ((t183 < t185)) ? 1 : 0;
    if (c186) {
      unsigned long* t187 = __b180;
      __retval181 = t187;
      unsigned long* t188 = __retval181;
      return t188;
    }
  unsigned long* t189 = __a179;
  __retval181 = t189;
  unsigned long* t190 = __retval181;
  return t190;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v191) {
bb192:
  struct std__allocator_int_* __a193;
  unsigned long __retval194;
  unsigned long __diffmax195;
  unsigned long __allocmax196;
  __a193 = v191;
  unsigned long c197 = 2305843009213693951;
  __diffmax195 = c197;
  unsigned long c198 = 4611686018427387903;
  __allocmax196 = c198;
  unsigned long* r199 = unsigned_long_const__std__min_unsigned_long_(&__diffmax195, &__allocmax196);
  unsigned long t200 = *r199;
  __retval194 = t200;
  unsigned long t201 = __retval194;
  return t201;
}

// function: _ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Vector_base_int__std__allocator_int__* v202) {
bb203:
  struct std___Vector_base_int__std__allocator_int__* this204;
  struct std__allocator_int_* __retval205;
  this204 = v202;
  struct std___Vector_base_int__std__allocator_int__* t206 = this204;
  struct std__allocator_int_* base207 = (struct std__allocator_int_*)((char *)&(t206->_M_impl) + 0);
  __retval205 = base207;
  struct std__allocator_int_* t208 = __retval205;
  return t208;
}

// function: _ZNKSt6vectorIiSaIiEE8max_sizeEv
unsigned long std__vector_int__std__allocator_int_____max_size___const(struct std__vector_int__std__allocator_int__* v209) {
bb210:
  struct std__vector_int__std__allocator_int__* this211;
  unsigned long __retval212;
  this211 = v209;
  struct std__vector_int__std__allocator_int__* t213 = this211;
  struct std___Vector_base_int__std__allocator_int__* base214 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t213 + 0);
  struct std__allocator_int_* r215 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(base214);
  unsigned long r216 = std__vector_int__std__allocator_int______S_max_size(r215);
  __retval212 = r216;
  unsigned long t217 = __retval212;
  return t217;
}

// function: _ZSt3maxImERKT_S2_S2_
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* v218, unsigned long* v219) {
bb220:
  unsigned long* __a221;
  unsigned long* __b222;
  unsigned long* __retval223;
  __a221 = v218;
  __b222 = v219;
    unsigned long* t224 = __a221;
    unsigned long t225 = *t224;
    unsigned long* t226 = __b222;
    unsigned long t227 = *t226;
    _Bool c228 = ((t225 < t227)) ? 1 : 0;
    if (c228) {
      unsigned long* t229 = __b222;
      __retval223 = t229;
      unsigned long* t230 = __retval223;
      return t230;
    }
  unsigned long* t231 = __a221;
  __retval223 = t231;
  unsigned long* t232 = __retval223;
  return t232;
}

// function: _ZNKSt6vectorIiSaIiEE12_M_check_lenEmPKc
unsigned long std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(struct std__vector_int__std__allocator_int__* v233, unsigned long v234, char* v235) {
bb236:
  struct std__vector_int__std__allocator_int__* this237;
  unsigned long __n238;
  char* __s239;
  unsigned long __retval240;
  unsigned long __len241;
  unsigned long ref_tmp0242;
  this237 = v233;
  __n238 = v234;
  __s239 = v235;
  struct std__vector_int__std__allocator_int__* t243 = this237;
    unsigned long r244 = std__vector_int__std__allocator_int_____max_size___const(t243);
    unsigned long r245 = std__vector_int__std__allocator_int_____size___const(t243);
    unsigned long b246 = r244 - r245;
    unsigned long t247 = __n238;
    _Bool c248 = ((b246 < t247)) ? 1 : 0;
    if (c248) {
      char* t249 = __s239;
      std____throw_length_error(t249);
    }
  unsigned long r250 = std__vector_int__std__allocator_int_____size___const(t243);
  unsigned long r251 = std__vector_int__std__allocator_int_____size___const(t243);
  ref_tmp0242 = r251;
  unsigned long* r252 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp0242, &__n238);
  unsigned long t253 = *r252;
  unsigned long b254 = r250 + t253;
  __len241 = b254;
  unsigned long t255 = __len241;
  unsigned long r256 = std__vector_int__std__allocator_int_____size___const(t243);
  _Bool c257 = ((t255 < r256)) ? 1 : 0;
  _Bool ternary258;
  if (c257) {
    _Bool c259 = 1;
    ternary258 = (_Bool)c259;
  } else {
    unsigned long t260 = __len241;
    unsigned long r261 = std__vector_int__std__allocator_int_____max_size___const(t243);
    _Bool c262 = ((t260 > r261)) ? 1 : 0;
    ternary258 = (_Bool)c262;
  }
  unsigned long ternary263;
  if (ternary258) {
    unsigned long r264 = std__vector_int__std__allocator_int_____max_size___const(t243);
    ternary263 = (unsigned long)r264;
  } else {
    unsigned long t265 = __len241;
    ternary263 = (unsigned long)t265;
  }
  __retval240 = ternary263;
  unsigned long t266 = __retval240;
  return t266;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v267) {
bb268:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this269;
  int** __retval270;
  this269 = v267;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t271 = this269;
  __retval270 = &t271->_M_current;
  int** t272 = __retval270;
  return t272;
}

// function: _ZN9__gnu_cxxmiIPiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v273, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v274) {
bb275:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs276;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs277;
  long __retval278;
  __lhs276 = v273;
  __rhs277 = v274;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t279 = __lhs276;
  int** r280 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t279);
  int* t281 = *r280;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t282 = __rhs277;
  int** r283 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t282);
  int* t284 = *r283;
  long diff285 = t281 - t284;
  __retval278 = diff285;
  long t286 = __retval278;
  return t286;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v287, int** v288) {
bb289:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this290;
  int** __i291;
  this290 = v287;
  __i291 = v288;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t292 = this290;
  int** t293 = __i291;
  int* t294 = *t293;
  t292->_M_current = t294;
  return;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v295) {
bb296:
  struct std__vector_int__std__allocator_int__* this297;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval298;
  this297 = v295;
  struct std__vector_int__std__allocator_int__* t299 = this297;
  struct std___Vector_base_int__std__allocator_int__* base300 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t299 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base301 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base300->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval298, &base301->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t302 = __retval298;
  return t302;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v303) {
bb304:
  struct std__vector_int__std__allocator_int__* this305;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval306;
  this305 = v303;
  struct std__vector_int__std__allocator_int__* t307 = this305;
  struct std___Vector_base_int__std__allocator_int__* base308 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t307 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base309 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base308->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval306, &base309->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t310 = __retval306;
  return t310;
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v311) {
bb312:
  struct std____new_allocator_int_* this313;
  unsigned long __retval314;
  this313 = v311;
  struct std____new_allocator_int_* t315 = this313;
  unsigned long c316 = 9223372036854775807;
  unsigned long c317 = 4;
  unsigned long b318 = c316 / c317;
  __retval314 = b318;
  unsigned long t319 = __retval314;
  return t319;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v320, unsigned long v321, void* v322) {
bb323:
  struct std____new_allocator_int_* this324;
  unsigned long __n325;
  void* unnamed326;
  int* __retval327;
  this324 = v320;
  __n325 = v321;
  unnamed326 = v322;
  struct std____new_allocator_int_* t328 = this324;
    unsigned long t329 = __n325;
    unsigned long r330 = std____new_allocator_int____M_max_size___const(t328);
    _Bool c331 = ((t329 > r330)) ? 1 : 0;
    if (c331) {
        unsigned long t332 = __n325;
        unsigned long c333 = -1;
        unsigned long c334 = 4;
        unsigned long b335 = c333 / c334;
        _Bool c336 = ((t332 > b335)) ? 1 : 0;
        if (c336) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c337 = 4;
    unsigned long c338 = 16;
    _Bool c339 = ((c337 > c338)) ? 1 : 0;
    if (c339) {
      unsigned long __al340;
      unsigned long c341 = 4;
      __al340 = c341;
      unsigned long t342 = __n325;
      unsigned long c343 = 4;
      unsigned long b344 = t342 * c343;
      unsigned long t345 = __al340;
      void* r346 = operator_new_2(b344, t345);
      int* cast347 = (int*)r346;
      __retval327 = cast347;
      int* t348 = __retval327;
      return t348;
    }
  unsigned long t349 = __n325;
  unsigned long c350 = 4;
  unsigned long b351 = t349 * c350;
  void* r352 = operator_new(b351);
  int* cast353 = (int*)r352;
  __retval327 = cast353;
  int* t354 = __retval327;
  return t354;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v355, unsigned long v356) {
bb357:
  struct std__allocator_int_* this358;
  unsigned long __n359;
  int* __retval360;
  this358 = v355;
  __n359 = v356;
  struct std__allocator_int_* t361 = this358;
    _Bool r362 = std____is_constant_evaluated();
    if (r362) {
        unsigned long t363 = __n359;
        unsigned long c364 = 4;
        unsigned long ovr365;
        _Bool ovf366 = __builtin_mul_overflow(t363, c364, &ovr365);
        __n359 = ovr365;
        if (ovf366) {
          std____throw_bad_array_new_length();
        }
      unsigned long t367 = __n359;
      void* r368 = operator_new(t367);
      int* cast369 = (int*)r368;
      __retval360 = cast369;
      int* t370 = __retval360;
      return t370;
    }
  struct std____new_allocator_int_* base371 = (struct std____new_allocator_int_*)((char *)t361 + 0);
  unsigned long t372 = __n359;
  void* c373 = ((void*)0);
  int* r374 = std____new_allocator_int___allocate(base371, t372, c373);
  __retval360 = r374;
  int* t375 = __retval360;
  return t375;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v376, unsigned long v377) {
bb378:
  struct std__allocator_int_* __a379;
  unsigned long __n380;
  int* __retval381;
  __a379 = v376;
  __n380 = v377;
  struct std__allocator_int_* t382 = __a379;
  unsigned long t383 = __n380;
  int* r384 = std__allocator_int___allocate(t382, t383);
  __retval381 = r384;
  int* t385 = __retval381;
  return t385;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v386, unsigned long v387) {
bb388:
  struct std___Vector_base_int__std__allocator_int__* this389;
  unsigned long __n390;
  int* __retval391;
  this389 = v386;
  __n390 = v387;
  struct std___Vector_base_int__std__allocator_int__* t392 = this389;
  unsigned long t393 = __n390;
  unsigned long c394 = 0;
  _Bool c395 = ((t393 != c394)) ? 1 : 0;
  int* ternary396;
  if (c395) {
    struct std__allocator_int_* base397 = (struct std__allocator_int_*)((char *)&(t392->_M_impl) + 0);
    unsigned long t398 = __n390;
    int* r399 = std__allocator_traits_std__allocator_int_____allocate(base397, t398);
    ternary396 = (int*)r399;
  } else {
    int* c400 = ((void*)0);
    ternary396 = (int*)c400;
  }
  __retval391 = ternary396;
  int* t401 = __retval391;
  return t401;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocC2EPimRSt12_Vector_baseIiS0_E
void std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v402, int* v403, unsigned long v404, struct std___Vector_base_int__std__allocator_int__* v405) {
bb406:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this407;
  int* __s408;
  unsigned long __l409;
  struct std___Vector_base_int__std__allocator_int__* __vect410;
  this407 = v402;
  __s408 = v403;
  __l409 = v404;
  __vect410 = v405;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t411 = this407;
  int* t412 = __s408;
  t411->_M_storage = t412;
  unsigned long t413 = __l409;
  t411->_M_len = t413;
  struct std___Vector_base_int__std__allocator_int__* t414 = __vect410;
  t411->_M_vect = t414;
  return;
}

// function: _ZSt10to_addressIiEPT_S1_
int* int__std__to_address_int_(int* v415) {
bb416:
  int* __ptr417;
  int* __retval418;
  __ptr417 = v415;
  int* t419 = __ptr417;
  __retval418 = t419;
  int* t420 = __retval418;
  return t420;
}

// function: _ZSt12__to_addressIPiEDaRKT_
int* auto_std____to_address_int__(int** v421) {
bb422:
  int** __ptr423;
  int* __retval424;
  __ptr423 = v421;
  int** t425 = __ptr423;
  int* t426 = *t425;
  int* r427 = int__std__to_address_int_(t426);
  __retval424 = r427;
  int* t428 = __retval424;
  return t428;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb429:
  _Bool __retval430;
    _Bool c431 = 0;
    __retval430 = c431;
    _Bool t432 = __retval430;
    return t432;
  abort();
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEC2ERKS1_
void __gnu_cxx____normal_iterator_int___void_____normal_iterator(struct __gnu_cxx____normal_iterator_int____void_* v433, int** v434) {
bb435:
  struct __gnu_cxx____normal_iterator_int____void_* this436;
  int** __i437;
  this436 = v433;
  __i437 = v434;
  struct __gnu_cxx____normal_iterator_int____void_* t438 = this436;
  int** t439 = __i437;
  int* t440 = *t439;
  t438->_M_current = t440;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v441) {
bb442:
  int* __location443;
  __location443 = v441;
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE7destroyIiEEvRS0_PT_
void void_std__allocator_traits_std__allocator_int_____destroy_int_(struct std__allocator_int_* v444, int* v445) {
bb446:
  struct std__allocator_int_* __a447;
  int* __p448;
  __a447 = v444;
  __p448 = v445;
  int* t449 = __p448;
  void_std__destroy_at_int_(t449);
  return;
}

// function: _ZSt19__relocate_object_aIiiSaIiEEvPT_PT0_RT1_
void void_std____relocate_object_a_int__int__std__allocator_int___(int* v450, int* v451, struct std__allocator_int_* v452) {
bb453:
  int* __dest454;
  int* __orig455;
  struct std__allocator_int_* __alloc456;
  __dest454 = v450;
  __orig455 = v451;
  __alloc456 = v452;
  struct std__allocator_int_* t457 = __alloc456;
  int* t458 = __dest454;
  int* t459 = __orig455;
  void_std__allocator_traits_std__allocator_int_____construct_int__int_(t457, t458, t459);
  struct std__allocator_int_* t460 = __alloc456;
  int* t461 = __orig455;
  void_std__allocator_traits_std__allocator_int_____destroy_int_(t460, t461);
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivEdeEv
int* __gnu_cxx____normal_iterator_int___void___operator____const(struct __gnu_cxx____normal_iterator_int____void_* v462) {
bb463:
  struct __gnu_cxx____normal_iterator_int____void_* this464;
  int* __retval465;
  this464 = v462;
  struct __gnu_cxx____normal_iterator_int____void_* t466 = this464;
  int* t467 = t466->_M_current;
  __retval465 = t467;
  int* t468 = __retval465;
  return t468;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEppEv
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator__(struct __gnu_cxx____normal_iterator_int____void_* v469) {
bb470:
  struct __gnu_cxx____normal_iterator_int____void_* this471;
  struct __gnu_cxx____normal_iterator_int____void_* __retval472;
  this471 = v469;
  struct __gnu_cxx____normal_iterator_int____void_* t473 = this471;
  int* t474 = t473->_M_current;
  int c475 = 1;
  int* ptr476 = &(t474)[c475];
  t473->_M_current = ptr476;
  __retval472 = t473;
  struct __gnu_cxx____normal_iterator_int____void_* t477 = __retval472;
  return t477;
}

// function: _ZSt14__relocate_a_1IPiN9__gnu_cxx17__normal_iteratorIS0_vEESaIiEET0_T_S6_S5_RT1_
struct __gnu_cxx____normal_iterator_int____void_ __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(int* v478, int* v479, struct __gnu_cxx____normal_iterator_int____void_ v480, struct std__allocator_int_* v481) {
bb482:
  int* __first483;
  int* __last484;
  struct __gnu_cxx____normal_iterator_int____void_ __result485;
  struct std__allocator_int_* __alloc486;
  struct __gnu_cxx____normal_iterator_int____void_ __retval487;
  __first483 = v478;
  __last484 = v479;
  __result485 = v480;
  __alloc486 = v481;
  __retval487 = __result485; // copy
    while (1) {
      int* t489 = __first483;
      int* t490 = __last484;
      _Bool c491 = ((t489 != t490)) ? 1 : 0;
      if (!c491) break;
      int* r492 = __gnu_cxx____normal_iterator_int___void___operator____const(&__retval487);
      int* t493 = __first483;
      struct std__allocator_int_* t494 = __alloc486;
      void_std____relocate_object_a_int__int__std__allocator_int___(r492, t493, t494);
    for_step488: ;
      int* t495 = __first483;
      int c496 = 1;
      int* ptr497 = &(t495)[c496];
      __first483 = ptr497;
      struct __gnu_cxx____normal_iterator_int____void_* r498 = __gnu_cxx____normal_iterator_int___void___operator__(&__retval487);
    }
  struct __gnu_cxx____normal_iterator_int____void_ t499 = __retval487;
  return t499;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEaSEOS2_
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator_(struct __gnu_cxx____normal_iterator_int____void_* v500, struct __gnu_cxx____normal_iterator_int____void_* v501) {
bb502:
  struct __gnu_cxx____normal_iterator_int____void_* this503;
  struct __gnu_cxx____normal_iterator_int____void_* unnamed504;
  struct __gnu_cxx____normal_iterator_int____void_* __retval505;
  this503 = v500;
  unnamed504 = v501;
  struct __gnu_cxx____normal_iterator_int____void_* t506 = this503;
  struct __gnu_cxx____normal_iterator_int____void_* t507 = unnamed504;
  int* t508 = t507->_M_current;
  t506->_M_current = t508;
  __retval505 = t506;
  struct __gnu_cxx____normal_iterator_int____void_* t509 = __retval505;
  return t509;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivE4baseEv
int** __gnu_cxx____normal_iterator_int___void___base___const(struct __gnu_cxx____normal_iterator_int____void_* v510) {
bb511:
  struct __gnu_cxx____normal_iterator_int____void_* this512;
  int** __retval513;
  this512 = v510;
  struct __gnu_cxx____normal_iterator_int____void_* t514 = this512;
  __retval513 = &t514->_M_current;
  int** t515 = __retval513;
  return t515;
}

// function: _ZSt14__relocate_a_1IiiENSt9enable_ifIXsr3std24__is_bitwise_relocatableIT_EE5valueEPS1_E4typeES2_S2_S2_RSaIT0_E
int* std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(int* v516, int* v517, int* v518, struct std__allocator_int_* v519) {
bb520:
  int* __first521;
  int* __last522;
  int* __result523;
  struct std__allocator_int_* __alloc524;
  int* __retval525;
  long __count526;
  __first521 = v516;
  __last522 = v517;
  __result523 = v518;
  __alloc524 = v519;
  int* t527 = __last522;
  int* t528 = __first521;
  long diff529 = t527 - t528;
  __count526 = diff529;
    long t530 = __count526;
    long c531 = 0;
    _Bool c532 = ((t530 > c531)) ? 1 : 0;
    if (c532) {
        _Bool r533 = std__is_constant_evaluated();
        if (r533) {
          struct __gnu_cxx____normal_iterator_int____void_ __out534;
          struct __gnu_cxx____normal_iterator_int____void_ ref_tmp0535;
          struct __gnu_cxx____normal_iterator_int____void_ agg_tmp0536;
          __gnu_cxx____normal_iterator_int___void_____normal_iterator(&__out534, &__result523);
          int* t537 = __first521;
          int* t538 = __last522;
          agg_tmp0536 = __out534; // copy
          struct std__allocator_int_* t539 = __alloc524;
          struct __gnu_cxx____normal_iterator_int____void_ t540 = agg_tmp0536;
          struct __gnu_cxx____normal_iterator_int____void_ r541 = __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(t537, t538, t540, t539);
          ref_tmp0535 = r541;
          struct __gnu_cxx____normal_iterator_int____void_* r542 = __gnu_cxx____normal_iterator_int___void___operator_(&__out534, &ref_tmp0535);
          int** r543 = __gnu_cxx____normal_iterator_int___void___base___const(&__out534);
          int* t544 = *r543;
          __retval525 = t544;
          int* t545 = __retval525;
          return t545;
        }
      int* t546 = __result523;
      void* cast547 = (void*)t546;
      int* t548 = __first521;
      void* cast549 = (void*)t548;
      long t550 = __count526;
      unsigned long cast551 = (unsigned long)t550;
      unsigned long c552 = 4;
      unsigned long b553 = cast551 * c552;
      void* r554 = memcpy(cast547, cast549, b553);
    }
  int* t555 = __result523;
  long t556 = __count526;
  int* ptr557 = &(t555)[t556];
  __retval525 = ptr557;
  int* t558 = __retval525;
  return t558;
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v559) {
bb560:
  int* __it561;
  int* __retval562;
  __it561 = v559;
  int* t563 = __it561;
  __retval562 = t563;
  int* t564 = __retval562;
  return t564;
}

// function: _ZSt12__relocate_aIPiS0_SaIiEET0_T_S3_S2_RT1_
int* int__std____relocate_a_int___int___std__allocator_int___(int* v565, int* v566, int* v567, struct std__allocator_int_* v568) {
bb569:
  int* __first570;
  int* __last571;
  int* __result572;
  struct std__allocator_int_* __alloc573;
  int* __retval574;
  __first570 = v565;
  __last571 = v566;
  __result572 = v567;
  __alloc573 = v568;
  int* t575 = __first570;
  int* r576 = int__std____niter_base_int__(t575);
  int* t577 = __last571;
  int* r578 = int__std____niter_base_int__(t577);
  int* t579 = __result572;
  int* r580 = int__std____niter_base_int__(t579);
  struct std__allocator_int_* t581 = __alloc573;
  int* r582 = std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(r576, r578, r580, t581);
  __retval574 = r582;
  int* t583 = __retval574;
  return t583;
}

// function: _ZNSt6vectorIiSaIiEE11_S_relocateEPiS2_S2_RS0_
int* std__vector_int__std__allocator_int______S_relocate(int* v584, int* v585, int* v586, struct std__allocator_int_* v587) {
bb588:
  int* __first589;
  int* __last590;
  int* __result591;
  struct std__allocator_int_* __alloc592;
  int* __retval593;
  __first589 = v584;
  __last590 = v585;
  __result591 = v586;
  __alloc592 = v587;
  int* t594 = __first589;
  int* t595 = __last590;
  int* t596 = __result591;
  struct std__allocator_int_* t597 = __alloc592;
  int* r598 = int__std____relocate_a_int___int___std__allocator_int___(t594, t595, t596, t597);
  __retval593 = r598;
  int* t599 = __retval593;
  return t599;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v600) {
bb601:
  struct std___Vector_base_int__std__allocator_int__* this602;
  struct std__allocator_int_* __retval603;
  this602 = v600;
  struct std___Vector_base_int__std__allocator_int__* t604 = this602;
  struct std__allocator_int_* base605 = (struct std__allocator_int_*)((char *)&(t604->_M_impl) + 0);
  __retval603 = base605;
  struct std__allocator_int_* t606 = __retval603;
  return t606;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocD2Ev
void std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v607) {
bb608:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this609;
  this609 = v607;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t610 = this609;
    int* t611 = t610->_M_storage;
    _Bool cast612 = (_Bool)t611;
    if (cast612) {
      struct std___Vector_base_int__std__allocator_int__* t613 = t610->_M_vect;
      int* t614 = t610->_M_storage;
      unsigned long t615 = t610->_M_len;
      std___Vector_base_int__std__allocator_int______M_deallocate(t613, t614, t615);
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_M_realloc_appendIJiEEEvDpOT_
void void_std__vector_int__std__allocator_int______M_realloc_append_int_(struct std__vector_int__std__allocator_int__* v616, int* v617) {
bb618:
  struct std__vector_int__std__allocator_int__* this619;
  int* __args620;
  unsigned long __len621;
  int* __old_start622;
  int* __old_finish623;
  unsigned long __elems624;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0625;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1626;
  int* __new_start627;
  int* __new_finish628;
  this619 = v616;
  __args620 = v617;
  struct std__vector_int__std__allocator_int__* t629 = this619;
  unsigned long c630 = 1;
  char* cast631 = (char*)&(_str_7);
  unsigned long r632 = std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(t629, c630, cast631);
  __len621 = r632;
    unsigned long t633 = __len621;
    unsigned long c634 = 0;
    _Bool c635 = ((t633 <= c634)) ? 1 : 0;
    if (c635) {
      __builtin_unreachable();
    }
  struct std___Vector_base_int__std__allocator_int__* base636 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t629 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base637 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base636->_M_impl) + 0);
  int* t638 = base637->_M_start;
  __old_start622 = t638;
  struct std___Vector_base_int__std__allocator_int__* base639 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t629 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base640 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base639->_M_impl) + 0);
  int* t641 = base640->_M_finish;
  __old_finish623 = t641;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r642 = std__vector_int__std__allocator_int_____end(t629);
  ref_tmp0625 = r642;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r643 = std__vector_int__std__allocator_int_____begin(t629);
  ref_tmp1626 = r643;
  long r644 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&ref_tmp0625, &ref_tmp1626);
  unsigned long cast645 = (unsigned long)r644;
  __elems624 = cast645;
  struct std___Vector_base_int__std__allocator_int__* base646 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t629 + 0);
  unsigned long t647 = __len621;
  int* r648 = std___Vector_base_int__std__allocator_int______M_allocate(base646, t647);
  __new_start627 = r648;
  int* t649 = __new_start627;
  __new_finish628 = t649;
    struct std__vector_int__std__allocator_int_____Guard_alloc __guard650;
    int* ref_tmp2651;
    int* t652 = __new_start627;
    unsigned long t653 = __len621;
    struct std___Vector_base_int__std__allocator_int__* base654 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t629 + 0);
    std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(&__guard650, t652, t653, base654);
      struct std___Vector_base_int__std__allocator_int__* base655 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t629 + 0);
      struct std__allocator_int_* base656 = (struct std__allocator_int_*)((char *)&(base655->_M_impl) + 0);
      int* t657 = __new_start627;
      unsigned long t658 = __elems624;
      int* ptr659 = &(t657)[t658];
      ref_tmp2651 = ptr659;
      int* r660 = auto_std____to_address_int__(&ref_tmp2651);
      int* t661 = __args620;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_(base656, r660, t661);
        int* t662 = __old_start622;
        int* t663 = __old_finish623;
        int* t664 = __new_start627;
        struct std___Vector_base_int__std__allocator_int__* base665 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t629 + 0);
        struct std__allocator_int_* r666 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base665);
        int* r667 = std__vector_int__std__allocator_int______S_relocate(t662, t663, t664, r666);
        __new_finish628 = r667;
        int* t668 = __new_finish628;
        int c669 = 1;
        int* ptr670 = &(t668)[c669];
        __new_finish628 = ptr670;
      int* t671 = __old_start622;
      __guard650._M_storage = t671;
      struct std___Vector_base_int__std__allocator_int__* base672 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t629 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base673 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base672->_M_impl) + 0);
      int* t674 = base673->_M_end_of_storage;
      int* t675 = __old_start622;
      long diff676 = t674 - t675;
      unsigned long cast677 = (unsigned long)diff676;
      __guard650._M_len = cast677;
    {
      std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(&__guard650);
    }
  int* t678 = __new_start627;
  struct std___Vector_base_int__std__allocator_int__* base679 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t629 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base680 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base679->_M_impl) + 0);
  base680->_M_start = t678;
  int* t681 = __new_finish628;
  struct std___Vector_base_int__std__allocator_int__* base682 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t629 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base683 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base682->_M_impl) + 0);
  base683->_M_finish = t681;
  int* t684 = __new_start627;
  unsigned long t685 = __len621;
  int* ptr686 = &(t684)[t685];
  struct std___Vector_base_int__std__allocator_int__* base687 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t629 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base688 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base687->_M_impl) + 0);
  base688->_M_end_of_storage = ptr686;
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v689) {
bb690:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this691;
  int** __retval692;
  this691 = v689;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t693 = this691;
  __retval692 = &t693->_M_current;
  int** t694 = __retval692;
  return t694;
}

// function: _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v695, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v696) {
bb697:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __lhs698;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __rhs699;
  _Bool __retval700;
  __lhs698 = v695;
  __rhs699 = v696;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t701 = __lhs698;
  int** r702 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t701);
  int* t703 = *r702;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t704 = __rhs699;
  int** r705 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t704);
  int* t706 = *r705;
  _Bool c707 = ((t703 == t706)) ? 1 : 0;
  __retval700 = c707;
  _Bool t708 = __retval700;
  return t708;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2ERKS2_
void __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v709, int** v710) {
bb711:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this712;
  int** __i713;
  this712 = v709;
  __i713 = v710;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t714 = this712;
  int** t715 = __i713;
  int* t716 = *t715;
  t714->_M_current = t716;
  return;
}

// function: _ZNKSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin___const(struct std__vector_int__std__allocator_int__* v717) {
bb718:
  struct std__vector_int__std__allocator_int__* this719;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __retval720;
  this719 = v717;
  struct std__vector_int__std__allocator_int__* t721 = this719;
  struct std___Vector_base_int__std__allocator_int__* base722 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t721 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base723 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base722->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(&__retval720, &base723->_M_start);
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t724 = __retval720;
  return t724;
}

// function: _ZNKSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end___const(struct std__vector_int__std__allocator_int__* v725) {
bb726:
  struct std__vector_int__std__allocator_int__* this727;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __retval728;
  this727 = v725;
  struct std__vector_int__std__allocator_int__* t729 = this727;
  struct std___Vector_base_int__std__allocator_int__* base730 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t729 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base731 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base730->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(&__retval728, &base731->_M_finish);
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t732 = __retval728;
  return t732;
}

// function: _ZNKSt6vectorIiSaIiEE5emptyEv
_Bool std__vector_int__std__allocator_int_____empty___const(struct std__vector_int__std__allocator_int__* v733) {
bb734:
  struct std__vector_int__std__allocator_int__* this735;
  _Bool __retval736;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ ref_tmp0737;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ ref_tmp1738;
  this735 = v733;
  struct std__vector_int__std__allocator_int__* t739 = this735;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r740 = std__vector_int__std__allocator_int_____begin___const(t739);
  ref_tmp0737 = r740;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r741 = std__vector_int__std__allocator_int_____end___const(t739);
  ref_tmp1738 = r741;
  _Bool r742 = _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&ref_tmp0737, &ref_tmp1738);
  __retval736 = r742;
  _Bool t743 = __retval736;
  return t743;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEmiEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v744, long v745) {
bb746:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this747;
  long __n748;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval749;
  int* ref_tmp0750;
  this747 = v744;
  __n748 = v745;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t751 = this747;
  int* t752 = t751->_M_current;
  long t753 = __n748;
  long u754 = -t753;
  int* ptr755 = &(t752)[u754];
  ref_tmp0750 = ptr755;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval749, &ref_tmp0750);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t756 = __retval749;
  return t756;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v757) {
bb758:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this759;
  int* __retval760;
  this759 = v757;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t761 = this759;
  int* t762 = t761->_M_current;
  __retval760 = t762;
  int* t763 = __retval760;
  return t763;
}

// function: _ZNSt6vectorIiSaIiEE4backEv
int* std__vector_int__std__allocator_int_____back(struct std__vector_int__std__allocator_int__* v764) {
bb765:
  struct std__vector_int__std__allocator_int__* this766;
  int* __retval767;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0768;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1769;
  this766 = v764;
  struct std__vector_int__std__allocator_int__* t770 = this766;
    do {
          _Bool r771 = std__vector_int__std__allocator_int_____empty___const(t770);
          if (r771) {
            char* cast772 = (char*)&(_str_8);
            int c773 = 1370;
            char* cast774 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv);
            char* cast775 = (char*)&(_str_9);
            std____glibcxx_assert_fail(cast772, c773, cast774, cast775);
          }
      _Bool c776 = 0;
      if (!c776) break;
    } while (1);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r777 = std__vector_int__std__allocator_int_____end(t770);
  ref_tmp1769 = r777;
  long c778 = 1;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r779 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&ref_tmp1769, c778);
  ref_tmp0768 = r779;
  int* r780 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp0768);
  __retval767 = r780;
  int* t781 = __retval767;
  return t781;
}

// function: _ZNSt6vectorIiSaIiEE12emplace_backIJiEEERiDpOT_
int* int__std__vector_int__std__allocator_int_____emplace_back_int_(struct std__vector_int__std__allocator_int__* v782, int* v783) {
bb784:
  struct std__vector_int__std__allocator_int__* this785;
  int* __args786;
  int* __retval787;
  this785 = v782;
  __args786 = v783;
  struct std__vector_int__std__allocator_int__* t788 = this785;
    struct std___Vector_base_int__std__allocator_int__* base789 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t788 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base790 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base789->_M_impl) + 0);
    int* t791 = base790->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base792 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t788 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base793 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base792->_M_impl) + 0);
    int* t794 = base793->_M_end_of_storage;
    _Bool c795 = ((t791 != t794)) ? 1 : 0;
    if (c795) {
      struct std___Vector_base_int__std__allocator_int__* base796 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t788 + 0);
      struct std__allocator_int_* base797 = (struct std__allocator_int_*)((char *)&(base796->_M_impl) + 0);
      struct std___Vector_base_int__std__allocator_int__* base798 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t788 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base799 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base798->_M_impl) + 0);
      int* t800 = base799->_M_finish;
      int* t801 = __args786;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_(base797, t800, t801);
      struct std___Vector_base_int__std__allocator_int__* base802 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t788 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base803 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base802->_M_impl) + 0);
      int* t804 = base803->_M_finish;
      int c805 = 1;
      int* ptr806 = &(t804)[c805];
      base803->_M_finish = ptr806;
    } else {
      int* t807 = __args786;
      void_std__vector_int__std__allocator_int______M_realloc_append_int_(t788, t807);
    }
  int* r808 = std__vector_int__std__allocator_int_____back(t788);
  __retval787 = r808;
  int* t809 = __retval787;
  return t809;
}

// function: _ZNSt6vectorIiSaIiEE9push_backEOi
void std__vector_int__std__allocator_int_____push_back(struct std__vector_int__std__allocator_int__* v810, int* v811) {
bb812:
  struct std__vector_int__std__allocator_int__* this813;
  int* __x814;
  this813 = v810;
  __x814 = v811;
  struct std__vector_int__std__allocator_int__* t815 = this813;
  int* t816 = __x814;
  int* r817 = int__std__vector_int__std__allocator_int_____emplace_back_int_(t815, t816);
  return;
}

// function: _ZNKSt8ios_base5widthEv
long std__ios_base__width___const(struct std__ios_base* v818) {
bb819:
  struct std__ios_base* this820;
  long __retval821;
  this820 = v818;
  struct std__ios_base* t822 = this820;
  long t823 = t822->_M_width;
  __retval821 = t823;
  long t824 = __retval821;
  return t824;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* v825, char v826) {
bb827:
  struct std__basic_ostream_char__std__char_traits_char__* __out828;
  char __c829;
  struct std__basic_ostream_char__std__char_traits_char__* __retval830;
  __out828 = v825;
  __c829 = v826;
    struct std__basic_ostream_char__std__char_traits_char__* t831 = __out828;
    void** v832 = (void**)t831;
    void* v833 = *((void**)v832);
    unsigned char* cast834 = (unsigned char*)v833;
    long c835 = -24;
    unsigned char* ptr836 = &(cast834)[c835];
    long* cast837 = (long*)ptr836;
    long t838 = *cast837;
    unsigned char* cast839 = (unsigned char*)t831;
    unsigned char* ptr840 = &(cast839)[t838];
    struct std__basic_ostream_char__std__char_traits_char__* cast841 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr840;
    struct std__ios_base* cast842 = (struct std__ios_base*)cast841;
    long r843 = std__ios_base__width___const(cast842);
    long c844 = 0;
    _Bool c845 = ((r843 != c844)) ? 1 : 0;
    if (c845) {
      struct std__basic_ostream_char__std__char_traits_char__* t846 = __out828;
      long c847 = 1;
      struct std__basic_ostream_char__std__char_traits_char__* r848 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t846, &__c829, c847);
      __retval830 = r848;
      struct std__basic_ostream_char__std__char_traits_char__* t849 = __retval830;
      return t849;
    }
  struct std__basic_ostream_char__std__char_traits_char__* t850 = __out828;
  char t851 = __c829;
  struct std__basic_ostream_char__std__char_traits_char__* r852 = std__ostream__put(t850, t851);
  struct std__basic_ostream_char__std__char_traits_char__* t853 = __out828;
  __retval830 = t853;
  struct std__basic_ostream_char__std__char_traits_char__* t854 = __retval830;
  return t854;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______operator___2(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v855) {
bb856:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this857;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __retval858;
  this857 = v855;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t859 = this857;
  int* t860 = t859->_M_current;
  int c861 = 1;
  int* ptr862 = &(t860)[c861];
  t859->_M_current = ptr862;
  __retval858 = t859;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t863 = __retval858;
  return t863;
}

// function: _Z11printVectorIiEvRKSt6vectorIT_SaIS1_EE
void void_printVector_int_(struct std__vector_int__std__allocator_int__* v864) {
bb865:
  struct std__vector_int__std__allocator_int__* integers2866;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ constIterator867;
  integers2866 = v864;
  __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator_2(&constIterator867);
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ ref_tmp0868;
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ ref_tmp1869;
    struct std__vector_int__std__allocator_int__* t870 = integers2866;
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r871 = std__vector_int__std__allocator_int_____begin___const(t870);
    ref_tmp0868 = r871;
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* r872 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______operator_(&constIterator867, &ref_tmp0868);
    while (1) {
      struct std__vector_int__std__allocator_int__* t874 = integers2866;
      struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r875 = std__vector_int__std__allocator_int_____end___const(t874);
      ref_tmp1869 = r875;
      _Bool r876 = _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&constIterator867, &ref_tmp1869);
      _Bool u877 = !r876;
      if (!u877) break;
      int* r878 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______operator____const(&constIterator867);
      int t879 = *r878;
      struct std__basic_ostream_char__std__char_traits_char__* r880 = std__ostream__operator__(&_ZSt4cout, t879);
      char c881 = 32;
      struct std__basic_ostream_char__std__char_traits_char__* r882 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r880, c881);
    for_step873: ;
      struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* r883 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______operator___2(&constIterator867);
    }
  return;
}

// function: _ZNSt16reverse_iteratorIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEEC2Ev
void std__reverse_iterator___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________reverse_iterator(struct std__reverse_iterator___gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int____* v884) {
bb885:
  struct std__reverse_iterator___gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int____* this886;
  this886 = v884;
  struct std__reverse_iterator___gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int____* t887 = this886;
  struct std__iterator_std__random_access_iterator_tag__int__long_int___int___* base888 = (struct std__iterator_std__random_access_iterator_tag__int__long_int___int___*)((char *)t887 + 0);
  __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator_2(&t887->current);
  return;
}

// function: _ZNSt16reverse_iteratorIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEEC2ES6_
void std__reverse_iterator___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________reverse_iterator(struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* v889, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v890) {
bb891:
  struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* this892;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __x893;
  this892 = v889;
  __x893 = v890;
  struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* t894 = this892;
  struct std__iterator_std__random_access_iterator_tag__int__long__int____int___* base895 = (struct std__iterator_std__random_access_iterator_tag__int__long__int____int___*)((char *)t894 + 0);
  t894->current = __x893; // copy
  return;
}

// function: _ZNSt6vectorIiSaIiEE4rendEv
struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ std__vector_int__std__allocator_int_____rend(struct std__vector_int__std__allocator_int__* v896) {
bb897:
  struct std__vector_int__std__allocator_int__* this898;
  struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ __retval899;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0900;
  this898 = v896;
  struct std__vector_int__std__allocator_int__* t901 = this898;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r902 = std__vector_int__std__allocator_int_____begin(t901);
  agg_tmp0900 = r902;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t903 = agg_tmp0900;
  std__reverse_iterator___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________reverse_iterator(&__retval899, t903);
  struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ t904 = __retval899;
  return t904;
}

// function: _ZNSt16reverse_iteratorIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEEC2INS1_IPiS6_EEQ13__convertibleITL0__EEERKS_IT_E
void _ZNSt16reverse_iteratorIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEEC2INS1_IPiS6_EEQ13__convertibleITL0__EEERKS_IT_E(struct std__reverse_iterator___gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int____* v905, struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* v906) {
bb907:
  struct std__reverse_iterator___gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int____* this908;
  struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* __x909;
  this908 = v905;
  __x909 = v906;
  struct std__reverse_iterator___gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int____* t910 = this908;
  struct std__iterator_std__random_access_iterator_tag__int__long_int___int___* base911 = (struct std__iterator_std__random_access_iterator_tag__int__long_int___int___*)((char *)t910 + 0);
  struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* t912 = __x909;
  _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2IPiQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISA_S5_EE(&t910->current, &t912->current);
  return;
}

// function: _ZNSt6vectorIiSaIiEE6rbeginEv
struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ std__vector_int__std__allocator_int_____rbegin(struct std__vector_int__std__allocator_int__* v913) {
bb914:
  struct std__vector_int__std__allocator_int__* this915;
  struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ __retval916;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0917;
  this915 = v913;
  struct std__vector_int__std__allocator_int__* t918 = this915;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r919 = std__vector_int__std__allocator_int_____end(t918);
  agg_tmp0917 = r919;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t920 = agg_tmp0917;
  std__reverse_iterator___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________reverse_iterator(&__retval916, t920);
  struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ t921 = __retval916;
  return t921;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEaSEOS6_
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v922, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v923) {
bb924:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this925;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* unnamed926;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __retval927;
  this925 = v922;
  unnamed926 = v923;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t928 = this925;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t929 = unnamed926;
  int* t930 = t929->_M_current;
  t928->_M_current = t930;
  __retval927 = t928;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t931 = __retval927;
  return t931;
}

// function: _ZNSt16reverse_iteratorIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEEaSINS1_IPiS6_EEQaa13__convertibleITL0__E15assignable_fromIRT_RKSC_EEERS8_RKS_ISD_E
struct std__reverse_iterator___gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int____* _ZNSt16reverse_iteratorIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEEaSINS1_IPiS6_EEQaa13__convertibleITL0__E15assignable_fromIRT_RKSC_EEERS8_RKS_ISD_E(struct std__reverse_iterator___gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int____* v932, struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* v933) {
bb934:
  struct std__reverse_iterator___gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int____* this935;
  struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* __x936;
  struct std__reverse_iterator___gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int____* __retval937;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ ref_tmp0938;
  this935 = v932;
  __x936 = v933;
  struct std__reverse_iterator___gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int____* t939 = this935;
  struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* t940 = __x936;
  _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2IPiQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISA_S5_EE(&ref_tmp0938, &t940->current);
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* r941 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______operator_(&t939->current, &ref_tmp0938);
  __retval937 = t939;
  struct std__reverse_iterator___gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int____* t942 = __retval937;
  return t942;
}

// function: _ZNKSt16reverse_iteratorIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEE4baseEv
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__reverse_iterator___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________base___const(struct std__reverse_iterator___gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int____* v943) {
bb944:
  struct std__reverse_iterator___gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int____* this945;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __retval946;
  this945 = v943;
  struct std__reverse_iterator___gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int____* t947 = this945;
  __retval946 = t947->current; // copy
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t948 = __retval946;
  return t948;
}

// function: _ZSteqIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEEbRKSt16reverse_iteratorIT_ESC_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZSteqIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEEbRKSt16reverse_iteratorIT_ESC_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct std__reverse_iterator___gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int____* v949, struct std__reverse_iterator___gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int____* v950) {
bb951:
  struct std__reverse_iterator___gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int____* __x952;
  struct std__reverse_iterator___gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int____* __y953;
  _Bool __retval954;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ ref_tmp0955;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ ref_tmp1956;
  __x952 = v949;
  __y953 = v950;
  struct std__reverse_iterator___gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int____* t957 = __x952;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r958 = std__reverse_iterator___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________base___const(t957);
  ref_tmp0955 = r958;
  struct std__reverse_iterator___gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int____* t959 = __y953;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r960 = std__reverse_iterator___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________base___const(t959);
  ref_tmp1956 = r960;
  _Bool r961 = _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&ref_tmp0955, &ref_tmp1956);
  __retval954 = r961;
  _Bool t962 = __retval954;
  return t962;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEmmEv
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v963) {
bb964:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this965;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __retval966;
  this965 = v963;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t967 = this965;
  int* t968 = t967->_M_current;
  int c969 = -1;
  int* ptr970 = &(t968)[c969];
  t967->_M_current = ptr970;
  __retval966 = t967;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t971 = __retval966;
  return t971;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v972) {
bb973:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this974;
  int* __retval975;
  this974 = v972;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t976 = this974;
  int* t977 = t976->_M_current;
  __retval975 = t977;
  int* t978 = __retval975;
  return t978;
}

// function: _ZNKSt16reverse_iteratorIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEEdeEv
int* std__reverse_iterator___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________operator____const(struct std__reverse_iterator___gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int____* v979) {
bb980:
  struct std__reverse_iterator___gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int____* this981;
  int* __retval982;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __tmp983;
  this981 = v979;
  struct std__reverse_iterator___gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int____* t984 = this981;
  __tmp983 = t984->current; // copy
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* r985 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______operator__(&__tmp983);
  int* r986 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______operator____const(r985);
  __retval982 = r986;
  int* t987 = __retval982;
  return t987;
}

// function: _ZNSt16reverse_iteratorIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEEppEv
struct std__reverse_iterator___gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int____* std__reverse_iterator___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________operator__(struct std__reverse_iterator___gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int____* v988) {
bb989:
  struct std__reverse_iterator___gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int____* this990;
  struct std__reverse_iterator___gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int____* __retval991;
  this990 = v988;
  struct std__reverse_iterator___gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int____* t992 = this990;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* r993 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______operator__(&t992->current);
  __retval991 = t992;
  struct std__reverse_iterator___gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int____* t994 = __retval991;
  return t994;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v995, void* v996) {
bb997:
  struct std__basic_ostream_char__std__char_traits_char__* this998;
  void* __pf999;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1000;
  this998 = v995;
  __pf999 = v996;
  struct std__basic_ostream_char__std__char_traits_char__* t1001 = this998;
  void* t1002 = __pf999;
  struct std__basic_ostream_char__std__char_traits_char__* r1003 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t1002)(t1001);
  __retval1000 = r1003;
  struct std__basic_ostream_char__std__char_traits_char__* t1004 = __retval1000;
  return t1004;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1005) {
bb1006:
  struct std__basic_ostream_char__std__char_traits_char__* __os1007;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1008;
  __os1007 = v1005;
  struct std__basic_ostream_char__std__char_traits_char__* t1009 = __os1007;
  struct std__basic_ostream_char__std__char_traits_char__* r1010 = std__ostream__flush(t1009);
  __retval1008 = r1010;
  struct std__basic_ostream_char__std__char_traits_char__* t1011 = __retval1008;
  return t1011;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v1012) {
bb1013:
  struct std__ctype_char_* __f1014;
  struct std__ctype_char_* __retval1015;
  __f1014 = v1012;
    struct std__ctype_char_* t1016 = __f1014;
    _Bool cast1017 = (_Bool)t1016;
    _Bool u1018 = !cast1017;
    if (u1018) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t1019 = __f1014;
  __retval1015 = t1019;
  struct std__ctype_char_* t1020 = __retval1015;
  return t1020;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v1021, char v1022) {
bb1023:
  struct std__ctype_char_* this1024;
  char __c1025;
  char __retval1026;
  this1024 = v1021;
  __c1025 = v1022;
  struct std__ctype_char_* t1027 = this1024;
    char t1028 = t1027->_M_widen_ok;
    _Bool cast1029 = (_Bool)t1028;
    if (cast1029) {
      char t1030 = __c1025;
      unsigned char cast1031 = (unsigned char)t1030;
      unsigned long cast1032 = (unsigned long)cast1031;
      char t1033 = t1027->_M_widen[cast1032];
      __retval1026 = t1033;
      char t1034 = __retval1026;
      return t1034;
    }
  std__ctype_char____M_widen_init___const(t1027);
  char t1035 = __c1025;
  void** v1036 = (void**)t1027;
  void* v1037 = *((void**)v1036);
  char vcall1040 = (char)__VERIFIER_virtual_call_char_char(t1027, 6, t1035);
  __retval1026 = vcall1040;
  char t1041 = __retval1026;
  return t1041;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v1042, char v1043) {
bb1044:
  struct std__basic_ios_char__std__char_traits_char__* this1045;
  char __c1046;
  char __retval1047;
  this1045 = v1042;
  __c1046 = v1043;
  struct std__basic_ios_char__std__char_traits_char__* t1048 = this1045;
  struct std__ctype_char_* t1049 = t1048->_M_ctype;
  struct std__ctype_char_* r1050 = std__ctype_char__const__std____check_facet_std__ctype_char___(t1049);
  char t1051 = __c1046;
  char r1052 = std__ctype_char___widen_char__const(r1050, t1051);
  __retval1047 = r1052;
  char t1053 = __retval1047;
  return t1053;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1054) {
bb1055:
  struct std__basic_ostream_char__std__char_traits_char__* __os1056;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1057;
  __os1056 = v1054;
  struct std__basic_ostream_char__std__char_traits_char__* t1058 = __os1056;
  struct std__basic_ostream_char__std__char_traits_char__* t1059 = __os1056;
  void** v1060 = (void**)t1059;
  void* v1061 = *((void**)v1060);
  unsigned char* cast1062 = (unsigned char*)v1061;
  long c1063 = -24;
  unsigned char* ptr1064 = &(cast1062)[c1063];
  long* cast1065 = (long*)ptr1064;
  long t1066 = *cast1065;
  unsigned char* cast1067 = (unsigned char*)t1059;
  unsigned char* ptr1068 = &(cast1067)[t1066];
  struct std__basic_ostream_char__std__char_traits_char__* cast1069 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1068;
  struct std__basic_ios_char__std__char_traits_char__* cast1070 = (struct std__basic_ios_char__std__char_traits_char__*)cast1069;
  char c1071 = 10;
  char r1072 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast1070, c1071);
  struct std__basic_ostream_char__std__char_traits_char__* r1073 = std__ostream__put(t1058, r1072);
  struct std__basic_ostream_char__std__char_traits_char__* r1074 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r1073);
  __retval1057 = r1074;
  struct std__basic_ostream_char__std__char_traits_char__* t1075 = __retval1057;
  return t1075;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v1076) {
bb1077:
  struct std__vector_int__std__allocator_int__* this1078;
  this1078 = v1076;
  struct std__vector_int__std__allocator_int__* t1079 = this1078;
    struct std___Vector_base_int__std__allocator_int__* base1080 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1079 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1081 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1080->_M_impl) + 0);
    int* t1082 = base1081->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base1083 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1079 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1084 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1083->_M_impl) + 0);
    int* t1085 = base1084->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base1086 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1079 + 0);
    struct std__allocator_int_* r1087 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1086);
    void_std___Destroy_int___int_(t1082, t1085, r1087);
  {
    struct std___Vector_base_int__std__allocator_int__* base1088 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1079 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base1088);
  }
  return;
}

// function: main
int main() {
bb1089:
  int __retval1090;
  int SIZE1091;
  int array1092[6];
  struct std__vector_int__std__allocator_int__ integers1093;
  int ref_tmp01094;
  int ref_tmp11095;
  int ref_tmp21096;
  struct std__reverse_iterator___gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int____ reverseIterator1097;
  struct std__reverse_iterator___gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int____ tempIterator1098;
  struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ ref_tmp31099;
  int c1100 = 0;
  __retval1090 = c1100;
  int c1101 = 6;
  SIZE1091 = c1101;
  // array copy
  __builtin_memcpy(array1092, __const_main_array, (unsigned long)6 * sizeof(__const_main_array[0]));
  std__vector_int__std__allocator_int_____vector(&integers1093);
    char* cast1102 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* r1103 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1102);
    unsigned long r1104 = std__vector_int__std__allocator_int_____size___const(&integers1093);
    struct std__basic_ostream_char__std__char_traits_char__* r1105 = std__ostream__operator___2(r1103, r1104);
    char* cast1106 = (char*)&(_str_1);
    struct std__basic_ostream_char__std__char_traits_char__* r1107 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1105, cast1106);
    unsigned long r1108 = std__vector_int__std__allocator_int_____capacity___const(&integers1093);
    struct std__basic_ostream_char__std__char_traits_char__* r1109 = std__ostream__operator___2(r1107, r1108);
    int c1110 = 2;
    ref_tmp01094 = c1110;
    std__vector_int__std__allocator_int_____push_back(&integers1093, &ref_tmp01094);
    int c1111 = 3;
    ref_tmp11095 = c1111;
    std__vector_int__std__allocator_int_____push_back(&integers1093, &ref_tmp11095);
    int c1112 = 4;
    ref_tmp21096 = c1112;
    std__vector_int__std__allocator_int_____push_back(&integers1093, &ref_tmp21096);
    char* cast1113 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* r1114 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1113);
    unsigned long r1115 = std__vector_int__std__allocator_int_____size___const(&integers1093);
    struct std__basic_ostream_char__std__char_traits_char__* r1116 = std__ostream__operator___2(r1114, r1115);
    char* cast1117 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* r1118 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1116, cast1117);
    unsigned long r1119 = std__vector_int__std__allocator_int_____capacity___const(&integers1093);
    struct std__basic_ostream_char__std__char_traits_char__* r1120 = std__ostream__operator___2(r1118, r1119);
    char* cast1121 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* r1122 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1121);
      int* ptr1123;
      int* cast1124 = (int*)&(array1092);
      ptr1123 = cast1124;
      while (1) {
        int* t1126 = ptr1123;
        int* cast1127 = (int*)&(array1092);
        int t1128 = SIZE1091;
        int* ptr1129 = &(cast1127)[t1128];
        _Bool c1130 = ((t1126 != ptr1129)) ? 1 : 0;
        if (!c1130) break;
        int* t1131 = ptr1123;
        int t1132 = *t1131;
        struct std__basic_ostream_char__std__char_traits_char__* r1133 = std__ostream__operator__(&_ZSt4cout, t1132);
        char c1134 = 32;
        struct std__basic_ostream_char__std__char_traits_char__* r1135 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r1133, c1134);
      for_step1125: ;
        int* t1136 = ptr1123;
        int c1137 = 1;
        int* ptr1138 = &(t1136)[c1137];
        ptr1123 = ptr1138;
      }
    char* cast1139 = (char*)&(_str_5);
    struct std__basic_ostream_char__std__char_traits_char__* r1140 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1139);
    void_printVector_int_(&integers1093);
    char* cast1141 = (char*)&(_str_6);
    struct std__basic_ostream_char__std__char_traits_char__* r1142 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1141);
    std__reverse_iterator___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________reverse_iterator(&reverseIterator1097);
    struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ r1143 = std__vector_int__std__allocator_int_____rend(&integers1093);
    ref_tmp31099 = r1143;
    _ZNSt16reverse_iteratorIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEEC2INS1_IPiS6_EEQ13__convertibleITL0__EEERKS_IT_E(&tempIterator1098, &ref_tmp31099);
      struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ ref_tmp41144;
      struct std__reverse_iterator___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ r1145 = std__vector_int__std__allocator_int_____rbegin(&integers1093);
      ref_tmp41144 = r1145;
      struct std__reverse_iterator___gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int____* r1146 = _ZNSt16reverse_iteratorIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEEaSINS1_IPiS6_EEQaa13__convertibleITL0__E15assignable_fromIRT_RKSC_EEERS8_RKS_ISD_E(&reverseIterator1097, &ref_tmp41144);
      while (1) {
        _Bool r1148 = _ZSteqIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEEbRKSt16reverse_iteratorIT_ESC_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&reverseIterator1097, &tempIterator1098);
        _Bool u1149 = !r1148;
        if (!u1149) break;
        int* r1150 = std__reverse_iterator___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________operator____const(&reverseIterator1097);
        int t1151 = *r1150;
        struct std__basic_ostream_char__std__char_traits_char__* r1152 = std__ostream__operator__(&_ZSt4cout, t1151);
        char c1153 = 32;
        struct std__basic_ostream_char__std__char_traits_char__* r1154 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r1152, c1153);
      for_step1147: ;
        struct std__reverse_iterator___gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int____* r1155 = std__reverse_iterator___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________operator__(&reverseIterator1097);
      }
    struct std__basic_ostream_char__std__char_traits_char__* r1156 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c1157 = 0;
    __retval1090 = c1157;
    int t1158 = __retval1090;
    int ret_val1159 = t1158;
    {
      std__vector_int__std__allocator_int______vector(&integers1093);
    }
    return ret_val1159;
  int t1160 = __retval1090;
  return t1160;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE
void _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1161) {
bb1162:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1163;
  this1163 = v1161;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1164 = this1163;
  struct std__allocator_int_* base1165 = (struct std__allocator_int_*)((char *)t1164 + 0);
  std__allocator_int___allocator(base1165);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1166 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t1164 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base1166);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1167) {
bb1168:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1169;
  this1169 = v1167;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1170 = this1169;
  {
    struct std__allocator_int_* base1171 = (struct std__allocator_int_*)((char *)t1170 + 0);
    std__allocator_int____allocator(base1171);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2Ev
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1172) {
bb1173:
  struct std___Vector_base_int__std__allocator_int__* this1174;
  this1174 = v1172;
  struct std___Vector_base_int__std__allocator_int__* t1175 = this1174;
  _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(&t1175->_M_impl);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1176:
  _Bool __retval1177;
    _Bool c1178 = 0;
    __retval1177 = c1178;
    _Bool t1179 = __retval1177;
    return t1179;
  abort();
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v1180, int* v1181, unsigned long v1182) {
bb1183:
  struct std____new_allocator_int_* this1184;
  int* __p1185;
  unsigned long __n1186;
  this1184 = v1180;
  __p1185 = v1181;
  __n1186 = v1182;
  struct std____new_allocator_int_* t1187 = this1184;
    unsigned long c1188 = 4;
    unsigned long c1189 = 16;
    _Bool c1190 = ((c1188 > c1189)) ? 1 : 0;
    if (c1190) {
      int* t1191 = __p1185;
      void* cast1192 = (void*)t1191;
      unsigned long t1193 = __n1186;
      unsigned long c1194 = 4;
      unsigned long b1195 = t1193 * c1194;
      unsigned long c1196 = 4;
      operator_delete_3(cast1192, b1195, c1196);
      return;
    }
  int* t1197 = __p1185;
  void* cast1198 = (void*)t1197;
  unsigned long t1199 = __n1186;
  unsigned long c1200 = 4;
  unsigned long b1201 = t1199 * c1200;
  operator_delete_2(cast1198, b1201);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1202, int* v1203, unsigned long v1204) {
bb1205:
  struct std__allocator_int_* this1206;
  int* __p1207;
  unsigned long __n1208;
  this1206 = v1202;
  __p1207 = v1203;
  __n1208 = v1204;
  struct std__allocator_int_* t1209 = this1206;
    _Bool r1210 = std____is_constant_evaluated();
    if (r1210) {
      int* t1211 = __p1207;
      void* cast1212 = (void*)t1211;
      operator_delete(cast1212);
      return;
    }
  struct std____new_allocator_int_* base1213 = (struct std____new_allocator_int_*)((char *)t1209 + 0);
  int* t1214 = __p1207;
  unsigned long t1215 = __n1208;
  std____new_allocator_int___deallocate(base1213, t1214, t1215);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1216, int* v1217, unsigned long v1218) {
bb1219:
  struct std__allocator_int_* __a1220;
  int* __p1221;
  unsigned long __n1222;
  __a1220 = v1216;
  __p1221 = v1217;
  __n1222 = v1218;
  struct std__allocator_int_* t1223 = __a1220;
  int* t1224 = __p1221;
  unsigned long t1225 = __n1222;
  std__allocator_int___deallocate(t1223, t1224, t1225);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v1226, int* v1227, unsigned long v1228) {
bb1229:
  struct std___Vector_base_int__std__allocator_int__* this1230;
  int* __p1231;
  unsigned long __n1232;
  this1230 = v1226;
  __p1231 = v1227;
  __n1232 = v1228;
  struct std___Vector_base_int__std__allocator_int__* t1233 = this1230;
    int* t1234 = __p1231;
    _Bool cast1235 = (_Bool)t1234;
    if (cast1235) {
      struct std__allocator_int_* base1236 = (struct std__allocator_int_*)((char *)&(t1233->_M_impl) + 0);
      int* t1237 = __p1231;
      unsigned long t1238 = __n1232;
      std__allocator_traits_std__allocator_int_____deallocate(base1236, t1237, t1238);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1239) {
bb1240:
  struct std___Vector_base_int__std__allocator_int__* this1241;
  this1241 = v1239;
  struct std___Vector_base_int__std__allocator_int__* t1242 = this1241;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1243 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1242->_M_impl) + 0);
    int* t1244 = base1243->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1245 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1242->_M_impl) + 0);
    int* t1246 = base1245->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1247 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1242->_M_impl) + 0);
    int* t1248 = base1247->_M_start;
    long diff1249 = t1246 - t1248;
    unsigned long cast1250 = (unsigned long)diff1249;
    std___Vector_base_int__std__allocator_int______M_deallocate(t1242, t1244, cast1250);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t1242->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1251) {
bb1252:
  struct std____new_allocator_int_* this1253;
  this1253 = v1251;
  struct std____new_allocator_int_* t1254 = this1253;
  return;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator(struct std__allocator_int_* v1255) {
bb1256:
  struct std__allocator_int_* this1257;
  this1257 = v1255;
  struct std__allocator_int_* t1258 = this1257;
  struct std____new_allocator_int_* base1259 = (struct std____new_allocator_int_*)((char *)t1258 + 0);
  std____new_allocator_int_____new_allocator(base1259);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v1260) {
bb1261:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this1262;
  this1262 = v1260;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1263 = this1262;
  int* c1264 = ((void*)0);
  t1263->_M_start = c1264;
  int* c1265 = ((void*)0);
  t1263->_M_finish = c1265;
  int* c1266 = ((void*)0);
  t1263->_M_end_of_storage = c1266;
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v1267) {
bb1268:
  struct std__allocator_int_* this1269;
  this1269 = v1267;
  struct std__allocator_int_* t1270 = this1269;
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2Ev
void __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v1271) {
bb1272:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this1273;
  this1273 = v1271;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t1274 = this1273;
  int* c1275 = ((void*)0);
  t1274->_M_current = c1275;
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2IPiQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISA_S5_EE
void _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2IPiQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISA_S5_EE(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v1276, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1277) {
bb1278:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this1279;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __i1280;
  this1279 = v1276;
  __i1280 = v1277;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t1281 = this1279;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1282 = __i1280;
  int** r1283 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t1282);
  int* t1284 = *r1283;
  t1281->_M_current = t1284;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1285, int* v1286) {
bb1287:
  int* __first1288;
  int* __last1289;
  __first1288 = v1285;
  __last1289 = v1286;
      _Bool r1290 = std____is_constant_evaluated();
      if (r1290) {
          while (1) {
            int* t1292 = __first1288;
            int* t1293 = __last1289;
            _Bool c1294 = ((t1292 != t1293)) ? 1 : 0;
            if (!c1294) break;
            int* t1295 = __first1288;
            void_std__destroy_at_int_(t1295);
          for_step1291: ;
            int* t1296 = __first1288;
            int c1297 = 1;
            int* ptr1298 = &(t1296)[c1297];
            __first1288 = ptr1298;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v1299, int* v1300, struct std__allocator_int_* v1301) {
bb1302:
  int* __first1303;
  int* __last1304;
  struct std__allocator_int_* unnamed1305;
  __first1303 = v1299;
  __last1304 = v1300;
  unnamed1305 = v1301;
  int* t1306 = __first1303;
  int* t1307 = __last1304;
  void_std___Destroy_int__(t1306, t1307);
  return;
}

