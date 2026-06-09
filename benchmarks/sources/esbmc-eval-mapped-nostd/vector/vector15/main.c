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
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char __field8; char __field9[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long _M_width; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* __field5; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[8] = "nums1: ";
char _str_1[9] = " nums2: ";
char _str_2[9] = " nums3: ";
char _str_3[12] = "Initially:\n";
char _str_4[18] = "After assigment:\n";
char _str_5[23] = "After move assigment:\n";
char _str_6[26] = "vector::_M_realloc_append";
char _str_7[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv[35] = "reference std::vector<int>::back()";
char _str_8[15] = "!this->empty()";
_Bool _ZNSt17integral_constantIbLb0EE5valueE;
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
long std__ios_base__width___const(struct std__ios_base* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__put(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
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
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* p0);
void display_sizes(struct std__vector_int__std__allocator_int__* p0, struct std__vector_int__std__allocator_int__* p1, struct std__vector_int__std__allocator_int__* p2);
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0);
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
_Bool __gnu_cxx____alloc_traits_std__allocator_int___int____S_propagate_on_copy_assign();
_Bool __gnu_cxx____alloc_traits_std__allocator_int___int____S_always_equal();
_Bool std__operator__(struct std__allocator_int_* p0, struct std__allocator_int_* p1);
void std__vector_int__std__allocator_int______M_erase_at_end(struct std__vector_int__std__allocator_int__* p0, int* p1);
void std__vector_int__std__allocator_int_____clear(struct std__vector_int__std__allocator_int__* p0);
void void_std____alloc_on_copy_std__allocator_int___(struct std__allocator_int_* p0, struct std__allocator_int_* p1);
unsigned long std__vector_int__std__allocator_int_____capacity___const(struct std__vector_int__std__allocator_int__* p0);
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* p0, int** p1);
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* p0, int* p1);
void void_std___Construct_int__int_const__(int* p0, int* p1);
int* __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0);
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0);
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* p0);
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* p0);
int* int__std____do_uninit_copy___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p1, int* p2);
long __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int_const___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p1);
int* int_const__std____niter_base_int_const___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p0);
int* int__std__uninitialized_copy___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p1, int* p2);
int* int__std____uninitialized_copy_a___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______int___int_(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p1, int* p2, struct std__allocator_int_* p3);
int* std__vector_int__std__allocator_int______Guard_alloc___M_release(struct std__vector_int__std__allocator_int_____Guard_alloc* p0);
int* int__std__vector_int__std__allocator_int______M_allocate_and_copy___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p2, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p3);
void void_std___Destroy_int___int_(int* p0, int* p1, struct std__allocator_int_* p2);
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
void void_std___Destroy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1);
void void_std___Destroy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct std__allocator_int_* p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, long p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____niter_wrap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, int* p1);
long std__iterator_traits_int_const____difference_type_std____distance_int_const__(int* p0, int* p1, struct std__random_access_iterator_tag p2);
struct std__random_access_iterator_tag std__iterator_traits_int_const____iterator_category_std____iterator_category_int_const__(int** p0);
long std__iterator_traits_int_const____difference_type_std__distance_int_const__(int* p0, int* p1);
extern void* memmove(void* p0, void* p1, unsigned long p2);
void void_std____assign_one_false__int___int_const__(int** p0, int** p1);
int* int__std____copy_move_a2_false__int_const___int_const___int__(int* p0, int* p1, int* p2);
int* int__std____copy_move_a1_false__int_const___int__(int* p0, int* p1, int* p2);
int* int__std____niter_base_int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____copy_move_a_false____gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__copy___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
int* int__std____niter_wrap_int__(int** p0, int* p1);
long std__iterator_traits_int____difference_type_std____distance_int__(int* p0, int* p1, struct std__random_access_iterator_tag p2);
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** p0);
long std__iterator_traits_int____difference_type_std__distance_int__(int* p0, int* p1);
void void_std____assign_one_false__int___int__(int** p0, int** p1);
int* int__std____copy_move_a2_false__int___int___int__(int* p0, int* p1, int* p2);
int* int__std____copy_move_a1_false__int___int__(int* p0, int* p1, int* p2);
int* int__std____copy_move_a_false__int___int__(int* p0, int* p1, int* p2);
int* int__std____miter_base_int__(int* p0);
int* int__std__copy_int___int__(int* p0, int* p1, int* p2);
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* p0, int* p1);
void void_std___Construct_int__int__(int* p0, int* p1);
int* int__std____do_uninit_copy_int___int___int__(int* p0, int* p1, int* p2);
int* int__std__uninitialized_copy_int___int__(int* p0, int* p1, int* p2);
int* int__std____uninitialized_copy_a_int___int___int___int_(int* p0, int* p1, int* p2, struct std__allocator_int_* p3);
struct std__vector_int__std__allocator_int__* std__vector_int__std__allocator_int_____operator_(struct std__vector_int__std__allocator_int__* p0, struct std__vector_int__std__allocator_int__* p1);
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

// function: _ZNKSt8ios_base5widthEv
long std__ios_base__width___const(struct std__ios_base* v0) {
bb1:
  struct std__ios_base* this2;
  long __retval3;
  this2 = v0;
  struct std__ios_base* t4 = this2;
  long t5 = t4->_M_width;
  __retval3 = t5;
  long t6 = __retval3;
  return t6;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* v7, char v8) {
bb9:
  struct std__basic_ostream_char__std__char_traits_char__* __out10;
  char __c11;
  struct std__basic_ostream_char__std__char_traits_char__* __retval12;
  __out10 = v7;
  __c11 = v8;
    struct std__basic_ostream_char__std__char_traits_char__* t13 = __out10;
    void** v14 = (void**)t13;
    void* v15 = *((void**)v14);
    unsigned char* cast16 = (unsigned char*)v15;
    long c17 = -24;
    unsigned char* ptr18 = &(cast16)[c17];
    long* cast19 = (long*)ptr18;
    long t20 = *cast19;
    unsigned char* cast21 = (unsigned char*)t13;
    unsigned char* ptr22 = &(cast21)[t20];
    struct std__basic_ostream_char__std__char_traits_char__* cast23 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr22;
    struct std__ios_base* cast24 = (struct std__ios_base*)cast23;
    long r25 = std__ios_base__width___const(cast24);
    long c26 = 0;
    _Bool c27 = ((r25 != c26)) ? 1 : 0;
    if (c27) {
      struct std__basic_ostream_char__std__char_traits_char__* t28 = __out10;
      long c29 = 1;
      struct std__basic_ostream_char__std__char_traits_char__* r30 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t28, &__c11, c29);
      __retval12 = r30;
      struct std__basic_ostream_char__std__char_traits_char__* t31 = __retval12;
      return t31;
    }
  struct std__basic_ostream_char__std__char_traits_char__* t32 = __out10;
  char t33 = __c11;
  struct std__basic_ostream_char__std__char_traits_char__* r34 = std__ostream__put(t32, t33);
  struct std__basic_ostream_char__std__char_traits_char__* t35 = __out10;
  __retval12 = t35;
  struct std__basic_ostream_char__std__char_traits_char__* t36 = __retval12;
  return t36;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v37, int v38) {
bb39:
  int __a40;
  int __b41;
  int __retval42;
  __a40 = v37;
  __b41 = v38;
  int t43 = __a40;
  int t44 = __b41;
  int b45 = t43 | t44;
  __retval42 = b45;
  int t46 = __retval42;
  return t46;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v47) {
bb48:
  struct std__basic_ios_char__std__char_traits_char__* this49;
  int __retval50;
  this49 = v47;
  struct std__basic_ios_char__std__char_traits_char__* t51 = this49;
  struct std__ios_base* base52 = (struct std__ios_base*)((char *)t51 + 0);
  int t53 = base52->_M_streambuf_state;
  __retval50 = t53;
  int t54 = __retval50;
  return t54;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v55, int v56) {
bb57:
  struct std__basic_ios_char__std__char_traits_char__* this58;
  int __state59;
  this58 = v55;
  __state59 = v56;
  struct std__basic_ios_char__std__char_traits_char__* t60 = this58;
  int r61 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t60);
  int t62 = __state59;
  int r63 = std__operator_(r61, t62);
  std__basic_ios_char__std__char_traits_char_____clear(t60, r63);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v64, char* v65) {
bb66:
  char* __c167;
  char* __c268;
  _Bool __retval69;
  __c167 = v64;
  __c268 = v65;
  char* t70 = __c167;
  char t71 = *t70;
  int cast72 = (int)t71;
  char* t73 = __c268;
  char t74 = *t73;
  int cast75 = (int)t74;
  _Bool c76 = ((cast72 == cast75)) ? 1 : 0;
  __retval69 = c76;
  _Bool t77 = __retval69;
  return t77;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v78) {
bb79:
  char* __p80;
  unsigned long __retval81;
  unsigned long __i82;
  __p80 = v78;
  unsigned long c83 = 0;
  __i82 = c83;
    char ref_tmp084;
    while (1) {
      unsigned long t85 = __i82;
      char* t86 = __p80;
      char* ptr87 = &(t86)[t85];
      char c88 = 0;
      ref_tmp084 = c88;
      _Bool r89 = __gnu_cxx__char_traits_char___eq(ptr87, &ref_tmp084);
      _Bool u90 = !r89;
      if (!u90) break;
      unsigned long t91 = __i82;
      unsigned long u92 = t91 + 1;
      __i82 = u92;
    }
  unsigned long t93 = __i82;
  __retval81 = t93;
  unsigned long t94 = __retval81;
  return t94;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v95) {
bb96:
  char* __s97;
  unsigned long __retval98;
  __s97 = v95;
    _Bool r99 = std____is_constant_evaluated();
    if (r99) {
      char* t100 = __s97;
      unsigned long r101 = __gnu_cxx__char_traits_char___length(t100);
      __retval98 = r101;
      unsigned long t102 = __retval98;
      return t102;
    }
  char* t103 = __s97;
  unsigned long r104 = strlen(t103);
  __retval98 = r104;
  unsigned long t105 = __retval98;
  return t105;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v106, char* v107) {
bb108:
  struct std__basic_ostream_char__std__char_traits_char__* __out109;
  char* __s110;
  struct std__basic_ostream_char__std__char_traits_char__* __retval111;
  __out109 = v106;
  __s110 = v107;
    char* t112 = __s110;
    _Bool cast113 = (_Bool)t112;
    _Bool u114 = !cast113;
    if (u114) {
      struct std__basic_ostream_char__std__char_traits_char__* t115 = __out109;
      void** v116 = (void**)t115;
      void* v117 = *((void**)v116);
      unsigned char* cast118 = (unsigned char*)v117;
      long c119 = -24;
      unsigned char* ptr120 = &(cast118)[c119];
      long* cast121 = (long*)ptr120;
      long t122 = *cast121;
      unsigned char* cast123 = (unsigned char*)t115;
      unsigned char* ptr124 = &(cast123)[t122];
      struct std__basic_ostream_char__std__char_traits_char__* cast125 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr124;
      struct std__basic_ios_char__std__char_traits_char__* cast126 = (struct std__basic_ios_char__std__char_traits_char__*)cast125;
      int t127 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast126, t127);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t128 = __out109;
      char* t129 = __s110;
      char* t130 = __s110;
      unsigned long r131 = std__char_traits_char___length(t130);
      long cast132 = (long)r131;
      struct std__basic_ostream_char__std__char_traits_char__* r133 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t128, t129, cast132);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t134 = __out109;
  __retval111 = t134;
  struct std__basic_ostream_char__std__char_traits_char__* t135 = __retval111;
  return t135;
}

// function: _ZNSolsEm
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* v136, unsigned long v137) {
bb138:
  struct std__basic_ostream_char__std__char_traits_char__* this139;
  unsigned long __n140;
  struct std__basic_ostream_char__std__char_traits_char__* __retval141;
  this139 = v136;
  __n140 = v137;
  struct std__basic_ostream_char__std__char_traits_char__* t142 = this139;
  unsigned long t143 = __n140;
  struct std__basic_ostream_char__std__char_traits_char__* r144 = std__ostream__std__ostream___M_insert_unsigned_long_(t142, t143);
  __retval141 = r144;
  struct std__basic_ostream_char__std__char_traits_char__* t145 = __retval141;
  return t145;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v146) {
bb147:
  struct std__vector_int__std__allocator_int__* this148;
  unsigned long __retval149;
  long __dif150;
  this148 = v146;
  struct std__vector_int__std__allocator_int__* t151 = this148;
  struct std___Vector_base_int__std__allocator_int__* base152 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t151 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base153 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base152->_M_impl) + 0);
  int* t154 = base153->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base155 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t151 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base156 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base155->_M_impl) + 0);
  int* t157 = base156->_M_start;
  long diff158 = t154 - t157;
  __dif150 = diff158;
    long t159 = __dif150;
    long c160 = 0;
    _Bool c161 = ((t159 < c160)) ? 1 : 0;
    if (c161) {
      __builtin_unreachable();
    }
  long t162 = __dif150;
  unsigned long cast163 = (unsigned long)t162;
  __retval149 = cast163;
  unsigned long t164 = __retval149;
  return t164;
}

// function: _Z13display_sizesRKSt6vectorIiSaIiEES3_S3_
void display_sizes(struct std__vector_int__std__allocator_int__* v165, struct std__vector_int__std__allocator_int__* v166, struct std__vector_int__std__allocator_int__* v167) {
bb168:
  struct std__vector_int__std__allocator_int__* nums1169;
  struct std__vector_int__std__allocator_int__* nums2170;
  struct std__vector_int__std__allocator_int__* nums3171;
  nums1169 = v165;
  nums2170 = v166;
  nums3171 = v167;
  char* cast172 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r173 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast172);
  struct std__vector_int__std__allocator_int__* t174 = nums1169;
  unsigned long r175 = std__vector_int__std__allocator_int_____size___const(t174);
  struct std__basic_ostream_char__std__char_traits_char__* r176 = std__ostream__operator__(r173, r175);
  char* cast177 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r178 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r176, cast177);
  struct std__vector_int__std__allocator_int__* t179 = nums2170;
  unsigned long r180 = std__vector_int__std__allocator_int_____size___const(t179);
  struct std__basic_ostream_char__std__char_traits_char__* r181 = std__ostream__operator__(r178, r180);
  char* cast182 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* r183 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r181, cast182);
  struct std__vector_int__std__allocator_int__* t184 = nums3171;
  unsigned long r185 = std__vector_int__std__allocator_int_____size___const(t184);
  struct std__basic_ostream_char__std__char_traits_char__* r186 = std__ostream__operator__(r183, r185);
  char c187 = 10;
  struct std__basic_ostream_char__std__char_traits_char__* r188 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r186, c187);
  return;
}

// function: _ZNSt6vectorIiSaIiEEC2Ev
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* v189) {
bb190:
  struct std__vector_int__std__allocator_int__* this191;
  this191 = v189;
  struct std__vector_int__std__allocator_int__* t192 = this191;
  struct std___Vector_base_int__std__allocator_int__* base193 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t192 + 0);
  std___Vector_base_int__std__allocator_int______Vector_base(base193);
  return;
}

// function: _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v194, int* v195) {
bb196:
  int* __location197;
  int* __args198;
  int* __retval199;
  void* __loc200;
  __location197 = v194;
  __args198 = v195;
  int* t201 = __location197;
  void* cast202 = (void*)t201;
  __loc200 = cast202;
    void* t203 = __loc200;
    int* cast204 = (int*)t203;
    int* t205 = __args198;
    int t206 = *t205;
    *cast204 = t206;
    __retval199 = cast204;
    int* t207 = __retval199;
    return t207;
  abort();
}

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std__allocator_int_* v208, int* v209, int* v210) {
bb211:
  struct std__allocator_int_* __a212;
  int* __p213;
  int* __args214;
  __a212 = v208;
  __p213 = v209;
  __args214 = v210;
  int* t215 = __p213;
  int* t216 = __args214;
  int* r217 = _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t215, t216);
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v218, unsigned long* v219) {
bb220:
  unsigned long* __a221;
  unsigned long* __b222;
  unsigned long* __retval223;
  __a221 = v218;
  __b222 = v219;
    unsigned long* t224 = __b222;
    unsigned long t225 = *t224;
    unsigned long* t226 = __a221;
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

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v233) {
bb234:
  struct std__allocator_int_* __a235;
  unsigned long __retval236;
  unsigned long __diffmax237;
  unsigned long __allocmax238;
  __a235 = v233;
  unsigned long c239 = 2305843009213693951;
  __diffmax237 = c239;
  unsigned long c240 = 4611686018427387903;
  __allocmax238 = c240;
  unsigned long* r241 = unsigned_long_const__std__min_unsigned_long_(&__diffmax237, &__allocmax238);
  unsigned long t242 = *r241;
  __retval236 = t242;
  unsigned long t243 = __retval236;
  return t243;
}

// function: _ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Vector_base_int__std__allocator_int__* v244) {
bb245:
  struct std___Vector_base_int__std__allocator_int__* this246;
  struct std__allocator_int_* __retval247;
  this246 = v244;
  struct std___Vector_base_int__std__allocator_int__* t248 = this246;
  struct std__allocator_int_* base249 = (struct std__allocator_int_*)((char *)&(t248->_M_impl) + 0);
  __retval247 = base249;
  struct std__allocator_int_* t250 = __retval247;
  return t250;
}

// function: _ZNKSt6vectorIiSaIiEE8max_sizeEv
unsigned long std__vector_int__std__allocator_int_____max_size___const(struct std__vector_int__std__allocator_int__* v251) {
bb252:
  struct std__vector_int__std__allocator_int__* this253;
  unsigned long __retval254;
  this253 = v251;
  struct std__vector_int__std__allocator_int__* t255 = this253;
  struct std___Vector_base_int__std__allocator_int__* base256 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t255 + 0);
  struct std__allocator_int_* r257 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(base256);
  unsigned long r258 = std__vector_int__std__allocator_int______S_max_size(r257);
  __retval254 = r258;
  unsigned long t259 = __retval254;
  return t259;
}

// function: _ZSt3maxImERKT_S2_S2_
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* v260, unsigned long* v261) {
bb262:
  unsigned long* __a263;
  unsigned long* __b264;
  unsigned long* __retval265;
  __a263 = v260;
  __b264 = v261;
    unsigned long* t266 = __a263;
    unsigned long t267 = *t266;
    unsigned long* t268 = __b264;
    unsigned long t269 = *t268;
    _Bool c270 = ((t267 < t269)) ? 1 : 0;
    if (c270) {
      unsigned long* t271 = __b264;
      __retval265 = t271;
      unsigned long* t272 = __retval265;
      return t272;
    }
  unsigned long* t273 = __a263;
  __retval265 = t273;
  unsigned long* t274 = __retval265;
  return t274;
}

// function: _ZNKSt6vectorIiSaIiEE12_M_check_lenEmPKc
unsigned long std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(struct std__vector_int__std__allocator_int__* v275, unsigned long v276, char* v277) {
bb278:
  struct std__vector_int__std__allocator_int__* this279;
  unsigned long __n280;
  char* __s281;
  unsigned long __retval282;
  unsigned long __len283;
  unsigned long ref_tmp0284;
  this279 = v275;
  __n280 = v276;
  __s281 = v277;
  struct std__vector_int__std__allocator_int__* t285 = this279;
    unsigned long r286 = std__vector_int__std__allocator_int_____max_size___const(t285);
    unsigned long r287 = std__vector_int__std__allocator_int_____size___const(t285);
    unsigned long b288 = r286 - r287;
    unsigned long t289 = __n280;
    _Bool c290 = ((b288 < t289)) ? 1 : 0;
    if (c290) {
      char* t291 = __s281;
      std____throw_length_error(t291);
    }
  unsigned long r292 = std__vector_int__std__allocator_int_____size___const(t285);
  unsigned long r293 = std__vector_int__std__allocator_int_____size___const(t285);
  ref_tmp0284 = r293;
  unsigned long* r294 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp0284, &__n280);
  unsigned long t295 = *r294;
  unsigned long b296 = r292 + t295;
  __len283 = b296;
  unsigned long t297 = __len283;
  unsigned long r298 = std__vector_int__std__allocator_int_____size___const(t285);
  _Bool c299 = ((t297 < r298)) ? 1 : 0;
  _Bool ternary300;
  if (c299) {
    _Bool c301 = 1;
    ternary300 = (_Bool)c301;
  } else {
    unsigned long t302 = __len283;
    unsigned long r303 = std__vector_int__std__allocator_int_____max_size___const(t285);
    _Bool c304 = ((t302 > r303)) ? 1 : 0;
    ternary300 = (_Bool)c304;
  }
  unsigned long ternary305;
  if (ternary300) {
    unsigned long r306 = std__vector_int__std__allocator_int_____max_size___const(t285);
    ternary305 = (unsigned long)r306;
  } else {
    unsigned long t307 = __len283;
    ternary305 = (unsigned long)t307;
  }
  __retval282 = ternary305;
  unsigned long t308 = __retval282;
  return t308;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v309) {
bb310:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this311;
  int** __retval312;
  this311 = v309;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t313 = this311;
  __retval312 = &t313->_M_current;
  int** t314 = __retval312;
  return t314;
}

// function: _ZN9__gnu_cxxmiIPiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v315, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v316) {
bb317:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs318;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs319;
  long __retval320;
  __lhs318 = v315;
  __rhs319 = v316;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t321 = __lhs318;
  int** r322 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t321);
  int* t323 = *r322;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t324 = __rhs319;
  int** r325 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t324);
  int* t326 = *r325;
  long diff327 = t323 - t326;
  __retval320 = diff327;
  long t328 = __retval320;
  return t328;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v329, int** v330) {
bb331:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this332;
  int** __i333;
  this332 = v329;
  __i333 = v330;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t334 = this332;
  int** t335 = __i333;
  int* t336 = *t335;
  t334->_M_current = t336;
  return;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v337) {
bb338:
  struct std__vector_int__std__allocator_int__* this339;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval340;
  this339 = v337;
  struct std__vector_int__std__allocator_int__* t341 = this339;
  struct std___Vector_base_int__std__allocator_int__* base342 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t341 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base343 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base342->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval340, &base343->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t344 = __retval340;
  return t344;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v345) {
bb346:
  struct std__vector_int__std__allocator_int__* this347;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval348;
  this347 = v345;
  struct std__vector_int__std__allocator_int__* t349 = this347;
  struct std___Vector_base_int__std__allocator_int__* base350 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t349 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base351 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base350->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval348, &base351->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t352 = __retval348;
  return t352;
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v353) {
bb354:
  struct std____new_allocator_int_* this355;
  unsigned long __retval356;
  this355 = v353;
  struct std____new_allocator_int_* t357 = this355;
  unsigned long c358 = 9223372036854775807;
  unsigned long c359 = 4;
  unsigned long b360 = c358 / c359;
  __retval356 = b360;
  unsigned long t361 = __retval356;
  return t361;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v362, unsigned long v363, void* v364) {
bb365:
  struct std____new_allocator_int_* this366;
  unsigned long __n367;
  void* unnamed368;
  int* __retval369;
  this366 = v362;
  __n367 = v363;
  unnamed368 = v364;
  struct std____new_allocator_int_* t370 = this366;
    unsigned long t371 = __n367;
    unsigned long r372 = std____new_allocator_int____M_max_size___const(t370);
    _Bool c373 = ((t371 > r372)) ? 1 : 0;
    if (c373) {
        unsigned long t374 = __n367;
        unsigned long c375 = -1;
        unsigned long c376 = 4;
        unsigned long b377 = c375 / c376;
        _Bool c378 = ((t374 > b377)) ? 1 : 0;
        if (c378) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c379 = 4;
    unsigned long c380 = 16;
    _Bool c381 = ((c379 > c380)) ? 1 : 0;
    if (c381) {
      unsigned long __al382;
      unsigned long c383 = 4;
      __al382 = c383;
      unsigned long t384 = __n367;
      unsigned long c385 = 4;
      unsigned long b386 = t384 * c385;
      unsigned long t387 = __al382;
      void* r388 = operator_new_2(b386, t387);
      int* cast389 = (int*)r388;
      __retval369 = cast389;
      int* t390 = __retval369;
      return t390;
    }
  unsigned long t391 = __n367;
  unsigned long c392 = 4;
  unsigned long b393 = t391 * c392;
  void* r394 = operator_new(b393);
  int* cast395 = (int*)r394;
  __retval369 = cast395;
  int* t396 = __retval369;
  return t396;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v397, unsigned long v398) {
bb399:
  struct std__allocator_int_* this400;
  unsigned long __n401;
  int* __retval402;
  this400 = v397;
  __n401 = v398;
  struct std__allocator_int_* t403 = this400;
    _Bool r404 = std____is_constant_evaluated();
    if (r404) {
        unsigned long t405 = __n401;
        unsigned long c406 = 4;
        unsigned long ovr407;
        _Bool ovf408 = __builtin_mul_overflow(t405, c406, &ovr407);
        __n401 = ovr407;
        if (ovf408) {
          std____throw_bad_array_new_length();
        }
      unsigned long t409 = __n401;
      void* r410 = operator_new(t409);
      int* cast411 = (int*)r410;
      __retval402 = cast411;
      int* t412 = __retval402;
      return t412;
    }
  struct std____new_allocator_int_* base413 = (struct std____new_allocator_int_*)((char *)t403 + 0);
  unsigned long t414 = __n401;
  void* c415 = ((void*)0);
  int* r416 = std____new_allocator_int___allocate(base413, t414, c415);
  __retval402 = r416;
  int* t417 = __retval402;
  return t417;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v418, unsigned long v419) {
bb420:
  struct std__allocator_int_* __a421;
  unsigned long __n422;
  int* __retval423;
  __a421 = v418;
  __n422 = v419;
  struct std__allocator_int_* t424 = __a421;
  unsigned long t425 = __n422;
  int* r426 = std__allocator_int___allocate(t424, t425);
  __retval423 = r426;
  int* t427 = __retval423;
  return t427;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v428, unsigned long v429) {
bb430:
  struct std___Vector_base_int__std__allocator_int__* this431;
  unsigned long __n432;
  int* __retval433;
  this431 = v428;
  __n432 = v429;
  struct std___Vector_base_int__std__allocator_int__* t434 = this431;
  unsigned long t435 = __n432;
  unsigned long c436 = 0;
  _Bool c437 = ((t435 != c436)) ? 1 : 0;
  int* ternary438;
  if (c437) {
    struct std__allocator_int_* base439 = (struct std__allocator_int_*)((char *)&(t434->_M_impl) + 0);
    unsigned long t440 = __n432;
    int* r441 = std__allocator_traits_std__allocator_int_____allocate(base439, t440);
    ternary438 = (int*)r441;
  } else {
    int* c442 = ((void*)0);
    ternary438 = (int*)c442;
  }
  __retval433 = ternary438;
  int* t443 = __retval433;
  return t443;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocC2EPimRSt12_Vector_baseIiS0_E
void std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v444, int* v445, unsigned long v446, struct std___Vector_base_int__std__allocator_int__* v447) {
bb448:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this449;
  int* __s450;
  unsigned long __l451;
  struct std___Vector_base_int__std__allocator_int__* __vect452;
  this449 = v444;
  __s450 = v445;
  __l451 = v446;
  __vect452 = v447;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t453 = this449;
  int* t454 = __s450;
  t453->_M_storage = t454;
  unsigned long t455 = __l451;
  t453->_M_len = t455;
  struct std___Vector_base_int__std__allocator_int__* t456 = __vect452;
  t453->_M_vect = t456;
  return;
}

// function: _ZSt10to_addressIiEPT_S1_
int* int__std__to_address_int_(int* v457) {
bb458:
  int* __ptr459;
  int* __retval460;
  __ptr459 = v457;
  int* t461 = __ptr459;
  __retval460 = t461;
  int* t462 = __retval460;
  return t462;
}

// function: _ZSt12__to_addressIPiEDaRKT_
int* auto_std____to_address_int__(int** v463) {
bb464:
  int** __ptr465;
  int* __retval466;
  __ptr465 = v463;
  int** t467 = __ptr465;
  int* t468 = *t467;
  int* r469 = int__std__to_address_int_(t468);
  __retval466 = r469;
  int* t470 = __retval466;
  return t470;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb471:
  _Bool __retval472;
    _Bool c473 = 0;
    __retval472 = c473;
    _Bool t474 = __retval472;
    return t474;
  abort();
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEC2ERKS1_
void __gnu_cxx____normal_iterator_int___void_____normal_iterator(struct __gnu_cxx____normal_iterator_int____void_* v475, int** v476) {
bb477:
  struct __gnu_cxx____normal_iterator_int____void_* this478;
  int** __i479;
  this478 = v475;
  __i479 = v476;
  struct __gnu_cxx____normal_iterator_int____void_* t480 = this478;
  int** t481 = __i479;
  int* t482 = *t481;
  t480->_M_current = t482;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v483) {
bb484:
  int* __location485;
  __location485 = v483;
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE7destroyIiEEvRS0_PT_
void void_std__allocator_traits_std__allocator_int_____destroy_int_(struct std__allocator_int_* v486, int* v487) {
bb488:
  struct std__allocator_int_* __a489;
  int* __p490;
  __a489 = v486;
  __p490 = v487;
  int* t491 = __p490;
  void_std__destroy_at_int_(t491);
  return;
}

// function: _ZSt19__relocate_object_aIiiSaIiEEvPT_PT0_RT1_
void void_std____relocate_object_a_int__int__std__allocator_int___(int* v492, int* v493, struct std__allocator_int_* v494) {
bb495:
  int* __dest496;
  int* __orig497;
  struct std__allocator_int_* __alloc498;
  __dest496 = v492;
  __orig497 = v493;
  __alloc498 = v494;
  struct std__allocator_int_* t499 = __alloc498;
  int* t500 = __dest496;
  int* t501 = __orig497;
  void_std__allocator_traits_std__allocator_int_____construct_int__int_(t499, t500, t501);
  struct std__allocator_int_* t502 = __alloc498;
  int* t503 = __orig497;
  void_std__allocator_traits_std__allocator_int_____destroy_int_(t502, t503);
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivEdeEv
int* __gnu_cxx____normal_iterator_int___void___operator____const(struct __gnu_cxx____normal_iterator_int____void_* v504) {
bb505:
  struct __gnu_cxx____normal_iterator_int____void_* this506;
  int* __retval507;
  this506 = v504;
  struct __gnu_cxx____normal_iterator_int____void_* t508 = this506;
  int* t509 = t508->_M_current;
  __retval507 = t509;
  int* t510 = __retval507;
  return t510;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEppEv
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator__(struct __gnu_cxx____normal_iterator_int____void_* v511) {
bb512:
  struct __gnu_cxx____normal_iterator_int____void_* this513;
  struct __gnu_cxx____normal_iterator_int____void_* __retval514;
  this513 = v511;
  struct __gnu_cxx____normal_iterator_int____void_* t515 = this513;
  int* t516 = t515->_M_current;
  int c517 = 1;
  int* ptr518 = &(t516)[c517];
  t515->_M_current = ptr518;
  __retval514 = t515;
  struct __gnu_cxx____normal_iterator_int____void_* t519 = __retval514;
  return t519;
}

// function: _ZSt14__relocate_a_1IPiN9__gnu_cxx17__normal_iteratorIS0_vEESaIiEET0_T_S6_S5_RT1_
struct __gnu_cxx____normal_iterator_int____void_ __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(int* v520, int* v521, struct __gnu_cxx____normal_iterator_int____void_ v522, struct std__allocator_int_* v523) {
bb524:
  int* __first525;
  int* __last526;
  struct __gnu_cxx____normal_iterator_int____void_ __result527;
  struct std__allocator_int_* __alloc528;
  struct __gnu_cxx____normal_iterator_int____void_ __retval529;
  __first525 = v520;
  __last526 = v521;
  __result527 = v522;
  __alloc528 = v523;
  __retval529 = __result527; // copy
    while (1) {
      int* t531 = __first525;
      int* t532 = __last526;
      _Bool c533 = ((t531 != t532)) ? 1 : 0;
      if (!c533) break;
      int* r534 = __gnu_cxx____normal_iterator_int___void___operator____const(&__retval529);
      int* t535 = __first525;
      struct std__allocator_int_* t536 = __alloc528;
      void_std____relocate_object_a_int__int__std__allocator_int___(r534, t535, t536);
    for_step530: ;
      int* t537 = __first525;
      int c538 = 1;
      int* ptr539 = &(t537)[c538];
      __first525 = ptr539;
      struct __gnu_cxx____normal_iterator_int____void_* r540 = __gnu_cxx____normal_iterator_int___void___operator__(&__retval529);
    }
  struct __gnu_cxx____normal_iterator_int____void_ t541 = __retval529;
  return t541;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEaSEOS2_
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator_(struct __gnu_cxx____normal_iterator_int____void_* v542, struct __gnu_cxx____normal_iterator_int____void_* v543) {
bb544:
  struct __gnu_cxx____normal_iterator_int____void_* this545;
  struct __gnu_cxx____normal_iterator_int____void_* unnamed546;
  struct __gnu_cxx____normal_iterator_int____void_* __retval547;
  this545 = v542;
  unnamed546 = v543;
  struct __gnu_cxx____normal_iterator_int____void_* t548 = this545;
  struct __gnu_cxx____normal_iterator_int____void_* t549 = unnamed546;
  int* t550 = t549->_M_current;
  t548->_M_current = t550;
  __retval547 = t548;
  struct __gnu_cxx____normal_iterator_int____void_* t551 = __retval547;
  return t551;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivE4baseEv
int** __gnu_cxx____normal_iterator_int___void___base___const(struct __gnu_cxx____normal_iterator_int____void_* v552) {
bb553:
  struct __gnu_cxx____normal_iterator_int____void_* this554;
  int** __retval555;
  this554 = v552;
  struct __gnu_cxx____normal_iterator_int____void_* t556 = this554;
  __retval555 = &t556->_M_current;
  int** t557 = __retval555;
  return t557;
}

// function: _ZSt14__relocate_a_1IiiENSt9enable_ifIXsr3std24__is_bitwise_relocatableIT_EE5valueEPS1_E4typeES2_S2_S2_RSaIT0_E
int* std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(int* v558, int* v559, int* v560, struct std__allocator_int_* v561) {
bb562:
  int* __first563;
  int* __last564;
  int* __result565;
  struct std__allocator_int_* __alloc566;
  int* __retval567;
  long __count568;
  __first563 = v558;
  __last564 = v559;
  __result565 = v560;
  __alloc566 = v561;
  int* t569 = __last564;
  int* t570 = __first563;
  long diff571 = t569 - t570;
  __count568 = diff571;
    long t572 = __count568;
    long c573 = 0;
    _Bool c574 = ((t572 > c573)) ? 1 : 0;
    if (c574) {
        _Bool r575 = std__is_constant_evaluated();
        if (r575) {
          struct __gnu_cxx____normal_iterator_int____void_ __out576;
          struct __gnu_cxx____normal_iterator_int____void_ ref_tmp0577;
          struct __gnu_cxx____normal_iterator_int____void_ agg_tmp0578;
          __gnu_cxx____normal_iterator_int___void_____normal_iterator(&__out576, &__result565);
          int* t579 = __first563;
          int* t580 = __last564;
          agg_tmp0578 = __out576; // copy
          struct std__allocator_int_* t581 = __alloc566;
          struct __gnu_cxx____normal_iterator_int____void_ t582 = agg_tmp0578;
          struct __gnu_cxx____normal_iterator_int____void_ r583 = __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(t579, t580, t582, t581);
          ref_tmp0577 = r583;
          struct __gnu_cxx____normal_iterator_int____void_* r584 = __gnu_cxx____normal_iterator_int___void___operator_(&__out576, &ref_tmp0577);
          int** r585 = __gnu_cxx____normal_iterator_int___void___base___const(&__out576);
          int* t586 = *r585;
          __retval567 = t586;
          int* t587 = __retval567;
          return t587;
        }
      int* t588 = __result565;
      void* cast589 = (void*)t588;
      int* t590 = __first563;
      void* cast591 = (void*)t590;
      long t592 = __count568;
      unsigned long cast593 = (unsigned long)t592;
      unsigned long c594 = 4;
      unsigned long b595 = cast593 * c594;
      void* r596 = memcpy(cast589, cast591, b595);
    }
  int* t597 = __result565;
  long t598 = __count568;
  int* ptr599 = &(t597)[t598];
  __retval567 = ptr599;
  int* t600 = __retval567;
  return t600;
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v601) {
bb602:
  int* __it603;
  int* __retval604;
  __it603 = v601;
  int* t605 = __it603;
  __retval604 = t605;
  int* t606 = __retval604;
  return t606;
}

// function: _ZSt12__relocate_aIPiS0_SaIiEET0_T_S3_S2_RT1_
int* int__std____relocate_a_int___int___std__allocator_int___(int* v607, int* v608, int* v609, struct std__allocator_int_* v610) {
bb611:
  int* __first612;
  int* __last613;
  int* __result614;
  struct std__allocator_int_* __alloc615;
  int* __retval616;
  __first612 = v607;
  __last613 = v608;
  __result614 = v609;
  __alloc615 = v610;
  int* t617 = __first612;
  int* r618 = int__std____niter_base_int__(t617);
  int* t619 = __last613;
  int* r620 = int__std____niter_base_int__(t619);
  int* t621 = __result614;
  int* r622 = int__std____niter_base_int__(t621);
  struct std__allocator_int_* t623 = __alloc615;
  int* r624 = std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(r618, r620, r622, t623);
  __retval616 = r624;
  int* t625 = __retval616;
  return t625;
}

// function: _ZNSt6vectorIiSaIiEE11_S_relocateEPiS2_S2_RS0_
int* std__vector_int__std__allocator_int______S_relocate(int* v626, int* v627, int* v628, struct std__allocator_int_* v629) {
bb630:
  int* __first631;
  int* __last632;
  int* __result633;
  struct std__allocator_int_* __alloc634;
  int* __retval635;
  __first631 = v626;
  __last632 = v627;
  __result633 = v628;
  __alloc634 = v629;
  int* t636 = __first631;
  int* t637 = __last632;
  int* t638 = __result633;
  struct std__allocator_int_* t639 = __alloc634;
  int* r640 = int__std____relocate_a_int___int___std__allocator_int___(t636, t637, t638, t639);
  __retval635 = r640;
  int* t641 = __retval635;
  return t641;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v642) {
bb643:
  struct std___Vector_base_int__std__allocator_int__* this644;
  struct std__allocator_int_* __retval645;
  this644 = v642;
  struct std___Vector_base_int__std__allocator_int__* t646 = this644;
  struct std__allocator_int_* base647 = (struct std__allocator_int_*)((char *)&(t646->_M_impl) + 0);
  __retval645 = base647;
  struct std__allocator_int_* t648 = __retval645;
  return t648;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocD2Ev
void std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v649) {
bb650:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this651;
  this651 = v649;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t652 = this651;
    int* t653 = t652->_M_storage;
    _Bool cast654 = (_Bool)t653;
    if (cast654) {
      struct std___Vector_base_int__std__allocator_int__* t655 = t652->_M_vect;
      int* t656 = t652->_M_storage;
      unsigned long t657 = t652->_M_len;
      std___Vector_base_int__std__allocator_int______M_deallocate(t655, t656, t657);
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_M_realloc_appendIJiEEEvDpOT_
void void_std__vector_int__std__allocator_int______M_realloc_append_int_(struct std__vector_int__std__allocator_int__* v658, int* v659) {
bb660:
  struct std__vector_int__std__allocator_int__* this661;
  int* __args662;
  unsigned long __len663;
  int* __old_start664;
  int* __old_finish665;
  unsigned long __elems666;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0667;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1668;
  int* __new_start669;
  int* __new_finish670;
  this661 = v658;
  __args662 = v659;
  struct std__vector_int__std__allocator_int__* t671 = this661;
  unsigned long c672 = 1;
  char* cast673 = (char*)&(_str_6);
  unsigned long r674 = std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(t671, c672, cast673);
  __len663 = r674;
    unsigned long t675 = __len663;
    unsigned long c676 = 0;
    _Bool c677 = ((t675 <= c676)) ? 1 : 0;
    if (c677) {
      __builtin_unreachable();
    }
  struct std___Vector_base_int__std__allocator_int__* base678 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t671 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base679 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base678->_M_impl) + 0);
  int* t680 = base679->_M_start;
  __old_start664 = t680;
  struct std___Vector_base_int__std__allocator_int__* base681 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t671 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base682 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base681->_M_impl) + 0);
  int* t683 = base682->_M_finish;
  __old_finish665 = t683;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r684 = std__vector_int__std__allocator_int_____end(t671);
  ref_tmp0667 = r684;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r685 = std__vector_int__std__allocator_int_____begin(t671);
  ref_tmp1668 = r685;
  long r686 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&ref_tmp0667, &ref_tmp1668);
  unsigned long cast687 = (unsigned long)r686;
  __elems666 = cast687;
  struct std___Vector_base_int__std__allocator_int__* base688 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t671 + 0);
  unsigned long t689 = __len663;
  int* r690 = std___Vector_base_int__std__allocator_int______M_allocate(base688, t689);
  __new_start669 = r690;
  int* t691 = __new_start669;
  __new_finish670 = t691;
    struct std__vector_int__std__allocator_int_____Guard_alloc __guard692;
    int* ref_tmp2693;
    int* t694 = __new_start669;
    unsigned long t695 = __len663;
    struct std___Vector_base_int__std__allocator_int__* base696 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t671 + 0);
    std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(&__guard692, t694, t695, base696);
      struct std___Vector_base_int__std__allocator_int__* base697 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t671 + 0);
      struct std__allocator_int_* base698 = (struct std__allocator_int_*)((char *)&(base697->_M_impl) + 0);
      int* t699 = __new_start669;
      unsigned long t700 = __elems666;
      int* ptr701 = &(t699)[t700];
      ref_tmp2693 = ptr701;
      int* r702 = auto_std____to_address_int__(&ref_tmp2693);
      int* t703 = __args662;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_(base698, r702, t703);
        int* t704 = __old_start664;
        int* t705 = __old_finish665;
        int* t706 = __new_start669;
        struct std___Vector_base_int__std__allocator_int__* base707 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t671 + 0);
        struct std__allocator_int_* r708 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base707);
        int* r709 = std__vector_int__std__allocator_int______S_relocate(t704, t705, t706, r708);
        __new_finish670 = r709;
        int* t710 = __new_finish670;
        int c711 = 1;
        int* ptr712 = &(t710)[c711];
        __new_finish670 = ptr712;
      int* t713 = __old_start664;
      __guard692._M_storage = t713;
      struct std___Vector_base_int__std__allocator_int__* base714 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t671 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base715 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base714->_M_impl) + 0);
      int* t716 = base715->_M_end_of_storage;
      int* t717 = __old_start664;
      long diff718 = t716 - t717;
      unsigned long cast719 = (unsigned long)diff718;
      __guard692._M_len = cast719;
    {
      std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(&__guard692);
    }
  int* t720 = __new_start669;
  struct std___Vector_base_int__std__allocator_int__* base721 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t671 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base722 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base721->_M_impl) + 0);
  base722->_M_start = t720;
  int* t723 = __new_finish670;
  struct std___Vector_base_int__std__allocator_int__* base724 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t671 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base725 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base724->_M_impl) + 0);
  base725->_M_finish = t723;
  int* t726 = __new_start669;
  unsigned long t727 = __len663;
  int* ptr728 = &(t726)[t727];
  struct std___Vector_base_int__std__allocator_int__* base729 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t671 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base730 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base729->_M_impl) + 0);
  base730->_M_end_of_storage = ptr728;
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v731) {
bb732:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this733;
  int** __retval734;
  this733 = v731;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t735 = this733;
  __retval734 = &t735->_M_current;
  int** t736 = __retval734;
  return t736;
}

// function: _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v737, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v738) {
bb739:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __lhs740;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __rhs741;
  _Bool __retval742;
  __lhs740 = v737;
  __rhs741 = v738;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t743 = __lhs740;
  int** r744 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t743);
  int* t745 = *r744;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t746 = __rhs741;
  int** r747 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t746);
  int* t748 = *r747;
  _Bool c749 = ((t745 == t748)) ? 1 : 0;
  __retval742 = c749;
  _Bool t750 = __retval742;
  return t750;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2ERKS2_
void __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v751, int** v752) {
bb753:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this754;
  int** __i755;
  this754 = v751;
  __i755 = v752;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t756 = this754;
  int** t757 = __i755;
  int* t758 = *t757;
  t756->_M_current = t758;
  return;
}

// function: _ZNKSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin___const(struct std__vector_int__std__allocator_int__* v759) {
bb760:
  struct std__vector_int__std__allocator_int__* this761;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __retval762;
  this761 = v759;
  struct std__vector_int__std__allocator_int__* t763 = this761;
  struct std___Vector_base_int__std__allocator_int__* base764 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t763 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base765 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base764->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(&__retval762, &base765->_M_start);
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t766 = __retval762;
  return t766;
}

// function: _ZNKSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end___const(struct std__vector_int__std__allocator_int__* v767) {
bb768:
  struct std__vector_int__std__allocator_int__* this769;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __retval770;
  this769 = v767;
  struct std__vector_int__std__allocator_int__* t771 = this769;
  struct std___Vector_base_int__std__allocator_int__* base772 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t771 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base773 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base772->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(&__retval770, &base773->_M_finish);
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t774 = __retval770;
  return t774;
}

// function: _ZNKSt6vectorIiSaIiEE5emptyEv
_Bool std__vector_int__std__allocator_int_____empty___const(struct std__vector_int__std__allocator_int__* v775) {
bb776:
  struct std__vector_int__std__allocator_int__* this777;
  _Bool __retval778;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ ref_tmp0779;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ ref_tmp1780;
  this777 = v775;
  struct std__vector_int__std__allocator_int__* t781 = this777;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r782 = std__vector_int__std__allocator_int_____begin___const(t781);
  ref_tmp0779 = r782;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r783 = std__vector_int__std__allocator_int_____end___const(t781);
  ref_tmp1780 = r783;
  _Bool r784 = _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&ref_tmp0779, &ref_tmp1780);
  __retval778 = r784;
  _Bool t785 = __retval778;
  return t785;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEmiEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v786, long v787) {
bb788:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this789;
  long __n790;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval791;
  int* ref_tmp0792;
  this789 = v786;
  __n790 = v787;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t793 = this789;
  int* t794 = t793->_M_current;
  long t795 = __n790;
  long u796 = -t795;
  int* ptr797 = &(t794)[u796];
  ref_tmp0792 = ptr797;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval791, &ref_tmp0792);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t798 = __retval791;
  return t798;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v799) {
bb800:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this801;
  int* __retval802;
  this801 = v799;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t803 = this801;
  int* t804 = t803->_M_current;
  __retval802 = t804;
  int* t805 = __retval802;
  return t805;
}

// function: _ZNSt6vectorIiSaIiEE4backEv
int* std__vector_int__std__allocator_int_____back(struct std__vector_int__std__allocator_int__* v806) {
bb807:
  struct std__vector_int__std__allocator_int__* this808;
  int* __retval809;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0810;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1811;
  this808 = v806;
  struct std__vector_int__std__allocator_int__* t812 = this808;
    do {
          _Bool r813 = std__vector_int__std__allocator_int_____empty___const(t812);
          if (r813) {
            char* cast814 = (char*)&(_str_7);
            int c815 = 1370;
            char* cast816 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv);
            char* cast817 = (char*)&(_str_8);
            std____glibcxx_assert_fail(cast814, c815, cast816, cast817);
          }
      _Bool c818 = 0;
      if (!c818) break;
    } while (1);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r819 = std__vector_int__std__allocator_int_____end(t812);
  ref_tmp1811 = r819;
  long c820 = 1;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r821 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&ref_tmp1811, c820);
  ref_tmp0810 = r821;
  int* r822 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp0810);
  __retval809 = r822;
  int* t823 = __retval809;
  return t823;
}

// function: _ZNSt6vectorIiSaIiEE12emplace_backIJiEEERiDpOT_
int* int__std__vector_int__std__allocator_int_____emplace_back_int_(struct std__vector_int__std__allocator_int__* v824, int* v825) {
bb826:
  struct std__vector_int__std__allocator_int__* this827;
  int* __args828;
  int* __retval829;
  this827 = v824;
  __args828 = v825;
  struct std__vector_int__std__allocator_int__* t830 = this827;
    struct std___Vector_base_int__std__allocator_int__* base831 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t830 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base832 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base831->_M_impl) + 0);
    int* t833 = base832->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base834 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t830 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base835 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base834->_M_impl) + 0);
    int* t836 = base835->_M_end_of_storage;
    _Bool c837 = ((t833 != t836)) ? 1 : 0;
    if (c837) {
      struct std___Vector_base_int__std__allocator_int__* base838 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t830 + 0);
      struct std__allocator_int_* base839 = (struct std__allocator_int_*)((char *)&(base838->_M_impl) + 0);
      struct std___Vector_base_int__std__allocator_int__* base840 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t830 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base841 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base840->_M_impl) + 0);
      int* t842 = base841->_M_finish;
      int* t843 = __args828;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_(base839, t842, t843);
      struct std___Vector_base_int__std__allocator_int__* base844 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t830 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base845 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base844->_M_impl) + 0);
      int* t846 = base845->_M_finish;
      int c847 = 1;
      int* ptr848 = &(t846)[c847];
      base845->_M_finish = ptr848;
    } else {
      int* t849 = __args828;
      void_std__vector_int__std__allocator_int______M_realloc_append_int_(t830, t849);
    }
  int* r850 = std__vector_int__std__allocator_int_____back(t830);
  __retval829 = r850;
  int* t851 = __retval829;
  return t851;
}

// function: _ZNSt6vectorIiSaIiEE9push_backEOi
void std__vector_int__std__allocator_int_____push_back(struct std__vector_int__std__allocator_int__* v852, int* v853) {
bb854:
  struct std__vector_int__std__allocator_int__* this855;
  int* __x856;
  this855 = v852;
  __x856 = v853;
  struct std__vector_int__std__allocator_int__* t857 = this855;
  int* t858 = __x856;
  int* r859 = int__std__vector_int__std__allocator_int_____emplace_back_int_(t857, t858);
  return;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIiEiE27_S_propagate_on_copy_assignEv
_Bool __gnu_cxx____alloc_traits_std__allocator_int___int____S_propagate_on_copy_assign() {
bb860:
  _Bool __retval861;
  _Bool t862 = _ZNSt17integral_constantIbLb0EE5valueE;
  __retval861 = t862;
  _Bool t863 = __retval861;
  return t863;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIiEiE15_S_always_equalEv
_Bool __gnu_cxx____alloc_traits_std__allocator_int___int____S_always_equal() {
bb864:
  _Bool __retval865;
  _Bool t866 = _ZNSt17integral_constantIbLb1EE5valueE;
  __retval865 = t866;
  _Bool t867 = __retval865;
  return t867;
}

// function: _ZSteqRKSaIiES1_
_Bool std__operator__(struct std__allocator_int_* v868, struct std__allocator_int_* v869) {
bb870:
  struct std__allocator_int_* unnamed871;
  struct std__allocator_int_* unnamed872;
  _Bool __retval873;
  unnamed871 = v868;
  unnamed872 = v869;
  _Bool c874 = 1;
  __retval873 = c874;
  _Bool t875 = __retval873;
  return t875;
}

// function: _ZNSt6vectorIiSaIiEE15_M_erase_at_endEPi
void std__vector_int__std__allocator_int______M_erase_at_end(struct std__vector_int__std__allocator_int__* v876, int* v877) {
bb878:
  struct std__vector_int__std__allocator_int__* this879;
  int* __pos880;
  this879 = v876;
  __pos880 = v877;
  struct std__vector_int__std__allocator_int__* t881 = this879;
    unsigned long __n882;
    struct std___Vector_base_int__std__allocator_int__* base883 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t881 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base884 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base883->_M_impl) + 0);
    int* t885 = base884->_M_finish;
    int* t886 = __pos880;
    long diff887 = t885 - t886;
    unsigned long cast888 = (unsigned long)diff887;
    __n882 = cast888;
    unsigned long t889 = __n882;
    _Bool cast890 = (_Bool)t889;
    if (cast890) {
      int* t891 = __pos880;
      struct std___Vector_base_int__std__allocator_int__* base892 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t881 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base893 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base892->_M_impl) + 0);
      int* t894 = base893->_M_finish;
      struct std___Vector_base_int__std__allocator_int__* base895 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t881 + 0);
      struct std__allocator_int_* r896 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base895);
      void_std___Destroy_int___int_(t891, t894, r896);
      int* t897 = __pos880;
      struct std___Vector_base_int__std__allocator_int__* base898 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t881 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base899 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base898->_M_impl) + 0);
      base899->_M_finish = t897;
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE5clearEv
void std__vector_int__std__allocator_int_____clear(struct std__vector_int__std__allocator_int__* v900) {
bb901:
  struct std__vector_int__std__allocator_int__* this902;
  this902 = v900;
  struct std__vector_int__std__allocator_int__* t903 = this902;
  struct std___Vector_base_int__std__allocator_int__* base904 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t903 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base905 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base904->_M_impl) + 0);
  int* t906 = base905->_M_start;
  std__vector_int__std__allocator_int______M_erase_at_end(t903, t906);
  return;
}

// function: _ZSt15__alloc_on_copyISaIiEEvRT_RKS1_
void void_std____alloc_on_copy_std__allocator_int___(struct std__allocator_int_* v907, struct std__allocator_int_* v908) {
bb909:
  struct std__allocator_int_* __one910;
  struct std__allocator_int_* __two911;
  __one910 = v907;
  __two911 = v908;
  return;
}

// function: _ZNKSt6vectorIiSaIiEE8capacityEv
unsigned long std__vector_int__std__allocator_int_____capacity___const(struct std__vector_int__std__allocator_int__* v912) {
bb913:
  struct std__vector_int__std__allocator_int__* this914;
  unsigned long __retval915;
  long __dif916;
  this914 = v912;
  struct std__vector_int__std__allocator_int__* t917 = this914;
  struct std___Vector_base_int__std__allocator_int__* base918 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t917 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base919 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base918->_M_impl) + 0);
  int* t920 = base919->_M_end_of_storage;
  struct std___Vector_base_int__std__allocator_int__* base921 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t917 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base922 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base921->_M_impl) + 0);
  int* t923 = base922->_M_start;
  long diff924 = t920 - t923;
  __dif916 = diff924;
    long t925 = __dif916;
    long c926 = 0;
    _Bool c927 = ((t925 < c926)) ? 1 : 0;
    if (c927) {
      __builtin_unreachable();
    }
  long t928 = __dif916;
  unsigned long cast929 = (unsigned long)t928;
  __retval915 = cast929;
  unsigned long t930 = __retval915;
  return t930;
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v931, int** v932) {
bb933:
  struct std___UninitDestroyGuard_int____void_* this934;
  int** __first935;
  this934 = v931;
  __first935 = v932;
  struct std___UninitDestroyGuard_int____void_* t936 = this934;
  int** t937 = __first935;
  int* t938 = *t937;
  t936->_M_first = t938;
  int** t939 = __first935;
  t936->_M_cur = t939;
  return;
}

// function: _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* v940, int* v941) {
bb942:
  int* __location943;
  int* __args944;
  int* __retval945;
  void* __loc946;
  __location943 = v940;
  __args944 = v941;
  int* t947 = __location943;
  void* cast948 = (void*)t947;
  __loc946 = cast948;
    void* t949 = __loc946;
    int* cast950 = (int*)t949;
    int* t951 = __args944;
    int t952 = *t951;
    *cast950 = t952;
    __retval945 = cast950;
    int* t953 = __retval945;
    return t953;
  abort();
}

// function: _ZSt10_ConstructIiJRKiEEvPT_DpOT0_
void void_std___Construct_int__int_const__(int* v954, int* v955) {
bb956:
  int* __p957;
  int* __args958;
  __p957 = v954;
  __args958 = v955;
    _Bool r959 = std____is_constant_evaluated();
    if (r959) {
      int* t960 = __p957;
      int* t961 = __args958;
      int* r962 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t960, t961);
      return;
    }
  int* t963 = __p957;
  void* cast964 = (void*)t963;
  int* cast965 = (int*)cast964;
  int* t966 = __args958;
  int t967 = *t966;
  *cast965 = t967;
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v968) {
bb969:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this970;
  int* __retval971;
  this970 = v968;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t972 = this970;
  int* t973 = t972->_M_current;
  __retval971 = t973;
  int* t974 = __retval971;
  return t974;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v975) {
bb976:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this977;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __retval978;
  this977 = v975;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t979 = this977;
  int* t980 = t979->_M_current;
  int c981 = 1;
  int* ptr982 = &(t980)[c981];
  t979->_M_current = ptr982;
  __retval978 = t979;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t983 = __retval978;
  return t983;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v984) {
bb985:
  struct std___UninitDestroyGuard_int____void_* this986;
  this986 = v984;
  struct std___UninitDestroyGuard_int____void_* t987 = this986;
  int** c988 = ((void*)0);
  t987->_M_cur = c988;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v989) {
bb990:
  struct std___UninitDestroyGuard_int____void_* this991;
  this991 = v989;
  struct std___UninitDestroyGuard_int____void_* t992 = this991;
    int** t993 = t992->_M_cur;
    int** c994 = ((void*)0);
    _Bool c995 = ((t993 != c994)) ? 1 : 0;
    if (c995) {
      int* t996 = t992->_M_first;
      int** t997 = t992->_M_cur;
      int* t998 = *t997;
      void_std___Destroy_int__(t996, t998);
    }
  return;
}

// function: _ZSt16__do_uninit_copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEES7_PiET1_T_T0_S9_
int* int__std____do_uninit_copy___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v999, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v1000, int* v1001) {
bb1002:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __first1003;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __last1004;
  int* __result1005;
  int* __retval1006;
  struct std___UninitDestroyGuard_int____void_ __guard1007;
  __first1003 = v999;
  __last1004 = v1000;
  __result1005 = v1001;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard1007, &__result1005);
      while (1) {
        _Bool r1009 = _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first1003, &__last1004);
        _Bool u1010 = !r1009;
        if (!u1010) break;
        int* t1011 = __result1005;
        int* r1012 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______operator____const(&__first1003);
        void_std___Construct_int__int_const__(t1011, r1012);
      for_step1008: ;
        struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* r1013 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______operator__(&__first1003);
        int* t1014 = __result1005;
        int c1015 = 1;
        int* ptr1016 = &(t1014)[c1015];
        __result1005 = ptr1016;
      }
    std___UninitDestroyGuard_int___void___release(&__guard1007);
    int* t1017 = __result1005;
    __retval1006 = t1017;
    int* t1018 = __retval1006;
    int* ret_val1019 = t1018;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1007);
    }
    return ret_val1019;
  abort();
}

// function: _ZN9__gnu_cxxmiIPKiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS9_SC_
long __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int_const___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v1020, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v1021) {
bb1022:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __lhs1023;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __rhs1024;
  long __retval1025;
  __lhs1023 = v1020;
  __rhs1024 = v1021;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t1026 = __lhs1023;
  int** r1027 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t1026);
  int* t1028 = *r1027;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t1029 = __rhs1024;
  int** r1030 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t1029);
  int* t1031 = *r1030;
  long diff1032 = t1028 - t1031;
  __retval1025 = diff1032;
  long t1033 = __retval1025;
  return t1033;
}

// function: _ZSt12__niter_baseIPKiSt6vectorIiSaIiEEET_N9__gnu_cxx17__normal_iteratorIS5_T0_EE
int* int_const__std____niter_base_int_const___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v1034) {
bb1035:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __it1036;
  int* __retval1037;
  __it1036 = v1034;
  int** r1038 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(&__it1036);
  int* t1039 = *r1038;
  __retval1037 = t1039;
  int* t1040 = __retval1037;
  return t1040;
}

// function: _ZSt18uninitialized_copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiET0_T_SA_S9_
int* int__std__uninitialized_copy___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v1041, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v1042, int* v1043) {
bb1044:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __first1045;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __last1046;
  int* __result1047;
  int* __retval1048;
  __first1045 = v1041;
  __last1046 = v1042;
  __result1047 = v1043;
      long __n1049;
      long r1050 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int_const___std__vector_int__std__allocator_int_____(&__last1046, &__first1045);
      __n1049 = r1050;
        long t1051 = __n1049;
        long c1052 = 0;
        _Bool c1053 = ((t1051 > c1052)) ? 1 : 0;
        if (c1053) {
          struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp01054;
          int* t1055 = __result1047;
          int* r1056 = int__std____niter_base_int__(t1055);
          void* cast1057 = (void*)r1056;
          agg_tmp01054 = __first1045; // copy
          struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t1058 = agg_tmp01054;
          int* r1059 = int_const__std____niter_base_int_const___std__vector_int__std__allocator_int_____(t1058);
          void* cast1060 = (void*)r1059;
          long t1061 = __n1049;
          unsigned long cast1062 = (unsigned long)t1061;
          unsigned long c1063 = 4;
          unsigned long b1064 = cast1062 * c1063;
          void* r1065 = memcpy(cast1057, cast1060, b1064);
          long t1066 = __n1049;
          int* t1067 = __result1047;
          int* ptr1068 = &(t1067)[t1066];
          __result1047 = ptr1068;
        }
      int* t1069 = __result1047;
      __retval1048 = t1069;
      int* t1070 = __retval1048;
      return t1070;
  abort();
}

// function: _ZSt22__uninitialized_copy_aIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEES7_PiiET1_T_T0_S9_RSaIT2_E
int* int__std____uninitialized_copy_a___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______int___int_(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v1071, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v1072, int* v1073, struct std__allocator_int_* v1074) {
bb1075:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __first1076;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __last1077;
  int* __result1078;
  struct std__allocator_int_* unnamed1079;
  int* __retval1080;
  __first1076 = v1071;
  __last1077 = v1072;
  __result1078 = v1073;
  unnamed1079 = v1074;
    _Bool r1081 = std__is_constant_evaluated();
    if (r1081) {
      struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp01082;
      struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp11083;
      agg_tmp01082 = __first1076; // copy
      agg_tmp11083 = __last1077; // copy
      int* t1084 = __result1078;
      struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t1085 = agg_tmp01082;
      struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t1086 = agg_tmp11083;
      int* r1087 = int__std____do_uninit_copy___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______int__(t1085, t1086, t1084);
      __retval1080 = r1087;
      int* t1088 = __retval1080;
      return t1088;
    }
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp21089;
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp31090;
    agg_tmp21089 = __first1076; // copy
    agg_tmp31090 = __last1077; // copy
    int* t1091 = __result1078;
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t1092 = agg_tmp21089;
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t1093 = agg_tmp31090;
    int* r1094 = int__std__uninitialized_copy___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______int__(t1092, t1093, t1091);
    __retval1080 = r1094;
    int* t1095 = __retval1080;
    return t1095;
  abort();
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_alloc10_M_releaseEv
int* std__vector_int__std__allocator_int______Guard_alloc___M_release(struct std__vector_int__std__allocator_int_____Guard_alloc* v1096) {
bb1097:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this1098;
  int* __retval1099;
  int* __res1100;
  this1098 = v1096;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t1101 = this1098;
  int* t1102 = t1101->_M_storage;
  __res1100 = t1102;
  int* c1103 = ((void*)0);
  t1101->_M_storage = c1103;
  int* t1104 = __res1100;
  __retval1099 = t1104;
  int* t1105 = __retval1099;
  return t1105;
}

// function: _ZNSt6vectorIiSaIiEE20_M_allocate_and_copyIN9__gnu_cxx17__normal_iteratorIPKiS1_EEEEPimT_S9_
int* int__std__vector_int__std__allocator_int______M_allocate_and_copy___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______(struct std__vector_int__std__allocator_int__* v1106, unsigned long v1107, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v1108, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v1109) {
bb1110:
  struct std__vector_int__std__allocator_int__* this1111;
  unsigned long __n1112;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __first1113;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __last1114;
  int* __retval1115;
  struct std__vector_int__std__allocator_int_____Guard_alloc __guard1116;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp01117;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp11118;
  this1111 = v1106;
  __n1112 = v1107;
  __first1113 = v1108;
  __last1114 = v1109;
  struct std__vector_int__std__allocator_int__* t1119 = this1111;
  struct std___Vector_base_int__std__allocator_int__* base1120 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1119 + 0);
  unsigned long t1121 = __n1112;
  int* r1122 = std___Vector_base_int__std__allocator_int______M_allocate(base1120, t1121);
  unsigned long t1123 = __n1112;
  struct std___Vector_base_int__std__allocator_int__* base1124 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1119 + 0);
  std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(&__guard1116, r1122, t1123, base1124);
    agg_tmp01117 = __first1113; // copy
    agg_tmp11118 = __last1114; // copy
    int* t1125 = __guard1116._M_storage;
    struct std___Vector_base_int__std__allocator_int__* base1126 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1119 + 0);
    struct std__allocator_int_* r1127 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1126);
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t1128 = agg_tmp01117;
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t1129 = agg_tmp11118;
    int* r1130 = int__std____uninitialized_copy_a___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______int___int_(t1128, t1129, t1125, r1127);
    int* r1131 = std__vector_int__std__allocator_int______Guard_alloc___M_release(&__guard1116);
    __retval1115 = r1131;
    int* t1132 = __retval1115;
    int* ret_val1133 = t1132;
    {
      std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(&__guard1116);
    }
    return ret_val1133;
  abort();
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v1134, int* v1135, struct std__allocator_int_* v1136) {
bb1137:
  int* __first1138;
  int* __last1139;
  struct std__allocator_int_* unnamed1140;
  __first1138 = v1134;
  __last1139 = v1135;
  unnamed1140 = v1136;
  int* t1141 = __first1138;
  int* t1142 = __last1139;
  void_std___Destroy_int__(t1141, t1142);
  return;
}

// function: _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1143, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1144) {
bb1145:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs1146;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs1147;
  _Bool __retval1148;
  __lhs1146 = v1143;
  __rhs1147 = v1144;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1149 = __lhs1146;
  int** r1150 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t1149);
  int* t1151 = *r1150;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1152 = __rhs1147;
  int** r1153 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t1152);
  int* t1154 = *r1153;
  _Bool c1155 = ((t1151 == t1154)) ? 1 : 0;
  __retval1148 = c1155;
  _Bool t1156 = __retval1148;
  return t1156;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1157) {
bb1158:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this1159;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval1160;
  this1159 = v1157;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1161 = this1159;
  int* t1162 = t1161->_M_current;
  int c1163 = 1;
  int* ptr1164 = &(t1162)[c1163];
  t1161->_M_current = ptr1164;
  __retval1160 = t1161;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1165 = __retval1160;
  return t1165;
}

// function: _ZSt8_DestroyIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEEvT_S7_
void void_std___Destroy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1166, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1167) {
bb1168:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first1169;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last1170;
  __first1169 = v1166;
  __last1170 = v1167;
      _Bool r1171 = std____is_constant_evaluated();
      if (r1171) {
          while (1) {
            _Bool r1173 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first1169, &__last1170);
            _Bool u1174 = !r1173;
            if (!u1174) break;
            int* r1175 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__first1169);
            void_std__destroy_at_int_(r1175);
          for_step1172: ;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1176 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__first1169);
          }
      }
  return;
}

// function: _ZSt8_DestroyIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEiEvT_S7_RSaIT0_E
void void_std___Destroy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1177, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1178, struct std__allocator_int_* v1179) {
bb1180:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first1181;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last1182;
  struct std__allocator_int_* unnamed1183;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01184;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11185;
  __first1181 = v1177;
  __last1182 = v1178;
  unnamed1183 = v1179;
  agg_tmp01184 = __first1181; // copy
  agg_tmp11185 = __last1182; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1186 = agg_tmp01184;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1187 = agg_tmp11185;
  void_std___Destroy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t1186, t1187);
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEplEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1188, long v1189) {
bb1190:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this1191;
  long __n1192;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval1193;
  int* ref_tmp01194;
  this1191 = v1188;
  __n1192 = v1189;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1195 = this1191;
  int* t1196 = t1195->_M_current;
  long t1197 = __n1192;
  int* ptr1198 = &(t1196)[t1197];
  ref_tmp01194 = ptr1198;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval1193, &ref_tmp01194);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1199 = __retval1193;
  return t1199;
}

// function: _ZSt12__niter_wrapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES2_ET_S7_T0_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____niter_wrap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1200, int* v1201) {
bb1202:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __from1203;
  int* __res1204;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval1205;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01206;
  __from1203 = v1200;
  __res1204 = v1201;
  int* t1207 = __res1204;
  int* r1208 = int__std____niter_base_int__(t1207);
  agg_tmp01206 = __from1203; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1209 = agg_tmp01206;
  int* r1210 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t1209);
  long diff1211 = r1208 - r1210;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1212 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__from1203, diff1211);
  __retval1205 = r1212;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1213 = __retval1205;
  return t1213;
}

// function: _ZSt10__distanceIPKiENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_int_const____difference_type_std____distance_int_const__(int* v1214, int* v1215, struct std__random_access_iterator_tag v1216) {
bb1217:
  int* __first1218;
  int* __last1219;
  struct std__random_access_iterator_tag unnamed1220;
  long __retval1221;
  __first1218 = v1214;
  __last1219 = v1215;
  unnamed1220 = v1216;
  int* t1222 = __last1219;
  int* t1223 = __first1218;
  long diff1224 = t1222 - t1223;
  __retval1221 = diff1224;
  long t1225 = __retval1221;
  return t1225;
}

// function: _ZSt19__iterator_categoryIPKiENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_int_const____iterator_category_std____iterator_category_int_const__(int** v1226) {
bb1227:
  int** unnamed1228;
  struct std__random_access_iterator_tag __retval1229;
  unnamed1228 = v1226;
  struct std__random_access_iterator_tag t1230 = __retval1229;
  return t1230;
}

// function: _ZSt8distanceIPKiENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_int_const____difference_type_std__distance_int_const__(int* v1231, int* v1232) {
bb1233:
  int* __first1234;
  int* __last1235;
  long __retval1236;
  struct std__random_access_iterator_tag agg_tmp01237;
  __first1234 = v1231;
  __last1235 = v1232;
  int* t1238 = __first1234;
  int* t1239 = __last1235;
  struct std__random_access_iterator_tag r1240 = std__iterator_traits_int_const____iterator_category_std____iterator_category_int_const__(&__first1234);
  agg_tmp01237 = r1240;
  struct std__random_access_iterator_tag t1241 = agg_tmp01237;
  long r1242 = std__iterator_traits_int_const____difference_type_std____distance_int_const__(t1238, t1239, t1241);
  __retval1236 = r1242;
  long t1243 = __retval1236;
  return t1243;
}

// function: _ZSt12__assign_oneILb0EPiPKiEvRT0_RT1_
void void_std____assign_one_false__int___int_const__(int** v1244, int** v1245) {
bb1246:
  int** __out1247;
  int** __in1248;
  __out1247 = v1244;
  __in1248 = v1245;
    int** t1249 = __in1248;
    int* t1250 = *t1249;
    int t1251 = *t1250;
    int** t1252 = __out1247;
    int* t1253 = *t1252;
    *t1253 = t1251;
  return;
}

// function: _ZSt14__copy_move_a2ILb0EPKiS1_PiET2_T0_T1_S3_
int* int__std____copy_move_a2_false__int_const___int_const___int__(int* v1254, int* v1255, int* v1256) {
bb1257:
  int* __first1258;
  int* __last1259;
  int* __result1260;
  int* __retval1261;
  __first1258 = v1254;
  __last1259 = v1255;
  __result1260 = v1256;
      _Bool r1262 = std____is_constant_evaluated();
      if (r1262) {
      } else {
          long __n1263;
          int* t1264 = __first1258;
          int* t1265 = __last1259;
          long r1266 = std__iterator_traits_int_const____difference_type_std__distance_int_const__(t1264, t1265);
          __n1263 = r1266;
            long t1267 = __n1263;
            long c1268 = 1;
            _Bool c1269 = ((t1267 > c1268)) ? 1 : 0;
            if (c1269) {
              int* t1270 = __result1260;
              void* cast1271 = (void*)t1270;
              int* t1272 = __first1258;
              void* cast1273 = (void*)t1272;
              long t1274 = __n1263;
              unsigned long cast1275 = (unsigned long)t1274;
              unsigned long c1276 = 4;
              unsigned long b1277 = cast1275 * c1276;
              void* r1278 = memmove(cast1271, cast1273, b1277);
              long t1279 = __n1263;
              int* t1280 = __result1260;
              int* ptr1281 = &(t1280)[t1279];
              __result1260 = ptr1281;
            } else {
                long t1282 = __n1263;
                long c1283 = 1;
                _Bool c1284 = ((t1282 == c1283)) ? 1 : 0;
                if (c1284) {
                  void_std____assign_one_false__int___int_const__(&__result1260, &__first1258);
                  int* t1285 = __result1260;
                  int c1286 = 1;
                  int* ptr1287 = &(t1285)[c1286];
                  __result1260 = ptr1287;
                }
            }
          int* t1288 = __result1260;
          __retval1261 = t1288;
          int* t1289 = __retval1261;
          return t1289;
      }
    while (1) {
      int* t1291 = __first1258;
      int* t1292 = __last1259;
      _Bool c1293 = ((t1291 != t1292)) ? 1 : 0;
      if (!c1293) break;
      void_std____assign_one_false__int___int_const__(&__result1260, &__first1258);
    for_step1290: ;
      int* t1294 = __result1260;
      int c1295 = 1;
      int* ptr1296 = &(t1294)[c1295];
      __result1260 = ptr1296;
      int* t1297 = __first1258;
      int c1298 = 1;
      int* ptr1299 = &(t1297)[c1298];
      __first1258 = ptr1299;
    }
  int* t1300 = __result1260;
  __retval1261 = t1300;
  int* t1301 = __retval1261;
  return t1301;
}

// function: _ZSt14__copy_move_a1ILb0EPKiPiET1_T0_S4_S3_
int* int__std____copy_move_a1_false__int_const___int__(int* v1302, int* v1303, int* v1304) {
bb1305:
  int* __first1306;
  int* __last1307;
  int* __result1308;
  int* __retval1309;
  __first1306 = v1302;
  __last1307 = v1303;
  __result1308 = v1304;
  int* t1310 = __first1306;
  int* t1311 = __last1307;
  int* t1312 = __result1308;
  int* r1313 = int__std____copy_move_a2_false__int_const___int_const___int__(t1310, t1311, t1312);
  __retval1309 = r1313;
  int* t1314 = __retval1309;
  return t1314;
}

// function: _ZSt12__niter_baseIPiSt6vectorIiSaIiEEET_N9__gnu_cxx17__normal_iteratorIS4_T0_EE
int* int__std____niter_base_int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1315) {
bb1316:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it1317;
  int* __retval1318;
  __it1317 = v1315;
  int** r1319 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__it1317);
  int* t1320 = *r1319;
  __retval1318 = t1320;
  int* t1321 = __retval1318;
  return t1321;
}

// function: _ZSt13__copy_move_aILb0EN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEENS1_IPiS6_EEET1_T0_SB_SA_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____copy_move_a_false____gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v1322, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v1323, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1324) {
bb1325:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __first1326;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __last1327;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result1328;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval1329;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01330;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp11331;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp21332;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp31333;
  __first1326 = v1322;
  __last1327 = v1323;
  __result1328 = v1324;
  agg_tmp01330 = __result1328; // copy
  agg_tmp11331 = __first1326; // copy
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t1334 = agg_tmp11331;
  int* r1335 = int_const__std____niter_base_int_const___std__vector_int__std__allocator_int_____(t1334);
  agg_tmp21332 = __last1327; // copy
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t1336 = agg_tmp21332;
  int* r1337 = int_const__std____niter_base_int_const___std__vector_int__std__allocator_int_____(t1336);
  agg_tmp31333 = __result1328; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1338 = agg_tmp31333;
  int* r1339 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t1338);
  int* r1340 = int__std____copy_move_a1_false__int_const___int__(r1335, r1337, r1339);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1341 = agg_tmp01330;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1342 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____niter_wrap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(t1341, r1340);
  __retval1329 = r1342;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1343 = __retval1329;
  return t1343;
}

// function: _ZSt12__miter_baseIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEET_S8_
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v1344) {
bb1345:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __it1346;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __retval1347;
  __it1346 = v1344;
  __retval1347 = __it1346; // copy
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t1348 = __retval1347;
  return t1348;
}

// function: _ZSt4copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEENS1_IPiS6_EEET0_T_SB_SA_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__copy___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v1349, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v1350, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1351) {
bb1352:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __first1353;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __last1354;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result1355;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval1356;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp01357;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp11358;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp21359;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp31360;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp41361;
  __first1353 = v1349;
  __last1354 = v1350;
  __result1355 = v1351;
  agg_tmp11358 = __first1353; // copy
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t1362 = agg_tmp11358;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r1363 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______(t1362);
  agg_tmp01357 = r1363;
  agg_tmp31360 = __last1354; // copy
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t1364 = agg_tmp31360;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r1365 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______(t1364);
  agg_tmp21359 = r1365;
  agg_tmp41361 = __result1355; // copy
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t1366 = agg_tmp01357;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t1367 = agg_tmp21359;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1368 = agg_tmp41361;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1369 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____copy_move_a_false____gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t1366, t1367, t1368);
  __retval1356 = r1369;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1370 = __retval1356;
  return t1370;
}

// function: _ZSt12__niter_wrapIPiET_RKS1_S1_
int* int__std____niter_wrap_int__(int** v1371, int* v1372) {
bb1373:
  int** unnamed1374;
  int* __res1375;
  int* __retval1376;
  unnamed1374 = v1371;
  __res1375 = v1372;
  int* t1377 = __res1375;
  __retval1376 = t1377;
  int* t1378 = __retval1376;
  return t1378;
}

// function: _ZSt10__distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_St26random_access_iterator_tag
long std__iterator_traits_int____difference_type_std____distance_int__(int* v1379, int* v1380, struct std__random_access_iterator_tag v1381) {
bb1382:
  int* __first1383;
  int* __last1384;
  struct std__random_access_iterator_tag unnamed1385;
  long __retval1386;
  __first1383 = v1379;
  __last1384 = v1380;
  unnamed1385 = v1381;
  int* t1387 = __last1384;
  int* t1388 = __first1383;
  long diff1389 = t1387 - t1388;
  __retval1386 = diff1389;
  long t1390 = __retval1386;
  return t1390;
}

// function: _ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** v1391) {
bb1392:
  int** unnamed1393;
  struct std__random_access_iterator_tag __retval1394;
  unnamed1393 = v1391;
  struct std__random_access_iterator_tag t1395 = __retval1394;
  return t1395;
}

// function: _ZSt8distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_
long std__iterator_traits_int____difference_type_std__distance_int__(int* v1396, int* v1397) {
bb1398:
  int* __first1399;
  int* __last1400;
  long __retval1401;
  struct std__random_access_iterator_tag agg_tmp01402;
  __first1399 = v1396;
  __last1400 = v1397;
  int* t1403 = __first1399;
  int* t1404 = __last1400;
  struct std__random_access_iterator_tag r1405 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first1399);
  agg_tmp01402 = r1405;
  struct std__random_access_iterator_tag t1406 = agg_tmp01402;
  long r1407 = std__iterator_traits_int____difference_type_std____distance_int__(t1403, t1404, t1406);
  __retval1401 = r1407;
  long t1408 = __retval1401;
  return t1408;
}

// function: _ZSt12__assign_oneILb0EPiS0_EvRT0_RT1_
void void_std____assign_one_false__int___int__(int** v1409, int** v1410) {
bb1411:
  int** __out1412;
  int** __in1413;
  __out1412 = v1409;
  __in1413 = v1410;
    int** t1414 = __in1413;
    int* t1415 = *t1414;
    int t1416 = *t1415;
    int** t1417 = __out1412;
    int* t1418 = *t1417;
    *t1418 = t1416;
  return;
}

// function: _ZSt14__copy_move_a2ILb0EPiS0_S0_ET2_T0_T1_S1_
int* int__std____copy_move_a2_false__int___int___int__(int* v1419, int* v1420, int* v1421) {
bb1422:
  int* __first1423;
  int* __last1424;
  int* __result1425;
  int* __retval1426;
  __first1423 = v1419;
  __last1424 = v1420;
  __result1425 = v1421;
      _Bool r1427 = std____is_constant_evaluated();
      if (r1427) {
      } else {
          long __n1428;
          int* t1429 = __first1423;
          int* t1430 = __last1424;
          long r1431 = std__iterator_traits_int____difference_type_std__distance_int__(t1429, t1430);
          __n1428 = r1431;
            long t1432 = __n1428;
            long c1433 = 1;
            _Bool c1434 = ((t1432 > c1433)) ? 1 : 0;
            if (c1434) {
              int* t1435 = __result1425;
              void* cast1436 = (void*)t1435;
              int* t1437 = __first1423;
              void* cast1438 = (void*)t1437;
              long t1439 = __n1428;
              unsigned long cast1440 = (unsigned long)t1439;
              unsigned long c1441 = 4;
              unsigned long b1442 = cast1440 * c1441;
              void* r1443 = memmove(cast1436, cast1438, b1442);
              long t1444 = __n1428;
              int* t1445 = __result1425;
              int* ptr1446 = &(t1445)[t1444];
              __result1425 = ptr1446;
            } else {
                long t1447 = __n1428;
                long c1448 = 1;
                _Bool c1449 = ((t1447 == c1448)) ? 1 : 0;
                if (c1449) {
                  void_std____assign_one_false__int___int__(&__result1425, &__first1423);
                  int* t1450 = __result1425;
                  int c1451 = 1;
                  int* ptr1452 = &(t1450)[c1451];
                  __result1425 = ptr1452;
                }
            }
          int* t1453 = __result1425;
          __retval1426 = t1453;
          int* t1454 = __retval1426;
          return t1454;
      }
    while (1) {
      int* t1456 = __first1423;
      int* t1457 = __last1424;
      _Bool c1458 = ((t1456 != t1457)) ? 1 : 0;
      if (!c1458) break;
      void_std____assign_one_false__int___int__(&__result1425, &__first1423);
    for_step1455: ;
      int* t1459 = __result1425;
      int c1460 = 1;
      int* ptr1461 = &(t1459)[c1460];
      __result1425 = ptr1461;
      int* t1462 = __first1423;
      int c1463 = 1;
      int* ptr1464 = &(t1462)[c1463];
      __first1423 = ptr1464;
    }
  int* t1465 = __result1425;
  __retval1426 = t1465;
  int* t1466 = __retval1426;
  return t1466;
}

// function: _ZSt14__copy_move_a1ILb0EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_a1_false__int___int__(int* v1467, int* v1468, int* v1469) {
bb1470:
  int* __first1471;
  int* __last1472;
  int* __result1473;
  int* __retval1474;
  __first1471 = v1467;
  __last1472 = v1468;
  __result1473 = v1469;
  int* t1475 = __first1471;
  int* t1476 = __last1472;
  int* t1477 = __result1473;
  int* r1478 = int__std____copy_move_a2_false__int___int___int__(t1475, t1476, t1477);
  __retval1474 = r1478;
  int* t1479 = __retval1474;
  return t1479;
}

// function: _ZSt13__copy_move_aILb0EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_a_false__int___int__(int* v1480, int* v1481, int* v1482) {
bb1483:
  int* __first1484;
  int* __last1485;
  int* __result1486;
  int* __retval1487;
  __first1484 = v1480;
  __last1485 = v1481;
  __result1486 = v1482;
  int* t1488 = __first1484;
  int* r1489 = int__std____niter_base_int__(t1488);
  int* t1490 = __last1485;
  int* r1491 = int__std____niter_base_int__(t1490);
  int* t1492 = __result1486;
  int* r1493 = int__std____niter_base_int__(t1492);
  int* r1494 = int__std____copy_move_a1_false__int___int__(r1489, r1491, r1493);
  int* r1495 = int__std____niter_wrap_int__(&__result1486, r1494);
  __retval1487 = r1495;
  int* t1496 = __retval1487;
  return t1496;
}

// function: _ZSt12__miter_baseIPiET_S1_
int* int__std____miter_base_int__(int* v1497) {
bb1498:
  int* __it1499;
  int* __retval1500;
  __it1499 = v1497;
  int* t1501 = __it1499;
  __retval1500 = t1501;
  int* t1502 = __retval1500;
  return t1502;
}

// function: _ZSt4copyIPiS0_ET0_T_S2_S1_
int* int__std__copy_int___int__(int* v1503, int* v1504, int* v1505) {
bb1506:
  int* __first1507;
  int* __last1508;
  int* __result1509;
  int* __retval1510;
  __first1507 = v1503;
  __last1508 = v1504;
  __result1509 = v1505;
  int* t1511 = __first1507;
  int* r1512 = int__std____miter_base_int__(t1511);
  int* t1513 = __last1508;
  int* r1514 = int__std____miter_base_int__(t1513);
  int* t1515 = __result1509;
  int* r1516 = int__std____copy_move_a_false__int___int__(r1512, r1514, t1515);
  __retval1510 = r1516;
  int* t1517 = __retval1510;
  return t1517;
}

// function: _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* v1518, int* v1519) {
bb1520:
  int* __location1521;
  int* __args1522;
  int* __retval1523;
  void* __loc1524;
  __location1521 = v1518;
  __args1522 = v1519;
  int* t1525 = __location1521;
  void* cast1526 = (void*)t1525;
  __loc1524 = cast1526;
    void* t1527 = __loc1524;
    int* cast1528 = (int*)t1527;
    int* t1529 = __args1522;
    int t1530 = *t1529;
    *cast1528 = t1530;
    __retval1523 = cast1528;
    int* t1531 = __retval1523;
    return t1531;
  abort();
}

// function: _ZSt10_ConstructIiJRiEEvPT_DpOT0_
void void_std___Construct_int__int__(int* v1532, int* v1533) {
bb1534:
  int* __p1535;
  int* __args1536;
  __p1535 = v1532;
  __args1536 = v1533;
    _Bool r1537 = std____is_constant_evaluated();
    if (r1537) {
      int* t1538 = __p1535;
      int* t1539 = __args1536;
      int* r1540 = _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t1538, t1539);
      return;
    }
  int* t1541 = __p1535;
  void* cast1542 = (void*)t1541;
  int* cast1543 = (int*)cast1542;
  int* t1544 = __args1536;
  int t1545 = *t1544;
  *cast1543 = t1545;
  return;
}

// function: _ZSt16__do_uninit_copyIPiS0_S0_ET1_T_T0_S1_
int* int__std____do_uninit_copy_int___int___int__(int* v1546, int* v1547, int* v1548) {
bb1549:
  int* __first1550;
  int* __last1551;
  int* __result1552;
  int* __retval1553;
  struct std___UninitDestroyGuard_int____void_ __guard1554;
  __first1550 = v1546;
  __last1551 = v1547;
  __result1552 = v1548;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard1554, &__result1552);
      while (1) {
        int* t1556 = __first1550;
        int* t1557 = __last1551;
        _Bool c1558 = ((t1556 != t1557)) ? 1 : 0;
        if (!c1558) break;
        int* t1559 = __result1552;
        int* t1560 = __first1550;
        void_std___Construct_int__int__(t1559, t1560);
      for_step1555: ;
        int* t1561 = __first1550;
        int c1562 = 1;
        int* ptr1563 = &(t1561)[c1562];
        __first1550 = ptr1563;
        int* t1564 = __result1552;
        int c1565 = 1;
        int* ptr1566 = &(t1564)[c1565];
        __result1552 = ptr1566;
      }
    std___UninitDestroyGuard_int___void___release(&__guard1554);
    int* t1567 = __result1552;
    __retval1553 = t1567;
    int* t1568 = __retval1553;
    int* ret_val1569 = t1568;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1554);
    }
    return ret_val1569;
  abort();
}

// function: _ZSt18uninitialized_copyIPiS0_ET0_T_S2_S1_
int* int__std__uninitialized_copy_int___int__(int* v1570, int* v1571, int* v1572) {
bb1573:
  int* __first1574;
  int* __last1575;
  int* __result1576;
  int* __retval1577;
  __first1574 = v1570;
  __last1575 = v1571;
  __result1576 = v1572;
      long __n1578;
      int* t1579 = __last1575;
      int* t1580 = __first1574;
      long diff1581 = t1579 - t1580;
      __n1578 = diff1581;
        long t1582 = __n1578;
        long c1583 = 0;
        _Bool c1584 = ((t1582 > c1583)) ? 1 : 0;
        if (c1584) {
          int* t1585 = __result1576;
          int* r1586 = int__std____niter_base_int__(t1585);
          void* cast1587 = (void*)r1586;
          int* t1588 = __first1574;
          int* r1589 = int__std____niter_base_int__(t1588);
          void* cast1590 = (void*)r1589;
          long t1591 = __n1578;
          unsigned long cast1592 = (unsigned long)t1591;
          unsigned long c1593 = 4;
          unsigned long b1594 = cast1592 * c1593;
          void* r1595 = memcpy(cast1587, cast1590, b1594);
          long t1596 = __n1578;
          int* t1597 = __result1576;
          int* ptr1598 = &(t1597)[t1596];
          __result1576 = ptr1598;
        }
      int* t1599 = __result1576;
      __retval1577 = t1599;
      int* t1600 = __retval1577;
      return t1600;
  abort();
}

// function: _ZSt22__uninitialized_copy_aIPiS0_S0_iET1_T_T0_S1_RSaIT2_E
int* int__std____uninitialized_copy_a_int___int___int___int_(int* v1601, int* v1602, int* v1603, struct std__allocator_int_* v1604) {
bb1605:
  int* __first1606;
  int* __last1607;
  int* __result1608;
  struct std__allocator_int_* unnamed1609;
  int* __retval1610;
  __first1606 = v1601;
  __last1607 = v1602;
  __result1608 = v1603;
  unnamed1609 = v1604;
    _Bool r1611 = std__is_constant_evaluated();
    if (r1611) {
      int* t1612 = __first1606;
      int* t1613 = __last1607;
      int* t1614 = __result1608;
      int* r1615 = int__std____do_uninit_copy_int___int___int__(t1612, t1613, t1614);
      __retval1610 = r1615;
      int* t1616 = __retval1610;
      return t1616;
    }
    int* t1617 = __first1606;
    int* t1618 = __last1607;
    int* t1619 = __result1608;
    int* r1620 = int__std__uninitialized_copy_int___int__(t1617, t1618, t1619);
    __retval1610 = r1620;
    int* t1621 = __retval1610;
    return t1621;
  abort();
}

// function: _ZNSt6vectorIiSaIiEEaSERKS1_
struct std__vector_int__std__allocator_int__* std__vector_int__std__allocator_int_____operator_(struct std__vector_int__std__allocator_int__* v1622, struct std__vector_int__std__allocator_int__* v1623) {
bb1624:
  struct std__vector_int__std__allocator_int__* this1625;
  struct std__vector_int__std__allocator_int__* __x1626;
  struct std__vector_int__std__allocator_int__* __retval1627;
  this1625 = v1622;
  __x1626 = v1623;
  struct std__vector_int__std__allocator_int__* t1628 = this1625;
    struct std__vector_int__std__allocator_int__* t1629 = __x1626;
    _Bool c1630 = ((t1629 != t1628)) ? 1 : 0;
    if (c1630) {
      unsigned long __xlen1631;
        _Bool r1632 = __gnu_cxx____alloc_traits_std__allocator_int___int____S_propagate_on_copy_assign();
        if (r1632) {
            _Bool r1633 = __gnu_cxx____alloc_traits_std__allocator_int___int____S_always_equal();
            _Bool u1634 = !r1633;
            _Bool ternary1635;
            if (u1634) {
              struct std___Vector_base_int__std__allocator_int__* base1636 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1628 + 0);
              struct std__allocator_int_* r1637 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1636);
              struct std__vector_int__std__allocator_int__* t1638 = __x1626;
              struct std___Vector_base_int__std__allocator_int__* base1639 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1638 + 0);
              struct std__allocator_int_* r1640 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(base1639);
              _Bool r1641 = std__operator__(r1637, r1640);
              _Bool u1642 = !r1641;
              ternary1635 = (_Bool)u1642;
            } else {
              _Bool c1643 = 0;
              ternary1635 = (_Bool)c1643;
            }
            if (ternary1635) {
              std__vector_int__std__allocator_int_____clear(t1628);
              struct std___Vector_base_int__std__allocator_int__* base1644 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1628 + 0);
              struct std___Vector_base_int__std__allocator_int__* base1645 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1628 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1646 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1645->_M_impl) + 0);
              int* t1647 = base1646->_M_start;
              struct std___Vector_base_int__std__allocator_int__* base1648 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1628 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1649 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1648->_M_impl) + 0);
              int* t1650 = base1649->_M_end_of_storage;
              struct std___Vector_base_int__std__allocator_int__* base1651 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1628 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1652 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1651->_M_impl) + 0);
              int* t1653 = base1652->_M_start;
              long diff1654 = t1650 - t1653;
              unsigned long cast1655 = (unsigned long)diff1654;
              std___Vector_base_int__std__allocator_int______M_deallocate(base1644, t1647, cast1655);
              int* c1656 = ((void*)0);
              struct std___Vector_base_int__std__allocator_int__* base1657 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1628 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1658 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1657->_M_impl) + 0);
              base1658->_M_start = c1656;
              int* c1659 = ((void*)0);
              struct std___Vector_base_int__std__allocator_int__* base1660 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1628 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1661 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1660->_M_impl) + 0);
              base1661->_M_finish = c1659;
              int* c1662 = ((void*)0);
              struct std___Vector_base_int__std__allocator_int__* base1663 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1628 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1664 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1663->_M_impl) + 0);
              base1664->_M_end_of_storage = c1662;
            }
          struct std___Vector_base_int__std__allocator_int__* base1665 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1628 + 0);
          struct std__allocator_int_* r1666 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1665);
          struct std__vector_int__std__allocator_int__* t1667 = __x1626;
          struct std___Vector_base_int__std__allocator_int__* base1668 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1667 + 0);
          struct std__allocator_int_* r1669 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(base1668);
          void_std____alloc_on_copy_std__allocator_int___(r1666, r1669);
        }
      struct std__vector_int__std__allocator_int__* t1670 = __x1626;
      unsigned long r1671 = std__vector_int__std__allocator_int_____size___const(t1670);
      __xlen1631 = r1671;
        unsigned long t1672 = __xlen1631;
        unsigned long r1673 = std__vector_int__std__allocator_int_____capacity___const(t1628);
        _Bool c1674 = ((t1672 > r1673)) ? 1 : 0;
        if (c1674) {
          int* __tmp1675;
          struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp01676;
          struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp11677;
          unsigned long t1678 = __xlen1631;
          struct std__vector_int__std__allocator_int__* t1679 = __x1626;
          struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r1680 = std__vector_int__std__allocator_int_____begin___const(t1679);
          agg_tmp01676 = r1680;
          struct std__vector_int__std__allocator_int__* t1681 = __x1626;
          struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r1682 = std__vector_int__std__allocator_int_____end___const(t1681);
          agg_tmp11677 = r1682;
          struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t1683 = agg_tmp01676;
          struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t1684 = agg_tmp11677;
          int* r1685 = int__std__vector_int__std__allocator_int______M_allocate_and_copy___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______(t1628, t1678, t1683, t1684);
          __tmp1675 = r1685;
          struct std___Vector_base_int__std__allocator_int__* base1686 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1628 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1687 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1686->_M_impl) + 0);
          int* t1688 = base1687->_M_start;
          struct std___Vector_base_int__std__allocator_int__* base1689 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1628 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1690 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1689->_M_impl) + 0);
          int* t1691 = base1690->_M_finish;
          struct std___Vector_base_int__std__allocator_int__* base1692 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1628 + 0);
          struct std__allocator_int_* r1693 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1692);
          void_std___Destroy_int___int_(t1688, t1691, r1693);
          struct std___Vector_base_int__std__allocator_int__* base1694 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1628 + 0);
          struct std___Vector_base_int__std__allocator_int__* base1695 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1628 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1696 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1695->_M_impl) + 0);
          int* t1697 = base1696->_M_start;
          struct std___Vector_base_int__std__allocator_int__* base1698 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1628 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1699 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1698->_M_impl) + 0);
          int* t1700 = base1699->_M_end_of_storage;
          struct std___Vector_base_int__std__allocator_int__* base1701 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1628 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1702 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1701->_M_impl) + 0);
          int* t1703 = base1702->_M_start;
          long diff1704 = t1700 - t1703;
          unsigned long cast1705 = (unsigned long)diff1704;
          std___Vector_base_int__std__allocator_int______M_deallocate(base1694, t1697, cast1705);
          int* t1706 = __tmp1675;
          struct std___Vector_base_int__std__allocator_int__* base1707 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1628 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1708 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1707->_M_impl) + 0);
          base1708->_M_start = t1706;
          struct std___Vector_base_int__std__allocator_int__* base1709 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1628 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1710 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1709->_M_impl) + 0);
          int* t1711 = base1710->_M_start;
          unsigned long t1712 = __xlen1631;
          int* ptr1713 = &(t1711)[t1712];
          struct std___Vector_base_int__std__allocator_int__* base1714 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1628 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1715 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1714->_M_impl) + 0);
          base1715->_M_end_of_storage = ptr1713;
        } else {
            unsigned long r1716 = std__vector_int__std__allocator_int_____size___const(t1628);
            unsigned long t1717 = __xlen1631;
            _Bool c1718 = ((r1716 >= t1717)) ? 1 : 0;
            if (c1718) {
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp21719;
              struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp31720;
              struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp41721;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp51722;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp61723;
              struct std__vector_int__std__allocator_int__* t1724 = __x1626;
              struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r1725 = std__vector_int__std__allocator_int_____begin___const(t1724);
              agg_tmp31720 = r1725;
              struct std__vector_int__std__allocator_int__* t1726 = __x1626;
              struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r1727 = std__vector_int__std__allocator_int_____end___const(t1726);
              agg_tmp41721 = r1727;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1728 = std__vector_int__std__allocator_int_____begin(t1628);
              agg_tmp51722 = r1728;
              struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t1729 = agg_tmp31720;
              struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t1730 = agg_tmp41721;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1731 = agg_tmp51722;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1732 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__copy___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t1729, t1730, t1731);
              agg_tmp21719 = r1732;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1733 = std__vector_int__std__allocator_int_____end(t1628);
              agg_tmp61723 = r1733;
              struct std___Vector_base_int__std__allocator_int__* base1734 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1628 + 0);
              struct std__allocator_int_* r1735 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1734);
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1736 = agg_tmp21719;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1737 = agg_tmp61723;
              void_std___Destroy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(t1736, t1737, r1735);
            } else {
              struct std__vector_int__std__allocator_int__* t1738 = __x1626;
              struct std___Vector_base_int__std__allocator_int__* base1739 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1738 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1740 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1739->_M_impl) + 0);
              int* t1741 = base1740->_M_start;
              struct std__vector_int__std__allocator_int__* t1742 = __x1626;
              struct std___Vector_base_int__std__allocator_int__* base1743 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1742 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1744 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1743->_M_impl) + 0);
              int* t1745 = base1744->_M_start;
              unsigned long r1746 = std__vector_int__std__allocator_int_____size___const(t1628);
              int* ptr1747 = &(t1745)[r1746];
              struct std___Vector_base_int__std__allocator_int__* base1748 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1628 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1749 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1748->_M_impl) + 0);
              int* t1750 = base1749->_M_start;
              int* r1751 = int__std__copy_int___int__(t1741, ptr1747, t1750);
              struct std__vector_int__std__allocator_int__* t1752 = __x1626;
              struct std___Vector_base_int__std__allocator_int__* base1753 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1752 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1754 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1753->_M_impl) + 0);
              int* t1755 = base1754->_M_start;
              unsigned long r1756 = std__vector_int__std__allocator_int_____size___const(t1628);
              int* ptr1757 = &(t1755)[r1756];
              struct std__vector_int__std__allocator_int__* t1758 = __x1626;
              struct std___Vector_base_int__std__allocator_int__* base1759 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1758 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1760 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1759->_M_impl) + 0);
              int* t1761 = base1760->_M_finish;
              struct std___Vector_base_int__std__allocator_int__* base1762 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1628 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1763 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1762->_M_impl) + 0);
              int* t1764 = base1763->_M_finish;
              struct std___Vector_base_int__std__allocator_int__* base1765 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1628 + 0);
              struct std__allocator_int_* r1766 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1765);
              int* r1767 = int__std____uninitialized_copy_a_int___int___int___int_(ptr1757, t1761, t1764, r1766);
            }
        }
      struct std___Vector_base_int__std__allocator_int__* base1768 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1628 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1769 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1768->_M_impl) + 0);
      int* t1770 = base1769->_M_start;
      unsigned long t1771 = __xlen1631;
      int* ptr1772 = &(t1770)[t1771];
      struct std___Vector_base_int__std__allocator_int__* base1773 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1628 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1774 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1773->_M_impl) + 0);
      base1774->_M_finish = ptr1772;
    }
  __retval1627 = t1628;
  struct std__vector_int__std__allocator_int__* t1775 = __retval1627;
  return t1775;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v1776) {
bb1777:
  struct std__vector_int__std__allocator_int__* this1778;
  this1778 = v1776;
  struct std__vector_int__std__allocator_int__* t1779 = this1778;
    struct std___Vector_base_int__std__allocator_int__* base1780 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1779 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1781 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1780->_M_impl) + 0);
    int* t1782 = base1781->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base1783 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1779 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1784 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1783->_M_impl) + 0);
    int* t1785 = base1784->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base1786 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1779 + 0);
    struct std__allocator_int_* r1787 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1786);
    void_std___Destroy_int___int_(t1782, t1785, r1787);
  {
    struct std___Vector_base_int__std__allocator_int__* base1788 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1779 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base1788);
  }
  return;
}

// function: main
int main() {
bb1789:
  int __retval1790;
  struct std__vector_int__std__allocator_int__ nums11791;
  int ref_tmp01792;
  int ref_tmp11793;
  int ref_tmp21794;
  int ref_tmp31795;
  int ref_tmp41796;
  struct std__vector_int__std__allocator_int__ nums21797;
  struct std__vector_int__std__allocator_int__ nums31798;
  int c1799 = 0;
  __retval1790 = c1799;
  std__vector_int__std__allocator_int_____vector(&nums11791);
    int c1800 = 1;
    ref_tmp01792 = c1800;
    std__vector_int__std__allocator_int_____push_back(&nums11791, &ref_tmp01792);
    int c1801 = 2;
    ref_tmp11793 = c1801;
    std__vector_int__std__allocator_int_____push_back(&nums11791, &ref_tmp11793);
    int c1802 = 3;
    ref_tmp21794 = c1802;
    std__vector_int__std__allocator_int_____push_back(&nums11791, &ref_tmp21794);
    int c1803 = 4;
    ref_tmp31795 = c1803;
    std__vector_int__std__allocator_int_____push_back(&nums11791, &ref_tmp31795);
    int c1804 = 5;
    ref_tmp41796 = c1804;
    std__vector_int__std__allocator_int_____push_back(&nums11791, &ref_tmp41796);
    std__vector_int__std__allocator_int_____vector(&nums21797);
      std__vector_int__std__allocator_int_____vector(&nums31798);
        char* cast1805 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* r1806 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1805);
        display_sizes(&nums11791, &nums21797, &nums31798);
        struct std__vector_int__std__allocator_int__* r1807 = std__vector_int__std__allocator_int_____operator_(&nums21797, &nums11791);
        char* cast1808 = (char*)&(_str_4);
        struct std__basic_ostream_char__std__char_traits_char__* r1809 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1808);
        display_sizes(&nums11791, &nums21797, &nums31798);
        char* cast1810 = (char*)&(_str_5);
        struct std__basic_ostream_char__std__char_traits_char__* r1811 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1810);
        display_sizes(&nums11791, &nums21797, &nums31798);
      {
        std__vector_int__std__allocator_int______vector(&nums31798);
      }
    {
      std__vector_int__std__allocator_int______vector(&nums21797);
    }
  {
    std__vector_int__std__allocator_int______vector(&nums11791);
  }
  int t1812 = __retval1790;
  return t1812;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE
void _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1813) {
bb1814:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1815;
  this1815 = v1813;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1816 = this1815;
  struct std__allocator_int_* base1817 = (struct std__allocator_int_*)((char *)t1816 + 0);
  std__allocator_int___allocator(base1817);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1818 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t1816 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base1818);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1819) {
bb1820:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1821;
  this1821 = v1819;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1822 = this1821;
  {
    struct std__allocator_int_* base1823 = (struct std__allocator_int_*)((char *)t1822 + 0);
    std__allocator_int____allocator(base1823);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2Ev
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1824) {
bb1825:
  struct std___Vector_base_int__std__allocator_int__* this1826;
  this1826 = v1824;
  struct std___Vector_base_int__std__allocator_int__* t1827 = this1826;
  _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(&t1827->_M_impl);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1828:
  _Bool __retval1829;
    _Bool c1830 = 0;
    __retval1829 = c1830;
    _Bool t1831 = __retval1829;
    return t1831;
  abort();
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v1832, int* v1833, unsigned long v1834) {
bb1835:
  struct std____new_allocator_int_* this1836;
  int* __p1837;
  unsigned long __n1838;
  this1836 = v1832;
  __p1837 = v1833;
  __n1838 = v1834;
  struct std____new_allocator_int_* t1839 = this1836;
    unsigned long c1840 = 4;
    unsigned long c1841 = 16;
    _Bool c1842 = ((c1840 > c1841)) ? 1 : 0;
    if (c1842) {
      int* t1843 = __p1837;
      void* cast1844 = (void*)t1843;
      unsigned long t1845 = __n1838;
      unsigned long c1846 = 4;
      unsigned long b1847 = t1845 * c1846;
      unsigned long c1848 = 4;
      operator_delete_3(cast1844, b1847, c1848);
      return;
    }
  int* t1849 = __p1837;
  void* cast1850 = (void*)t1849;
  unsigned long t1851 = __n1838;
  unsigned long c1852 = 4;
  unsigned long b1853 = t1851 * c1852;
  operator_delete_2(cast1850, b1853);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1854, int* v1855, unsigned long v1856) {
bb1857:
  struct std__allocator_int_* this1858;
  int* __p1859;
  unsigned long __n1860;
  this1858 = v1854;
  __p1859 = v1855;
  __n1860 = v1856;
  struct std__allocator_int_* t1861 = this1858;
    _Bool r1862 = std____is_constant_evaluated();
    if (r1862) {
      int* t1863 = __p1859;
      void* cast1864 = (void*)t1863;
      operator_delete(cast1864);
      return;
    }
  struct std____new_allocator_int_* base1865 = (struct std____new_allocator_int_*)((char *)t1861 + 0);
  int* t1866 = __p1859;
  unsigned long t1867 = __n1860;
  std____new_allocator_int___deallocate(base1865, t1866, t1867);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1868, int* v1869, unsigned long v1870) {
bb1871:
  struct std__allocator_int_* __a1872;
  int* __p1873;
  unsigned long __n1874;
  __a1872 = v1868;
  __p1873 = v1869;
  __n1874 = v1870;
  struct std__allocator_int_* t1875 = __a1872;
  int* t1876 = __p1873;
  unsigned long t1877 = __n1874;
  std__allocator_int___deallocate(t1875, t1876, t1877);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v1878, int* v1879, unsigned long v1880) {
bb1881:
  struct std___Vector_base_int__std__allocator_int__* this1882;
  int* __p1883;
  unsigned long __n1884;
  this1882 = v1878;
  __p1883 = v1879;
  __n1884 = v1880;
  struct std___Vector_base_int__std__allocator_int__* t1885 = this1882;
    int* t1886 = __p1883;
    _Bool cast1887 = (_Bool)t1886;
    if (cast1887) {
      struct std__allocator_int_* base1888 = (struct std__allocator_int_*)((char *)&(t1885->_M_impl) + 0);
      int* t1889 = __p1883;
      unsigned long t1890 = __n1884;
      std__allocator_traits_std__allocator_int_____deallocate(base1888, t1889, t1890);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1891) {
bb1892:
  struct std___Vector_base_int__std__allocator_int__* this1893;
  this1893 = v1891;
  struct std___Vector_base_int__std__allocator_int__* t1894 = this1893;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1895 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1894->_M_impl) + 0);
    int* t1896 = base1895->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1897 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1894->_M_impl) + 0);
    int* t1898 = base1897->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1899 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1894->_M_impl) + 0);
    int* t1900 = base1899->_M_start;
    long diff1901 = t1898 - t1900;
    unsigned long cast1902 = (unsigned long)diff1901;
    std___Vector_base_int__std__allocator_int______M_deallocate(t1894, t1896, cast1902);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t1894->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1903) {
bb1904:
  struct std____new_allocator_int_* this1905;
  this1905 = v1903;
  struct std____new_allocator_int_* t1906 = this1905;
  return;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator(struct std__allocator_int_* v1907) {
bb1908:
  struct std__allocator_int_* this1909;
  this1909 = v1907;
  struct std__allocator_int_* t1910 = this1909;
  struct std____new_allocator_int_* base1911 = (struct std____new_allocator_int_*)((char *)t1910 + 0);
  std____new_allocator_int_____new_allocator(base1911);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v1912) {
bb1913:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this1914;
  this1914 = v1912;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1915 = this1914;
  int* c1916 = ((void*)0);
  t1915->_M_start = c1916;
  int* c1917 = ((void*)0);
  t1915->_M_finish = c1917;
  int* c1918 = ((void*)0);
  t1915->_M_end_of_storage = c1918;
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v1919) {
bb1920:
  struct std__allocator_int_* this1921;
  this1921 = v1919;
  struct std__allocator_int_* t1922 = this1921;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1923, int* v1924) {
bb1925:
  int* __first1926;
  int* __last1927;
  __first1926 = v1923;
  __last1927 = v1924;
      _Bool r1928 = std____is_constant_evaluated();
      if (r1928) {
          while (1) {
            int* t1930 = __first1926;
            int* t1931 = __last1927;
            _Bool c1932 = ((t1930 != t1931)) ? 1 : 0;
            if (!c1932) break;
            int* t1933 = __first1926;
            void_std__destroy_at_int_(t1933);
          for_step1929: ;
            int* t1934 = __first1926;
            int c1935 = 1;
            int* ptr1936 = &(t1934)[c1935];
            __first1926 = ptr1936;
          }
      }
  return;
}

