extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
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
char _str[17] = "myvector[0] != 4";
char _str_1[115] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm94-c++03/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[19] = "myvector contains:";
char _str_3[2] = " ";
char _str_4[26] = "vector::_M_realloc_append";
char _str_5[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_6[19] = "__n < this->size()";
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(struct std__allocator_int_* p0, int* p1, int* p2);
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
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std__allocator_int_* p0, int* p1, int* p2);
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
void void_std__vector_int__std__allocator_int______M_realloc_append_int_const__(struct std__vector_int__std__allocator_int__* p0, int* p1);
void std__vector_int__std__allocator_int_____push_back(struct std__vector_int__std__allocator_int__* p0, int* p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__swap_ranges___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____niter_wrap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, int* p1);
long std__iterator_traits_int____difference_type_std____distance_int__(int* p0, int* p1, struct std__random_access_iterator_tag p2);
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** p0);
long std__iterator_traits_int____difference_type_std__distance_int__(int* p0, int* p1);
extern void* memmove(void* p0, void* p1, unsigned long p2);
void void_std____assign_one_true__int___int__(int** p0, int** p1);
int* int__std____copy_move_a2_true__int___int___int__(int* p0, int* p1, int* p2);
int* int__std____copy_move_a1_true__int___int__(int* p0, int* p1, int* p2);
int* int__std____niter_base_int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____copy_move_a_true____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__move___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, long p1);
void std__enable_if___and__std____not__std____is_tuple_like_int_____std__is_move_constructible_int___std__is_move_assignable_int_____value__void___type_std__swap_int_(int* p0, int* p1);
void void_std__iter_swap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1);
void std__enable_if___and__std____not__std____is_tuple_like_long_____std__is_move_constructible_long___std__is_move_assignable_long_____value__void___type_std__swap_long_(long* p0, long* p1);
void void_std____advance_int___long_(int** p0, long p1, struct std__random_access_iterator_tag p2);
void void_std__advance_int___long_(int** p0, long p1);
int* int__std____copy_move_backward_a2_true__int___int__(int* p0, int* p1, int* p2);
int* int__std____copy_move_backward_a1_true__int___int__(int* p0, int* p1, int* p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____copy_move_backward_a_true____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__move_backward___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std___V2____rotate___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2, struct std__random_access_iterator_tag p3);
struct std__random_access_iterator_tag std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________iterator_category_std____iterator_category___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std___V2__rotate___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, long p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* p0);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
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

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2Ev
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v5) {
bb6:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this7;
  this7 = v5;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t8 = this7;
  int* c9 = ((void*)0);
  t8->_M_current = c9;
  return;
}

// function: _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* v10, int* v11) {
bb12:
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

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJRKiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(struct std__allocator_int_* v24, int* v25, int* v26) {
bb27:
  struct std__allocator_int_* __a28;
  int* __p29;
  int* __args30;
  __a28 = v24;
  __p29 = v25;
  __args30 = v26;
  int* t31 = __p29;
  int* t32 = __args30;
  int* r33 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t31, t32);
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v34, unsigned long* v35) {
bb36:
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
bb50:
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
bb61:
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
bb68:
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

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v76) {
bb77:
  struct std__vector_int__std__allocator_int__* this78;
  unsigned long __retval79;
  long __dif80;
  this78 = v76;
  struct std__vector_int__std__allocator_int__* t81 = this78;
  struct std___Vector_base_int__std__allocator_int__* base82 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t81 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base83 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base82->_M_impl) + 0);
  int* t84 = base83->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base85 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t81 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base86 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base85->_M_impl) + 0);
  int* t87 = base86->_M_start;
  long diff88 = t84 - t87;
  __dif80 = diff88;
    long t89 = __dif80;
    long c90 = 0;
    _Bool c91 = ((t89 < c90)) ? 1 : 0;
    if (c91) {
      __builtin_unreachable();
    }
  long t92 = __dif80;
  unsigned long cast93 = (unsigned long)t92;
  __retval79 = cast93;
  unsigned long t94 = __retval79;
  return t94;
}

// function: _ZSt3maxImERKT_S2_S2_
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* v95, unsigned long* v96) {
bb97:
  unsigned long* __a98;
  unsigned long* __b99;
  unsigned long* __retval100;
  __a98 = v95;
  __b99 = v96;
    unsigned long* t101 = __a98;
    unsigned long t102 = *t101;
    unsigned long* t103 = __b99;
    unsigned long t104 = *t103;
    _Bool c105 = ((t102 < t104)) ? 1 : 0;
    if (c105) {
      unsigned long* t106 = __b99;
      __retval100 = t106;
      unsigned long* t107 = __retval100;
      return t107;
    }
  unsigned long* t108 = __a98;
  __retval100 = t108;
  unsigned long* t109 = __retval100;
  return t109;
}

// function: _ZNKSt6vectorIiSaIiEE12_M_check_lenEmPKc
unsigned long std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(struct std__vector_int__std__allocator_int__* v110, unsigned long v111, char* v112) {
bb113:
  struct std__vector_int__std__allocator_int__* this114;
  unsigned long __n115;
  char* __s116;
  unsigned long __retval117;
  unsigned long __len118;
  unsigned long ref_tmp0119;
  this114 = v110;
  __n115 = v111;
  __s116 = v112;
  struct std__vector_int__std__allocator_int__* t120 = this114;
    unsigned long r121 = std__vector_int__std__allocator_int_____max_size___const(t120);
    unsigned long r122 = std__vector_int__std__allocator_int_____size___const(t120);
    unsigned long b123 = r121 - r122;
    unsigned long t124 = __n115;
    _Bool c125 = ((b123 < t124)) ? 1 : 0;
    if (c125) {
      char* t126 = __s116;
      std____throw_length_error(t126);
    }
  unsigned long r127 = std__vector_int__std__allocator_int_____size___const(t120);
  unsigned long r128 = std__vector_int__std__allocator_int_____size___const(t120);
  ref_tmp0119 = r128;
  unsigned long* r129 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp0119, &__n115);
  unsigned long t130 = *r129;
  unsigned long b131 = r127 + t130;
  __len118 = b131;
  unsigned long t132 = __len118;
  unsigned long r133 = std__vector_int__std__allocator_int_____size___const(t120);
  _Bool c134 = ((t132 < r133)) ? 1 : 0;
  _Bool ternary135;
  if (c134) {
    _Bool c136 = 1;
    ternary135 = (_Bool)c136;
  } else {
    unsigned long t137 = __len118;
    unsigned long r138 = std__vector_int__std__allocator_int_____max_size___const(t120);
    _Bool c139 = ((t137 > r138)) ? 1 : 0;
    ternary135 = (_Bool)c139;
  }
  unsigned long ternary140;
  if (ternary135) {
    unsigned long r141 = std__vector_int__std__allocator_int_____max_size___const(t120);
    ternary140 = (unsigned long)r141;
  } else {
    unsigned long t142 = __len118;
    ternary140 = (unsigned long)t142;
  }
  __retval117 = ternary140;
  unsigned long t143 = __retval117;
  return t143;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v144) {
bb145:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this146;
  int** __retval147;
  this146 = v144;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t148 = this146;
  __retval147 = &t148->_M_current;
  int** t149 = __retval147;
  return t149;
}

// function: _ZN9__gnu_cxxmiIPiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v150, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v151) {
bb152:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs153;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs154;
  long __retval155;
  __lhs153 = v150;
  __rhs154 = v151;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t156 = __lhs153;
  int** r157 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t156);
  int* t158 = *r157;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t159 = __rhs154;
  int** r160 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t159);
  int* t161 = *r160;
  long diff162 = t158 - t161;
  __retval155 = diff162;
  long t163 = __retval155;
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

// function: _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v294, int* v295) {
bb296:
  int* __location297;
  int* __args298;
  int* __retval299;
  void* __loc300;
  __location297 = v294;
  __args298 = v295;
  int* t301 = __location297;
  void* cast302 = (void*)t301;
  __loc300 = cast302;
    void* t303 = __loc300;
    int* cast304 = (int*)t303;
    int* t305 = __args298;
    int t306 = *t305;
    *cast304 = t306;
    __retval299 = cast304;
    int* t307 = __retval299;
    return t307;
  abort();
}

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std__allocator_int_* v308, int* v309, int* v310) {
bb311:
  struct std__allocator_int_* __a312;
  int* __p313;
  int* __args314;
  __a312 = v308;
  __p313 = v309;
  __args314 = v310;
  int* t315 = __p313;
  int* t316 = __args314;
  int* r317 = _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t315, t316);
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v318) {
bb319:
  int* __location320;
  __location320 = v318;
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE7destroyIiEEvRS0_PT_
void void_std__allocator_traits_std__allocator_int_____destroy_int_(struct std__allocator_int_* v321, int* v322) {
bb323:
  struct std__allocator_int_* __a324;
  int* __p325;
  __a324 = v321;
  __p325 = v322;
  int* t326 = __p325;
  void_std__destroy_at_int_(t326);
  return;
}

// function: _ZSt19__relocate_object_aIiiSaIiEEvPT_PT0_RT1_
void void_std____relocate_object_a_int__int__std__allocator_int___(int* v327, int* v328, struct std__allocator_int_* v329) {
bb330:
  int* __dest331;
  int* __orig332;
  struct std__allocator_int_* __alloc333;
  __dest331 = v327;
  __orig332 = v328;
  __alloc333 = v329;
  struct std__allocator_int_* t334 = __alloc333;
  int* t335 = __dest331;
  int* t336 = __orig332;
  void_std__allocator_traits_std__allocator_int_____construct_int__int_(t334, t335, t336);
  struct std__allocator_int_* t337 = __alloc333;
  int* t338 = __orig332;
  void_std__allocator_traits_std__allocator_int_____destroy_int_(t337, t338);
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivEdeEv
int* __gnu_cxx____normal_iterator_int___void___operator____const(struct __gnu_cxx____normal_iterator_int____void_* v339) {
bb340:
  struct __gnu_cxx____normal_iterator_int____void_* this341;
  int* __retval342;
  this341 = v339;
  struct __gnu_cxx____normal_iterator_int____void_* t343 = this341;
  int* t344 = t343->_M_current;
  __retval342 = t344;
  int* t345 = __retval342;
  return t345;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEppEv
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator__(struct __gnu_cxx____normal_iterator_int____void_* v346) {
bb347:
  struct __gnu_cxx____normal_iterator_int____void_* this348;
  struct __gnu_cxx____normal_iterator_int____void_* __retval349;
  this348 = v346;
  struct __gnu_cxx____normal_iterator_int____void_* t350 = this348;
  int* t351 = t350->_M_current;
  int c352 = 1;
  int* ptr353 = &(t351)[c352];
  t350->_M_current = ptr353;
  __retval349 = t350;
  struct __gnu_cxx____normal_iterator_int____void_* t354 = __retval349;
  return t354;
}

// function: _ZSt14__relocate_a_1IPiN9__gnu_cxx17__normal_iteratorIS0_vEESaIiEET0_T_S6_S5_RT1_
struct __gnu_cxx____normal_iterator_int____void_ __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(int* v355, int* v356, struct __gnu_cxx____normal_iterator_int____void_ v357, struct std__allocator_int_* v358) {
bb359:
  int* __first360;
  int* __last361;
  struct __gnu_cxx____normal_iterator_int____void_ __result362;
  struct std__allocator_int_* __alloc363;
  struct __gnu_cxx____normal_iterator_int____void_ __retval364;
  __first360 = v355;
  __last361 = v356;
  __result362 = v357;
  __alloc363 = v358;
  __retval364 = __result362; // copy
    while (1) {
      int* t366 = __first360;
      int* t367 = __last361;
      _Bool c368 = ((t366 != t367)) ? 1 : 0;
      if (!c368) break;
      int* r369 = __gnu_cxx____normal_iterator_int___void___operator____const(&__retval364);
      int* t370 = __first360;
      struct std__allocator_int_* t371 = __alloc363;
      void_std____relocate_object_a_int__int__std__allocator_int___(r369, t370, t371);
    for_step365: ;
      int* t372 = __first360;
      int c373 = 1;
      int* ptr374 = &(t372)[c373];
      __first360 = ptr374;
      struct __gnu_cxx____normal_iterator_int____void_* r375 = __gnu_cxx____normal_iterator_int___void___operator__(&__retval364);
    }
  struct __gnu_cxx____normal_iterator_int____void_ t376 = __retval364;
  return t376;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEaSEOS2_
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator_(struct __gnu_cxx____normal_iterator_int____void_* v377, struct __gnu_cxx____normal_iterator_int____void_* v378) {
bb379:
  struct __gnu_cxx____normal_iterator_int____void_* this380;
  struct __gnu_cxx____normal_iterator_int____void_* unnamed381;
  struct __gnu_cxx____normal_iterator_int____void_* __retval382;
  this380 = v377;
  unnamed381 = v378;
  struct __gnu_cxx____normal_iterator_int____void_* t383 = this380;
  struct __gnu_cxx____normal_iterator_int____void_* t384 = unnamed381;
  int* t385 = t384->_M_current;
  t383->_M_current = t385;
  __retval382 = t383;
  struct __gnu_cxx____normal_iterator_int____void_* t386 = __retval382;
  return t386;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivE4baseEv
int** __gnu_cxx____normal_iterator_int___void___base___const(struct __gnu_cxx____normal_iterator_int____void_* v387) {
bb388:
  struct __gnu_cxx____normal_iterator_int____void_* this389;
  int** __retval390;
  this389 = v387;
  struct __gnu_cxx____normal_iterator_int____void_* t391 = this389;
  __retval390 = &t391->_M_current;
  int** t392 = __retval390;
  return t392;
}

// function: _ZSt14__relocate_a_1IiiENSt9enable_ifIXsr3std24__is_bitwise_relocatableIT_EE5valueEPS1_E4typeES2_S2_S2_RSaIT0_E
int* std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(int* v393, int* v394, int* v395, struct std__allocator_int_* v396) {
bb397:
  int* __first398;
  int* __last399;
  int* __result400;
  struct std__allocator_int_* __alloc401;
  int* __retval402;
  long __count403;
  __first398 = v393;
  __last399 = v394;
  __result400 = v395;
  __alloc401 = v396;
  int* t404 = __last399;
  int* t405 = __first398;
  long diff406 = t404 - t405;
  __count403 = diff406;
    long t407 = __count403;
    long c408 = 0;
    _Bool c409 = ((t407 > c408)) ? 1 : 0;
    if (c409) {
        _Bool r410 = std__is_constant_evaluated();
        if (r410) {
          struct __gnu_cxx____normal_iterator_int____void_ __out411;
          struct __gnu_cxx____normal_iterator_int____void_ ref_tmp0412;
          struct __gnu_cxx____normal_iterator_int____void_ agg_tmp0413;
          __gnu_cxx____normal_iterator_int___void_____normal_iterator(&__out411, &__result400);
          int* t414 = __first398;
          int* t415 = __last399;
          agg_tmp0413 = __out411; // copy
          struct std__allocator_int_* t416 = __alloc401;
          struct __gnu_cxx____normal_iterator_int____void_ t417 = agg_tmp0413;
          struct __gnu_cxx____normal_iterator_int____void_ r418 = __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(t414, t415, t417, t416);
          ref_tmp0412 = r418;
          struct __gnu_cxx____normal_iterator_int____void_* r419 = __gnu_cxx____normal_iterator_int___void___operator_(&__out411, &ref_tmp0412);
          int** r420 = __gnu_cxx____normal_iterator_int___void___base___const(&__out411);
          int* t421 = *r420;
          __retval402 = t421;
          int* t422 = __retval402;
          return t422;
        }
      int* t423 = __result400;
      void* cast424 = (void*)t423;
      int* t425 = __first398;
      void* cast426 = (void*)t425;
      long t427 = __count403;
      unsigned long cast428 = (unsigned long)t427;
      unsigned long c429 = 4;
      unsigned long b430 = cast428 * c429;
      void* r431 = memcpy(cast424, cast426, b430);
    }
  int* t432 = __result400;
  long t433 = __count403;
  int* ptr434 = &(t432)[t433];
  __retval402 = ptr434;
  int* t435 = __retval402;
  return t435;
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v436) {
bb437:
  int* __it438;
  int* __retval439;
  __it438 = v436;
  int* t440 = __it438;
  __retval439 = t440;
  int* t441 = __retval439;
  return t441;
}

// function: _ZSt12__relocate_aIPiS0_SaIiEET0_T_S3_S2_RT1_
int* int__std____relocate_a_int___int___std__allocator_int___(int* v442, int* v443, int* v444, struct std__allocator_int_* v445) {
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
  int* r453 = int__std____niter_base_int__(t452);
  int* t454 = __last448;
  int* r455 = int__std____niter_base_int__(t454);
  int* t456 = __result449;
  int* r457 = int__std____niter_base_int__(t456);
  struct std__allocator_int_* t458 = __alloc450;
  int* r459 = std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(r453, r455, r457, t458);
  __retval451 = r459;
  int* t460 = __retval451;
  return t460;
}

// function: _ZNSt6vectorIiSaIiEE11_S_relocateEPiS2_S2_RS0_
int* std__vector_int__std__allocator_int______S_relocate(int* v461, int* v462, int* v463, struct std__allocator_int_* v464) {
bb465:
  int* __first466;
  int* __last467;
  int* __result468;
  struct std__allocator_int_* __alloc469;
  int* __retval470;
  __first466 = v461;
  __last467 = v462;
  __result468 = v463;
  __alloc469 = v464;
  int* t471 = __first466;
  int* t472 = __last467;
  int* t473 = __result468;
  struct std__allocator_int_* t474 = __alloc469;
  int* r475 = int__std____relocate_a_int___int___std__allocator_int___(t471, t472, t473, t474);
  __retval470 = r475;
  int* t476 = __retval470;
  return t476;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v477) {
bb478:
  struct std___Vector_base_int__std__allocator_int__* this479;
  struct std__allocator_int_* __retval480;
  this479 = v477;
  struct std___Vector_base_int__std__allocator_int__* t481 = this479;
  struct std__allocator_int_* base482 = (struct std__allocator_int_*)((char *)&(t481->_M_impl) + 0);
  __retval480 = base482;
  struct std__allocator_int_* t483 = __retval480;
  return t483;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocD2Ev
void std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v484) {
bb485:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this486;
  this486 = v484;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t487 = this486;
    int* t488 = t487->_M_storage;
    _Bool cast489 = (_Bool)t488;
    if (cast489) {
      struct std___Vector_base_int__std__allocator_int__* t490 = t487->_M_vect;
      int* t491 = t487->_M_storage;
      unsigned long t492 = t487->_M_len;
      std___Vector_base_int__std__allocator_int______M_deallocate(t490, t491, t492);
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_M_realloc_appendIJRKiEEEvDpOT_
void void_std__vector_int__std__allocator_int______M_realloc_append_int_const__(struct std__vector_int__std__allocator_int__* v493, int* v494) {
bb495:
  struct std__vector_int__std__allocator_int__* this496;
  int* __args497;
  unsigned long __len498;
  int* __old_start499;
  int* __old_finish500;
  unsigned long __elems501;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0502;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1503;
  int* __new_start504;
  int* __new_finish505;
  this496 = v493;
  __args497 = v494;
  struct std__vector_int__std__allocator_int__* t506 = this496;
  unsigned long c507 = 1;
  char* cast508 = (char*)&(_str_4);
  unsigned long r509 = std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(t506, c507, cast508);
  __len498 = r509;
    unsigned long t510 = __len498;
    unsigned long c511 = 0;
    _Bool c512 = ((t510 <= c511)) ? 1 : 0;
    if (c512) {
      __builtin_unreachable();
    }
  struct std___Vector_base_int__std__allocator_int__* base513 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t506 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base514 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base513->_M_impl) + 0);
  int* t515 = base514->_M_start;
  __old_start499 = t515;
  struct std___Vector_base_int__std__allocator_int__* base516 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t506 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base517 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base516->_M_impl) + 0);
  int* t518 = base517->_M_finish;
  __old_finish500 = t518;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r519 = std__vector_int__std__allocator_int_____end(t506);
  ref_tmp0502 = r519;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r520 = std__vector_int__std__allocator_int_____begin(t506);
  ref_tmp1503 = r520;
  long r521 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&ref_tmp0502, &ref_tmp1503);
  unsigned long cast522 = (unsigned long)r521;
  __elems501 = cast522;
  struct std___Vector_base_int__std__allocator_int__* base523 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t506 + 0);
  unsigned long t524 = __len498;
  int* r525 = std___Vector_base_int__std__allocator_int______M_allocate(base523, t524);
  __new_start504 = r525;
  int* t526 = __new_start504;
  __new_finish505 = t526;
    struct std__vector_int__std__allocator_int_____Guard_alloc __guard527;
    int* ref_tmp2528;
    int* t529 = __new_start504;
    unsigned long t530 = __len498;
    struct std___Vector_base_int__std__allocator_int__* base531 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t506 + 0);
    std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(&__guard527, t529, t530, base531);
      struct std___Vector_base_int__std__allocator_int__* base532 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t506 + 0);
      struct std__allocator_int_* base533 = (struct std__allocator_int_*)((char *)&(base532->_M_impl) + 0);
      int* t534 = __new_start504;
      unsigned long t535 = __elems501;
      int* ptr536 = &(t534)[t535];
      ref_tmp2528 = ptr536;
      int* r537 = auto_std____to_address_int__(&ref_tmp2528);
      int* t538 = __args497;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(base533, r537, t538);
        int* t539 = __old_start499;
        int* t540 = __old_finish500;
        int* t541 = __new_start504;
        struct std___Vector_base_int__std__allocator_int__* base542 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t506 + 0);
        struct std__allocator_int_* r543 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base542);
        int* r544 = std__vector_int__std__allocator_int______S_relocate(t539, t540, t541, r543);
        __new_finish505 = r544;
        int* t545 = __new_finish505;
        int c546 = 1;
        int* ptr547 = &(t545)[c546];
        __new_finish505 = ptr547;
      int* t548 = __old_start499;
      __guard527._M_storage = t548;
      struct std___Vector_base_int__std__allocator_int__* base549 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t506 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base550 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base549->_M_impl) + 0);
      int* t551 = base550->_M_end_of_storage;
      int* t552 = __old_start499;
      long diff553 = t551 - t552;
      unsigned long cast554 = (unsigned long)diff553;
      __guard527._M_len = cast554;
    {
      std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(&__guard527);
    }
  int* t555 = __new_start504;
  struct std___Vector_base_int__std__allocator_int__* base556 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t506 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base557 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base556->_M_impl) + 0);
  base557->_M_start = t555;
  int* t558 = __new_finish505;
  struct std___Vector_base_int__std__allocator_int__* base559 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t506 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base560 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base559->_M_impl) + 0);
  base560->_M_finish = t558;
  int* t561 = __new_start504;
  unsigned long t562 = __len498;
  int* ptr563 = &(t561)[t562];
  struct std___Vector_base_int__std__allocator_int__* base564 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t506 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base565 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base564->_M_impl) + 0);
  base565->_M_end_of_storage = ptr563;
  return;
}

// function: _ZNSt6vectorIiSaIiEE9push_backERKi
void std__vector_int__std__allocator_int_____push_back(struct std__vector_int__std__allocator_int__* v566, int* v567) {
bb568:
  struct std__vector_int__std__allocator_int__* this569;
  int* __x570;
  this569 = v566;
  __x570 = v567;
  struct std__vector_int__std__allocator_int__* t571 = this569;
    struct std___Vector_base_int__std__allocator_int__* base572 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t571 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base573 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base572->_M_impl) + 0);
    int* t574 = base573->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base575 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t571 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base576 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base575->_M_impl) + 0);
    int* t577 = base576->_M_end_of_storage;
    _Bool c578 = ((t574 != t577)) ? 1 : 0;
    if (c578) {
      struct std___Vector_base_int__std__allocator_int__* base579 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t571 + 0);
      struct std__allocator_int_* base580 = (struct std__allocator_int_*)((char *)&(base579->_M_impl) + 0);
      struct std___Vector_base_int__std__allocator_int__* base581 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t571 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base582 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base581->_M_impl) + 0);
      int* t583 = base582->_M_finish;
      int* t584 = __x570;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(base580, t583, t584);
      struct std___Vector_base_int__std__allocator_int__* base585 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t571 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base586 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base585->_M_impl) + 0);
      int* t587 = base586->_M_finish;
      int c588 = 1;
      int* ptr589 = &(t587)[c588];
      base586->_M_finish = ptr589;
    } else {
      int* t590 = __x570;
      void_std__vector_int__std__allocator_int______M_realloc_append_int_const__(t571, t590);
    }
  return;
}

// function: _ZSt11swap_rangesIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_ET0_T_S8_S7_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__swap_ranges___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v591, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v592, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v593) {
bb594:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first1595;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last1596;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first2597;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval598;
  __first1595 = v591;
  __last1596 = v592;
  __first2597 = v593;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0599;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1600;
    while (1) {
      _Bool r602 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first1595, &__last1596);
      _Bool u603 = !r602;
      if (!u603) break;
      agg_tmp0599 = __first1595; // copy
      agg_tmp1600 = __first2597; // copy
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t604 = agg_tmp0599;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t605 = agg_tmp1600;
      void_std__iter_swap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t604, t605);
    for_step601: ;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r606 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(&__first1595);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r607 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(&__first2597);
    }
  __retval598 = __first2597; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t608 = __retval598;
  return t608;
}

// function: _ZSt12__niter_wrapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES2_ET_S7_T0_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____niter_wrap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v609, int* v610) {
bb611:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __from612;
  int* __res613;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval614;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0615;
  __from612 = v609;
  __res613 = v610;
  int* t616 = __res613;
  int* r617 = int__std____niter_base_int__(t616);
  agg_tmp0615 = __from612; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t618 = agg_tmp0615;
  int* r619 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t618);
  long diff620 = r617 - r619;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r621 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__from612, diff620);
  __retval614 = r621;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t622 = __retval614;
  return t622;
}

// function: _ZSt10__distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_St26random_access_iterator_tag
long std__iterator_traits_int____difference_type_std____distance_int__(int* v623, int* v624, struct std__random_access_iterator_tag v625) {
bb626:
  int* __first627;
  int* __last628;
  struct std__random_access_iterator_tag unnamed629;
  long __retval630;
  __first627 = v623;
  __last628 = v624;
  unnamed629 = v625;
  int* t631 = __last628;
  int* t632 = __first627;
  long diff633 = t631 - t632;
  __retval630 = diff633;
  long t634 = __retval630;
  return t634;
}

// function: _ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** v635) {
bb636:
  int** unnamed637;
  struct std__random_access_iterator_tag __retval638;
  unnamed637 = v635;
  struct std__random_access_iterator_tag t639 = __retval638;
  return t639;
}

// function: _ZSt8distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_
long std__iterator_traits_int____difference_type_std__distance_int__(int* v640, int* v641) {
bb642:
  int* __first643;
  int* __last644;
  long __retval645;
  struct std__random_access_iterator_tag agg_tmp0646;
  __first643 = v640;
  __last644 = v641;
  int* t647 = __first643;
  int* t648 = __last644;
  struct std__random_access_iterator_tag r649 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first643);
  agg_tmp0646 = r649;
  struct std__random_access_iterator_tag t650 = agg_tmp0646;
  long r651 = std__iterator_traits_int____difference_type_std____distance_int__(t647, t648, t650);
  __retval645 = r651;
  long t652 = __retval645;
  return t652;
}

// function: _ZSt12__assign_oneILb1EPiS0_EvRT0_RT1_
void void_std____assign_one_true__int___int__(int** v653, int** v654) {
bb655:
  int** __out656;
  int** __in657;
  __out656 = v653;
  __in657 = v654;
    int** t658 = __in657;
    int* t659 = *t658;
    int t660 = *t659;
    int** t661 = __out656;
    int* t662 = *t661;
    *t662 = t660;
  return;
}

// function: _ZSt14__copy_move_a2ILb1EPiS0_S0_ET2_T0_T1_S1_
int* int__std____copy_move_a2_true__int___int___int__(int* v663, int* v664, int* v665) {
bb666:
  int* __first667;
  int* __last668;
  int* __result669;
  int* __retval670;
  __first667 = v663;
  __last668 = v664;
  __result669 = v665;
      _Bool r671 = std____is_constant_evaluated();
      if (r671) {
      } else {
          long __n672;
          int* t673 = __first667;
          int* t674 = __last668;
          long r675 = std__iterator_traits_int____difference_type_std__distance_int__(t673, t674);
          __n672 = r675;
            long t676 = __n672;
            long c677 = 1;
            _Bool c678 = ((t676 > c677)) ? 1 : 0;
            if (c678) {
              int* t679 = __result669;
              void* cast680 = (void*)t679;
              int* t681 = __first667;
              void* cast682 = (void*)t681;
              long t683 = __n672;
              unsigned long cast684 = (unsigned long)t683;
              unsigned long c685 = 4;
              unsigned long b686 = cast684 * c685;
              void* r687 = memmove(cast680, cast682, b686);
              long t688 = __n672;
              int* t689 = __result669;
              int* ptr690 = &(t689)[t688];
              __result669 = ptr690;
            } else {
                long t691 = __n672;
                long c692 = 1;
                _Bool c693 = ((t691 == c692)) ? 1 : 0;
                if (c693) {
                  void_std____assign_one_true__int___int__(&__result669, &__first667);
                  int* t694 = __result669;
                  int c695 = 1;
                  int* ptr696 = &(t694)[c695];
                  __result669 = ptr696;
                }
            }
          int* t697 = __result669;
          __retval670 = t697;
          int* t698 = __retval670;
          return t698;
      }
    while (1) {
      int* t700 = __first667;
      int* t701 = __last668;
      _Bool c702 = ((t700 != t701)) ? 1 : 0;
      if (!c702) break;
      void_std____assign_one_true__int___int__(&__result669, &__first667);
    for_step699: ;
      int* t703 = __result669;
      int c704 = 1;
      int* ptr705 = &(t703)[c704];
      __result669 = ptr705;
      int* t706 = __first667;
      int c707 = 1;
      int* ptr708 = &(t706)[c707];
      __first667 = ptr708;
    }
  int* t709 = __result669;
  __retval670 = t709;
  int* t710 = __retval670;
  return t710;
}

// function: _ZSt14__copy_move_a1ILb1EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_a1_true__int___int__(int* v711, int* v712, int* v713) {
bb714:
  int* __first715;
  int* __last716;
  int* __result717;
  int* __retval718;
  __first715 = v711;
  __last716 = v712;
  __result717 = v713;
  int* t719 = __first715;
  int* t720 = __last716;
  int* t721 = __result717;
  int* r722 = int__std____copy_move_a2_true__int___int___int__(t719, t720, t721);
  __retval718 = r722;
  int* t723 = __retval718;
  return t723;
}

// function: _ZSt12__niter_baseIPiSt6vectorIiSaIiEEET_N9__gnu_cxx17__normal_iteratorIS4_T0_EE
int* int__std____niter_base_int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v724) {
bb725:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it726;
  int* __retval727;
  __it726 = v724;
  int** r728 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__it726);
  int* t729 = *r728;
  __retval727 = t729;
  int* t730 = __retval727;
  return t730;
}

// function: _ZSt13__copy_move_aILb1EN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_ET1_T0_S8_S7_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____copy_move_a_true____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v731, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v732, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v733) {
bb734:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first735;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last736;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result737;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval738;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0739;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1740;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2741;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3742;
  __first735 = v731;
  __last736 = v732;
  __result737 = v733;
  agg_tmp0739 = __result737; // copy
  agg_tmp1740 = __first735; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t743 = agg_tmp1740;
  int* r744 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t743);
  agg_tmp2741 = __last736; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t745 = agg_tmp2741;
  int* r746 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t745);
  agg_tmp3742 = __result737; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t747 = agg_tmp3742;
  int* r748 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t747);
  int* r749 = int__std____copy_move_a1_true__int___int__(r744, r746, r748);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t750 = agg_tmp0739;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r751 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____niter_wrap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(t750, r749);
  __retval738 = r751;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t752 = __retval738;
  return t752;
}

// function: _ZSt12__miter_baseIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEET_S7_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v753) {
bb754:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it755;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval756;
  __it755 = v753;
  __retval756 = __it755; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t757 = __retval756;
  return t757;
}

// function: _ZSt4moveIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_ET0_T_S8_S7_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__move___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v758, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v759, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v760) {
bb761:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first762;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last763;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result764;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval765;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0766;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1767;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2768;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3769;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp4770;
  __first762 = v758;
  __last763 = v759;
  __result764 = v760;
  agg_tmp1767 = __first762; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t771 = agg_tmp1767;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r772 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t771);
  agg_tmp0766 = r772;
  agg_tmp3769 = __last763; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t773 = agg_tmp3769;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r774 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t773);
  agg_tmp2768 = r774;
  agg_tmp4770 = __result764; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t775 = agg_tmp0766;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t776 = agg_tmp2768;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t777 = agg_tmp4770;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r778 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____copy_move_a_true____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t775, t776, t777);
  __retval765 = r778;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t779 = __retval765;
  return t779;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v780, int** v781) {
bb782:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this783;
  int** __i784;
  this783 = v780;
  __i784 = v781;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t785 = this783;
  int** t786 = __i784;
  int* t787 = *t786;
  t785->_M_current = t787;
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEmiEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v788, long v789) {
bb790:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this791;
  long __n792;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval793;
  int* ref_tmp0794;
  this791 = v788;
  __n792 = v789;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t795 = this791;
  int* t796 = t795->_M_current;
  long t797 = __n792;
  long u798 = -t797;
  int* ptr799 = &(t796)[u798];
  ref_tmp0794 = ptr799;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval793, &ref_tmp0794);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t800 = __retval793;
  return t800;
}

// function: _ZSt4swapIiENSt9enable_ifIXsr6__and_ISt6__not_ISt15__is_tuple_likeIT_EESt21is_move_constructibleIS3_ESt18is_move_assignableIS3_EEE5valueEvE4typeERS3_SC_
void std__enable_if___and__std____not__std____is_tuple_like_int_____std__is_move_constructible_int___std__is_move_assignable_int_____value__void___type_std__swap_int_(int* v801, int* v802) {
bb803:
  int* __a804;
  int* __b805;
  int __tmp806;
  __a804 = v801;
  __b805 = v802;
  int* t807 = __a804;
  int t808 = *t807;
  __tmp806 = t808;
  int* t809 = __b805;
  int t810 = *t809;
  int* t811 = __a804;
  *t811 = t810;
  int t812 = __tmp806;
  int* t813 = __b805;
  *t813 = t812;
  return;
}

// function: _ZSt9iter_swapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_EvT_T0_
void void_std__iter_swap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v814, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v815) {
bb816:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __a817;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __b818;
  __a817 = v814;
  __b818 = v815;
  int* r819 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__a817);
  int* r820 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__b818);
  std__enable_if___and__std____not__std____is_tuple_like_int_____std__is_move_constructible_int___std__is_move_assignable_int_____value__void___type_std__swap_int_(r819, r820);
  return;
}

// function: _ZSt4swapIlENSt9enable_ifIXsr6__and_ISt6__not_ISt15__is_tuple_likeIT_EESt21is_move_constructibleIS3_ESt18is_move_assignableIS3_EEE5valueEvE4typeERS3_SC_
void std__enable_if___and__std____not__std____is_tuple_like_long_____std__is_move_constructible_long___std__is_move_assignable_long_____value__void___type_std__swap_long_(long* v821, long* v822) {
bb823:
  long* __a824;
  long* __b825;
  long __tmp826;
  __a824 = v821;
  __b825 = v822;
  long* t827 = __a824;
  long t828 = *t827;
  __tmp826 = t828;
  long* t829 = __b825;
  long t830 = *t829;
  long* t831 = __a824;
  *t831 = t830;
  long t832 = __tmp826;
  long* t833 = __b825;
  *t833 = t832;
  return;
}

// function: _ZSt9__advanceIPilEvRT_T0_St26random_access_iterator_tag
void void_std____advance_int___long_(int** v834, long v835, struct std__random_access_iterator_tag v836) {
bb837:
  int** __i838;
  long __n839;
  struct std__random_access_iterator_tag unnamed840;
  __i838 = v834;
  __n839 = v835;
  unnamed840 = v836;
    long t841 = __n839;
    _Bool isconst842 = 0;
    _Bool ternary843;
    if (isconst842) {
      long t844 = __n839;
      long c845 = 1;
      _Bool c846 = ((t844 == c845)) ? 1 : 0;
      ternary843 = (_Bool)c846;
    } else {
      _Bool c847 = 0;
      ternary843 = (_Bool)c847;
    }
    if (ternary843) {
      int** t848 = __i838;
      int* t849 = *t848;
      int c850 = 1;
      int* ptr851 = &(t849)[c850];
      *t848 = ptr851;
    } else {
        long t852 = __n839;
        _Bool isconst853 = 0;
        _Bool ternary854;
        if (isconst853) {
          long t855 = __n839;
          long c856 = -1;
          _Bool c857 = ((t855 == c856)) ? 1 : 0;
          ternary854 = (_Bool)c857;
        } else {
          _Bool c858 = 0;
          ternary854 = (_Bool)c858;
        }
        if (ternary854) {
          int** t859 = __i838;
          int* t860 = *t859;
          int c861 = -1;
          int* ptr862 = &(t860)[c861];
          *t859 = ptr862;
        } else {
          long t863 = __n839;
          int** t864 = __i838;
          int* t865 = *t864;
          int* ptr866 = &(t865)[t863];
          *t864 = ptr866;
        }
    }
  return;
}

// function: _ZSt7advanceIPilEvRT_T0_
void void_std__advance_int___long_(int** v867, long v868) {
bb869:
  int** __i870;
  long __n871;
  long __d872;
  struct std__random_access_iterator_tag agg_tmp0873;
  __i870 = v867;
  __n871 = v868;
  long t874 = __n871;
  __d872 = t874;
  int** t875 = __i870;
  long t876 = __d872;
  int** t877 = __i870;
  struct std__random_access_iterator_tag r878 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(t877);
  agg_tmp0873 = r878;
  struct std__random_access_iterator_tag t879 = agg_tmp0873;
  void_std____advance_int___long_(t875, t876, t879);
  return;
}

// function: _ZSt23__copy_move_backward_a2ILb1EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_backward_a2_true__int___int__(int* v880, int* v881, int* v882) {
bb883:
  int* __first884;
  int* __last885;
  int* __result886;
  int* __retval887;
  __first884 = v880;
  __last885 = v881;
  __result886 = v882;
      _Bool r888 = std__is_constant_evaluated();
      if (r888) {
      } else {
          long __n889;
          int* t890 = __first884;
          int* t891 = __last885;
          long r892 = std__iterator_traits_int____difference_type_std__distance_int__(t890, t891);
          __n889 = r892;
          long t893 = __n889;
          long u894 = -t893;
          void_std__advance_int___long_(&__result886, u894);
            long t895 = __n889;
            long c896 = 1;
            _Bool c897 = ((t895 > c896)) ? 1 : 0;
            if (c897) {
              int* t898 = __result886;
              void* cast899 = (void*)t898;
              int* t900 = __first884;
              void* cast901 = (void*)t900;
              long t902 = __n889;
              unsigned long cast903 = (unsigned long)t902;
              unsigned long c904 = 4;
              unsigned long b905 = cast903 * c904;
              void* r906 = memmove(cast899, cast901, b905);
            } else {
                long t907 = __n889;
                long c908 = 1;
                _Bool c909 = ((t907 == c908)) ? 1 : 0;
                if (c909) {
                  void_std____assign_one_true__int___int__(&__result886, &__first884);
                }
            }
          int* t910 = __result886;
          __retval887 = t910;
          int* t911 = __retval887;
          return t911;
      }
    while (1) {
      int* t912 = __first884;
      int* t913 = __last885;
      _Bool c914 = ((t912 != t913)) ? 1 : 0;
      if (!c914) break;
        int* t915 = __last885;
        int c916 = -1;
        int* ptr917 = &(t915)[c916];
        __last885 = ptr917;
        int* t918 = __result886;
        int c919 = -1;
        int* ptr920 = &(t918)[c919];
        __result886 = ptr920;
        void_std____assign_one_true__int___int__(&__result886, &__last885);
    }
  int* t921 = __result886;
  __retval887 = t921;
  int* t922 = __retval887;
  return t922;
}

// function: _ZSt23__copy_move_backward_a1ILb1EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_backward_a1_true__int___int__(int* v923, int* v924, int* v925) {
bb926:
  int* __first927;
  int* __last928;
  int* __result929;
  int* __retval930;
  __first927 = v923;
  __last928 = v924;
  __result929 = v925;
  int* t931 = __first927;
  int* t932 = __last928;
  int* t933 = __result929;
  int* r934 = int__std____copy_move_backward_a2_true__int___int__(t931, t932, t933);
  __retval930 = r934;
  int* t935 = __retval930;
  return t935;
}

// function: _ZSt22__copy_move_backward_aILb1EN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_ET1_T0_S8_S7_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____copy_move_backward_a_true____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v936, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v937, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v938) {
bb939:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first940;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last941;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result942;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval943;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0944;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1945;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2946;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3947;
  __first940 = v936;
  __last941 = v937;
  __result942 = v938;
  agg_tmp0944 = __result942; // copy
  agg_tmp1945 = __first940; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t948 = agg_tmp1945;
  int* r949 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t948);
  agg_tmp2946 = __last941; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t950 = agg_tmp2946;
  int* r951 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t950);
  agg_tmp3947 = __result942; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t952 = agg_tmp3947;
  int* r953 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t952);
  int* r954 = int__std____copy_move_backward_a1_true__int___int__(r949, r951, r953);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t955 = agg_tmp0944;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r956 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____niter_wrap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(t955, r954);
  __retval943 = r956;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t957 = __retval943;
  return t957;
}

// function: _ZSt13move_backwardIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_ET0_T_S8_S7_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__move_backward___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v958, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v959, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v960) {
bb961:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first962;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last963;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result964;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval965;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0966;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1967;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2968;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3969;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp4970;
  __first962 = v958;
  __last963 = v959;
  __result964 = v960;
  agg_tmp1967 = __first962; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t971 = agg_tmp1967;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r972 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t971);
  agg_tmp0966 = r972;
  agg_tmp3969 = __last963; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t973 = agg_tmp3969;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r974 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t973);
  agg_tmp2968 = r974;
  agg_tmp4970 = __result964; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t975 = agg_tmp0966;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t976 = agg_tmp2968;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t977 = agg_tmp4970;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r978 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____copy_move_backward_a_true____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t975, t976, t977);
  __retval965 = r978;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t979 = __retval965;
  return t979;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEmmEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v980) {
bb981:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this982;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval983;
  this982 = v980;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t984 = this982;
  int* t985 = t984->_M_current;
  int c986 = -1;
  int* ptr987 = &(t985)[c986];
  t984->_M_current = ptr987;
  __retval983 = t984;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t988 = __retval983;
  return t988;
}

// function: _ZNSt3_V28__rotateIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEEET_S8_S8_S8_St26random_access_iterator_tag
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std___V2____rotate___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v989, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v990, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v991, struct std__random_access_iterator_tag v992) {
bb993:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first994;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __middle995;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last996;
  struct std__random_access_iterator_tag unnamed997;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval998;
  long __n999;
  long __k1000;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __p1001;
  __first994 = v989;
  __middle995 = v990;
  __last996 = v991;
  unnamed997 = v992;
    _Bool r1002 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first994, &__middle995);
    if (r1002) {
      __retval998 = __last996; // copy
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1003 = __retval998;
      return t1003;
    } else {
        _Bool r1004 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__last996, &__middle995);
        if (r1004) {
          __retval998 = __first994; // copy
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1005 = __retval998;
          return t1005;
        }
    }
  long r1006 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__last996, &__first994);
  __n999 = r1006;
  long r1007 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__middle995, &__first994);
  __k1000 = r1007;
    long t1008 = __k1000;
    long t1009 = __n999;
    long t1010 = __k1000;
    long b1011 = t1009 - t1010;
    _Bool c1012 = ((t1008 == b1011)) ? 1 : 0;
    if (c1012) {
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01013;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11014;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp21015;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp31016;
      agg_tmp01013 = __first994; // copy
      agg_tmp11014 = __middle995; // copy
      agg_tmp21015 = __middle995; // copy
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1017 = agg_tmp01013;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1018 = agg_tmp11014;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1019 = agg_tmp21015;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1020 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__swap_ranges___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t1017, t1018, t1019);
      agg_tmp31016 = r1020;
      __retval998 = __middle995; // copy
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1021 = __retval998;
      return t1021;
    }
  __p1001 = __first994; // copy
  long r1022 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__last996, &__middle995);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1023 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first994, r1022);
  __retval998 = r1023;
    while (1) {
      _Bool c1025 = 1;
      if (!c1025) break;
          long t1026 = __k1000;
          long t1027 = __n999;
          long t1028 = __k1000;
          long b1029 = t1027 - t1028;
          _Bool c1030 = ((t1026 < b1029)) ? 1 : 0;
          if (c1030) {
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __q1031;
              _Bool c1032 = 1;
              _Bool ternary1033;
              if (c1032) {
                long t1034 = __k1000;
                long c1035 = 1;
                _Bool c1036 = ((t1034 == c1035)) ? 1 : 0;
                ternary1033 = (_Bool)c1036;
              } else {
                _Bool c1037 = 0;
                ternary1033 = (_Bool)c1037;
              }
              if (ternary1033) {
                int __t1038;
                struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp41039;
                struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp51040;
                struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp61041;
                struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp71042;
                struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp01043;
                struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp11044;
                int* r1045 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__p1001);
                int t1046 = *r1045;
                __t1038 = t1046;
                long c1047 = 1;
                struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1048 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__p1001, c1047);
                agg_tmp41039 = r1048;
                long t1049 = __n999;
                struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1050 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__p1001, t1049);
                agg_tmp51040 = r1050;
                agg_tmp61041 = __p1001; // copy
                struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1051 = agg_tmp41039;
                struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1052 = agg_tmp51040;
                struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1053 = agg_tmp61041;
                struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1054 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__move___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t1051, t1052, t1053);
                agg_tmp71042 = r1054;
                int t1055 = __t1038;
                long t1056 = __n999;
                struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1057 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__p1001, t1056);
                ref_tmp11044 = r1057;
                long c1058 = 1;
                struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1059 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&ref_tmp11044, c1058);
                ref_tmp01043 = r1059;
                int* r1060 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp01043);
                *r1060 = t1055;
                struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1061 = __retval998;
                struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ret_val1062 = t1061;
                return ret_val1062;
              }
            long t1063 = __k1000;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1064 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__p1001, t1063);
            __q1031 = r1064;
              long __i1065;
              long c1066 = 0;
              __i1065 = c1066;
              while (1) {
                long t1068 = __i1065;
                long t1069 = __n999;
                long t1070 = __k1000;
                long b1071 = t1069 - t1070;
                _Bool c1072 = ((t1068 < b1071)) ? 1 : 0;
                if (!c1072) break;
                  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp81073;
                  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp91074;
                  agg_tmp81073 = __p1001; // copy
                  agg_tmp91074 = __q1031; // copy
                  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1075 = agg_tmp81073;
                  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1076 = agg_tmp91074;
                  void_std__iter_swap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t1075, t1076);
                  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1077 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(&__p1001);
                  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1078 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(&__q1031);
              for_step1067: ;
                long t1079 = __i1065;
                long u1080 = t1079 + 1;
                __i1065 = u1080;
              }
            long t1081 = __n999;
            unsigned long cast1082 = (unsigned long)t1081;
            long t1083 = __k1000;
            unsigned long cast1084 = (unsigned long)t1083;
            unsigned long b1085 = cast1082 % cast1084;
            long cast1086 = (long)b1085;
            __n999 = cast1086;
              long t1087 = __n999;
              long c1088 = 0;
              _Bool c1089 = ((t1087 == c1088)) ? 1 : 0;
              if (c1089) {
                struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1090 = __retval998;
                struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ret_val1091 = t1090;
                return ret_val1091;
              }
            std__enable_if___and__std____not__std____is_tuple_like_long_____std__is_move_constructible_long___std__is_move_assignable_long_____value__void___type_std__swap_long_(&__n999, &__k1000);
            long t1092 = __n999;
            long t1093 = __k1000;
            long b1094 = t1092 - t1093;
            __k1000 = b1094;
          } else {
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __q1095;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp51096;
            long t1097 = __n999;
            long t1098 = __k1000;
            long b1099 = t1097 - t1098;
            __k1000 = b1099;
              _Bool c1100 = 1;
              _Bool ternary1101;
              if (c1100) {
                long t1102 = __k1000;
                long c1103 = 1;
                _Bool c1104 = ((t1102 == c1103)) ? 1 : 0;
                ternary1101 = (_Bool)c1104;
              } else {
                _Bool c1105 = 0;
                ternary1101 = (_Bool)c1105;
              }
              if (ternary1101) {
                int __t1106;
                struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp21107;
                struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp31108;
                struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp101109;
                struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp111110;
                struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp41111;
                struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp121112;
                struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp131113;
                long t1114 = __n999;
                struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1115 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__p1001, t1114);
                ref_tmp31108 = r1115;
                long c1116 = 1;
                struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1117 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&ref_tmp31108, c1116);
                ref_tmp21107 = r1117;
                int* r1118 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp21107);
                int t1119 = *r1118;
                __t1106 = t1119;
                agg_tmp101109 = __p1001; // copy
                long t1120 = __n999;
                struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1121 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__p1001, t1120);
                ref_tmp41111 = r1121;
                long c1122 = 1;
                struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1123 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&ref_tmp41111, c1122);
                agg_tmp111110 = r1123;
                long t1124 = __n999;
                struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1125 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__p1001, t1124);
                agg_tmp121112 = r1125;
                struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1126 = agg_tmp101109;
                struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1127 = agg_tmp111110;
                struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1128 = agg_tmp121112;
                struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1129 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__move_backward___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t1126, t1127, t1128);
                agg_tmp131113 = r1129;
                int t1130 = __t1106;
                int* r1131 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__p1001);
                *r1131 = t1130;
                struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1132 = __retval998;
                struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ret_val1133 = t1132;
                return ret_val1133;
              }
            long t1134 = __n999;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1135 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__p1001, t1134);
            __q1095 = r1135;
            long t1136 = __k1000;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1137 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__q1095, t1136);
            ref_tmp51096 = r1137;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1138 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&__p1001, &ref_tmp51096);
              long __i1139;
              long c1140 = 0;
              __i1139 = c1140;
              while (1) {
                long t1142 = __i1139;
                long t1143 = __n999;
                long t1144 = __k1000;
                long b1145 = t1143 - t1144;
                _Bool c1146 = ((t1142 < b1145)) ? 1 : 0;
                if (!c1146) break;
                  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp141147;
                  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp151148;
                  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1149 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__p1001);
                  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1150 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__q1095);
                  agg_tmp141147 = __p1001; // copy
                  agg_tmp151148 = __q1095; // copy
                  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1151 = agg_tmp141147;
                  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1152 = agg_tmp151148;
                  void_std__iter_swap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t1151, t1152);
              for_step1141: ;
                long t1153 = __i1139;
                long u1154 = t1153 + 1;
                __i1139 = u1154;
              }
            long t1155 = __n999;
            unsigned long cast1156 = (unsigned long)t1155;
            long t1157 = __k1000;
            unsigned long cast1158 = (unsigned long)t1157;
            unsigned long b1159 = cast1156 % cast1158;
            long cast1160 = (long)b1159;
            __n999 = cast1160;
              long t1161 = __n999;
              long c1162 = 0;
              _Bool c1163 = ((t1161 == c1162)) ? 1 : 0;
              if (c1163) {
                struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1164 = __retval998;
                struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ret_val1165 = t1164;
                return ret_val1165;
              }
            std__enable_if___and__std____not__std____is_tuple_like_long_____std__is_move_constructible_long___std__is_move_assignable_long_____value__void___type_std__swap_long_(&__n999, &__k1000);
          }
    for_step1024: ;
    }
  abort();
}

// function: _ZSt19__iterator_categoryIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEENSt15iterator_traitsIT_E17iterator_categoryERKS8_
struct std__random_access_iterator_tag std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________iterator_category_std____iterator_category___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1166) {
bb1167:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed1168;
  struct std__random_access_iterator_tag __retval1169;
  unnamed1168 = v1166;
  struct std__random_access_iterator_tag t1170 = __retval1169;
  return t1170;
}

// function: _ZNSt3_V26rotateIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEEET_S8_S8_S8_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std___V2__rotate___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1171, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1172, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1173) {
bb1174:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first1175;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __middle1176;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last1177;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval1178;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01179;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11180;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp21181;
  struct std__random_access_iterator_tag agg_tmp31182;
  __first1175 = v1171;
  __middle1176 = v1172;
  __last1177 = v1173;
  agg_tmp01179 = __first1175; // copy
  agg_tmp11180 = __middle1176; // copy
  agg_tmp21181 = __last1177; // copy
  struct std__random_access_iterator_tag r1183 = std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________iterator_category_std____iterator_category___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(&__first1175);
  agg_tmp31182 = r1183;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1184 = agg_tmp01179;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1185 = agg_tmp11180;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1186 = agg_tmp21181;
  struct std__random_access_iterator_tag t1187 = agg_tmp31182;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1188 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std___V2____rotate___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t1184, t1185, t1186, t1187);
  __retval1178 = r1188;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1189 = __retval1178;
  return t1189;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v1190) {
bb1191:
  struct std__vector_int__std__allocator_int__* this1192;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval1193;
  this1192 = v1190;
  struct std__vector_int__std__allocator_int__* t1194 = this1192;
  struct std___Vector_base_int__std__allocator_int__* base1195 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1194 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1196 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1195->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval1193, &base1196->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1197 = __retval1193;
  return t1197;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEplEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1198, long v1199) {
bb1200:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this1201;
  long __n1202;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval1203;
  int* ref_tmp01204;
  this1201 = v1198;
  __n1202 = v1199;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1205 = this1201;
  int* t1206 = t1205->_M_current;
  long t1207 = __n1202;
  int* ptr1208 = &(t1206)[t1207];
  ref_tmp01204 = ptr1208;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval1203, &ref_tmp01204);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1209 = __retval1203;
  return t1209;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v1210) {
bb1211:
  struct std__vector_int__std__allocator_int__* this1212;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval1213;
  this1212 = v1210;
  struct std__vector_int__std__allocator_int__* t1214 = this1212;
  struct std___Vector_base_int__std__allocator_int__* base1215 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1214 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1216 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1215->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval1213, &base1216->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1217 = __retval1213;
  return t1217;
}

// function: _ZNSt6vectorIiSaIiEEixEm
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* v1218, unsigned long v1219) {
bb1220:
  struct std__vector_int__std__allocator_int__* this1221;
  unsigned long __n1222;
  int* __retval1223;
  this1221 = v1218;
  __n1222 = v1219;
  struct std__vector_int__std__allocator_int__* t1224 = this1221;
    do {
          unsigned long t1225 = __n1222;
          unsigned long r1226 = std__vector_int__std__allocator_int_____size___const(t1224);
          _Bool c1227 = ((t1225 < r1226)) ? 1 : 0;
          _Bool u1228 = !c1227;
          if (u1228) {
            char* cast1229 = (char*)&(_str_5);
            int c1230 = 1263;
            char* cast1231 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm);
            char* cast1232 = (char*)&(_str_6);
            std____glibcxx_assert_fail(cast1229, c1230, cast1231, cast1232);
          }
      _Bool c1233 = 0;
      if (!c1233) break;
    } while (1);
  struct std___Vector_base_int__std__allocator_int__* base1234 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1224 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1235 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1234->_M_impl) + 0);
  int* t1236 = base1235->_M_start;
  unsigned long t1237 = __n1222;
  int* ptr1238 = &(t1236)[t1237];
  __retval1223 = ptr1238;
  int* t1239 = __retval1223;
  return t1239;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v1240, int v1241) {
bb1242:
  int __a1243;
  int __b1244;
  int __retval1245;
  __a1243 = v1240;
  __b1244 = v1241;
  int t1246 = __a1243;
  int t1247 = __b1244;
  int b1248 = t1246 | t1247;
  __retval1245 = b1248;
  int t1249 = __retval1245;
  return t1249;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v1250) {
bb1251:
  struct std__basic_ios_char__std__char_traits_char__* this1252;
  int __retval1253;
  this1252 = v1250;
  struct std__basic_ios_char__std__char_traits_char__* t1254 = this1252;
  struct std__ios_base* base1255 = (struct std__ios_base*)((char *)t1254 + 0);
  int t1256 = base1255->_M_streambuf_state;
  __retval1253 = t1256;
  int t1257 = __retval1253;
  return t1257;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v1258, int v1259) {
bb1260:
  struct std__basic_ios_char__std__char_traits_char__* this1261;
  int __state1262;
  this1261 = v1258;
  __state1262 = v1259;
  struct std__basic_ios_char__std__char_traits_char__* t1263 = this1261;
  int r1264 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t1263);
  int t1265 = __state1262;
  int r1266 = std__operator_(r1264, t1265);
  std__basic_ios_char__std__char_traits_char_____clear(t1263, r1266);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v1267, char* v1268) {
bb1269:
  char* __c11270;
  char* __c21271;
  _Bool __retval1272;
  __c11270 = v1267;
  __c21271 = v1268;
  char* t1273 = __c11270;
  char t1274 = *t1273;
  int cast1275 = (int)t1274;
  char* t1276 = __c21271;
  char t1277 = *t1276;
  int cast1278 = (int)t1277;
  _Bool c1279 = ((cast1275 == cast1278)) ? 1 : 0;
  __retval1272 = c1279;
  _Bool t1280 = __retval1272;
  return t1280;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v1281) {
bb1282:
  char* __p1283;
  unsigned long __retval1284;
  unsigned long __i1285;
  __p1283 = v1281;
  unsigned long c1286 = 0;
  __i1285 = c1286;
    char ref_tmp01287;
    while (1) {
      unsigned long t1288 = __i1285;
      char* t1289 = __p1283;
      char* ptr1290 = &(t1289)[t1288];
      char c1291 = 0;
      ref_tmp01287 = c1291;
      _Bool r1292 = __gnu_cxx__char_traits_char___eq(ptr1290, &ref_tmp01287);
      _Bool u1293 = !r1292;
      if (!u1293) break;
      unsigned long t1294 = __i1285;
      unsigned long u1295 = t1294 + 1;
      __i1285 = u1295;
    }
  unsigned long t1296 = __i1285;
  __retval1284 = t1296;
  unsigned long t1297 = __retval1284;
  return t1297;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v1298) {
bb1299:
  char* __s1300;
  unsigned long __retval1301;
  __s1300 = v1298;
    _Bool r1302 = std____is_constant_evaluated();
    if (r1302) {
      char* t1303 = __s1300;
      unsigned long r1304 = __gnu_cxx__char_traits_char___length(t1303);
      __retval1301 = r1304;
      unsigned long t1305 = __retval1301;
      return t1305;
    }
  char* t1306 = __s1300;
  unsigned long r1307 = strlen(t1306);
  __retval1301 = r1307;
  unsigned long t1308 = __retval1301;
  return t1308;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1309, char* v1310) {
bb1311:
  struct std__basic_ostream_char__std__char_traits_char__* __out1312;
  char* __s1313;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1314;
  __out1312 = v1309;
  __s1313 = v1310;
    char* t1315 = __s1313;
    _Bool cast1316 = (_Bool)t1315;
    _Bool u1317 = !cast1316;
    if (u1317) {
      struct std__basic_ostream_char__std__char_traits_char__* t1318 = __out1312;
      void** v1319 = (void**)t1318;
      void* v1320 = *((void**)v1319);
      unsigned char* cast1321 = (unsigned char*)v1320;
      long c1322 = -24;
      unsigned char* ptr1323 = &(cast1321)[c1322];
      long* cast1324 = (long*)ptr1323;
      long t1325 = *cast1324;
      unsigned char* cast1326 = (unsigned char*)t1318;
      unsigned char* ptr1327 = &(cast1326)[t1325];
      struct std__basic_ostream_char__std__char_traits_char__* cast1328 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1327;
      struct std__basic_ios_char__std__char_traits_char__* cast1329 = (struct std__basic_ios_char__std__char_traits_char__*)cast1328;
      int t1330 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast1329, t1330);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t1331 = __out1312;
      char* t1332 = __s1313;
      char* t1333 = __s1313;
      unsigned long r1334 = std__char_traits_char___length(t1333);
      long cast1335 = (long)r1334;
      struct std__basic_ostream_char__std__char_traits_char__* r1336 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t1331, t1332, cast1335);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t1337 = __out1312;
  __retval1314 = t1337;
  struct std__basic_ostream_char__std__char_traits_char__* t1338 = __retval1314;
  return t1338;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEaSEOS5_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1339, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1340) {
bb1341:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this1342;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed1343;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval1344;
  this1342 = v1339;
  unnamed1343 = v1340;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1345 = this1342;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1346 = unnamed1343;
  int* t1347 = t1346->_M_current;
  t1345->_M_current = t1347;
  __retval1344 = t1345;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1348 = __retval1344;
  return t1348;
}

// function: _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1349, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1350) {
bb1351:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs1352;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs1353;
  _Bool __retval1354;
  __lhs1352 = v1349;
  __rhs1353 = v1350;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1355 = __lhs1352;
  int** r1356 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t1355);
  int* t1357 = *r1356;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1358 = __rhs1353;
  int** r1359 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t1358);
  int* t1360 = *r1359;
  _Bool c1361 = ((t1357 == t1360)) ? 1 : 0;
  __retval1354 = c1361;
  _Bool t1362 = __retval1354;
  return t1362;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1363) {
bb1364:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this1365;
  int* __retval1366;
  this1365 = v1363;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1367 = this1365;
  int* t1368 = t1367->_M_current;
  __retval1366 = t1368;
  int* t1369 = __retval1366;
  return t1369;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1370) {
bb1371:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this1372;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval1373;
  this1372 = v1370;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1374 = this1372;
  int* t1375 = t1374->_M_current;
  int c1376 = 1;
  int* ptr1377 = &(t1375)[c1376];
  t1374->_M_current = ptr1377;
  __retval1373 = t1374;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1378 = __retval1373;
  return t1378;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v1379, void* v1380) {
bb1381:
  struct std__basic_ostream_char__std__char_traits_char__* this1382;
  void* __pf1383;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1384;
  this1382 = v1379;
  __pf1383 = v1380;
  struct std__basic_ostream_char__std__char_traits_char__* t1385 = this1382;
  void* t1386 = __pf1383;
  struct std__basic_ostream_char__std__char_traits_char__* r1387 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t1386)(t1385);
  __retval1384 = r1387;
  struct std__basic_ostream_char__std__char_traits_char__* t1388 = __retval1384;
  return t1388;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1389) {
bb1390:
  struct std__basic_ostream_char__std__char_traits_char__* __os1391;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1392;
  __os1391 = v1389;
  struct std__basic_ostream_char__std__char_traits_char__* t1393 = __os1391;
  struct std__basic_ostream_char__std__char_traits_char__* r1394 = std__ostream__flush(t1393);
  __retval1392 = r1394;
  struct std__basic_ostream_char__std__char_traits_char__* t1395 = __retval1392;
  return t1395;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v1396) {
bb1397:
  struct std__ctype_char_* __f1398;
  struct std__ctype_char_* __retval1399;
  __f1398 = v1396;
    struct std__ctype_char_* t1400 = __f1398;
    _Bool cast1401 = (_Bool)t1400;
    _Bool u1402 = !cast1401;
    if (u1402) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t1403 = __f1398;
  __retval1399 = t1403;
  struct std__ctype_char_* t1404 = __retval1399;
  return t1404;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v1405, char v1406) {
bb1407:
  struct std__ctype_char_* this1408;
  char __c1409;
  char __retval1410;
  this1408 = v1405;
  __c1409 = v1406;
  struct std__ctype_char_* t1411 = this1408;
    char t1412 = t1411->_M_widen_ok;
    _Bool cast1413 = (_Bool)t1412;
    if (cast1413) {
      char t1414 = __c1409;
      unsigned char cast1415 = (unsigned char)t1414;
      unsigned long cast1416 = (unsigned long)cast1415;
      char t1417 = t1411->_M_widen[cast1416];
      __retval1410 = t1417;
      char t1418 = __retval1410;
      return t1418;
    }
  std__ctype_char____M_widen_init___const(t1411);
  char t1419 = __c1409;
  void** v1420 = (void**)t1411;
  void* v1421 = *((void**)v1420);
  char vcall1424 = (char)__VERIFIER_virtual_call_char_char(t1411, 6, t1419);
  __retval1410 = vcall1424;
  char t1425 = __retval1410;
  return t1425;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v1426, char v1427) {
bb1428:
  struct std__basic_ios_char__std__char_traits_char__* this1429;
  char __c1430;
  char __retval1431;
  this1429 = v1426;
  __c1430 = v1427;
  struct std__basic_ios_char__std__char_traits_char__* t1432 = this1429;
  struct std__ctype_char_* t1433 = t1432->_M_ctype;
  struct std__ctype_char_* r1434 = std__ctype_char__const__std____check_facet_std__ctype_char___(t1433);
  char t1435 = __c1430;
  char r1436 = std__ctype_char___widen_char__const(r1434, t1435);
  __retval1431 = r1436;
  char t1437 = __retval1431;
  return t1437;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1438) {
bb1439:
  struct std__basic_ostream_char__std__char_traits_char__* __os1440;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1441;
  __os1440 = v1438;
  struct std__basic_ostream_char__std__char_traits_char__* t1442 = __os1440;
  struct std__basic_ostream_char__std__char_traits_char__* t1443 = __os1440;
  void** v1444 = (void**)t1443;
  void* v1445 = *((void**)v1444);
  unsigned char* cast1446 = (unsigned char*)v1445;
  long c1447 = -24;
  unsigned char* ptr1448 = &(cast1446)[c1447];
  long* cast1449 = (long*)ptr1448;
  long t1450 = *cast1449;
  unsigned char* cast1451 = (unsigned char*)t1443;
  unsigned char* ptr1452 = &(cast1451)[t1450];
  struct std__basic_ostream_char__std__char_traits_char__* cast1453 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1452;
  struct std__basic_ios_char__std__char_traits_char__* cast1454 = (struct std__basic_ios_char__std__char_traits_char__*)cast1453;
  char c1455 = 10;
  char r1456 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast1454, c1455);
  struct std__basic_ostream_char__std__char_traits_char__* r1457 = std__ostream__put(t1442, r1456);
  struct std__basic_ostream_char__std__char_traits_char__* r1458 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r1457);
  __retval1441 = r1458;
  struct std__basic_ostream_char__std__char_traits_char__* t1459 = __retval1441;
  return t1459;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v1460) {
bb1461:
  struct std__vector_int__std__allocator_int__* this1462;
  this1462 = v1460;
  struct std__vector_int__std__allocator_int__* t1463 = this1462;
    struct std___Vector_base_int__std__allocator_int__* base1464 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1463 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1465 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1464->_M_impl) + 0);
    int* t1466 = base1465->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base1467 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1463 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1468 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1467->_M_impl) + 0);
    int* t1469 = base1468->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base1470 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1463 + 0);
    struct std__allocator_int_* r1471 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1470);
    void_std___Destroy_int___int_(t1466, t1469, r1471);
  {
    struct std___Vector_base_int__std__allocator_int__* base1472 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1463 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base1472);
  }
  return;
}

// function: main
int main() {
bb1473:
  int __retval1474;
  struct std__vector_int__std__allocator_int__ myvector1475;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it1476;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01477;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11478;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp01479;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp21480;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp31481;
  int c1482 = 0;
  __retval1474 = c1482;
  std__vector_int__std__allocator_int_____vector(&myvector1475);
    __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(&it1476);
      int i1483;
      int c1484 = 1;
      i1483 = c1484;
      while (1) {
        int t1486 = i1483;
        int c1487 = 6;
        _Bool c1488 = ((t1486 < c1487)) ? 1 : 0;
        if (!c1488) break;
        std__vector_int__std__allocator_int_____push_back(&myvector1475, &i1483);
      for_step1485: ;
        int t1489 = i1483;
        int u1490 = t1489 + 1;
        i1483 = u1490;
      }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1491 = std__vector_int__std__allocator_int_____begin(&myvector1475);
    agg_tmp01477 = r1491;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1492 = std__vector_int__std__allocator_int_____begin(&myvector1475);
    ref_tmp01479 = r1492;
    long c1493 = 3;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1494 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&ref_tmp01479, c1493);
    agg_tmp11478 = r1494;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1495 = std__vector_int__std__allocator_int_____end(&myvector1475);
    agg_tmp21480 = r1495;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1496 = agg_tmp01477;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1497 = agg_tmp11478;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1498 = agg_tmp21480;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1499 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std___V2__rotate___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t1496, t1497, t1498);
    agg_tmp31481 = r1499;
    unsigned long c1500 = 0;
    int* r1501 = std__vector_int__std__allocator_int_____operator__(&myvector1475, c1500);
    int t1502 = *r1501;
    int c1503 = 4;
    _Bool c1504 = ((t1502 != c1503)) ? 1 : 0;
    if (c1504) {
    } else {
      char* cast1505 = (char*)&(_str);
      char* c1506 = _str_1;
      unsigned int c1507 = 24;
      char* cast1508 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1505, c1506, c1507, cast1508);
    }
    char* cast1509 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* r1510 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1509);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp11511;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp21512;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1513 = std__vector_int__std__allocator_int_____begin(&myvector1475);
      ref_tmp11511 = r1513;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1514 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&it1476, &ref_tmp11511);
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1516 = std__vector_int__std__allocator_int_____end(&myvector1475);
        ref_tmp21512 = r1516;
        _Bool r1517 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&it1476, &ref_tmp21512);
        _Bool u1518 = !r1517;
        if (!u1518) break;
        char* cast1519 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* r1520 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1519);
        int* r1521 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&it1476);
        int t1522 = *r1521;
        struct std__basic_ostream_char__std__char_traits_char__* r1523 = std__ostream__operator__(r1520, t1522);
      for_step1515: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1524 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(&it1476);
      }
    struct std__basic_ostream_char__std__char_traits_char__* r1525 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c1526 = 0;
    __retval1474 = c1526;
    int t1527 = __retval1474;
    int ret_val1528 = t1527;
    {
      std__vector_int__std__allocator_int______vector(&myvector1475);
    }
    return ret_val1528;
  int t1529 = __retval1474;
  return t1529;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE
void _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1530) {
bb1531:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1532;
  this1532 = v1530;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1533 = this1532;
  struct std__allocator_int_* base1534 = (struct std__allocator_int_*)((char *)t1533 + 0);
  std__allocator_int___allocator(base1534);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1535 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t1533 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base1535);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1536) {
bb1537:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1538;
  this1538 = v1536;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1539 = this1538;
  {
    struct std__allocator_int_* base1540 = (struct std__allocator_int_*)((char *)t1539 + 0);
    std__allocator_int____allocator(base1540);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2Ev
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1541) {
bb1542:
  struct std___Vector_base_int__std__allocator_int__* this1543;
  this1543 = v1541;
  struct std___Vector_base_int__std__allocator_int__* t1544 = this1543;
  _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(&t1544->_M_impl);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1545:
  _Bool __retval1546;
    _Bool c1547 = 0;
    __retval1546 = c1547;
    _Bool t1548 = __retval1546;
    return t1548;
  abort();
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v1549, int* v1550, unsigned long v1551) {
bb1552:
  struct std____new_allocator_int_* this1553;
  int* __p1554;
  unsigned long __n1555;
  this1553 = v1549;
  __p1554 = v1550;
  __n1555 = v1551;
  struct std____new_allocator_int_* t1556 = this1553;
    unsigned long c1557 = 4;
    unsigned long c1558 = 16;
    _Bool c1559 = ((c1557 > c1558)) ? 1 : 0;
    if (c1559) {
      int* t1560 = __p1554;
      void* cast1561 = (void*)t1560;
      unsigned long t1562 = __n1555;
      unsigned long c1563 = 4;
      unsigned long b1564 = t1562 * c1563;
      unsigned long c1565 = 4;
      operator_delete_3(cast1561, b1564, c1565);
      return;
    }
  int* t1566 = __p1554;
  void* cast1567 = (void*)t1566;
  unsigned long t1568 = __n1555;
  unsigned long c1569 = 4;
  unsigned long b1570 = t1568 * c1569;
  operator_delete_2(cast1567, b1570);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1571, int* v1572, unsigned long v1573) {
bb1574:
  struct std__allocator_int_* this1575;
  int* __p1576;
  unsigned long __n1577;
  this1575 = v1571;
  __p1576 = v1572;
  __n1577 = v1573;
  struct std__allocator_int_* t1578 = this1575;
    _Bool r1579 = std____is_constant_evaluated();
    if (r1579) {
      int* t1580 = __p1576;
      void* cast1581 = (void*)t1580;
      operator_delete(cast1581);
      return;
    }
  struct std____new_allocator_int_* base1582 = (struct std____new_allocator_int_*)((char *)t1578 + 0);
  int* t1583 = __p1576;
  unsigned long t1584 = __n1577;
  std____new_allocator_int___deallocate(base1582, t1583, t1584);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1585, int* v1586, unsigned long v1587) {
bb1588:
  struct std__allocator_int_* __a1589;
  int* __p1590;
  unsigned long __n1591;
  __a1589 = v1585;
  __p1590 = v1586;
  __n1591 = v1587;
  struct std__allocator_int_* t1592 = __a1589;
  int* t1593 = __p1590;
  unsigned long t1594 = __n1591;
  std__allocator_int___deallocate(t1592, t1593, t1594);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v1595, int* v1596, unsigned long v1597) {
bb1598:
  struct std___Vector_base_int__std__allocator_int__* this1599;
  int* __p1600;
  unsigned long __n1601;
  this1599 = v1595;
  __p1600 = v1596;
  __n1601 = v1597;
  struct std___Vector_base_int__std__allocator_int__* t1602 = this1599;
    int* t1603 = __p1600;
    _Bool cast1604 = (_Bool)t1603;
    if (cast1604) {
      struct std__allocator_int_* base1605 = (struct std__allocator_int_*)((char *)&(t1602->_M_impl) + 0);
      int* t1606 = __p1600;
      unsigned long t1607 = __n1601;
      std__allocator_traits_std__allocator_int_____deallocate(base1605, t1606, t1607);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1608) {
bb1609:
  struct std___Vector_base_int__std__allocator_int__* this1610;
  this1610 = v1608;
  struct std___Vector_base_int__std__allocator_int__* t1611 = this1610;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1612 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1611->_M_impl) + 0);
    int* t1613 = base1612->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1614 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1611->_M_impl) + 0);
    int* t1615 = base1614->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1616 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1611->_M_impl) + 0);
    int* t1617 = base1616->_M_start;
    long diff1618 = t1615 - t1617;
    unsigned long cast1619 = (unsigned long)diff1618;
    std___Vector_base_int__std__allocator_int______M_deallocate(t1611, t1613, cast1619);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t1611->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1620) {
bb1621:
  struct std____new_allocator_int_* this1622;
  this1622 = v1620;
  struct std____new_allocator_int_* t1623 = this1622;
  return;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator(struct std__allocator_int_* v1624) {
bb1625:
  struct std__allocator_int_* this1626;
  this1626 = v1624;
  struct std__allocator_int_* t1627 = this1626;
  struct std____new_allocator_int_* base1628 = (struct std____new_allocator_int_*)((char *)t1627 + 0);
  std____new_allocator_int_____new_allocator(base1628);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v1629) {
bb1630:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this1631;
  this1631 = v1629;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1632 = this1631;
  int* c1633 = ((void*)0);
  t1632->_M_start = c1633;
  int* c1634 = ((void*)0);
  t1632->_M_finish = c1634;
  int* c1635 = ((void*)0);
  t1632->_M_end_of_storage = c1635;
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v1636) {
bb1637:
  struct std__allocator_int_* this1638;
  this1638 = v1636;
  struct std__allocator_int_* t1639 = this1638;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1640, int* v1641) {
bb1642:
  int* __first1643;
  int* __last1644;
  __first1643 = v1640;
  __last1644 = v1641;
      _Bool r1645 = std____is_constant_evaluated();
      if (r1645) {
          while (1) {
            int* t1647 = __first1643;
            int* t1648 = __last1644;
            _Bool c1649 = ((t1647 != t1648)) ? 1 : 0;
            if (!c1649) break;
            int* t1650 = __first1643;
            void_std__destroy_at_int_(t1650);
          for_step1646: ;
            int* t1651 = __first1643;
            int c1652 = 1;
            int* ptr1653 = &(t1651)[c1652];
            __first1643 = ptr1653;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v1654, int* v1655, struct std__allocator_int_* v1656) {
bb1657:
  int* __first1658;
  int* __last1659;
  struct std__allocator_int_* unnamed1660;
  __first1658 = v1654;
  __last1659 = v1655;
  unnamed1660 = v1656;
  int* t1661 = __first1658;
  int* t1662 = __last1659;
  void_std___Destroy_int__(t1661, t1662);
  return;
}

