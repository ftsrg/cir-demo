extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct __gnu_cxx____normal_iterator_const_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ { unsigned int* _M_current; };
struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ { unsigned int* _M_current; };
struct __gnu_cxx____normal_iterator_unsigned_int____void_ { unsigned int* _M_current; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl_data { unsigned int* _M_start; unsigned int* _M_finish; unsigned int* _M_end_of_storage; };
struct std____new_allocator_unsigned_int_ { unsigned char __field0; };
struct std__allocator_unsigned_int_ { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__vector_unsigned_int__std__allocator_unsigned_int_____Guard_alloc { unsigned int* _M_storage; unsigned long _M_len; struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__* _M_vect; };
struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl { struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl_data __field0; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__ { struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__vector_unsigned_int__std__allocator_unsigned_int__ { struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__ __field0; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[19] = "myvector contains:";
char _str_1[2] = " ";
char _str_2[26] = "vector::_M_realloc_append";
char _str_3[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIjSaIjEEixEm[119] = "reference std::vector<unsigned int>::operator[](size_type) [_Tp = unsigned int, _Alloc = std::allocator<unsigned int>]";
char _str_4[19] = "__n < this->size()";
void std__vector_unsigned_int__std__allocator_unsigned_int_____vector(struct std__vector_unsigned_int__std__allocator_unsigned_int__* p0);
unsigned int* _ZSt12construct_atIjJRKjEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(unsigned int* p0, unsigned int* p1);
void void_std__allocator_traits_std__allocator_unsigned_int_____construct_unsigned_int__unsigned_int_const__(struct std__allocator_unsigned_int_* p0, unsigned int* p1, unsigned int* p2);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__vector_unsigned_int__std__allocator_unsigned_int______S_max_size(struct std__allocator_unsigned_int_* p0);
struct std__allocator_unsigned_int_* std___Vector_base_unsigned_int__std__allocator_unsigned_int______M_get_Tp_allocator___const(struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__* p0);
unsigned long std__vector_unsigned_int__std__allocator_unsigned_int_____max_size___const(struct std__vector_unsigned_int__std__allocator_unsigned_int__* p0);
extern void std____throw_length_error(char* p0);
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__vector_unsigned_int__std__allocator_unsigned_int______M_check_len_unsigned_long__char_const___const(struct std__vector_unsigned_int__std__allocator_unsigned_int__* p0, unsigned long p1, char* p2);
unsigned int** __gnu_cxx____normal_iterator_unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int_______base___const(struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___* p0);
long __gnu_cxx____normal_iterator_unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int_______difference_type___gnu_cxx__operator__unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int_____(struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___* p0, struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___* p1);
void __gnu_cxx____normal_iterator_unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int_________normal_iterator(struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___* p0, unsigned int** p1);
struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ std__vector_unsigned_int__std__allocator_unsigned_int_____end(struct std__vector_unsigned_int__std__allocator_unsigned_int__* p0);
extern void std____throw_bad_array_new_length();
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new(unsigned long p0) { return malloc(p0); }
unsigned long std____new_allocator_unsigned_int____M_max_size___const(struct std____new_allocator_unsigned_int_* p0);
extern void std____throw_bad_alloc();
void* operator_new_2(unsigned long p0, unsigned long p1) { return malloc(p0); }
unsigned int* std____new_allocator_unsigned_int___allocate(struct std____new_allocator_unsigned_int_* p0, unsigned long p1, void* p2);
unsigned int* std__allocator_unsigned_int___allocate(struct std__allocator_unsigned_int_* p0, unsigned long p1);
unsigned int* std__allocator_traits_std__allocator_unsigned_int_____allocate(struct std__allocator_unsigned_int_* p0, unsigned long p1);
unsigned int* std___Vector_base_unsigned_int__std__allocator_unsigned_int______M_allocate(struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__* p0, unsigned long p1);
void std__vector_unsigned_int__std__allocator_unsigned_int______Guard_alloc___Guard_alloc(struct std__vector_unsigned_int__std__allocator_unsigned_int_____Guard_alloc* p0, unsigned int* p1, unsigned long p2, struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__* p3);
unsigned int* unsigned_int__std__to_address_unsigned_int_(unsigned int* p0);
unsigned int* auto_std____to_address_unsigned_int__(unsigned int** p0);
_Bool std__is_constant_evaluated();
void __gnu_cxx____normal_iterator_unsigned_int___void_____normal_iterator(struct __gnu_cxx____normal_iterator_unsigned_int____void_* p0, unsigned int** p1);
unsigned int* _ZSt12construct_atIjJjEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(unsigned int* p0, unsigned int* p1);
void void_std__allocator_traits_std__allocator_unsigned_int_____construct_unsigned_int__unsigned_int_(struct std__allocator_unsigned_int_* p0, unsigned int* p1, unsigned int* p2);
void void_std__destroy_at_unsigned_int_(unsigned int* p0);
void void_std__allocator_traits_std__allocator_unsigned_int_____destroy_unsigned_int_(struct std__allocator_unsigned_int_* p0, unsigned int* p1);
void void_std____relocate_object_a_unsigned_int__unsigned_int__std__allocator_unsigned_int___(unsigned int* p0, unsigned int* p1, struct std__allocator_unsigned_int_* p2);
unsigned int* __gnu_cxx____normal_iterator_unsigned_int___void___operator____const(struct __gnu_cxx____normal_iterator_unsigned_int____void_* p0);
struct __gnu_cxx____normal_iterator_unsigned_int____void_* __gnu_cxx____normal_iterator_unsigned_int___void___operator__(struct __gnu_cxx____normal_iterator_unsigned_int____void_* p0);
struct __gnu_cxx____normal_iterator_unsigned_int____void_ __gnu_cxx____normal_iterator_unsigned_int___void__std____relocate_a_1_unsigned_int_____gnu_cxx____normal_iterator_unsigned_int___void___std__allocator_unsigned_int___(unsigned int* p0, unsigned int* p1, struct __gnu_cxx____normal_iterator_unsigned_int____void_ p2, struct std__allocator_unsigned_int_* p3);
struct __gnu_cxx____normal_iterator_unsigned_int____void_* __gnu_cxx____normal_iterator_unsigned_int___void___operator_(struct __gnu_cxx____normal_iterator_unsigned_int____void_* p0, struct __gnu_cxx____normal_iterator_unsigned_int____void_* p1);
unsigned int** __gnu_cxx____normal_iterator_unsigned_int___void___base___const(struct __gnu_cxx____normal_iterator_unsigned_int____void_* p0);
extern void* memcpy(void* p0, void* p1, unsigned long p2);
unsigned int* std__enable_if_std____is_bitwise_relocatable_unsigned_int___value__unsigned_int____type_std____relocate_a_1_unsigned_int__unsigned_int_(unsigned int* p0, unsigned int* p1, unsigned int* p2, struct std__allocator_unsigned_int_* p3);
unsigned int* unsigned_int__std____niter_base_unsigned_int__(unsigned int* p0);
unsigned int* unsigned_int__std____relocate_a_unsigned_int___unsigned_int___std__allocator_unsigned_int___(unsigned int* p0, unsigned int* p1, unsigned int* p2, struct std__allocator_unsigned_int_* p3);
unsigned int* std__vector_unsigned_int__std__allocator_unsigned_int______S_relocate(unsigned int* p0, unsigned int* p1, unsigned int* p2, struct std__allocator_unsigned_int_* p3);
struct std__allocator_unsigned_int_* std___Vector_base_unsigned_int__std__allocator_unsigned_int______M_get_Tp_allocator(struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__* p0);
void std__vector_unsigned_int__std__allocator_unsigned_int______Guard_alloc____Guard_alloc(struct std__vector_unsigned_int__std__allocator_unsigned_int_____Guard_alloc* p0);
void void_std__vector_unsigned_int__std__allocator_unsigned_int______M_realloc_append_unsigned_int_const__(struct std__vector_unsigned_int__std__allocator_unsigned_int__* p0, unsigned int* p1);
void std__vector_unsigned_int__std__allocator_unsigned_int_____push_back(struct std__vector_unsigned_int__std__allocator_unsigned_int__* p0, unsigned int* p1);
_Bool _ZN9__gnu_cxxeqIPjSt6vectorIjSaIjEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___* p0, struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___* p1);
struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ __gnu_cxx____normal_iterator_unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int______std____niter_wrap___gnu_cxx____normal_iterator_unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int_______unsigned_int__(struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ p0, unsigned int* p1);
long std__iterator_traits_unsigned_int____difference_type_std____distance_unsigned_int__(unsigned int* p0, unsigned int* p1, struct std__random_access_iterator_tag p2);
struct std__random_access_iterator_tag std__iterator_traits_unsigned_int____iterator_category_std____iterator_category_unsigned_int__(unsigned int** p0);
long std__iterator_traits_unsigned_int____difference_type_std__distance_unsigned_int__(unsigned int* p0, unsigned int* p1);
extern void* memmove(void* p0, void* p1, unsigned long p2);
void void_std____assign_one_true__unsigned_int___unsigned_int__(unsigned int** p0, unsigned int** p1);
unsigned int* unsigned_int__std____copy_move_a2_true__unsigned_int___unsigned_int___unsigned_int__(unsigned int* p0, unsigned int* p1, unsigned int* p2);
unsigned int* unsigned_int__std____copy_move_a1_true__unsigned_int___unsigned_int__(unsigned int* p0, unsigned int* p1, unsigned int* p2);
unsigned int* unsigned_int__std____niter_base_unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int_____(struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ p0);
struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ __gnu_cxx____normal_iterator_unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int______std____copy_move_a_true____gnu_cxx____normal_iterator_unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int_________gnu_cxx____normal_iterator_unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int_______(struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ p0, struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ p1, struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ p2);
struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ __gnu_cxx____normal_iterator_unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int______std____miter_base___gnu_cxx____normal_iterator_unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int_______(struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ p0);
struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ __gnu_cxx____normal_iterator_unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int______std__move___gnu_cxx____normal_iterator_unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int_________gnu_cxx____normal_iterator_unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int_______(struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ p0, struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ p1, struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ p2);
struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ std__vector_unsigned_int__std__allocator_unsigned_int______M_erase(struct std__vector_unsigned_int__std__allocator_unsigned_int__* p0, struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ p1);
unsigned int** __gnu_cxx____normal_iterator_unsigned_int_const___std__vector_unsigned_int__std__allocator_unsigned_int_______base___const(struct __gnu_cxx____normal_iterator_const_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___* p0);
long __gnu_cxx____normal_iterator_unsigned_int_const___std__vector_unsigned_int__std__allocator_unsigned_int_______difference_type___gnu_cxx__operator__unsigned_int_const___std__vector_unsigned_int__std__allocator_unsigned_int_____(struct __gnu_cxx____normal_iterator_const_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___* p0, struct __gnu_cxx____normal_iterator_const_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___* p1);
void __gnu_cxx____normal_iterator_unsigned_int_const___std__vector_unsigned_int__std__allocator_unsigned_int_________normal_iterator(struct __gnu_cxx____normal_iterator_const_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___* p0, unsigned int** p1);
struct __gnu_cxx____normal_iterator_const_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ std__vector_unsigned_int__std__allocator_unsigned_int_____cbegin___const(struct std__vector_unsigned_int__std__allocator_unsigned_int__* p0);
struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ std__vector_unsigned_int__std__allocator_unsigned_int_____erase(struct std__vector_unsigned_int__std__allocator_unsigned_int__* p0, struct __gnu_cxx____normal_iterator_const_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ p1);
struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ std__vector_unsigned_int__std__allocator_unsigned_int_____begin(struct std__vector_unsigned_int__std__allocator_unsigned_int__* p0);
struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ __gnu_cxx____normal_iterator_unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int_______operator__long__const(struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___* p0, long p1);
void _ZN9__gnu_cxx17__normal_iteratorIPKjSt6vectorIjSaIjEEEC2IPjQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISA_S5_EE(struct __gnu_cxx____normal_iterator_const_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___* p0, struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___* p1);
void void_std___Destroy_unsigned_int__(unsigned int* p0, unsigned int* p1);
void void_std___Destroy_unsigned_int___unsigned_int_(unsigned int* p0, unsigned int* p1, struct std__allocator_unsigned_int_* p2);
void std__vector_unsigned_int__std__allocator_unsigned_int______M_erase_at_end(struct std__vector_unsigned_int__std__allocator_unsigned_int__* p0, unsigned int* p1);
struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ std__vector_unsigned_int__std__allocator_unsigned_int______M_erase_2(struct std__vector_unsigned_int__std__allocator_unsigned_int__* p0, struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ p1, struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ p2);
struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ std__vector_unsigned_int__std__allocator_unsigned_int_____erase_2(struct std__vector_unsigned_int__std__allocator_unsigned_int__* p0, struct __gnu_cxx____normal_iterator_const_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ p1, struct __gnu_cxx____normal_iterator_const_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ p2);
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
unsigned long std__vector_unsigned_int__std__allocator_unsigned_int_____size___const(struct std__vector_unsigned_int__std__allocator_unsigned_int__* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__std__ostream___M_insert_unsigned_long_(struct std__basic_ostream_char__std__char_traits_char__* p0, unsigned long p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, unsigned int p1);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
unsigned int* std__vector_unsigned_int__std__allocator_unsigned_int_____operator__(struct std__vector_unsigned_int__std__allocator_unsigned_int__* p0, unsigned long p1);
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
void std__vector_unsigned_int__std__allocator_unsigned_int______vector(struct std__vector_unsigned_int__std__allocator_unsigned_int__* p0);
int main();
void _ZNSt12_Vector_baseIjSaIjEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl* p0);
void std___Vector_base_unsigned_int__std__allocator_unsigned_int______Vector_impl____Vector_impl(struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl* p0);
void std___Vector_base_unsigned_int__std__allocator_unsigned_int______Vector_base(struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__* p0);
_Bool std____is_constant_evaluated();
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_unsigned_int___deallocate(struct std____new_allocator_unsigned_int_* p0, unsigned int* p1, unsigned long p2);
void std__allocator_unsigned_int___deallocate(struct std__allocator_unsigned_int_* p0, unsigned int* p1, unsigned long p2);
void std__allocator_traits_std__allocator_unsigned_int_____deallocate(struct std__allocator_unsigned_int_* p0, unsigned int* p1, unsigned long p2);
void std___Vector_base_unsigned_int__std__allocator_unsigned_int______M_deallocate(struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__* p0, unsigned int* p1, unsigned long p2);
void std___Vector_base_unsigned_int__std__allocator_unsigned_int_______Vector_base(struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__* p0);
void std____new_allocator_unsigned_int_____new_allocator(struct std____new_allocator_unsigned_int_* p0);
void std__allocator_unsigned_int___allocator(struct std__allocator_unsigned_int_* p0);
void std___Vector_base_unsigned_int__std__allocator_unsigned_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl_data* p0);
void std__allocator_unsigned_int____allocator(struct std__allocator_unsigned_int_* p0);

// function: _ZNSt6vectorIjSaIjEEC2Ev
void std__vector_unsigned_int__std__allocator_unsigned_int_____vector(struct std__vector_unsigned_int__std__allocator_unsigned_int__* v0) {
bb1:
  struct std__vector_unsigned_int__std__allocator_unsigned_int__* this2;
  this2 = v0;
  struct std__vector_unsigned_int__std__allocator_unsigned_int__* t3 = this2;
  struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__* base4 = (struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t3 + 0);
  std___Vector_base_unsigned_int__std__allocator_unsigned_int______Vector_base(base4);
  return;
}

// function: _ZSt12construct_atIjJRKjEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
unsigned int* _ZSt12construct_atIjJRKjEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(unsigned int* v5, unsigned int* v6) {
bb7:
  unsigned int* __location8;
  unsigned int* __args9;
  unsigned int* __retval10;
  void* __loc11;
  __location8 = v5;
  __args9 = v6;
  unsigned int* t12 = __location8;
  void* cast13 = (void*)t12;
  __loc11 = cast13;
    void* t14 = __loc11;
    unsigned int* cast15 = (unsigned int*)t14;
    unsigned int* t16 = __args9;
    unsigned int t17 = *t16;
    *cast15 = t17;
    __retval10 = cast15;
    unsigned int* t18 = __retval10;
    return t18;
  abort();
}

// function: _ZNSt16allocator_traitsISaIjEE9constructIjJRKjEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_unsigned_int_____construct_unsigned_int__unsigned_int_const__(struct std__allocator_unsigned_int_* v19, unsigned int* v20, unsigned int* v21) {
bb22:
  struct std__allocator_unsigned_int_* __a23;
  unsigned int* __p24;
  unsigned int* __args25;
  __a23 = v19;
  __p24 = v20;
  __args25 = v21;
  unsigned int* t26 = __p24;
  unsigned int* t27 = __args25;
  unsigned int* r28 = _ZSt12construct_atIjJRKjEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t26, t27);
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

// function: _ZNSt6vectorIjSaIjEE11_S_max_sizeERKS0_
unsigned long std__vector_unsigned_int__std__allocator_unsigned_int______S_max_size(struct std__allocator_unsigned_int_* v44) {
bb45:
  struct std__allocator_unsigned_int_* __a46;
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

// function: _ZNKSt12_Vector_baseIjSaIjEE19_M_get_Tp_allocatorEv
struct std__allocator_unsigned_int_* std___Vector_base_unsigned_int__std__allocator_unsigned_int______M_get_Tp_allocator___const(struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__* v55) {
bb56:
  struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__* this57;
  struct std__allocator_unsigned_int_* __retval58;
  this57 = v55;
  struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__* t59 = this57;
  struct std__allocator_unsigned_int_* base60 = (struct std__allocator_unsigned_int_*)((char *)&(t59->_M_impl) + 0);
  __retval58 = base60;
  struct std__allocator_unsigned_int_* t61 = __retval58;
  return t61;
}

// function: _ZNKSt6vectorIjSaIjEE8max_sizeEv
unsigned long std__vector_unsigned_int__std__allocator_unsigned_int_____max_size___const(struct std__vector_unsigned_int__std__allocator_unsigned_int__* v62) {
bb63:
  struct std__vector_unsigned_int__std__allocator_unsigned_int__* this64;
  unsigned long __retval65;
  this64 = v62;
  struct std__vector_unsigned_int__std__allocator_unsigned_int__* t66 = this64;
  struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__* base67 = (struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t66 + 0);
  struct std__allocator_unsigned_int_* r68 = std___Vector_base_unsigned_int__std__allocator_unsigned_int______M_get_Tp_allocator___const(base67);
  unsigned long r69 = std__vector_unsigned_int__std__allocator_unsigned_int______S_max_size(r68);
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

// function: _ZNKSt6vectorIjSaIjEE12_M_check_lenEmPKc
unsigned long std__vector_unsigned_int__std__allocator_unsigned_int______M_check_len_unsigned_long__char_const___const(struct std__vector_unsigned_int__std__allocator_unsigned_int__* v86, unsigned long v87, char* v88) {
bb89:
  struct std__vector_unsigned_int__std__allocator_unsigned_int__* this90;
  unsigned long __n91;
  char* __s92;
  unsigned long __retval93;
  unsigned long __len94;
  unsigned long ref_tmp095;
  this90 = v86;
  __n91 = v87;
  __s92 = v88;
  struct std__vector_unsigned_int__std__allocator_unsigned_int__* t96 = this90;
    unsigned long r97 = std__vector_unsigned_int__std__allocator_unsigned_int_____max_size___const(t96);
    unsigned long r98 = std__vector_unsigned_int__std__allocator_unsigned_int_____size___const(t96);
    unsigned long b99 = r97 - r98;
    unsigned long t100 = __n91;
    _Bool c101 = ((b99 < t100)) ? 1 : 0;
    if (c101) {
      char* t102 = __s92;
      std____throw_length_error(t102);
    }
  unsigned long r103 = std__vector_unsigned_int__std__allocator_unsigned_int_____size___const(t96);
  unsigned long r104 = std__vector_unsigned_int__std__allocator_unsigned_int_____size___const(t96);
  ref_tmp095 = r104;
  unsigned long* r105 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp095, &__n91);
  unsigned long t106 = *r105;
  unsigned long b107 = r103 + t106;
  __len94 = b107;
  unsigned long t108 = __len94;
  unsigned long r109 = std__vector_unsigned_int__std__allocator_unsigned_int_____size___const(t96);
  _Bool c110 = ((t108 < r109)) ? 1 : 0;
  _Bool ternary111;
  if (c110) {
    _Bool c112 = 1;
    ternary111 = (_Bool)c112;
  } else {
    unsigned long t113 = __len94;
    unsigned long r114 = std__vector_unsigned_int__std__allocator_unsigned_int_____max_size___const(t96);
    _Bool c115 = ((t113 > r114)) ? 1 : 0;
    ternary111 = (_Bool)c115;
  }
  unsigned long ternary116;
  if (ternary111) {
    unsigned long r117 = std__vector_unsigned_int__std__allocator_unsigned_int_____max_size___const(t96);
    ternary116 = (unsigned long)r117;
  } else {
    unsigned long t118 = __len94;
    ternary116 = (unsigned long)t118;
  }
  __retval93 = ternary116;
  unsigned long t119 = __retval93;
  return t119;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPjSt6vectorIjSaIjEEE4baseEv
unsigned int** __gnu_cxx____normal_iterator_unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int_______base___const(struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___* v120) {
bb121:
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___* this122;
  unsigned int** __retval123;
  this122 = v120;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___* t124 = this122;
  __retval123 = &t124->_M_current;
  unsigned int** t125 = __retval123;
  return t125;
}

// function: _ZN9__gnu_cxxmiIPjSt6vectorIjSaIjEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_
long __gnu_cxx____normal_iterator_unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int_______difference_type___gnu_cxx__operator__unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int_____(struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___* v126, struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___* v127) {
bb128:
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___* __lhs129;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___* __rhs130;
  long __retval131;
  __lhs129 = v126;
  __rhs130 = v127;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___* t132 = __lhs129;
  unsigned int** r133 = __gnu_cxx____normal_iterator_unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int_______base___const(t132);
  unsigned int* t134 = *r133;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___* t135 = __rhs130;
  unsigned int** r136 = __gnu_cxx____normal_iterator_unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int_______base___const(t135);
  unsigned int* t137 = *r136;
  long diff138 = t134 - t137;
  __retval131 = diff138;
  long t139 = __retval131;
  return t139;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPjSt6vectorIjSaIjEEEC2ERKS1_
void __gnu_cxx____normal_iterator_unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int_________normal_iterator(struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___* v140, unsigned int** v141) {
bb142:
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___* this143;
  unsigned int** __i144;
  this143 = v140;
  __i144 = v141;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___* t145 = this143;
  unsigned int** t146 = __i144;
  unsigned int* t147 = *t146;
  t145->_M_current = t147;
  return;
}

// function: _ZNSt6vectorIjSaIjEE3endEv
struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ std__vector_unsigned_int__std__allocator_unsigned_int_____end(struct std__vector_unsigned_int__std__allocator_unsigned_int__* v148) {
bb149:
  struct std__vector_unsigned_int__std__allocator_unsigned_int__* this150;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ __retval151;
  this150 = v148;
  struct std__vector_unsigned_int__std__allocator_unsigned_int__* t152 = this150;
  struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__* base153 = (struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t152 + 0);
  struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl_data* base154 = (struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl_data*)((char *)&(base153->_M_impl) + 0);
  __gnu_cxx____normal_iterator_unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int_________normal_iterator(&__retval151, &base154->_M_finish);
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ t155 = __retval151;
  return t155;
}

// function: _ZNKSt15__new_allocatorIjE11_M_max_sizeEv
unsigned long std____new_allocator_unsigned_int____M_max_size___const(struct std____new_allocator_unsigned_int_* v156) {
bb157:
  struct std____new_allocator_unsigned_int_* this158;
  unsigned long __retval159;
  this158 = v156;
  struct std____new_allocator_unsigned_int_* t160 = this158;
  unsigned long c161 = 9223372036854775807;
  unsigned long c162 = 4;
  unsigned long b163 = c161 / c162;
  __retval159 = b163;
  unsigned long t164 = __retval159;
  return t164;
}

// function: _ZNSt15__new_allocatorIjE8allocateEmPKv
unsigned int* std____new_allocator_unsigned_int___allocate(struct std____new_allocator_unsigned_int_* v165, unsigned long v166, void* v167) {
bb168:
  struct std____new_allocator_unsigned_int_* this169;
  unsigned long __n170;
  void* unnamed171;
  unsigned int* __retval172;
  this169 = v165;
  __n170 = v166;
  unnamed171 = v167;
  struct std____new_allocator_unsigned_int_* t173 = this169;
    unsigned long t174 = __n170;
    unsigned long r175 = std____new_allocator_unsigned_int____M_max_size___const(t173);
    _Bool c176 = ((t174 > r175)) ? 1 : 0;
    if (c176) {
        unsigned long t177 = __n170;
        unsigned long c178 = -1;
        unsigned long c179 = 4;
        unsigned long b180 = c178 / c179;
        _Bool c181 = ((t177 > b180)) ? 1 : 0;
        if (c181) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c182 = 4;
    unsigned long c183 = 16;
    _Bool c184 = ((c182 > c183)) ? 1 : 0;
    if (c184) {
      unsigned long __al185;
      unsigned long c186 = 4;
      __al185 = c186;
      unsigned long t187 = __n170;
      unsigned long c188 = 4;
      unsigned long b189 = t187 * c188;
      unsigned long t190 = __al185;
      void* r191 = operator_new_2(b189, t190);
      unsigned int* cast192 = (unsigned int*)r191;
      __retval172 = cast192;
      unsigned int* t193 = __retval172;
      return t193;
    }
  unsigned long t194 = __n170;
  unsigned long c195 = 4;
  unsigned long b196 = t194 * c195;
  void* r197 = operator_new(b196);
  unsigned int* cast198 = (unsigned int*)r197;
  __retval172 = cast198;
  unsigned int* t199 = __retval172;
  return t199;
}

// function: _ZNSaIjE8allocateEm
unsigned int* std__allocator_unsigned_int___allocate(struct std__allocator_unsigned_int_* v200, unsigned long v201) {
bb202:
  struct std__allocator_unsigned_int_* this203;
  unsigned long __n204;
  unsigned int* __retval205;
  this203 = v200;
  __n204 = v201;
  struct std__allocator_unsigned_int_* t206 = this203;
    _Bool r207 = std____is_constant_evaluated();
    if (r207) {
        unsigned long t208 = __n204;
        unsigned long c209 = 4;
        unsigned long ovr210;
        _Bool ovf211 = __builtin_mul_overflow(t208, c209, &ovr210);
        __n204 = ovr210;
        if (ovf211) {
          std____throw_bad_array_new_length();
        }
      unsigned long t212 = __n204;
      void* r213 = operator_new(t212);
      unsigned int* cast214 = (unsigned int*)r213;
      __retval205 = cast214;
      unsigned int* t215 = __retval205;
      return t215;
    }
  struct std____new_allocator_unsigned_int_* base216 = (struct std____new_allocator_unsigned_int_*)((char *)t206 + 0);
  unsigned long t217 = __n204;
  void* c218 = ((void*)0);
  unsigned int* r219 = std____new_allocator_unsigned_int___allocate(base216, t217, c218);
  __retval205 = r219;
  unsigned int* t220 = __retval205;
  return t220;
}

// function: _ZNSt16allocator_traitsISaIjEE8allocateERS0_m
unsigned int* std__allocator_traits_std__allocator_unsigned_int_____allocate(struct std__allocator_unsigned_int_* v221, unsigned long v222) {
bb223:
  struct std__allocator_unsigned_int_* __a224;
  unsigned long __n225;
  unsigned int* __retval226;
  __a224 = v221;
  __n225 = v222;
  struct std__allocator_unsigned_int_* t227 = __a224;
  unsigned long t228 = __n225;
  unsigned int* r229 = std__allocator_unsigned_int___allocate(t227, t228);
  __retval226 = r229;
  unsigned int* t230 = __retval226;
  return t230;
}

// function: _ZNSt12_Vector_baseIjSaIjEE11_M_allocateEm
unsigned int* std___Vector_base_unsigned_int__std__allocator_unsigned_int______M_allocate(struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__* v231, unsigned long v232) {
bb233:
  struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__* this234;
  unsigned long __n235;
  unsigned int* __retval236;
  this234 = v231;
  __n235 = v232;
  struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__* t237 = this234;
  unsigned long t238 = __n235;
  unsigned long c239 = 0;
  _Bool c240 = ((t238 != c239)) ? 1 : 0;
  unsigned int* ternary241;
  if (c240) {
    struct std__allocator_unsigned_int_* base242 = (struct std__allocator_unsigned_int_*)((char *)&(t237->_M_impl) + 0);
    unsigned long t243 = __n235;
    unsigned int* r244 = std__allocator_traits_std__allocator_unsigned_int_____allocate(base242, t243);
    ternary241 = (unsigned int*)r244;
  } else {
    unsigned int* c245 = ((void*)0);
    ternary241 = (unsigned int*)c245;
  }
  __retval236 = ternary241;
  unsigned int* t246 = __retval236;
  return t246;
}

// function: _ZNSt6vectorIjSaIjEE12_Guard_allocC2EPjmRSt12_Vector_baseIjS0_E
void std__vector_unsigned_int__std__allocator_unsigned_int______Guard_alloc___Guard_alloc(struct std__vector_unsigned_int__std__allocator_unsigned_int_____Guard_alloc* v247, unsigned int* v248, unsigned long v249, struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__* v250) {
bb251:
  struct std__vector_unsigned_int__std__allocator_unsigned_int_____Guard_alloc* this252;
  unsigned int* __s253;
  unsigned long __l254;
  struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__* __vect255;
  this252 = v247;
  __s253 = v248;
  __l254 = v249;
  __vect255 = v250;
  struct std__vector_unsigned_int__std__allocator_unsigned_int_____Guard_alloc* t256 = this252;
  unsigned int* t257 = __s253;
  t256->_M_storage = t257;
  unsigned long t258 = __l254;
  t256->_M_len = t258;
  struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__* t259 = __vect255;
  t256->_M_vect = t259;
  return;
}

// function: _ZSt10to_addressIjEPT_S1_
unsigned int* unsigned_int__std__to_address_unsigned_int_(unsigned int* v260) {
bb261:
  unsigned int* __ptr262;
  unsigned int* __retval263;
  __ptr262 = v260;
  unsigned int* t264 = __ptr262;
  __retval263 = t264;
  unsigned int* t265 = __retval263;
  return t265;
}

// function: _ZSt12__to_addressIPjEDaRKT_
unsigned int* auto_std____to_address_unsigned_int__(unsigned int** v266) {
bb267:
  unsigned int** __ptr268;
  unsigned int* __retval269;
  __ptr268 = v266;
  unsigned int** t270 = __ptr268;
  unsigned int* t271 = *t270;
  unsigned int* r272 = unsigned_int__std__to_address_unsigned_int_(t271);
  __retval269 = r272;
  unsigned int* t273 = __retval269;
  return t273;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb274:
  _Bool __retval275;
    _Bool c276 = 0;
    __retval275 = c276;
    _Bool t277 = __retval275;
    return t277;
  abort();
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPjvEC2ERKS1_
void __gnu_cxx____normal_iterator_unsigned_int___void_____normal_iterator(struct __gnu_cxx____normal_iterator_unsigned_int____void_* v278, unsigned int** v279) {
bb280:
  struct __gnu_cxx____normal_iterator_unsigned_int____void_* this281;
  unsigned int** __i282;
  this281 = v278;
  __i282 = v279;
  struct __gnu_cxx____normal_iterator_unsigned_int____void_* t283 = this281;
  unsigned int** t284 = __i282;
  unsigned int* t285 = *t284;
  t283->_M_current = t285;
  return;
}

// function: _ZSt12construct_atIjJjEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
unsigned int* _ZSt12construct_atIjJjEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(unsigned int* v286, unsigned int* v287) {
bb288:
  unsigned int* __location289;
  unsigned int* __args290;
  unsigned int* __retval291;
  void* __loc292;
  __location289 = v286;
  __args290 = v287;
  unsigned int* t293 = __location289;
  void* cast294 = (void*)t293;
  __loc292 = cast294;
    void* t295 = __loc292;
    unsigned int* cast296 = (unsigned int*)t295;
    unsigned int* t297 = __args290;
    unsigned int t298 = *t297;
    *cast296 = t298;
    __retval291 = cast296;
    unsigned int* t299 = __retval291;
    return t299;
  abort();
}

// function: _ZNSt16allocator_traitsISaIjEE9constructIjJjEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_unsigned_int_____construct_unsigned_int__unsigned_int_(struct std__allocator_unsigned_int_* v300, unsigned int* v301, unsigned int* v302) {
bb303:
  struct std__allocator_unsigned_int_* __a304;
  unsigned int* __p305;
  unsigned int* __args306;
  __a304 = v300;
  __p305 = v301;
  __args306 = v302;
  unsigned int* t307 = __p305;
  unsigned int* t308 = __args306;
  unsigned int* r309 = _ZSt12construct_atIjJjEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t307, t308);
  return;
}

// function: _ZSt10destroy_atIjEvPT_
void void_std__destroy_at_unsigned_int_(unsigned int* v310) {
bb311:
  unsigned int* __location312;
  __location312 = v310;
  return;
}

// function: _ZNSt16allocator_traitsISaIjEE7destroyIjEEvRS0_PT_
void void_std__allocator_traits_std__allocator_unsigned_int_____destroy_unsigned_int_(struct std__allocator_unsigned_int_* v313, unsigned int* v314) {
bb315:
  struct std__allocator_unsigned_int_* __a316;
  unsigned int* __p317;
  __a316 = v313;
  __p317 = v314;
  unsigned int* t318 = __p317;
  void_std__destroy_at_unsigned_int_(t318);
  return;
}

// function: _ZSt19__relocate_object_aIjjSaIjEEvPT_PT0_RT1_
void void_std____relocate_object_a_unsigned_int__unsigned_int__std__allocator_unsigned_int___(unsigned int* v319, unsigned int* v320, struct std__allocator_unsigned_int_* v321) {
bb322:
  unsigned int* __dest323;
  unsigned int* __orig324;
  struct std__allocator_unsigned_int_* __alloc325;
  __dest323 = v319;
  __orig324 = v320;
  __alloc325 = v321;
  struct std__allocator_unsigned_int_* t326 = __alloc325;
  unsigned int* t327 = __dest323;
  unsigned int* t328 = __orig324;
  void_std__allocator_traits_std__allocator_unsigned_int_____construct_unsigned_int__unsigned_int_(t326, t327, t328);
  struct std__allocator_unsigned_int_* t329 = __alloc325;
  unsigned int* t330 = __orig324;
  void_std__allocator_traits_std__allocator_unsigned_int_____destroy_unsigned_int_(t329, t330);
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPjvEdeEv
unsigned int* __gnu_cxx____normal_iterator_unsigned_int___void___operator____const(struct __gnu_cxx____normal_iterator_unsigned_int____void_* v331) {
bb332:
  struct __gnu_cxx____normal_iterator_unsigned_int____void_* this333;
  unsigned int* __retval334;
  this333 = v331;
  struct __gnu_cxx____normal_iterator_unsigned_int____void_* t335 = this333;
  unsigned int* t336 = t335->_M_current;
  __retval334 = t336;
  unsigned int* t337 = __retval334;
  return t337;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPjvEppEv
struct __gnu_cxx____normal_iterator_unsigned_int____void_* __gnu_cxx____normal_iterator_unsigned_int___void___operator__(struct __gnu_cxx____normal_iterator_unsigned_int____void_* v338) {
bb339:
  struct __gnu_cxx____normal_iterator_unsigned_int____void_* this340;
  struct __gnu_cxx____normal_iterator_unsigned_int____void_* __retval341;
  this340 = v338;
  struct __gnu_cxx____normal_iterator_unsigned_int____void_* t342 = this340;
  unsigned int* t343 = t342->_M_current;
  int c344 = 1;
  unsigned int* ptr345 = &(t343)[c344];
  t342->_M_current = ptr345;
  __retval341 = t342;
  struct __gnu_cxx____normal_iterator_unsigned_int____void_* t346 = __retval341;
  return t346;
}

// function: _ZSt14__relocate_a_1IPjN9__gnu_cxx17__normal_iteratorIS0_vEESaIjEET0_T_S6_S5_RT1_
struct __gnu_cxx____normal_iterator_unsigned_int____void_ __gnu_cxx____normal_iterator_unsigned_int___void__std____relocate_a_1_unsigned_int_____gnu_cxx____normal_iterator_unsigned_int___void___std__allocator_unsigned_int___(unsigned int* v347, unsigned int* v348, struct __gnu_cxx____normal_iterator_unsigned_int____void_ v349, struct std__allocator_unsigned_int_* v350) {
bb351:
  unsigned int* __first352;
  unsigned int* __last353;
  struct __gnu_cxx____normal_iterator_unsigned_int____void_ __result354;
  struct std__allocator_unsigned_int_* __alloc355;
  struct __gnu_cxx____normal_iterator_unsigned_int____void_ __retval356;
  __first352 = v347;
  __last353 = v348;
  __result354 = v349;
  __alloc355 = v350;
  __retval356 = __result354; // copy
    while (1) {
      unsigned int* t358 = __first352;
      unsigned int* t359 = __last353;
      _Bool c360 = ((t358 != t359)) ? 1 : 0;
      if (!c360) break;
      unsigned int* r361 = __gnu_cxx____normal_iterator_unsigned_int___void___operator____const(&__retval356);
      unsigned int* t362 = __first352;
      struct std__allocator_unsigned_int_* t363 = __alloc355;
      void_std____relocate_object_a_unsigned_int__unsigned_int__std__allocator_unsigned_int___(r361, t362, t363);
    for_step357: ;
      unsigned int* t364 = __first352;
      int c365 = 1;
      unsigned int* ptr366 = &(t364)[c365];
      __first352 = ptr366;
      struct __gnu_cxx____normal_iterator_unsigned_int____void_* r367 = __gnu_cxx____normal_iterator_unsigned_int___void___operator__(&__retval356);
    }
  struct __gnu_cxx____normal_iterator_unsigned_int____void_ t368 = __retval356;
  return t368;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPjvEaSEOS2_
struct __gnu_cxx____normal_iterator_unsigned_int____void_* __gnu_cxx____normal_iterator_unsigned_int___void___operator_(struct __gnu_cxx____normal_iterator_unsigned_int____void_* v369, struct __gnu_cxx____normal_iterator_unsigned_int____void_* v370) {
bb371:
  struct __gnu_cxx____normal_iterator_unsigned_int____void_* this372;
  struct __gnu_cxx____normal_iterator_unsigned_int____void_* unnamed373;
  struct __gnu_cxx____normal_iterator_unsigned_int____void_* __retval374;
  this372 = v369;
  unnamed373 = v370;
  struct __gnu_cxx____normal_iterator_unsigned_int____void_* t375 = this372;
  struct __gnu_cxx____normal_iterator_unsigned_int____void_* t376 = unnamed373;
  unsigned int* t377 = t376->_M_current;
  t375->_M_current = t377;
  __retval374 = t375;
  struct __gnu_cxx____normal_iterator_unsigned_int____void_* t378 = __retval374;
  return t378;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPjvE4baseEv
unsigned int** __gnu_cxx____normal_iterator_unsigned_int___void___base___const(struct __gnu_cxx____normal_iterator_unsigned_int____void_* v379) {
bb380:
  struct __gnu_cxx____normal_iterator_unsigned_int____void_* this381;
  unsigned int** __retval382;
  this381 = v379;
  struct __gnu_cxx____normal_iterator_unsigned_int____void_* t383 = this381;
  __retval382 = &t383->_M_current;
  unsigned int** t384 = __retval382;
  return t384;
}

// function: _ZSt14__relocate_a_1IjjENSt9enable_ifIXsr3std24__is_bitwise_relocatableIT_EE5valueEPS1_E4typeES2_S2_S2_RSaIT0_E
unsigned int* std__enable_if_std____is_bitwise_relocatable_unsigned_int___value__unsigned_int____type_std____relocate_a_1_unsigned_int__unsigned_int_(unsigned int* v385, unsigned int* v386, unsigned int* v387, struct std__allocator_unsigned_int_* v388) {
bb389:
  unsigned int* __first390;
  unsigned int* __last391;
  unsigned int* __result392;
  struct std__allocator_unsigned_int_* __alloc393;
  unsigned int* __retval394;
  long __count395;
  __first390 = v385;
  __last391 = v386;
  __result392 = v387;
  __alloc393 = v388;
  unsigned int* t396 = __last391;
  unsigned int* t397 = __first390;
  long diff398 = t396 - t397;
  __count395 = diff398;
    long t399 = __count395;
    long c400 = 0;
    _Bool c401 = ((t399 > c400)) ? 1 : 0;
    if (c401) {
        _Bool r402 = std__is_constant_evaluated();
        if (r402) {
          struct __gnu_cxx____normal_iterator_unsigned_int____void_ __out403;
          struct __gnu_cxx____normal_iterator_unsigned_int____void_ ref_tmp0404;
          struct __gnu_cxx____normal_iterator_unsigned_int____void_ agg_tmp0405;
          __gnu_cxx____normal_iterator_unsigned_int___void_____normal_iterator(&__out403, &__result392);
          unsigned int* t406 = __first390;
          unsigned int* t407 = __last391;
          agg_tmp0405 = __out403; // copy
          struct std__allocator_unsigned_int_* t408 = __alloc393;
          struct __gnu_cxx____normal_iterator_unsigned_int____void_ t409 = agg_tmp0405;
          struct __gnu_cxx____normal_iterator_unsigned_int____void_ r410 = __gnu_cxx____normal_iterator_unsigned_int___void__std____relocate_a_1_unsigned_int_____gnu_cxx____normal_iterator_unsigned_int___void___std__allocator_unsigned_int___(t406, t407, t409, t408);
          ref_tmp0404 = r410;
          struct __gnu_cxx____normal_iterator_unsigned_int____void_* r411 = __gnu_cxx____normal_iterator_unsigned_int___void___operator_(&__out403, &ref_tmp0404);
          unsigned int** r412 = __gnu_cxx____normal_iterator_unsigned_int___void___base___const(&__out403);
          unsigned int* t413 = *r412;
          __retval394 = t413;
          unsigned int* t414 = __retval394;
          return t414;
        }
      unsigned int* t415 = __result392;
      void* cast416 = (void*)t415;
      unsigned int* t417 = __first390;
      void* cast418 = (void*)t417;
      long t419 = __count395;
      unsigned long cast420 = (unsigned long)t419;
      unsigned long c421 = 4;
      unsigned long b422 = cast420 * c421;
      void* r423 = memcpy(cast416, cast418, b422);
    }
  unsigned int* t424 = __result392;
  long t425 = __count395;
  unsigned int* ptr426 = &(t424)[t425];
  __retval394 = ptr426;
  unsigned int* t427 = __retval394;
  return t427;
}

// function: _ZSt12__niter_baseIPjET_S1_
unsigned int* unsigned_int__std____niter_base_unsigned_int__(unsigned int* v428) {
bb429:
  unsigned int* __it430;
  unsigned int* __retval431;
  __it430 = v428;
  unsigned int* t432 = __it430;
  __retval431 = t432;
  unsigned int* t433 = __retval431;
  return t433;
}

// function: _ZSt12__relocate_aIPjS0_SaIjEET0_T_S3_S2_RT1_
unsigned int* unsigned_int__std____relocate_a_unsigned_int___unsigned_int___std__allocator_unsigned_int___(unsigned int* v434, unsigned int* v435, unsigned int* v436, struct std__allocator_unsigned_int_* v437) {
bb438:
  unsigned int* __first439;
  unsigned int* __last440;
  unsigned int* __result441;
  struct std__allocator_unsigned_int_* __alloc442;
  unsigned int* __retval443;
  __first439 = v434;
  __last440 = v435;
  __result441 = v436;
  __alloc442 = v437;
  unsigned int* t444 = __first439;
  unsigned int* r445 = unsigned_int__std____niter_base_unsigned_int__(t444);
  unsigned int* t446 = __last440;
  unsigned int* r447 = unsigned_int__std____niter_base_unsigned_int__(t446);
  unsigned int* t448 = __result441;
  unsigned int* r449 = unsigned_int__std____niter_base_unsigned_int__(t448);
  struct std__allocator_unsigned_int_* t450 = __alloc442;
  unsigned int* r451 = std__enable_if_std____is_bitwise_relocatable_unsigned_int___value__unsigned_int____type_std____relocate_a_1_unsigned_int__unsigned_int_(r445, r447, r449, t450);
  __retval443 = r451;
  unsigned int* t452 = __retval443;
  return t452;
}

// function: _ZNSt6vectorIjSaIjEE11_S_relocateEPjS2_S2_RS0_
unsigned int* std__vector_unsigned_int__std__allocator_unsigned_int______S_relocate(unsigned int* v453, unsigned int* v454, unsigned int* v455, struct std__allocator_unsigned_int_* v456) {
bb457:
  unsigned int* __first458;
  unsigned int* __last459;
  unsigned int* __result460;
  struct std__allocator_unsigned_int_* __alloc461;
  unsigned int* __retval462;
  __first458 = v453;
  __last459 = v454;
  __result460 = v455;
  __alloc461 = v456;
  unsigned int* t463 = __first458;
  unsigned int* t464 = __last459;
  unsigned int* t465 = __result460;
  struct std__allocator_unsigned_int_* t466 = __alloc461;
  unsigned int* r467 = unsigned_int__std____relocate_a_unsigned_int___unsigned_int___std__allocator_unsigned_int___(t463, t464, t465, t466);
  __retval462 = r467;
  unsigned int* t468 = __retval462;
  return t468;
}

// function: _ZNSt12_Vector_baseIjSaIjEE19_M_get_Tp_allocatorEv
struct std__allocator_unsigned_int_* std___Vector_base_unsigned_int__std__allocator_unsigned_int______M_get_Tp_allocator(struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__* v469) {
bb470:
  struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__* this471;
  struct std__allocator_unsigned_int_* __retval472;
  this471 = v469;
  struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__* t473 = this471;
  struct std__allocator_unsigned_int_* base474 = (struct std__allocator_unsigned_int_*)((char *)&(t473->_M_impl) + 0);
  __retval472 = base474;
  struct std__allocator_unsigned_int_* t475 = __retval472;
  return t475;
}

// function: _ZNSt6vectorIjSaIjEE12_Guard_allocD2Ev
void std__vector_unsigned_int__std__allocator_unsigned_int______Guard_alloc____Guard_alloc(struct std__vector_unsigned_int__std__allocator_unsigned_int_____Guard_alloc* v476) {
bb477:
  struct std__vector_unsigned_int__std__allocator_unsigned_int_____Guard_alloc* this478;
  this478 = v476;
  struct std__vector_unsigned_int__std__allocator_unsigned_int_____Guard_alloc* t479 = this478;
    unsigned int* t480 = t479->_M_storage;
    _Bool cast481 = (_Bool)t480;
    if (cast481) {
      struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__* t482 = t479->_M_vect;
      unsigned int* t483 = t479->_M_storage;
      unsigned long t484 = t479->_M_len;
      std___Vector_base_unsigned_int__std__allocator_unsigned_int______M_deallocate(t482, t483, t484);
    }
  return;
}

// function: _ZNSt6vectorIjSaIjEE17_M_realloc_appendIJRKjEEEvDpOT_
void void_std__vector_unsigned_int__std__allocator_unsigned_int______M_realloc_append_unsigned_int_const__(struct std__vector_unsigned_int__std__allocator_unsigned_int__* v485, unsigned int* v486) {
bb487:
  struct std__vector_unsigned_int__std__allocator_unsigned_int__* this488;
  unsigned int* __args489;
  unsigned long __len490;
  unsigned int* __old_start491;
  unsigned int* __old_finish492;
  unsigned long __elems493;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ ref_tmp0494;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ ref_tmp1495;
  unsigned int* __new_start496;
  unsigned int* __new_finish497;
  this488 = v485;
  __args489 = v486;
  struct std__vector_unsigned_int__std__allocator_unsigned_int__* t498 = this488;
  unsigned long c499 = 1;
  char* cast500 = (char*)&(_str_2);
  unsigned long r501 = std__vector_unsigned_int__std__allocator_unsigned_int______M_check_len_unsigned_long__char_const___const(t498, c499, cast500);
  __len490 = r501;
    unsigned long t502 = __len490;
    unsigned long c503 = 0;
    _Bool c504 = ((t502 <= c503)) ? 1 : 0;
    if (c504) {
      __builtin_unreachable();
    }
  struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__* base505 = (struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t498 + 0);
  struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl_data* base506 = (struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl_data*)((char *)&(base505->_M_impl) + 0);
  unsigned int* t507 = base506->_M_start;
  __old_start491 = t507;
  struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__* base508 = (struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t498 + 0);
  struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl_data* base509 = (struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl_data*)((char *)&(base508->_M_impl) + 0);
  unsigned int* t510 = base509->_M_finish;
  __old_finish492 = t510;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ r511 = std__vector_unsigned_int__std__allocator_unsigned_int_____end(t498);
  ref_tmp0494 = r511;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ r512 = std__vector_unsigned_int__std__allocator_unsigned_int_____begin(t498);
  ref_tmp1495 = r512;
  long r513 = __gnu_cxx____normal_iterator_unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int_______difference_type___gnu_cxx__operator__unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int_____(&ref_tmp0494, &ref_tmp1495);
  unsigned long cast514 = (unsigned long)r513;
  __elems493 = cast514;
  struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__* base515 = (struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t498 + 0);
  unsigned long t516 = __len490;
  unsigned int* r517 = std___Vector_base_unsigned_int__std__allocator_unsigned_int______M_allocate(base515, t516);
  __new_start496 = r517;
  unsigned int* t518 = __new_start496;
  __new_finish497 = t518;
    struct std__vector_unsigned_int__std__allocator_unsigned_int_____Guard_alloc __guard519;
    unsigned int* ref_tmp2520;
    unsigned int* t521 = __new_start496;
    unsigned long t522 = __len490;
    struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__* base523 = (struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t498 + 0);
    std__vector_unsigned_int__std__allocator_unsigned_int______Guard_alloc___Guard_alloc(&__guard519, t521, t522, base523);
      struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__* base524 = (struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t498 + 0);
      struct std__allocator_unsigned_int_* base525 = (struct std__allocator_unsigned_int_*)((char *)&(base524->_M_impl) + 0);
      unsigned int* t526 = __new_start496;
      unsigned long t527 = __elems493;
      unsigned int* ptr528 = &(t526)[t527];
      ref_tmp2520 = ptr528;
      unsigned int* r529 = auto_std____to_address_unsigned_int__(&ref_tmp2520);
      unsigned int* t530 = __args489;
      void_std__allocator_traits_std__allocator_unsigned_int_____construct_unsigned_int__unsigned_int_const__(base525, r529, t530);
        unsigned int* t531 = __old_start491;
        unsigned int* t532 = __old_finish492;
        unsigned int* t533 = __new_start496;
        struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__* base534 = (struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t498 + 0);
        struct std__allocator_unsigned_int_* r535 = std___Vector_base_unsigned_int__std__allocator_unsigned_int______M_get_Tp_allocator(base534);
        unsigned int* r536 = std__vector_unsigned_int__std__allocator_unsigned_int______S_relocate(t531, t532, t533, r535);
        __new_finish497 = r536;
        unsigned int* t537 = __new_finish497;
        int c538 = 1;
        unsigned int* ptr539 = &(t537)[c538];
        __new_finish497 = ptr539;
      unsigned int* t540 = __old_start491;
      __guard519._M_storage = t540;
      struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__* base541 = (struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t498 + 0);
      struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl_data* base542 = (struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl_data*)((char *)&(base541->_M_impl) + 0);
      unsigned int* t543 = base542->_M_end_of_storage;
      unsigned int* t544 = __old_start491;
      long diff545 = t543 - t544;
      unsigned long cast546 = (unsigned long)diff545;
      __guard519._M_len = cast546;
    {
      std__vector_unsigned_int__std__allocator_unsigned_int______Guard_alloc____Guard_alloc(&__guard519);
    }
  unsigned int* t547 = __new_start496;
  struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__* base548 = (struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t498 + 0);
  struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl_data* base549 = (struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl_data*)((char *)&(base548->_M_impl) + 0);
  base549->_M_start = t547;
  unsigned int* t550 = __new_finish497;
  struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__* base551 = (struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t498 + 0);
  struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl_data* base552 = (struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl_data*)((char *)&(base551->_M_impl) + 0);
  base552->_M_finish = t550;
  unsigned int* t553 = __new_start496;
  unsigned long t554 = __len490;
  unsigned int* ptr555 = &(t553)[t554];
  struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__* base556 = (struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t498 + 0);
  struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl_data* base557 = (struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl_data*)((char *)&(base556->_M_impl) + 0);
  base557->_M_end_of_storage = ptr555;
  return;
}

// function: _ZNSt6vectorIjSaIjEE9push_backERKj
void std__vector_unsigned_int__std__allocator_unsigned_int_____push_back(struct std__vector_unsigned_int__std__allocator_unsigned_int__* v558, unsigned int* v559) {
bb560:
  struct std__vector_unsigned_int__std__allocator_unsigned_int__* this561;
  unsigned int* __x562;
  this561 = v558;
  __x562 = v559;
  struct std__vector_unsigned_int__std__allocator_unsigned_int__* t563 = this561;
    struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__* base564 = (struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t563 + 0);
    struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl_data* base565 = (struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl_data*)((char *)&(base564->_M_impl) + 0);
    unsigned int* t566 = base565->_M_finish;
    struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__* base567 = (struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t563 + 0);
    struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl_data* base568 = (struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl_data*)((char *)&(base567->_M_impl) + 0);
    unsigned int* t569 = base568->_M_end_of_storage;
    _Bool c570 = ((t566 != t569)) ? 1 : 0;
    if (c570) {
      struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__* base571 = (struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t563 + 0);
      struct std__allocator_unsigned_int_* base572 = (struct std__allocator_unsigned_int_*)((char *)&(base571->_M_impl) + 0);
      struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__* base573 = (struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t563 + 0);
      struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl_data* base574 = (struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl_data*)((char *)&(base573->_M_impl) + 0);
      unsigned int* t575 = base574->_M_finish;
      unsigned int* t576 = __x562;
      void_std__allocator_traits_std__allocator_unsigned_int_____construct_unsigned_int__unsigned_int_const__(base572, t575, t576);
      struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__* base577 = (struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t563 + 0);
      struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl_data* base578 = (struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl_data*)((char *)&(base577->_M_impl) + 0);
      unsigned int* t579 = base578->_M_finish;
      int c580 = 1;
      unsigned int* ptr581 = &(t579)[c580];
      base578->_M_finish = ptr581;
    } else {
      unsigned int* t582 = __x562;
      void_std__vector_unsigned_int__std__allocator_unsigned_int______M_realloc_append_unsigned_int_const__(t563, t582);
    }
  return;
}

// function: _ZN9__gnu_cxxeqIPjSt6vectorIjSaIjEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPjSt6vectorIjSaIjEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___* v583, struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___* v584) {
bb585:
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___* __lhs586;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___* __rhs587;
  _Bool __retval588;
  __lhs586 = v583;
  __rhs587 = v584;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___* t589 = __lhs586;
  unsigned int** r590 = __gnu_cxx____normal_iterator_unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int_______base___const(t589);
  unsigned int* t591 = *r590;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___* t592 = __rhs587;
  unsigned int** r593 = __gnu_cxx____normal_iterator_unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int_______base___const(t592);
  unsigned int* t594 = *r593;
  _Bool c595 = ((t591 == t594)) ? 1 : 0;
  __retval588 = c595;
  _Bool t596 = __retval588;
  return t596;
}

// function: _ZSt12__niter_wrapIN9__gnu_cxx17__normal_iteratorIPjSt6vectorIjSaIjEEEES2_ET_S7_T0_
struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ __gnu_cxx____normal_iterator_unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int______std____niter_wrap___gnu_cxx____normal_iterator_unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int_______unsigned_int__(struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ v597, unsigned int* v598) {
bb599:
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ __from600;
  unsigned int* __res601;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ __retval602;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ agg_tmp0603;
  __from600 = v597;
  __res601 = v598;
  unsigned int* t604 = __res601;
  unsigned int* r605 = unsigned_int__std____niter_base_unsigned_int__(t604);
  agg_tmp0603 = __from600; // copy
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ t606 = agg_tmp0603;
  unsigned int* r607 = unsigned_int__std____niter_base_unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int_____(t606);
  long diff608 = r605 - r607;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ r609 = __gnu_cxx____normal_iterator_unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int_______operator__long__const(&__from600, diff608);
  __retval602 = r609;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ t610 = __retval602;
  return t610;
}

// function: _ZSt10__distanceIPjENSt15iterator_traitsIT_E15difference_typeES2_S2_St26random_access_iterator_tag
long std__iterator_traits_unsigned_int____difference_type_std____distance_unsigned_int__(unsigned int* v611, unsigned int* v612, struct std__random_access_iterator_tag v613) {
bb614:
  unsigned int* __first615;
  unsigned int* __last616;
  struct std__random_access_iterator_tag unnamed617;
  long __retval618;
  __first615 = v611;
  __last616 = v612;
  unnamed617 = v613;
  unsigned int* t619 = __last616;
  unsigned int* t620 = __first615;
  long diff621 = t619 - t620;
  __retval618 = diff621;
  long t622 = __retval618;
  return t622;
}

// function: _ZSt19__iterator_categoryIPjENSt15iterator_traitsIT_E17iterator_categoryERKS2_
struct std__random_access_iterator_tag std__iterator_traits_unsigned_int____iterator_category_std____iterator_category_unsigned_int__(unsigned int** v623) {
bb624:
  unsigned int** unnamed625;
  struct std__random_access_iterator_tag __retval626;
  unnamed625 = v623;
  struct std__random_access_iterator_tag t627 = __retval626;
  return t627;
}

// function: _ZSt8distanceIPjENSt15iterator_traitsIT_E15difference_typeES2_S2_
long std__iterator_traits_unsigned_int____difference_type_std__distance_unsigned_int__(unsigned int* v628, unsigned int* v629) {
bb630:
  unsigned int* __first631;
  unsigned int* __last632;
  long __retval633;
  struct std__random_access_iterator_tag agg_tmp0634;
  __first631 = v628;
  __last632 = v629;
  unsigned int* t635 = __first631;
  unsigned int* t636 = __last632;
  struct std__random_access_iterator_tag r637 = std__iterator_traits_unsigned_int____iterator_category_std____iterator_category_unsigned_int__(&__first631);
  agg_tmp0634 = r637;
  struct std__random_access_iterator_tag t638 = agg_tmp0634;
  long r639 = std__iterator_traits_unsigned_int____difference_type_std____distance_unsigned_int__(t635, t636, t638);
  __retval633 = r639;
  long t640 = __retval633;
  return t640;
}

// function: _ZSt12__assign_oneILb1EPjS0_EvRT0_RT1_
void void_std____assign_one_true__unsigned_int___unsigned_int__(unsigned int** v641, unsigned int** v642) {
bb643:
  unsigned int** __out644;
  unsigned int** __in645;
  __out644 = v641;
  __in645 = v642;
    unsigned int** t646 = __in645;
    unsigned int* t647 = *t646;
    unsigned int t648 = *t647;
    unsigned int** t649 = __out644;
    unsigned int* t650 = *t649;
    *t650 = t648;
  return;
}

// function: _ZSt14__copy_move_a2ILb1EPjS0_S0_ET2_T0_T1_S1_
unsigned int* unsigned_int__std____copy_move_a2_true__unsigned_int___unsigned_int___unsigned_int__(unsigned int* v651, unsigned int* v652, unsigned int* v653) {
bb654:
  unsigned int* __first655;
  unsigned int* __last656;
  unsigned int* __result657;
  unsigned int* __retval658;
  __first655 = v651;
  __last656 = v652;
  __result657 = v653;
      _Bool r659 = std____is_constant_evaluated();
      if (r659) {
      } else {
          long __n660;
          unsigned int* t661 = __first655;
          unsigned int* t662 = __last656;
          long r663 = std__iterator_traits_unsigned_int____difference_type_std__distance_unsigned_int__(t661, t662);
          __n660 = r663;
            long t664 = __n660;
            long c665 = 1;
            _Bool c666 = ((t664 > c665)) ? 1 : 0;
            if (c666) {
              unsigned int* t667 = __result657;
              void* cast668 = (void*)t667;
              unsigned int* t669 = __first655;
              void* cast670 = (void*)t669;
              long t671 = __n660;
              unsigned long cast672 = (unsigned long)t671;
              unsigned long c673 = 4;
              unsigned long b674 = cast672 * c673;
              void* r675 = memmove(cast668, cast670, b674);
              long t676 = __n660;
              unsigned int* t677 = __result657;
              unsigned int* ptr678 = &(t677)[t676];
              __result657 = ptr678;
            } else {
                long t679 = __n660;
                long c680 = 1;
                _Bool c681 = ((t679 == c680)) ? 1 : 0;
                if (c681) {
                  void_std____assign_one_true__unsigned_int___unsigned_int__(&__result657, &__first655);
                  unsigned int* t682 = __result657;
                  int c683 = 1;
                  unsigned int* ptr684 = &(t682)[c683];
                  __result657 = ptr684;
                }
            }
          unsigned int* t685 = __result657;
          __retval658 = t685;
          unsigned int* t686 = __retval658;
          return t686;
      }
    while (1) {
      unsigned int* t688 = __first655;
      unsigned int* t689 = __last656;
      _Bool c690 = ((t688 != t689)) ? 1 : 0;
      if (!c690) break;
      void_std____assign_one_true__unsigned_int___unsigned_int__(&__result657, &__first655);
    for_step687: ;
      unsigned int* t691 = __result657;
      int c692 = 1;
      unsigned int* ptr693 = &(t691)[c692];
      __result657 = ptr693;
      unsigned int* t694 = __first655;
      int c695 = 1;
      unsigned int* ptr696 = &(t694)[c695];
      __first655 = ptr696;
    }
  unsigned int* t697 = __result657;
  __retval658 = t697;
  unsigned int* t698 = __retval658;
  return t698;
}

// function: _ZSt14__copy_move_a1ILb1EPjS0_ET1_T0_S2_S1_
unsigned int* unsigned_int__std____copy_move_a1_true__unsigned_int___unsigned_int__(unsigned int* v699, unsigned int* v700, unsigned int* v701) {
bb702:
  unsigned int* __first703;
  unsigned int* __last704;
  unsigned int* __result705;
  unsigned int* __retval706;
  __first703 = v699;
  __last704 = v700;
  __result705 = v701;
  unsigned int* t707 = __first703;
  unsigned int* t708 = __last704;
  unsigned int* t709 = __result705;
  unsigned int* r710 = unsigned_int__std____copy_move_a2_true__unsigned_int___unsigned_int___unsigned_int__(t707, t708, t709);
  __retval706 = r710;
  unsigned int* t711 = __retval706;
  return t711;
}

// function: _ZSt12__niter_baseIPjSt6vectorIjSaIjEEET_N9__gnu_cxx17__normal_iteratorIS4_T0_EE
unsigned int* unsigned_int__std____niter_base_unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int_____(struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ v712) {
bb713:
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ __it714;
  unsigned int* __retval715;
  __it714 = v712;
  unsigned int** r716 = __gnu_cxx____normal_iterator_unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int_______base___const(&__it714);
  unsigned int* t717 = *r716;
  __retval715 = t717;
  unsigned int* t718 = __retval715;
  return t718;
}

// function: _ZSt13__copy_move_aILb1EN9__gnu_cxx17__normal_iteratorIPjSt6vectorIjSaIjEEEES6_ET1_T0_S8_S7_
struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ __gnu_cxx____normal_iterator_unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int______std____copy_move_a_true____gnu_cxx____normal_iterator_unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int_________gnu_cxx____normal_iterator_unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int_______(struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ v719, struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ v720, struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ v721) {
bb722:
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ __first723;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ __last724;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ __result725;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ __retval726;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ agg_tmp0727;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ agg_tmp1728;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ agg_tmp2729;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ agg_tmp3730;
  __first723 = v719;
  __last724 = v720;
  __result725 = v721;
  agg_tmp0727 = __result725; // copy
  agg_tmp1728 = __first723; // copy
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ t731 = agg_tmp1728;
  unsigned int* r732 = unsigned_int__std____niter_base_unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int_____(t731);
  agg_tmp2729 = __last724; // copy
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ t733 = agg_tmp2729;
  unsigned int* r734 = unsigned_int__std____niter_base_unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int_____(t733);
  agg_tmp3730 = __result725; // copy
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ t735 = agg_tmp3730;
  unsigned int* r736 = unsigned_int__std____niter_base_unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int_____(t735);
  unsigned int* r737 = unsigned_int__std____copy_move_a1_true__unsigned_int___unsigned_int__(r732, r734, r736);
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ t738 = agg_tmp0727;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ r739 = __gnu_cxx____normal_iterator_unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int______std____niter_wrap___gnu_cxx____normal_iterator_unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int_______unsigned_int__(t738, r737);
  __retval726 = r739;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ t740 = __retval726;
  return t740;
}

// function: _ZSt12__miter_baseIN9__gnu_cxx17__normal_iteratorIPjSt6vectorIjSaIjEEEEET_S7_
struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ __gnu_cxx____normal_iterator_unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int______std____miter_base___gnu_cxx____normal_iterator_unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int_______(struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ v741) {
bb742:
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ __it743;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ __retval744;
  __it743 = v741;
  __retval744 = __it743; // copy
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ t745 = __retval744;
  return t745;
}

// function: _ZSt4moveIN9__gnu_cxx17__normal_iteratorIPjSt6vectorIjSaIjEEEES6_ET0_T_S8_S7_
struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ __gnu_cxx____normal_iterator_unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int______std__move___gnu_cxx____normal_iterator_unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int_________gnu_cxx____normal_iterator_unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int_______(struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ v746, struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ v747, struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ v748) {
bb749:
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ __first750;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ __last751;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ __result752;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ __retval753;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ agg_tmp0754;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ agg_tmp1755;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ agg_tmp2756;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ agg_tmp3757;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ agg_tmp4758;
  __first750 = v746;
  __last751 = v747;
  __result752 = v748;
  agg_tmp1755 = __first750; // copy
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ t759 = agg_tmp1755;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ r760 = __gnu_cxx____normal_iterator_unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int______std____miter_base___gnu_cxx____normal_iterator_unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int_______(t759);
  agg_tmp0754 = r760;
  agg_tmp3757 = __last751; // copy
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ t761 = agg_tmp3757;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ r762 = __gnu_cxx____normal_iterator_unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int______std____miter_base___gnu_cxx____normal_iterator_unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int_______(t761);
  agg_tmp2756 = r762;
  agg_tmp4758 = __result752; // copy
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ t763 = agg_tmp0754;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ t764 = agg_tmp2756;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ t765 = agg_tmp4758;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ r766 = __gnu_cxx____normal_iterator_unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int______std____copy_move_a_true____gnu_cxx____normal_iterator_unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int_________gnu_cxx____normal_iterator_unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int_______(t763, t764, t765);
  __retval753 = r766;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ t767 = __retval753;
  return t767;
}

// function: _ZNSt6vectorIjSaIjEE8_M_eraseEN9__gnu_cxx17__normal_iteratorIPjS1_EE
struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ std__vector_unsigned_int__std__allocator_unsigned_int______M_erase(struct std__vector_unsigned_int__std__allocator_unsigned_int__* v768, struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ v769) {
bb770:
  struct std__vector_unsigned_int__std__allocator_unsigned_int__* this771;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ __position772;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ __retval773;
  this771 = v768;
  __position772 = v769;
  struct std__vector_unsigned_int__std__allocator_unsigned_int__* t774 = this771;
    struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ ref_tmp0775;
    struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ ref_tmp1776;
    long c777 = 1;
    struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ r778 = __gnu_cxx____normal_iterator_unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int_______operator__long__const(&__position772, c777);
    ref_tmp0775 = r778;
    struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ r779 = std__vector_unsigned_int__std__allocator_unsigned_int_____end(t774);
    ref_tmp1776 = r779;
    _Bool r780 = _ZN9__gnu_cxxeqIPjSt6vectorIjSaIjEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&ref_tmp0775, &ref_tmp1776);
    _Bool u781 = !r780;
    if (u781) {
      struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ agg_tmp0782;
      struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ agg_tmp1783;
      struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ agg_tmp2784;
      struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ agg_tmp3785;
      long c786 = 1;
      struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ r787 = __gnu_cxx____normal_iterator_unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int_______operator__long__const(&__position772, c786);
      agg_tmp0782 = r787;
      struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ r788 = std__vector_unsigned_int__std__allocator_unsigned_int_____end(t774);
      agg_tmp1783 = r788;
      agg_tmp2784 = __position772; // copy
      struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ t789 = agg_tmp0782;
      struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ t790 = agg_tmp1783;
      struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ t791 = agg_tmp2784;
      struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ r792 = __gnu_cxx____normal_iterator_unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int______std__move___gnu_cxx____normal_iterator_unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int_________gnu_cxx____normal_iterator_unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int_______(t789, t790, t791);
      agg_tmp3785 = r792;
    }
  struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__* base793 = (struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t774 + 0);
  struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl_data* base794 = (struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl_data*)((char *)&(base793->_M_impl) + 0);
  unsigned int* t795 = base794->_M_finish;
  int c796 = -1;
  unsigned int* ptr797 = &(t795)[c796];
  base794->_M_finish = ptr797;
  struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__* base798 = (struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t774 + 0);
  struct std__allocator_unsigned_int_* base799 = (struct std__allocator_unsigned_int_*)((char *)&(base798->_M_impl) + 0);
  struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__* base800 = (struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t774 + 0);
  struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl_data* base801 = (struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl_data*)((char *)&(base800->_M_impl) + 0);
  unsigned int* t802 = base801->_M_finish;
  void_std__allocator_traits_std__allocator_unsigned_int_____destroy_unsigned_int_(base799, t802);
  __retval773 = __position772; // copy
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ t803 = __retval773;
  return t803;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPKjSt6vectorIjSaIjEEE4baseEv
unsigned int** __gnu_cxx____normal_iterator_unsigned_int_const___std__vector_unsigned_int__std__allocator_unsigned_int_______base___const(struct __gnu_cxx____normal_iterator_const_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___* v804) {
bb805:
  struct __gnu_cxx____normal_iterator_const_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___* this806;
  unsigned int** __retval807;
  this806 = v804;
  struct __gnu_cxx____normal_iterator_const_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___* t808 = this806;
  __retval807 = &t808->_M_current;
  unsigned int** t809 = __retval807;
  return t809;
}

// function: _ZN9__gnu_cxxmiIPKjSt6vectorIjSaIjEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS9_SC_
long __gnu_cxx____normal_iterator_unsigned_int_const___std__vector_unsigned_int__std__allocator_unsigned_int_______difference_type___gnu_cxx__operator__unsigned_int_const___std__vector_unsigned_int__std__allocator_unsigned_int_____(struct __gnu_cxx____normal_iterator_const_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___* v810, struct __gnu_cxx____normal_iterator_const_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___* v811) {
bb812:
  struct __gnu_cxx____normal_iterator_const_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___* __lhs813;
  struct __gnu_cxx____normal_iterator_const_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___* __rhs814;
  long __retval815;
  __lhs813 = v810;
  __rhs814 = v811;
  struct __gnu_cxx____normal_iterator_const_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___* t816 = __lhs813;
  unsigned int** r817 = __gnu_cxx____normal_iterator_unsigned_int_const___std__vector_unsigned_int__std__allocator_unsigned_int_______base___const(t816);
  unsigned int* t818 = *r817;
  struct __gnu_cxx____normal_iterator_const_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___* t819 = __rhs814;
  unsigned int** r820 = __gnu_cxx____normal_iterator_unsigned_int_const___std__vector_unsigned_int__std__allocator_unsigned_int_______base___const(t819);
  unsigned int* t821 = *r820;
  long diff822 = t818 - t821;
  __retval815 = diff822;
  long t823 = __retval815;
  return t823;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPKjSt6vectorIjSaIjEEEC2ERKS2_
void __gnu_cxx____normal_iterator_unsigned_int_const___std__vector_unsigned_int__std__allocator_unsigned_int_________normal_iterator(struct __gnu_cxx____normal_iterator_const_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___* v824, unsigned int** v825) {
bb826:
  struct __gnu_cxx____normal_iterator_const_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___* this827;
  unsigned int** __i828;
  this827 = v824;
  __i828 = v825;
  struct __gnu_cxx____normal_iterator_const_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___* t829 = this827;
  unsigned int** t830 = __i828;
  unsigned int* t831 = *t830;
  t829->_M_current = t831;
  return;
}

// function: _ZNKSt6vectorIjSaIjEE6cbeginEv
struct __gnu_cxx____normal_iterator_const_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ std__vector_unsigned_int__std__allocator_unsigned_int_____cbegin___const(struct std__vector_unsigned_int__std__allocator_unsigned_int__* v832) {
bb833:
  struct std__vector_unsigned_int__std__allocator_unsigned_int__* this834;
  struct __gnu_cxx____normal_iterator_const_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ __retval835;
  this834 = v832;
  struct std__vector_unsigned_int__std__allocator_unsigned_int__* t836 = this834;
  struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__* base837 = (struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t836 + 0);
  struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl_data* base838 = (struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl_data*)((char *)&(base837->_M_impl) + 0);
  __gnu_cxx____normal_iterator_unsigned_int_const___std__vector_unsigned_int__std__allocator_unsigned_int_________normal_iterator(&__retval835, &base838->_M_start);
  struct __gnu_cxx____normal_iterator_const_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ t839 = __retval835;
  return t839;
}

// function: _ZNSt6vectorIjSaIjEE5eraseEN9__gnu_cxx17__normal_iteratorIPKjS1_EE
struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ std__vector_unsigned_int__std__allocator_unsigned_int_____erase(struct std__vector_unsigned_int__std__allocator_unsigned_int__* v840, struct __gnu_cxx____normal_iterator_const_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ v841) {
bb842:
  struct std__vector_unsigned_int__std__allocator_unsigned_int__* this843;
  struct __gnu_cxx____normal_iterator_const_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ __position844;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ __retval845;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ agg_tmp0846;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ ref_tmp0847;
  struct __gnu_cxx____normal_iterator_const_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ ref_tmp1848;
  this843 = v840;
  __position844 = v841;
  struct std__vector_unsigned_int__std__allocator_unsigned_int__* t849 = this843;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ r850 = std__vector_unsigned_int__std__allocator_unsigned_int_____begin(t849);
  ref_tmp0847 = r850;
  struct __gnu_cxx____normal_iterator_const_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ r851 = std__vector_unsigned_int__std__allocator_unsigned_int_____cbegin___const(t849);
  ref_tmp1848 = r851;
  long r852 = __gnu_cxx____normal_iterator_unsigned_int_const___std__vector_unsigned_int__std__allocator_unsigned_int_______difference_type___gnu_cxx__operator__unsigned_int_const___std__vector_unsigned_int__std__allocator_unsigned_int_____(&__position844, &ref_tmp1848);
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ r853 = __gnu_cxx____normal_iterator_unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int_______operator__long__const(&ref_tmp0847, r852);
  agg_tmp0846 = r853;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ t854 = agg_tmp0846;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ r855 = std__vector_unsigned_int__std__allocator_unsigned_int______M_erase(t849, t854);
  __retval845 = r855;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ t856 = __retval845;
  return t856;
}

// function: _ZNSt6vectorIjSaIjEE5beginEv
struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ std__vector_unsigned_int__std__allocator_unsigned_int_____begin(struct std__vector_unsigned_int__std__allocator_unsigned_int__* v857) {
bb858:
  struct std__vector_unsigned_int__std__allocator_unsigned_int__* this859;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ __retval860;
  this859 = v857;
  struct std__vector_unsigned_int__std__allocator_unsigned_int__* t861 = this859;
  struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__* base862 = (struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t861 + 0);
  struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl_data* base863 = (struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl_data*)((char *)&(base862->_M_impl) + 0);
  __gnu_cxx____normal_iterator_unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int_________normal_iterator(&__retval860, &base863->_M_start);
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ t864 = __retval860;
  return t864;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPjSt6vectorIjSaIjEEEplEl
struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ __gnu_cxx____normal_iterator_unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int_______operator__long__const(struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___* v865, long v866) {
bb867:
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___* this868;
  long __n869;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ __retval870;
  unsigned int* ref_tmp0871;
  this868 = v865;
  __n869 = v866;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___* t872 = this868;
  unsigned int* t873 = t872->_M_current;
  long t874 = __n869;
  unsigned int* ptr875 = &(t873)[t874];
  ref_tmp0871 = ptr875;
  __gnu_cxx____normal_iterator_unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int_________normal_iterator(&__retval870, &ref_tmp0871);
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ t876 = __retval870;
  return t876;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPKjSt6vectorIjSaIjEEEC2IPjQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISA_S5_EE
void _ZN9__gnu_cxx17__normal_iteratorIPKjSt6vectorIjSaIjEEEC2IPjQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISA_S5_EE(struct __gnu_cxx____normal_iterator_const_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___* v877, struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___* v878) {
bb879:
  struct __gnu_cxx____normal_iterator_const_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___* this880;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___* __i881;
  this880 = v877;
  __i881 = v878;
  struct __gnu_cxx____normal_iterator_const_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___* t882 = this880;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___* t883 = __i881;
  unsigned int** r884 = __gnu_cxx____normal_iterator_unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int_______base___const(t883);
  unsigned int* t885 = *r884;
  t882->_M_current = t885;
  return;
}

// function: _ZSt8_DestroyIPjEvT_S1_
void void_std___Destroy_unsigned_int__(unsigned int* v886, unsigned int* v887) {
bb888:
  unsigned int* __first889;
  unsigned int* __last890;
  __first889 = v886;
  __last890 = v887;
      _Bool r891 = std____is_constant_evaluated();
      if (r891) {
          while (1) {
            unsigned int* t893 = __first889;
            unsigned int* t894 = __last890;
            _Bool c895 = ((t893 != t894)) ? 1 : 0;
            if (!c895) break;
            unsigned int* t896 = __first889;
            void_std__destroy_at_unsigned_int_(t896);
          for_step892: ;
            unsigned int* t897 = __first889;
            int c898 = 1;
            unsigned int* ptr899 = &(t897)[c898];
            __first889 = ptr899;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPjjEvT_S1_RSaIT0_E
void void_std___Destroy_unsigned_int___unsigned_int_(unsigned int* v900, unsigned int* v901, struct std__allocator_unsigned_int_* v902) {
bb903:
  unsigned int* __first904;
  unsigned int* __last905;
  struct std__allocator_unsigned_int_* unnamed906;
  __first904 = v900;
  __last905 = v901;
  unnamed906 = v902;
  unsigned int* t907 = __first904;
  unsigned int* t908 = __last905;
  void_std___Destroy_unsigned_int__(t907, t908);
  return;
}

// function: _ZNSt6vectorIjSaIjEE15_M_erase_at_endEPj
void std__vector_unsigned_int__std__allocator_unsigned_int______M_erase_at_end(struct std__vector_unsigned_int__std__allocator_unsigned_int__* v909, unsigned int* v910) {
bb911:
  struct std__vector_unsigned_int__std__allocator_unsigned_int__* this912;
  unsigned int* __pos913;
  this912 = v909;
  __pos913 = v910;
  struct std__vector_unsigned_int__std__allocator_unsigned_int__* t914 = this912;
    unsigned long __n915;
    struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__* base916 = (struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t914 + 0);
    struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl_data* base917 = (struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl_data*)((char *)&(base916->_M_impl) + 0);
    unsigned int* t918 = base917->_M_finish;
    unsigned int* t919 = __pos913;
    long diff920 = t918 - t919;
    unsigned long cast921 = (unsigned long)diff920;
    __n915 = cast921;
    unsigned long t922 = __n915;
    _Bool cast923 = (_Bool)t922;
    if (cast923) {
      unsigned int* t924 = __pos913;
      struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__* base925 = (struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t914 + 0);
      struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl_data* base926 = (struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl_data*)((char *)&(base925->_M_impl) + 0);
      unsigned int* t927 = base926->_M_finish;
      struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__* base928 = (struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t914 + 0);
      struct std__allocator_unsigned_int_* r929 = std___Vector_base_unsigned_int__std__allocator_unsigned_int______M_get_Tp_allocator(base928);
      void_std___Destroy_unsigned_int___unsigned_int_(t924, t927, r929);
      unsigned int* t930 = __pos913;
      struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__* base931 = (struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t914 + 0);
      struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl_data* base932 = (struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl_data*)((char *)&(base931->_M_impl) + 0);
      base932->_M_finish = t930;
    }
  return;
}

// function: _ZNSt6vectorIjSaIjEE8_M_eraseEN9__gnu_cxx17__normal_iteratorIPjS1_EES5_
struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ std__vector_unsigned_int__std__allocator_unsigned_int______M_erase_2(struct std__vector_unsigned_int__std__allocator_unsigned_int__* v933, struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ v934, struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ v935) {
bb936:
  struct std__vector_unsigned_int__std__allocator_unsigned_int__* this937;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ __first938;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ __last939;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ __retval940;
  this937 = v933;
  __first938 = v934;
  __last939 = v935;
  struct std__vector_unsigned_int__std__allocator_unsigned_int__* t941 = this937;
    _Bool r942 = _ZN9__gnu_cxxeqIPjSt6vectorIjSaIjEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first938, &__last939);
    _Bool u943 = !r942;
    if (u943) {
      struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ ref_tmp1944;
        struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ ref_tmp0945;
        struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ r946 = std__vector_unsigned_int__std__allocator_unsigned_int_____end(t941);
        ref_tmp0945 = r946;
        _Bool r947 = _ZN9__gnu_cxxeqIPjSt6vectorIjSaIjEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__last939, &ref_tmp0945);
        _Bool u948 = !r947;
        if (u948) {
          struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ agg_tmp0949;
          struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ agg_tmp1950;
          struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ agg_tmp2951;
          struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ agg_tmp3952;
          agg_tmp0949 = __last939; // copy
          struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ r953 = std__vector_unsigned_int__std__allocator_unsigned_int_____end(t941);
          agg_tmp1950 = r953;
          agg_tmp2951 = __first938; // copy
          struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ t954 = agg_tmp0949;
          struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ t955 = agg_tmp1950;
          struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ t956 = agg_tmp2951;
          struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ r957 = __gnu_cxx____normal_iterator_unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int______std__move___gnu_cxx____normal_iterator_unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int_________gnu_cxx____normal_iterator_unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int_______(t954, t955, t956);
          agg_tmp3952 = r957;
        }
      unsigned int** r958 = __gnu_cxx____normal_iterator_unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int_______base___const(&__first938);
      unsigned int* t959 = *r958;
      struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ r960 = std__vector_unsigned_int__std__allocator_unsigned_int_____end(t941);
      ref_tmp1944 = r960;
      long r961 = __gnu_cxx____normal_iterator_unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int_______difference_type___gnu_cxx__operator__unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int_____(&ref_tmp1944, &__last939);
      unsigned int* ptr962 = &(t959)[r961];
      std__vector_unsigned_int__std__allocator_unsigned_int______M_erase_at_end(t941, ptr962);
    }
  __retval940 = __first938; // copy
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ t963 = __retval940;
  return t963;
}

// function: _ZNSt6vectorIjSaIjEE5eraseEN9__gnu_cxx17__normal_iteratorIPKjS1_EES6_
struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ std__vector_unsigned_int__std__allocator_unsigned_int_____erase_2(struct std__vector_unsigned_int__std__allocator_unsigned_int__* v964, struct __gnu_cxx____normal_iterator_const_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ v965, struct __gnu_cxx____normal_iterator_const_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ v966) {
bb967:
  struct std__vector_unsigned_int__std__allocator_unsigned_int__* this968;
  struct __gnu_cxx____normal_iterator_const_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ __first969;
  struct __gnu_cxx____normal_iterator_const_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ __last970;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ __retval971;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ __beg972;
  struct __gnu_cxx____normal_iterator_const_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ __cbeg973;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ agg_tmp0974;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ agg_tmp1975;
  this968 = v964;
  __first969 = v965;
  __last970 = v966;
  struct std__vector_unsigned_int__std__allocator_unsigned_int__* t976 = this968;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ r977 = std__vector_unsigned_int__std__allocator_unsigned_int_____begin(t976);
  __beg972 = r977;
  struct __gnu_cxx____normal_iterator_const_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ r978 = std__vector_unsigned_int__std__allocator_unsigned_int_____cbegin___const(t976);
  __cbeg973 = r978;
  long r979 = __gnu_cxx____normal_iterator_unsigned_int_const___std__vector_unsigned_int__std__allocator_unsigned_int_______difference_type___gnu_cxx__operator__unsigned_int_const___std__vector_unsigned_int__std__allocator_unsigned_int_____(&__first969, &__cbeg973);
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ r980 = __gnu_cxx____normal_iterator_unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int_______operator__long__const(&__beg972, r979);
  agg_tmp0974 = r980;
  long r981 = __gnu_cxx____normal_iterator_unsigned_int_const___std__vector_unsigned_int__std__allocator_unsigned_int_______difference_type___gnu_cxx__operator__unsigned_int_const___std__vector_unsigned_int__std__allocator_unsigned_int_____(&__last970, &__cbeg973);
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ r982 = __gnu_cxx____normal_iterator_unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int_______operator__long__const(&__beg972, r981);
  agg_tmp1975 = r982;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ t983 = agg_tmp0974;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ t984 = agg_tmp1975;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ r985 = std__vector_unsigned_int__std__allocator_unsigned_int______M_erase_2(t976, t983, t984);
  __retval971 = r985;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ t986 = __retval971;
  return t986;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v987, int v988) {
bb989:
  int __a990;
  int __b991;
  int __retval992;
  __a990 = v987;
  __b991 = v988;
  int t993 = __a990;
  int t994 = __b991;
  int b995 = t993 | t994;
  __retval992 = b995;
  int t996 = __retval992;
  return t996;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v997) {
bb998:
  struct std__basic_ios_char__std__char_traits_char__* this999;
  int __retval1000;
  this999 = v997;
  struct std__basic_ios_char__std__char_traits_char__* t1001 = this999;
  struct std__ios_base* base1002 = (struct std__ios_base*)((char *)t1001 + 0);
  int t1003 = base1002->_M_streambuf_state;
  __retval1000 = t1003;
  int t1004 = __retval1000;
  return t1004;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v1005, int v1006) {
bb1007:
  struct std__basic_ios_char__std__char_traits_char__* this1008;
  int __state1009;
  this1008 = v1005;
  __state1009 = v1006;
  struct std__basic_ios_char__std__char_traits_char__* t1010 = this1008;
  int r1011 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t1010);
  int t1012 = __state1009;
  int r1013 = std__operator_(r1011, t1012);
  std__basic_ios_char__std__char_traits_char_____clear(t1010, r1013);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v1014, char* v1015) {
bb1016:
  char* __c11017;
  char* __c21018;
  _Bool __retval1019;
  __c11017 = v1014;
  __c21018 = v1015;
  char* t1020 = __c11017;
  char t1021 = *t1020;
  int cast1022 = (int)t1021;
  char* t1023 = __c21018;
  char t1024 = *t1023;
  int cast1025 = (int)t1024;
  _Bool c1026 = ((cast1022 == cast1025)) ? 1 : 0;
  __retval1019 = c1026;
  _Bool t1027 = __retval1019;
  return t1027;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v1028) {
bb1029:
  char* __p1030;
  unsigned long __retval1031;
  unsigned long __i1032;
  __p1030 = v1028;
  unsigned long c1033 = 0;
  __i1032 = c1033;
    char ref_tmp01034;
    while (1) {
      unsigned long t1035 = __i1032;
      char* t1036 = __p1030;
      char* ptr1037 = &(t1036)[t1035];
      char c1038 = 0;
      ref_tmp01034 = c1038;
      _Bool r1039 = __gnu_cxx__char_traits_char___eq(ptr1037, &ref_tmp01034);
      _Bool u1040 = !r1039;
      if (!u1040) break;
      unsigned long t1041 = __i1032;
      unsigned long u1042 = t1041 + 1;
      __i1032 = u1042;
    }
  unsigned long t1043 = __i1032;
  __retval1031 = t1043;
  unsigned long t1044 = __retval1031;
  return t1044;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v1045) {
bb1046:
  char* __s1047;
  unsigned long __retval1048;
  __s1047 = v1045;
    _Bool r1049 = std____is_constant_evaluated();
    if (r1049) {
      char* t1050 = __s1047;
      unsigned long r1051 = __gnu_cxx__char_traits_char___length(t1050);
      __retval1048 = r1051;
      unsigned long t1052 = __retval1048;
      return t1052;
    }
  char* t1053 = __s1047;
  unsigned long r1054 = strlen(t1053);
  __retval1048 = r1054;
  unsigned long t1055 = __retval1048;
  return t1055;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1056, char* v1057) {
bb1058:
  struct std__basic_ostream_char__std__char_traits_char__* __out1059;
  char* __s1060;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1061;
  __out1059 = v1056;
  __s1060 = v1057;
    char* t1062 = __s1060;
    _Bool cast1063 = (_Bool)t1062;
    _Bool u1064 = !cast1063;
    if (u1064) {
      struct std__basic_ostream_char__std__char_traits_char__* t1065 = __out1059;
      void** v1066 = (void**)t1065;
      void* v1067 = *((void**)v1066);
      unsigned char* cast1068 = (unsigned char*)v1067;
      long c1069 = -24;
      unsigned char* ptr1070 = &(cast1068)[c1069];
      long* cast1071 = (long*)ptr1070;
      long t1072 = *cast1071;
      unsigned char* cast1073 = (unsigned char*)t1065;
      unsigned char* ptr1074 = &(cast1073)[t1072];
      struct std__basic_ostream_char__std__char_traits_char__* cast1075 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1074;
      struct std__basic_ios_char__std__char_traits_char__* cast1076 = (struct std__basic_ios_char__std__char_traits_char__*)cast1075;
      int t1077 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast1076, t1077);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t1078 = __out1059;
      char* t1079 = __s1060;
      char* t1080 = __s1060;
      unsigned long r1081 = std__char_traits_char___length(t1080);
      long cast1082 = (long)r1081;
      struct std__basic_ostream_char__std__char_traits_char__* r1083 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t1078, t1079, cast1082);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t1084 = __out1059;
  __retval1061 = t1084;
  struct std__basic_ostream_char__std__char_traits_char__* t1085 = __retval1061;
  return t1085;
}

// function: _ZNKSt6vectorIjSaIjEE4sizeEv
unsigned long std__vector_unsigned_int__std__allocator_unsigned_int_____size___const(struct std__vector_unsigned_int__std__allocator_unsigned_int__* v1086) {
bb1087:
  struct std__vector_unsigned_int__std__allocator_unsigned_int__* this1088;
  unsigned long __retval1089;
  long __dif1090;
  this1088 = v1086;
  struct std__vector_unsigned_int__std__allocator_unsigned_int__* t1091 = this1088;
  struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__* base1092 = (struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t1091 + 0);
  struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl_data* base1093 = (struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl_data*)((char *)&(base1092->_M_impl) + 0);
  unsigned int* t1094 = base1093->_M_finish;
  struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__* base1095 = (struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t1091 + 0);
  struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl_data* base1096 = (struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl_data*)((char *)&(base1095->_M_impl) + 0);
  unsigned int* t1097 = base1096->_M_start;
  long diff1098 = t1094 - t1097;
  __dif1090 = diff1098;
    long t1099 = __dif1090;
    long c1100 = 0;
    _Bool c1101 = ((t1099 < c1100)) ? 1 : 0;
    if (c1101) {
      __builtin_unreachable();
    }
  long t1102 = __dif1090;
  unsigned long cast1103 = (unsigned long)t1102;
  __retval1089 = cast1103;
  unsigned long t1104 = __retval1089;
  return t1104;
}

// function: _ZNSolsEj
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* v1105, unsigned int v1106) {
bb1107:
  struct std__basic_ostream_char__std__char_traits_char__* this1108;
  unsigned int __n1109;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1110;
  this1108 = v1105;
  __n1109 = v1106;
  struct std__basic_ostream_char__std__char_traits_char__* t1111 = this1108;
  unsigned int t1112 = __n1109;
  unsigned long cast1113 = (unsigned long)t1112;
  struct std__basic_ostream_char__std__char_traits_char__* r1114 = std__ostream__std__ostream___M_insert_unsigned_long_(t1111, cast1113);
  __retval1110 = r1114;
  struct std__basic_ostream_char__std__char_traits_char__* t1115 = __retval1110;
  return t1115;
}

// function: _ZNSt6vectorIjSaIjEEixEm
unsigned int* std__vector_unsigned_int__std__allocator_unsigned_int_____operator__(struct std__vector_unsigned_int__std__allocator_unsigned_int__* v1116, unsigned long v1117) {
bb1118:
  struct std__vector_unsigned_int__std__allocator_unsigned_int__* this1119;
  unsigned long __n1120;
  unsigned int* __retval1121;
  this1119 = v1116;
  __n1120 = v1117;
  struct std__vector_unsigned_int__std__allocator_unsigned_int__* t1122 = this1119;
    do {
          unsigned long t1123 = __n1120;
          unsigned long r1124 = std__vector_unsigned_int__std__allocator_unsigned_int_____size___const(t1122);
          _Bool c1125 = ((t1123 < r1124)) ? 1 : 0;
          _Bool u1126 = !c1125;
          if (u1126) {
            char* cast1127 = (char*)&(_str_3);
            int c1128 = 1263;
            char* cast1129 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIjSaIjEEixEm);
            char* cast1130 = (char*)&(_str_4);
            std____glibcxx_assert_fail(cast1127, c1128, cast1129, cast1130);
          }
      _Bool c1131 = 0;
      if (!c1131) break;
    } while (1);
  struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__* base1132 = (struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t1122 + 0);
  struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl_data* base1133 = (struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl_data*)((char *)&(base1132->_M_impl) + 0);
  unsigned int* t1134 = base1133->_M_start;
  unsigned long t1135 = __n1120;
  unsigned int* ptr1136 = &(t1134)[t1135];
  __retval1121 = ptr1136;
  unsigned int* t1137 = __retval1121;
  return t1137;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v1138, void* v1139) {
bb1140:
  struct std__basic_ostream_char__std__char_traits_char__* this1141;
  void* __pf1142;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1143;
  this1141 = v1138;
  __pf1142 = v1139;
  struct std__basic_ostream_char__std__char_traits_char__* t1144 = this1141;
  void* t1145 = __pf1142;
  struct std__basic_ostream_char__std__char_traits_char__* r1146 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t1145)(t1144);
  __retval1143 = r1146;
  struct std__basic_ostream_char__std__char_traits_char__* t1147 = __retval1143;
  return t1147;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1148) {
bb1149:
  struct std__basic_ostream_char__std__char_traits_char__* __os1150;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1151;
  __os1150 = v1148;
  struct std__basic_ostream_char__std__char_traits_char__* t1152 = __os1150;
  struct std__basic_ostream_char__std__char_traits_char__* r1153 = std__ostream__flush(t1152);
  __retval1151 = r1153;
  struct std__basic_ostream_char__std__char_traits_char__* t1154 = __retval1151;
  return t1154;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v1155) {
bb1156:
  struct std__ctype_char_* __f1157;
  struct std__ctype_char_* __retval1158;
  __f1157 = v1155;
    struct std__ctype_char_* t1159 = __f1157;
    _Bool cast1160 = (_Bool)t1159;
    _Bool u1161 = !cast1160;
    if (u1161) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t1162 = __f1157;
  __retval1158 = t1162;
  struct std__ctype_char_* t1163 = __retval1158;
  return t1163;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v1164, char v1165) {
bb1166:
  struct std__ctype_char_* this1167;
  char __c1168;
  char __retval1169;
  this1167 = v1164;
  __c1168 = v1165;
  struct std__ctype_char_* t1170 = this1167;
    char t1171 = t1170->_M_widen_ok;
    _Bool cast1172 = (_Bool)t1171;
    if (cast1172) {
      char t1173 = __c1168;
      unsigned char cast1174 = (unsigned char)t1173;
      unsigned long cast1175 = (unsigned long)cast1174;
      char t1176 = t1170->_M_widen[cast1175];
      __retval1169 = t1176;
      char t1177 = __retval1169;
      return t1177;
    }
  std__ctype_char____M_widen_init___const(t1170);
  char t1178 = __c1168;
  void** v1179 = (void**)t1170;
  void* v1180 = *((void**)v1179);
  char vcall1183 = (char)__VERIFIER_virtual_call_char_char(t1170, 6, t1178);
  __retval1169 = vcall1183;
  char t1184 = __retval1169;
  return t1184;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v1185, char v1186) {
bb1187:
  struct std__basic_ios_char__std__char_traits_char__* this1188;
  char __c1189;
  char __retval1190;
  this1188 = v1185;
  __c1189 = v1186;
  struct std__basic_ios_char__std__char_traits_char__* t1191 = this1188;
  struct std__ctype_char_* t1192 = t1191->_M_ctype;
  struct std__ctype_char_* r1193 = std__ctype_char__const__std____check_facet_std__ctype_char___(t1192);
  char t1194 = __c1189;
  char r1195 = std__ctype_char___widen_char__const(r1193, t1194);
  __retval1190 = r1195;
  char t1196 = __retval1190;
  return t1196;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1197) {
bb1198:
  struct std__basic_ostream_char__std__char_traits_char__* __os1199;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1200;
  __os1199 = v1197;
  struct std__basic_ostream_char__std__char_traits_char__* t1201 = __os1199;
  struct std__basic_ostream_char__std__char_traits_char__* t1202 = __os1199;
  void** v1203 = (void**)t1202;
  void* v1204 = *((void**)v1203);
  unsigned char* cast1205 = (unsigned char*)v1204;
  long c1206 = -24;
  unsigned char* ptr1207 = &(cast1205)[c1206];
  long* cast1208 = (long*)ptr1207;
  long t1209 = *cast1208;
  unsigned char* cast1210 = (unsigned char*)t1202;
  unsigned char* ptr1211 = &(cast1210)[t1209];
  struct std__basic_ostream_char__std__char_traits_char__* cast1212 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1211;
  struct std__basic_ios_char__std__char_traits_char__* cast1213 = (struct std__basic_ios_char__std__char_traits_char__*)cast1212;
  char c1214 = 10;
  char r1215 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast1213, c1214);
  struct std__basic_ostream_char__std__char_traits_char__* r1216 = std__ostream__put(t1201, r1215);
  struct std__basic_ostream_char__std__char_traits_char__* r1217 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r1216);
  __retval1200 = r1217;
  struct std__basic_ostream_char__std__char_traits_char__* t1218 = __retval1200;
  return t1218;
}

// function: _ZNSt6vectorIjSaIjEED2Ev
void std__vector_unsigned_int__std__allocator_unsigned_int______vector(struct std__vector_unsigned_int__std__allocator_unsigned_int__* v1219) {
bb1220:
  struct std__vector_unsigned_int__std__allocator_unsigned_int__* this1221;
  this1221 = v1219;
  struct std__vector_unsigned_int__std__allocator_unsigned_int__* t1222 = this1221;
    struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__* base1223 = (struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t1222 + 0);
    struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl_data* base1224 = (struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl_data*)((char *)&(base1223->_M_impl) + 0);
    unsigned int* t1225 = base1224->_M_start;
    struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__* base1226 = (struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t1222 + 0);
    struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl_data* base1227 = (struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl_data*)((char *)&(base1226->_M_impl) + 0);
    unsigned int* t1228 = base1227->_M_finish;
    struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__* base1229 = (struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t1222 + 0);
    struct std__allocator_unsigned_int_* r1230 = std___Vector_base_unsigned_int__std__allocator_unsigned_int______M_get_Tp_allocator(base1229);
    void_std___Destroy_unsigned_int___unsigned_int_(t1225, t1228, r1230);
  {
    struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__* base1231 = (struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__*)((char *)t1222 + 0);
    std___Vector_base_unsigned_int__std__allocator_unsigned_int_______Vector_base(base1231);
  }
  return;
}

// function: main
int main() {
bb1232:
  int __retval1233;
  unsigned int i1234;
  struct std__vector_unsigned_int__std__allocator_unsigned_int__ myvector1235;
  struct __gnu_cxx____normal_iterator_const_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ agg_tmp01236;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ ref_tmp01237;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ ref_tmp11238;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ agg_tmp11239;
  struct __gnu_cxx____normal_iterator_const_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ agg_tmp21240;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ ref_tmp21241;
  struct __gnu_cxx____normal_iterator_const_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ agg_tmp31242;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ ref_tmp31243;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ ref_tmp41244;
  struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ agg_tmp41245;
  int c1246 = 0;
  __retval1233 = c1246;
  std__vector_unsigned_int__std__allocator_unsigned_int_____vector(&myvector1235);
      unsigned int c1247 = 1;
      i1234 = c1247;
      while (1) {
        unsigned int t1249 = i1234;
        unsigned int c1250 = 10;
        _Bool c1251 = ((t1249 <= c1250)) ? 1 : 0;
        if (!c1251) break;
        std__vector_unsigned_int__std__allocator_unsigned_int_____push_back(&myvector1235, &i1234);
      for_step1248: ;
        unsigned int t1252 = i1234;
        unsigned int u1253 = t1252 + 1;
        i1234 = u1253;
      }
    struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ r1254 = std__vector_unsigned_int__std__allocator_unsigned_int_____begin(&myvector1235);
    ref_tmp11238 = r1254;
    long c1255 = 5;
    struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ r1256 = __gnu_cxx____normal_iterator_unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int_______operator__long__const(&ref_tmp11238, c1255);
    ref_tmp01237 = r1256;
    _ZN9__gnu_cxx17__normal_iteratorIPKjSt6vectorIjSaIjEEEC2IPjQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISA_S5_EE(&agg_tmp01236, &ref_tmp01237);
    struct __gnu_cxx____normal_iterator_const_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ t1257 = agg_tmp01236;
    struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ r1258 = std__vector_unsigned_int__std__allocator_unsigned_int_____erase(&myvector1235, t1257);
    agg_tmp11239 = r1258;
    struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ r1259 = std__vector_unsigned_int__std__allocator_unsigned_int_____begin(&myvector1235);
    ref_tmp21241 = r1259;
    _ZN9__gnu_cxx17__normal_iteratorIPKjSt6vectorIjSaIjEEEC2IPjQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISA_S5_EE(&agg_tmp21240, &ref_tmp21241);
    struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ r1260 = std__vector_unsigned_int__std__allocator_unsigned_int_____begin(&myvector1235);
    ref_tmp41244 = r1260;
    long c1261 = 3;
    struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ r1262 = __gnu_cxx____normal_iterator_unsigned_int___std__vector_unsigned_int__std__allocator_unsigned_int_______operator__long__const(&ref_tmp41244, c1261);
    ref_tmp31243 = r1262;
    _ZN9__gnu_cxx17__normal_iteratorIPKjSt6vectorIjSaIjEEEC2IPjQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISA_S5_EE(&agg_tmp31242, &ref_tmp31243);
    struct __gnu_cxx____normal_iterator_const_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ t1263 = agg_tmp21240;
    struct __gnu_cxx____normal_iterator_const_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ t1264 = agg_tmp31242;
    struct __gnu_cxx____normal_iterator_unsigned_int____std__vector_unsigned_int__std__allocator_unsigned_int___ r1265 = std__vector_unsigned_int__std__allocator_unsigned_int_____erase_2(&myvector1235, t1263, t1264);
    agg_tmp41245 = r1265;
    char* cast1266 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* r1267 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1266);
      unsigned int c1268 = 0;
      i1234 = c1268;
      while (1) {
        unsigned int t1270 = i1234;
        unsigned long cast1271 = (unsigned long)t1270;
        unsigned long r1272 = std__vector_unsigned_int__std__allocator_unsigned_int_____size___const(&myvector1235);
        _Bool c1273 = ((cast1271 < r1272)) ? 1 : 0;
        if (!c1273) break;
        char* cast1274 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* r1275 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1274);
        unsigned int t1276 = i1234;
        unsigned long cast1277 = (unsigned long)t1276;
        unsigned int* r1278 = std__vector_unsigned_int__std__allocator_unsigned_int_____operator__(&myvector1235, cast1277);
        unsigned int t1279 = *r1278;
        struct std__basic_ostream_char__std__char_traits_char__* r1280 = std__ostream__operator__(r1275, t1279);
      for_step1269: ;
        unsigned int t1281 = i1234;
        unsigned int u1282 = t1281 + 1;
        i1234 = u1282;
      }
    struct std__basic_ostream_char__std__char_traits_char__* r1283 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c1284 = 0;
    __retval1233 = c1284;
    int t1285 = __retval1233;
    int ret_val1286 = t1285;
    {
      std__vector_unsigned_int__std__allocator_unsigned_int______vector(&myvector1235);
    }
    return ret_val1286;
  int t1287 = __retval1233;
  return t1287;
}

// function: _ZNSt12_Vector_baseIjSaIjEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE
void _ZNSt12_Vector_baseIjSaIjEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl* v1288) {
bb1289:
  struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl* this1290;
  this1290 = v1288;
  struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl* t1291 = this1290;
  struct std__allocator_unsigned_int_* base1292 = (struct std__allocator_unsigned_int_*)((char *)t1291 + 0);
  std__allocator_unsigned_int___allocator(base1292);
    struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl_data* base1293 = (struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl_data*)((char *)t1291 + 0);
    std___Vector_base_unsigned_int__std__allocator_unsigned_int______Vector_impl_data___Vector_impl_data(base1293);
  return;
}

// function: _ZNSt12_Vector_baseIjSaIjEE12_Vector_implD2Ev
void std___Vector_base_unsigned_int__std__allocator_unsigned_int______Vector_impl____Vector_impl(struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl* v1294) {
bb1295:
  struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl* this1296;
  this1296 = v1294;
  struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl* t1297 = this1296;
  {
    struct std__allocator_unsigned_int_* base1298 = (struct std__allocator_unsigned_int_*)((char *)t1297 + 0);
    std__allocator_unsigned_int____allocator(base1298);
  }
  return;
}

// function: _ZNSt12_Vector_baseIjSaIjEEC2Ev
void std___Vector_base_unsigned_int__std__allocator_unsigned_int______Vector_base(struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__* v1299) {
bb1300:
  struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__* this1301;
  this1301 = v1299;
  struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__* t1302 = this1301;
  _ZNSt12_Vector_baseIjSaIjEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(&t1302->_M_impl);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1303:
  _Bool __retval1304;
    _Bool c1305 = 0;
    __retval1304 = c1305;
    _Bool t1306 = __retval1304;
    return t1306;
  abort();
}

// function: _ZNSt15__new_allocatorIjE10deallocateEPjm
void std____new_allocator_unsigned_int___deallocate(struct std____new_allocator_unsigned_int_* v1307, unsigned int* v1308, unsigned long v1309) {
bb1310:
  struct std____new_allocator_unsigned_int_* this1311;
  unsigned int* __p1312;
  unsigned long __n1313;
  this1311 = v1307;
  __p1312 = v1308;
  __n1313 = v1309;
  struct std____new_allocator_unsigned_int_* t1314 = this1311;
    unsigned long c1315 = 4;
    unsigned long c1316 = 16;
    _Bool c1317 = ((c1315 > c1316)) ? 1 : 0;
    if (c1317) {
      unsigned int* t1318 = __p1312;
      void* cast1319 = (void*)t1318;
      unsigned long t1320 = __n1313;
      unsigned long c1321 = 4;
      unsigned long b1322 = t1320 * c1321;
      unsigned long c1323 = 4;
      operator_delete_3(cast1319, b1322, c1323);
      return;
    }
  unsigned int* t1324 = __p1312;
  void* cast1325 = (void*)t1324;
  unsigned long t1326 = __n1313;
  unsigned long c1327 = 4;
  unsigned long b1328 = t1326 * c1327;
  operator_delete_2(cast1325, b1328);
  return;
}

// function: _ZNSaIjE10deallocateEPjm
void std__allocator_unsigned_int___deallocate(struct std__allocator_unsigned_int_* v1329, unsigned int* v1330, unsigned long v1331) {
bb1332:
  struct std__allocator_unsigned_int_* this1333;
  unsigned int* __p1334;
  unsigned long __n1335;
  this1333 = v1329;
  __p1334 = v1330;
  __n1335 = v1331;
  struct std__allocator_unsigned_int_* t1336 = this1333;
    _Bool r1337 = std____is_constant_evaluated();
    if (r1337) {
      unsigned int* t1338 = __p1334;
      void* cast1339 = (void*)t1338;
      operator_delete(cast1339);
      return;
    }
  struct std____new_allocator_unsigned_int_* base1340 = (struct std____new_allocator_unsigned_int_*)((char *)t1336 + 0);
  unsigned int* t1341 = __p1334;
  unsigned long t1342 = __n1335;
  std____new_allocator_unsigned_int___deallocate(base1340, t1341, t1342);
  return;
}

// function: _ZNSt16allocator_traitsISaIjEE10deallocateERS0_Pjm
void std__allocator_traits_std__allocator_unsigned_int_____deallocate(struct std__allocator_unsigned_int_* v1343, unsigned int* v1344, unsigned long v1345) {
bb1346:
  struct std__allocator_unsigned_int_* __a1347;
  unsigned int* __p1348;
  unsigned long __n1349;
  __a1347 = v1343;
  __p1348 = v1344;
  __n1349 = v1345;
  struct std__allocator_unsigned_int_* t1350 = __a1347;
  unsigned int* t1351 = __p1348;
  unsigned long t1352 = __n1349;
  std__allocator_unsigned_int___deallocate(t1350, t1351, t1352);
  return;
}

// function: _ZNSt12_Vector_baseIjSaIjEE13_M_deallocateEPjm
void std___Vector_base_unsigned_int__std__allocator_unsigned_int______M_deallocate(struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__* v1353, unsigned int* v1354, unsigned long v1355) {
bb1356:
  struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__* this1357;
  unsigned int* __p1358;
  unsigned long __n1359;
  this1357 = v1353;
  __p1358 = v1354;
  __n1359 = v1355;
  struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__* t1360 = this1357;
    unsigned int* t1361 = __p1358;
    _Bool cast1362 = (_Bool)t1361;
    if (cast1362) {
      struct std__allocator_unsigned_int_* base1363 = (struct std__allocator_unsigned_int_*)((char *)&(t1360->_M_impl) + 0);
      unsigned int* t1364 = __p1358;
      unsigned long t1365 = __n1359;
      std__allocator_traits_std__allocator_unsigned_int_____deallocate(base1363, t1364, t1365);
    }
  return;
}

// function: _ZNSt12_Vector_baseIjSaIjEED2Ev
void std___Vector_base_unsigned_int__std__allocator_unsigned_int_______Vector_base(struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__* v1366) {
bb1367:
  struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__* this1368;
  this1368 = v1366;
  struct std___Vector_base_unsigned_int__std__allocator_unsigned_int__* t1369 = this1368;
    struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl_data* base1370 = (struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl_data*)((char *)&(t1369->_M_impl) + 0);
    unsigned int* t1371 = base1370->_M_start;
    struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl_data* base1372 = (struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl_data*)((char *)&(t1369->_M_impl) + 0);
    unsigned int* t1373 = base1372->_M_end_of_storage;
    struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl_data* base1374 = (struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl_data*)((char *)&(t1369->_M_impl) + 0);
    unsigned int* t1375 = base1374->_M_start;
    long diff1376 = t1373 - t1375;
    unsigned long cast1377 = (unsigned long)diff1376;
    std___Vector_base_unsigned_int__std__allocator_unsigned_int______M_deallocate(t1369, t1371, cast1377);
  {
    std___Vector_base_unsigned_int__std__allocator_unsigned_int______Vector_impl____Vector_impl(&t1369->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIjEC2Ev
void std____new_allocator_unsigned_int_____new_allocator(struct std____new_allocator_unsigned_int_* v1378) {
bb1379:
  struct std____new_allocator_unsigned_int_* this1380;
  this1380 = v1378;
  struct std____new_allocator_unsigned_int_* t1381 = this1380;
  return;
}

// function: _ZNSaIjEC2Ev
void std__allocator_unsigned_int___allocator(struct std__allocator_unsigned_int_* v1382) {
bb1383:
  struct std__allocator_unsigned_int_* this1384;
  this1384 = v1382;
  struct std__allocator_unsigned_int_* t1385 = this1384;
  struct std____new_allocator_unsigned_int_* base1386 = (struct std____new_allocator_unsigned_int_*)((char *)t1385 + 0);
  std____new_allocator_unsigned_int_____new_allocator(base1386);
  return;
}

// function: _ZNSt12_Vector_baseIjSaIjEE17_Vector_impl_dataC2Ev
void std___Vector_base_unsigned_int__std__allocator_unsigned_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl_data* v1387) {
bb1388:
  struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl_data* this1389;
  this1389 = v1387;
  struct std___Vector_base_unsigned_int__std__allocator_unsigned_int_____Vector_impl_data* t1390 = this1389;
  unsigned int* c1391 = ((void*)0);
  t1390->_M_start = c1391;
  unsigned int* c1392 = ((void*)0);
  t1390->_M_finish = c1392;
  unsigned int* c1393 = ((void*)0);
  t1390->_M_end_of_storage = c1393;
  return;
}

// function: _ZNSaIjED2Ev
void std__allocator_unsigned_int____allocator(struct std__allocator_unsigned_int_* v1394) {
bb1395:
  struct std__allocator_unsigned_int_* this1396;
  this1396 = v1394;
  struct std__allocator_unsigned_int_* t1397 = this1396;
  return;
}

