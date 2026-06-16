extern void abort(void);
// Struct definitions (auto-parsed)
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ { void* _M_comp; };
struct __gnu_cxx____ops___Iter_equal_to_iter { unsigned char __field0; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_ { unsigned char __field0; };
struct std__allocator_int_ { unsigned char __field0; };
struct std__forward_iterator_tag { unsigned char __field0; };
struct std__input_iterator_tag { unsigned char __field0; };
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

int __const_main_myints1[9] = {10, 10, 20, 20, 30, 0, 0, 0, 0};
int __const_main_myints[9] = {10, 20, 20, 20, 30, 30, 20, 20, 10};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[18] = "myvector[0] == 10";
char _str_1[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm32/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[18] = "myvector[1] == 20";
char _str_3[18] = "myvector[2] == 30";
char _str_4[18] = "myvector[3] == 20";
char _str_5[18] = "myvector[4] == 30";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_6[19] = "myvector contains:";
char _str_7[2] = " ";
char _str_8[49] = "cannot create std::vector larger than max_size()";
char _str_9[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_10[19] = "__n < this->size()";
_Bool myfunction(int p0, int p1);
void std__allocator_int___allocator_2(struct std__allocator_int_* p0);
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, struct std__allocator_int_* p2);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
_Bool bool___gnu_cxx____ops___Iter_equal_to_iter__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___const(struct __gnu_cxx____ops___Iter_equal_to_iter* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____unique_copy_int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_equal_to_iter_(int* p0, int* p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2, struct __gnu_cxx____ops___Iter_equal_to_iter p3, struct std__input_iterator_tag p4, struct std__forward_iterator_tag p5);
struct __gnu_cxx____ops___Iter_equal_to_iter __gnu_cxx____ops____iter_equal_to_iter();
struct std__random_access_iterator_tag std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________iterator_category_std____iterator_category___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__unique_copy_int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(int* p0, int* p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* p0);
long std__iterator_traits_int____difference_type_std____distance_int__(int* p0, int* p1, struct std__random_access_iterator_tag p2);
long std__iterator_traits_int____difference_type_std__distance_int__(int* p0, int* p1);
unsigned long std__vector_int__std__allocator_int_____capacity___const(struct std__vector_int__std__allocator_int__* p0);
void std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* p0, int* p1, unsigned long p2, struct std___Vector_base_int__std__allocator_int__* p3);
int* std__vector_int__std__allocator_int______Guard_alloc___M_release(struct std__vector_int__std__allocator_int_____Guard_alloc* p0);
void std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* p0);
int* int__std__vector_int__std__allocator_int______M_allocate_and_copy_int__(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, int* p2, int* p3);
void void_std___Destroy_int___int_(int* p0, int* p1, struct std__allocator_int_* p2);
void std__vector_int__std__allocator_int______M_erase_at_end(struct std__vector_int__std__allocator_int__* p0, int* p1);
int* int__std____niter_wrap_int__(int** p0, int* p1);
extern void* memmove(void* p0, void* p1, unsigned long p2);
void void_std____assign_one_false__int___int__(int** p0, int** p1);
int* int__std____copy_move_a2_false__int___int___int__(int* p0, int* p1, int* p2);
int* int__std____copy_move_a1_false__int___int__(int* p0, int* p1, int* p2);
int* int__std____niter_base_int__(int* p0);
int* int__std____copy_move_a_false__int___int__(int* p0, int* p1, int* p2);
int* int__std____miter_base_int__(int* p0);
int* int__std__copy_int___int__(int* p0, int* p1, int* p2);
void void_std____advance_int___long_(int** p0, long p1, struct std__random_access_iterator_tag p2);
void void_std__advance_int___unsigned_long_(int** p0, unsigned long p1);
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* p0, int* p1);
void void_std___Construct_int__int__(int* p0, int* p1);
int* int__std____do_uninit_copy_int___int___int__(int* p0, int* p1, int* p2);
extern void* memcpy(void* p0, void* p1, unsigned long p2);
int* int__std__uninitialized_copy_int___int__(int* p0, int* p1, int* p2);
int* int__std____uninitialized_copy_a_int___int___int___int_(int* p0, int* p1, int* p2, struct std__allocator_int_* p3);
void void_std__vector_int__std__allocator_int______M_assign_aux_int__(struct std__vector_int__std__allocator_int__* p0, int* p1, int* p2, struct std__forward_iterator_tag p3);
void void_std__vector_int__std__allocator_int_____assign_int___void_(struct std__vector_int__std__allocator_int__* p0, int* p1, int* p2);
_Bool bool___gnu_cxx____ops___Iter_comp_iter_bool_____int__int____operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____unique_copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_bool_____int__int_______gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_bool____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2, struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ p3, struct std__input_iterator_tag p4, struct std__forward_iterator_tag p5);
void __gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____Iter_comp_iter_bool____(struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* p0, void* p1);
struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ __gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____gnu_cxx____ops____iter_comp_iter_bool_____int__int___bool____(void* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__unique_copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool_____int__int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2, void* p3);
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
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int p1);
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
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* p0);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* p0);
void std__allocator_int___allocator(struct std__allocator_int_* p0, struct std__allocator_int_* p1);
extern void std____throw_length_error(char* p0);
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long p0, struct std__allocator_int_* p1);
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* p0, struct std__allocator_int_* p1);
_Bool std____is_constant_evaluated();
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
void std___Vector_base_int__std__allocator_int______M_create_storage(struct std___Vector_base_int__std__allocator_int__* p0, unsigned long p1);
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* p0);
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* p0, unsigned long p1, struct std__allocator_int_* p2);
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
void std__vector_int__std__allocator_int______M_default_initialize(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* p0, int* p1, unsigned long p2);
void std__allocator_int___deallocate(struct std__allocator_int_* p0, int* p1, unsigned long p2);
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* p0, int* p1, unsigned long p2);
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* p0, int* p1, unsigned long p2);
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* p0);
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* p0, struct std____new_allocator_int_* p1);
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* p0);
void void_std__destroy_at_int_(int* p0);
void void_std___Destroy_int__(int* p0, int* p1);

// function: _Z10myfunctionii
_Bool myfunction(int v0, int v1) {
bb2: ;
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

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator_2(struct std__allocator_int_* v10) {
bb11: ;
  struct std__allocator_int_* this12;
  this12 = v10;
  struct std__allocator_int_* t13 = this12;
  struct std____new_allocator_int_* base14 = (struct std____new_allocator_int_*)((char *)t13 + 0);
  std____new_allocator_int_____new_allocator_2(base14);
  return;
}

// function: _ZNSt6vectorIiSaIiEEC2EmRKS0_
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* v15, unsigned long v16, struct std__allocator_int_* v17) {
bb18: ;
  struct std__vector_int__std__allocator_int__* this19;
  unsigned long __n20;
  struct std__allocator_int_* __a21;
  this19 = v15;
  __n20 = v16;
  __a21 = v17;
  struct std__vector_int__std__allocator_int__* t22 = this19;
  struct std___Vector_base_int__std__allocator_int__* base23 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t22 + 0);
  unsigned long t24 = __n20;
  struct std__allocator_int_* t25 = __a21;
  unsigned long r26 = std__vector_int__std__allocator_int______S_check_init_len(t24, t25);
  struct std__allocator_int_* t27 = __a21;
  std___Vector_base_int__std__allocator_int______Vector_base(base23, r26, t27);
    unsigned long t28 = __n20;
    std__vector_int__std__allocator_int______M_default_initialize(t22, t28);
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v29) {
bb30: ;
  struct std__allocator_int_* this31;
  this31 = v29;
  struct std__allocator_int_* t32 = this31;
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2Ev
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v33) {
bb34: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this35;
  this35 = v33;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t36 = this35;
  int* c37 = ((void*)0);
  t36->_M_current = c37;
  return;
}

// function: _ZNK9__gnu_cxx5__ops19_Iter_equal_to_iterclINS_17__normal_iteratorIPiSt6vectorIiSaIiEEEES4_EEbT_T0_
_Bool bool___gnu_cxx____ops___Iter_equal_to_iter__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___const(struct __gnu_cxx____ops___Iter_equal_to_iter* v38, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v39, int* v40) {
bb41: ;
  struct __gnu_cxx____ops___Iter_equal_to_iter* this42;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it143;
  int* __it244;
  _Bool __retval45;
  this42 = v38;
  __it143 = v39;
  __it244 = v40;
  struct __gnu_cxx____ops___Iter_equal_to_iter* t46 = this42;
  int* r47 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it143);
  int t48 = *r47;
  int* t49 = __it244;
  int t50 = *t49;
  _Bool c51 = ((t48 == t50)) ? 1 : 0;
  __retval45 = c51;
  _Bool t52 = __retval45;
  return t52;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v53) {
bb54: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this55;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval56;
  this55 = v53;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t57 = this55;
  int* t58 = t57->_M_current;
  int c59 = 1;
  int* ptr60 = &(t58)[c59];
  t57->_M_current = ptr60;
  __retval56 = t57;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t61 = __retval56;
  return t61;
}

// function: _ZSt13__unique_copyIPiN9__gnu_cxx17__normal_iteratorIS0_St6vectorIiSaIiEEEENS1_5__ops19_Iter_equal_to_iterEET0_T_SA_S9_T1_St18input_iterator_tagSt20forward_iterator_tag
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____unique_copy_int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_equal_to_iter_(int* v62, int* v63, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v64, struct __gnu_cxx____ops___Iter_equal_to_iter v65, struct std__input_iterator_tag v66, struct std__forward_iterator_tag v67) {
bb68: ;
  int* __first69;
  int* __last70;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result71;
  struct __gnu_cxx____ops___Iter_equal_to_iter __binary_pred72;
  struct std__input_iterator_tag unnamed73;
  struct std__forward_iterator_tag unnamed74;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval75;
  __first69 = v62;
  __last70 = v63;
  __result71 = v64;
  __binary_pred72 = v65;
  unnamed73 = v66;
  unnamed74 = v67;
  int* t76 = __first69;
  int t77 = *t76;
  int* r78 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__result71);
  *r78 = t77;
    while (1) {
      int* t79 = __first69;
      int c80 = 1;
      int* ptr81 = &(t79)[c80];
      __first69 = ptr81;
      int* t82 = __last70;
      _Bool c83 = ((ptr81 != t82)) ? 1 : 0;
      if (!c83) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp084;
        agg_tmp084 = __result71; // copy
        int* t85 = __first69;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t86 = agg_tmp084;
        _Bool r87 = bool___gnu_cxx____ops___Iter_equal_to_iter__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___const(&__binary_pred72, t86, t85);
        _Bool u88 = !r87;
        if (u88) {
          int* t89 = __first69;
          int t90 = *t89;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r91 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(&__result71);
          int* r92 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(r91);
          *r92 = t90;
        }
    }
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r93 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(&__result71);
  __retval75 = *r93; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t94 = __retval75;
  return t94;
}

// function: _ZN9__gnu_cxx5__ops20__iter_equal_to_iterEv
struct __gnu_cxx____ops___Iter_equal_to_iter __gnu_cxx____ops____iter_equal_to_iter() {
bb95: ;
  struct __gnu_cxx____ops___Iter_equal_to_iter __retval96;
  struct __gnu_cxx____ops___Iter_equal_to_iter t97 = __retval96;
  return t97;
}

// function: _ZSt19__iterator_categoryIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEENSt15iterator_traitsIT_E17iterator_categoryERKS8_
struct std__random_access_iterator_tag std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________iterator_category_std____iterator_category___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v98) {
bb99: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed100;
  struct std__random_access_iterator_tag __retval101;
  unnamed100 = v98;
  struct std__random_access_iterator_tag t102 = __retval101;
  return t102;
}

// function: _ZSt11unique_copyIPiN9__gnu_cxx17__normal_iteratorIS0_St6vectorIiSaIiEEEEET0_T_S8_S7_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__unique_copy_int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(int* v103, int* v104, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v105) {
bb106: ;
  int* __first107;
  int* __last108;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result109;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval110;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0111;
  struct __gnu_cxx____ops___Iter_equal_to_iter agg_tmp1112;
  struct std__input_iterator_tag agg_tmp2113;
  struct std__random_access_iterator_tag ref_tmp0114;
  struct std__forward_iterator_tag agg_tmp3115;
  struct std__random_access_iterator_tag ref_tmp1116;
  __first107 = v103;
  __last108 = v104;
  __result109 = v105;
    int* t117 = __first107;
    int* t118 = __last108;
    _Bool c119 = ((t117 == t118)) ? 1 : 0;
    if (c119) {
      __retval110 = __result109; // copy
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t120 = __retval110;
      return t120;
    }
  int* t121 = __first107;
  int* t122 = __last108;
  agg_tmp0111 = __result109; // copy
  struct __gnu_cxx____ops___Iter_equal_to_iter r123 = __gnu_cxx____ops____iter_equal_to_iter();
  agg_tmp1112 = r123;
  struct std__random_access_iterator_tag r124 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first107);
  ref_tmp0114 = r124;
  struct std__input_iterator_tag* base125 = (struct std__input_iterator_tag*)((char *)&(ref_tmp0114) + 0);
  struct std__random_access_iterator_tag r126 = std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________iterator_category_std____iterator_category___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(&__result109);
  ref_tmp1116 = r126;
  struct std__forward_iterator_tag* base127 = (struct std__forward_iterator_tag*)((char *)&(ref_tmp1116) + 0);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t128 = agg_tmp0111;
  struct __gnu_cxx____ops___Iter_equal_to_iter t129 = agg_tmp1112;
  struct std__input_iterator_tag t130 = agg_tmp2113;
  struct std__forward_iterator_tag t131 = agg_tmp3115;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r132 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____unique_copy_int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_equal_to_iter_(t121, t122, t128, t129, t130, t131);
  __retval110 = r132;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t133 = __retval110;
  return t133;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v134, int** v135) {
bb136: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this137;
  int** __i138;
  this137 = v134;
  __i138 = v135;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t139 = this137;
  int** t140 = __i138;
  int* t141 = *t140;
  t139->_M_current = t141;
  return;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v142) {
bb143: ;
  struct std__vector_int__std__allocator_int__* this144;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval145;
  this144 = v142;
  struct std__vector_int__std__allocator_int__* t146 = this144;
  struct std___Vector_base_int__std__allocator_int__* base147 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t146 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base148 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base147->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval145, &base148->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t149 = __retval145;
  return t149;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEaSEOS5_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v150, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v151) {
bb152: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this153;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed154;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval155;
  this153 = v150;
  unnamed154 = v151;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t156 = this153;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t157 = unnamed154;
  int* t158 = t157->_M_current;
  t156->_M_current = t158;
  __retval155 = t156;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t159 = __retval155;
  return t159;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v160) {
bb161: ;
  struct std__vector_int__std__allocator_int__* this162;
  unsigned long __retval163;
  long __dif164;
  this162 = v160;
  struct std__vector_int__std__allocator_int__* t165 = this162;
  struct std___Vector_base_int__std__allocator_int__* base166 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t165 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base167 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base166->_M_impl) + 0);
  int* t168 = base167->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base169 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t165 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base170 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base169->_M_impl) + 0);
  int* t171 = base170->_M_start;
  long diff172 = t168 - t171;
  __dif164 = diff172;
    long t173 = __dif164;
    long c174 = 0;
    _Bool c175 = ((t173 < c174)) ? 1 : 0;
    if (c175) {
      __builtin_unreachable();
    }
  long t176 = __dif164;
  unsigned long cast177 = (unsigned long)t176;
  __retval163 = cast177;
  unsigned long t178 = __retval163;
  return t178;
}

// function: _ZSt10__distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_St26random_access_iterator_tag
long std__iterator_traits_int____difference_type_std____distance_int__(int* v179, int* v180, struct std__random_access_iterator_tag v181) {
bb182: ;
  int* __first183;
  int* __last184;
  struct std__random_access_iterator_tag unnamed185;
  long __retval186;
  __first183 = v179;
  __last184 = v180;
  unnamed185 = v181;
  int* t187 = __last184;
  int* t188 = __first183;
  long diff189 = t187 - t188;
  __retval186 = diff189;
  long t190 = __retval186;
  return t190;
}

// function: _ZSt8distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_
long std__iterator_traits_int____difference_type_std__distance_int__(int* v191, int* v192) {
bb193: ;
  int* __first194;
  int* __last195;
  long __retval196;
  struct std__random_access_iterator_tag agg_tmp0197;
  __first194 = v191;
  __last195 = v192;
  int* t198 = __first194;
  int* t199 = __last195;
  struct std__random_access_iterator_tag r200 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first194);
  agg_tmp0197 = r200;
  struct std__random_access_iterator_tag t201 = agg_tmp0197;
  long r202 = std__iterator_traits_int____difference_type_std____distance_int__(t198, t199, t201);
  __retval196 = r202;
  long t203 = __retval196;
  return t203;
}

// function: _ZNKSt6vectorIiSaIiEE8capacityEv
unsigned long std__vector_int__std__allocator_int_____capacity___const(struct std__vector_int__std__allocator_int__* v204) {
bb205: ;
  struct std__vector_int__std__allocator_int__* this206;
  unsigned long __retval207;
  long __dif208;
  this206 = v204;
  struct std__vector_int__std__allocator_int__* t209 = this206;
  struct std___Vector_base_int__std__allocator_int__* base210 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t209 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base211 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base210->_M_impl) + 0);
  int* t212 = base211->_M_end_of_storage;
  struct std___Vector_base_int__std__allocator_int__* base213 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t209 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base214 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base213->_M_impl) + 0);
  int* t215 = base214->_M_start;
  long diff216 = t212 - t215;
  __dif208 = diff216;
    long t217 = __dif208;
    long c218 = 0;
    _Bool c219 = ((t217 < c218)) ? 1 : 0;
    if (c219) {
      __builtin_unreachable();
    }
  long t220 = __dif208;
  unsigned long cast221 = (unsigned long)t220;
  __retval207 = cast221;
  unsigned long t222 = __retval207;
  return t222;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocC2EPimRSt12_Vector_baseIiS0_E
void std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v223, int* v224, unsigned long v225, struct std___Vector_base_int__std__allocator_int__* v226) {
bb227: ;
  struct std__vector_int__std__allocator_int_____Guard_alloc* this228;
  int* __s229;
  unsigned long __l230;
  struct std___Vector_base_int__std__allocator_int__* __vect231;
  this228 = v223;
  __s229 = v224;
  __l230 = v225;
  __vect231 = v226;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t232 = this228;
  int* t233 = __s229;
  t232->_M_storage = t233;
  unsigned long t234 = __l230;
  t232->_M_len = t234;
  struct std___Vector_base_int__std__allocator_int__* t235 = __vect231;
  t232->_M_vect = t235;
  return;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_alloc10_M_releaseEv
int* std__vector_int__std__allocator_int______Guard_alloc___M_release(struct std__vector_int__std__allocator_int_____Guard_alloc* v236) {
bb237: ;
  struct std__vector_int__std__allocator_int_____Guard_alloc* this238;
  int* __retval239;
  int* __res240;
  this238 = v236;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t241 = this238;
  int* t242 = t241->_M_storage;
  __res240 = t242;
  int* c243 = ((void*)0);
  t241->_M_storage = c243;
  int* t244 = __res240;
  __retval239 = t244;
  int* t245 = __retval239;
  return t245;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocD2Ev
void std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v246) {
bb247: ;
  struct std__vector_int__std__allocator_int_____Guard_alloc* this248;
  this248 = v246;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t249 = this248;
    int* t250 = t249->_M_storage;
    _Bool cast251 = (_Bool)t250;
    if (cast251) {
      struct std___Vector_base_int__std__allocator_int__* t252 = t249->_M_vect;
      int* t253 = t249->_M_storage;
      unsigned long t254 = t249->_M_len;
      std___Vector_base_int__std__allocator_int______M_deallocate(t252, t253, t254);
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE20_M_allocate_and_copyIPiEES3_mT_S4_
int* int__std__vector_int__std__allocator_int______M_allocate_and_copy_int__(struct std__vector_int__std__allocator_int__* v255, unsigned long v256, int* v257, int* v258) {
bb259: ;
  struct std__vector_int__std__allocator_int__* this260;
  unsigned long __n261;
  int* __first262;
  int* __last263;
  int* __retval264;
  struct std__vector_int__std__allocator_int_____Guard_alloc __guard265;
  this260 = v255;
  __n261 = v256;
  __first262 = v257;
  __last263 = v258;
  struct std__vector_int__std__allocator_int__* t266 = this260;
  struct std___Vector_base_int__std__allocator_int__* base267 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t266 + 0);
  unsigned long t268 = __n261;
  int* r269 = std___Vector_base_int__std__allocator_int______M_allocate(base267, t268);
  unsigned long t270 = __n261;
  struct std___Vector_base_int__std__allocator_int__* base271 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t266 + 0);
  std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(&__guard265, r269, t270, base271);
    int* t272 = __first262;
    int* t273 = __last263;
    int* t274 = __guard265._M_storage;
    struct std___Vector_base_int__std__allocator_int__* base275 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t266 + 0);
    struct std__allocator_int_* r276 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base275);
    int* r277 = int__std____uninitialized_copy_a_int___int___int___int_(t272, t273, t274, r276);
    int* r278 = std__vector_int__std__allocator_int______Guard_alloc___M_release(&__guard265);
    __retval264 = r278;
    int* t279 = __retval264;
    int* ret_val280 = t279;
    {
      std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(&__guard265);
    }
    return ret_val280;
  abort();
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v281, int* v282, struct std__allocator_int_* v283) {
bb284: ;
  int* __first285;
  int* __last286;
  struct std__allocator_int_* unnamed287;
  __first285 = v281;
  __last286 = v282;
  unnamed287 = v283;
  int* t288 = __first285;
  int* t289 = __last286;
  void_std___Destroy_int__(t288, t289);
  return;
}

// function: _ZNSt6vectorIiSaIiEE15_M_erase_at_endEPi
void std__vector_int__std__allocator_int______M_erase_at_end(struct std__vector_int__std__allocator_int__* v290, int* v291) {
bb292: ;
  struct std__vector_int__std__allocator_int__* this293;
  int* __pos294;
  this293 = v290;
  __pos294 = v291;
  struct std__vector_int__std__allocator_int__* t295 = this293;
    unsigned long __n296;
    struct std___Vector_base_int__std__allocator_int__* base297 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t295 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base298 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base297->_M_impl) + 0);
    int* t299 = base298->_M_finish;
    int* t300 = __pos294;
    long diff301 = t299 - t300;
    unsigned long cast302 = (unsigned long)diff301;
    __n296 = cast302;
    unsigned long t303 = __n296;
    _Bool cast304 = (_Bool)t303;
    if (cast304) {
      int* t305 = __pos294;
      struct std___Vector_base_int__std__allocator_int__* base306 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t295 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base307 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base306->_M_impl) + 0);
      int* t308 = base307->_M_finish;
      struct std___Vector_base_int__std__allocator_int__* base309 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t295 + 0);
      struct std__allocator_int_* r310 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base309);
      void_std___Destroy_int___int_(t305, t308, r310);
      int* t311 = __pos294;
      struct std___Vector_base_int__std__allocator_int__* base312 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t295 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base313 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base312->_M_impl) + 0);
      base313->_M_finish = t311;
    }
  return;
}

// function: _ZSt12__niter_wrapIPiET_RKS1_S1_
int* int__std____niter_wrap_int__(int** v314, int* v315) {
bb316: ;
  int** unnamed317;
  int* __res318;
  int* __retval319;
  unnamed317 = v314;
  __res318 = v315;
  int* t320 = __res318;
  __retval319 = t320;
  int* t321 = __retval319;
  return t321;
}

// function: _ZSt12__assign_oneILb0EPiS0_EvRT0_RT1_
void void_std____assign_one_false__int___int__(int** v322, int** v323) {
bb324: ;
  int** __out325;
  int** __in326;
  __out325 = v322;
  __in326 = v323;
    int** t327 = __in326;
    int* t328 = *t327;
    int t329 = *t328;
    int** t330 = __out325;
    int* t331 = *t330;
    *t331 = t329;
  return;
}

// function: _ZSt14__copy_move_a2ILb0EPiS0_S0_ET2_T0_T1_S1_
int* int__std____copy_move_a2_false__int___int___int__(int* v332, int* v333, int* v334) {
bb335: ;
  int* __first336;
  int* __last337;
  int* __result338;
  int* __retval339;
  __first336 = v332;
  __last337 = v333;
  __result338 = v334;
      _Bool r340 = std____is_constant_evaluated();
      if (r340) {
      } else {
          long __n341;
          int* t342 = __first336;
          int* t343 = __last337;
          long r344 = std__iterator_traits_int____difference_type_std__distance_int__(t342, t343);
          __n341 = r344;
            long t345 = __n341;
            long c346 = 1;
            _Bool c347 = ((t345 > c346)) ? 1 : 0;
            if (c347) {
              int* t348 = __result338;
              void* cast349 = (void*)t348;
              int* t350 = __first336;
              void* cast351 = (void*)t350;
              long t352 = __n341;
              unsigned long cast353 = (unsigned long)t352;
              unsigned long c354 = 4;
              unsigned long b355 = cast353 * c354;
              void* r356 = memmove(cast349, cast351, b355);
              long t357 = __n341;
              int* t358 = __result338;
              int* ptr359 = &(t358)[t357];
              __result338 = ptr359;
            } else {
                long t360 = __n341;
                long c361 = 1;
                _Bool c362 = ((t360 == c361)) ? 1 : 0;
                if (c362) {
                  void_std____assign_one_false__int___int__(&__result338, &__first336);
                  int* t363 = __result338;
                  int c364 = 1;
                  int* ptr365 = &(t363)[c364];
                  __result338 = ptr365;
                }
            }
          int* t366 = __result338;
          __retval339 = t366;
          int* t367 = __retval339;
          return t367;
      }
    while (1) {
      int* t369 = __first336;
      int* t370 = __last337;
      _Bool c371 = ((t369 != t370)) ? 1 : 0;
      if (!c371) break;
      void_std____assign_one_false__int___int__(&__result338, &__first336);
    for_step368: ;
      int* t372 = __result338;
      int c373 = 1;
      int* ptr374 = &(t372)[c373];
      __result338 = ptr374;
      int* t375 = __first336;
      int c376 = 1;
      int* ptr377 = &(t375)[c376];
      __first336 = ptr377;
    }
  int* t378 = __result338;
  __retval339 = t378;
  int* t379 = __retval339;
  return t379;
}

// function: _ZSt14__copy_move_a1ILb0EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_a1_false__int___int__(int* v380, int* v381, int* v382) {
bb383: ;
  int* __first384;
  int* __last385;
  int* __result386;
  int* __retval387;
  __first384 = v380;
  __last385 = v381;
  __result386 = v382;
  int* t388 = __first384;
  int* t389 = __last385;
  int* t390 = __result386;
  int* r391 = int__std____copy_move_a2_false__int___int___int__(t388, t389, t390);
  __retval387 = r391;
  int* t392 = __retval387;
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

// function: _ZSt13__copy_move_aILb0EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_a_false__int___int__(int* v399, int* v400, int* v401) {
bb402: ;
  int* __first403;
  int* __last404;
  int* __result405;
  int* __retval406;
  __first403 = v399;
  __last404 = v400;
  __result405 = v401;
  int* t407 = __first403;
  int* r408 = int__std____niter_base_int__(t407);
  int* t409 = __last404;
  int* r410 = int__std____niter_base_int__(t409);
  int* t411 = __result405;
  int* r412 = int__std____niter_base_int__(t411);
  int* r413 = int__std____copy_move_a1_false__int___int__(r408, r410, r412);
  int* r414 = int__std____niter_wrap_int__(&__result405, r413);
  __retval406 = r414;
  int* t415 = __retval406;
  return t415;
}

// function: _ZSt12__miter_baseIPiET_S1_
int* int__std____miter_base_int__(int* v416) {
bb417: ;
  int* __it418;
  int* __retval419;
  __it418 = v416;
  int* t420 = __it418;
  __retval419 = t420;
  int* t421 = __retval419;
  return t421;
}

// function: _ZSt4copyIPiS0_ET0_T_S2_S1_
int* int__std__copy_int___int__(int* v422, int* v423, int* v424) {
bb425: ;
  int* __first426;
  int* __last427;
  int* __result428;
  int* __retval429;
  __first426 = v422;
  __last427 = v423;
  __result428 = v424;
  int* t430 = __first426;
  int* r431 = int__std____miter_base_int__(t430);
  int* t432 = __last427;
  int* r433 = int__std____miter_base_int__(t432);
  int* t434 = __result428;
  int* r435 = int__std____copy_move_a_false__int___int__(r431, r433, t434);
  __retval429 = r435;
  int* t436 = __retval429;
  return t436;
}

// function: _ZSt9__advanceIPilEvRT_T0_St26random_access_iterator_tag
void void_std____advance_int___long_(int** v437, long v438, struct std__random_access_iterator_tag v439) {
bb440: ;
  int** __i441;
  long __n442;
  struct std__random_access_iterator_tag unnamed443;
  __i441 = v437;
  __n442 = v438;
  unnamed443 = v439;
    long t444 = __n442;
    _Bool isconst445 = 0;
    _Bool ternary446;
    if (isconst445) {
      long t447 = __n442;
      long c448 = 1;
      _Bool c449 = ((t447 == c448)) ? 1 : 0;
      ternary446 = (_Bool)c449;
    } else {
      _Bool c450 = 0;
      ternary446 = (_Bool)c450;
    }
    if (ternary446) {
      int** t451 = __i441;
      int* t452 = *t451;
      int c453 = 1;
      int* ptr454 = &(t452)[c453];
      *t451 = ptr454;
    } else {
        long t455 = __n442;
        _Bool isconst456 = 0;
        _Bool ternary457;
        if (isconst456) {
          long t458 = __n442;
          long c459 = -1;
          _Bool c460 = ((t458 == c459)) ? 1 : 0;
          ternary457 = (_Bool)c460;
        } else {
          _Bool c461 = 0;
          ternary457 = (_Bool)c461;
        }
        if (ternary457) {
          int** t462 = __i441;
          int* t463 = *t462;
          int c464 = -1;
          int* ptr465 = &(t463)[c464];
          *t462 = ptr465;
        } else {
          long t466 = __n442;
          int** t467 = __i441;
          int* t468 = *t467;
          int* ptr469 = &(t468)[t466];
          *t467 = ptr469;
        }
    }
  return;
}

// function: _ZSt7advanceIPimEvRT_T0_
void void_std__advance_int___unsigned_long_(int** v470, unsigned long v471) {
bb472: ;
  int** __i473;
  unsigned long __n474;
  long __d475;
  struct std__random_access_iterator_tag agg_tmp0476;
  __i473 = v470;
  __n474 = v471;
  unsigned long t477 = __n474;
  long cast478 = (long)t477;
  __d475 = cast478;
  int** t479 = __i473;
  long t480 = __d475;
  int** t481 = __i473;
  struct std__random_access_iterator_tag r482 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(t481);
  agg_tmp0476 = r482;
  struct std__random_access_iterator_tag t483 = agg_tmp0476;
  void_std____advance_int___long_(t479, t480, t483);
  return;
}

// function: _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* v484, int* v485) {
bb486: ;
  int* __location487;
  int* __args488;
  int* __retval489;
  void* __loc490;
  __location487 = v484;
  __args488 = v485;
  int* t491 = __location487;
  void* cast492 = (void*)t491;
  __loc490 = cast492;
    void* t493 = __loc490;
    int* cast494 = (int*)t493;
    int* t495 = __args488;
    int t496 = *t495;
    *cast494 = t496;
    __retval489 = cast494;
    int* t497 = __retval489;
    return t497;
  abort();
}

// function: _ZSt10_ConstructIiJRiEEvPT_DpOT0_
void void_std___Construct_int__int__(int* v498, int* v499) {
bb500: ;
  int* __p501;
  int* __args502;
  __p501 = v498;
  __args502 = v499;
    _Bool r503 = std____is_constant_evaluated();
    if (r503) {
      int* t504 = __p501;
      int* t505 = __args502;
      int* r506 = _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t504, t505);
      return;
    }
  int* t507 = __p501;
  void* cast508 = (void*)t507;
  int* cast509 = (int*)cast508;
  int* t510 = __args502;
  int t511 = *t510;
  *cast509 = t511;
  return;
}

// function: _ZSt16__do_uninit_copyIPiS0_S0_ET1_T_T0_S1_
int* int__std____do_uninit_copy_int___int___int__(int* v512, int* v513, int* v514) {
bb515: ;
  int* __first516;
  int* __last517;
  int* __result518;
  int* __retval519;
  struct std___UninitDestroyGuard_int____void_ __guard520;
  __first516 = v512;
  __last517 = v513;
  __result518 = v514;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard520, &__result518);
      while (1) {
        int* t522 = __first516;
        int* t523 = __last517;
        _Bool c524 = ((t522 != t523)) ? 1 : 0;
        if (!c524) break;
        int* t525 = __result518;
        int* t526 = __first516;
        void_std___Construct_int__int__(t525, t526);
      for_step521: ;
        int* t527 = __first516;
        int c528 = 1;
        int* ptr529 = &(t527)[c528];
        __first516 = ptr529;
        int* t530 = __result518;
        int c531 = 1;
        int* ptr532 = &(t530)[c531];
        __result518 = ptr532;
      }
    std___UninitDestroyGuard_int___void___release(&__guard520);
    int* t533 = __result518;
    __retval519 = t533;
    int* t534 = __retval519;
    int* ret_val535 = t534;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard520);
    }
    return ret_val535;
  abort();
}

// function: _ZSt18uninitialized_copyIPiS0_ET0_T_S2_S1_
int* int__std__uninitialized_copy_int___int__(int* v536, int* v537, int* v538) {
bb539: ;
  int* __first540;
  int* __last541;
  int* __result542;
  int* __retval543;
  __first540 = v536;
  __last541 = v537;
  __result542 = v538;
      long __n544;
      int* t545 = __last541;
      int* t546 = __first540;
      long diff547 = t545 - t546;
      __n544 = diff547;
        long t548 = __n544;
        long c549 = 0;
        _Bool c550 = ((t548 > c549)) ? 1 : 0;
        if (c550) {
          int* t551 = __result542;
          int* r552 = int__std____niter_base_int__(t551);
          void* cast553 = (void*)r552;
          int* t554 = __first540;
          int* r555 = int__std____niter_base_int__(t554);
          void* cast556 = (void*)r555;
          long t557 = __n544;
          unsigned long cast558 = (unsigned long)t557;
          unsigned long c559 = 4;
          unsigned long b560 = cast558 * c559;
          void* r561 = memcpy(cast553, cast556, b560);
          long t562 = __n544;
          int* t563 = __result542;
          int* ptr564 = &(t563)[t562];
          __result542 = ptr564;
        }
      int* t565 = __result542;
      __retval543 = t565;
      int* t566 = __retval543;
      return t566;
  abort();
}

// function: _ZSt22__uninitialized_copy_aIPiS0_S0_iET1_T_T0_S1_RSaIT2_E
int* int__std____uninitialized_copy_a_int___int___int___int_(int* v567, int* v568, int* v569, struct std__allocator_int_* v570) {
bb571: ;
  int* __first572;
  int* __last573;
  int* __result574;
  struct std__allocator_int_* unnamed575;
  int* __retval576;
  __first572 = v567;
  __last573 = v568;
  __result574 = v569;
  unnamed575 = v570;
    _Bool r577 = std__is_constant_evaluated();
    if (r577) {
      int* t578 = __first572;
      int* t579 = __last573;
      int* t580 = __result574;
      int* r581 = int__std____do_uninit_copy_int___int___int__(t578, t579, t580);
      __retval576 = r581;
      int* t582 = __retval576;
      return t582;
    }
    int* t583 = __first572;
    int* t584 = __last573;
    int* t585 = __result574;
    int* r586 = int__std__uninitialized_copy_int___int__(t583, t584, t585);
    __retval576 = r586;
    int* t587 = __retval576;
    return t587;
  abort();
}

// function: _ZNSt6vectorIiSaIiEE13_M_assign_auxIPiEEvT_S4_St20forward_iterator_tag
void void_std__vector_int__std__allocator_int______M_assign_aux_int__(struct std__vector_int__std__allocator_int__* v588, int* v589, int* v590, struct std__forward_iterator_tag v591) {
bb592: ;
  struct std__vector_int__std__allocator_int__* this593;
  int* __first594;
  int* __last595;
  struct std__forward_iterator_tag unnamed596;
  unsigned long __sz597;
  unsigned long __len598;
  this593 = v588;
  __first594 = v589;
  __last595 = v590;
  unnamed596 = v591;
  struct std__vector_int__std__allocator_int__* t599 = this593;
  unsigned long r600 = std__vector_int__std__allocator_int_____size___const(t599);
  __sz597 = r600;
  int* t601 = __first594;
  int* t602 = __last595;
  long r603 = std__iterator_traits_int____difference_type_std__distance_int__(t601, t602);
  unsigned long cast604 = (unsigned long)r603;
  __len598 = cast604;
    unsigned long t605 = __len598;
    unsigned long r606 = std__vector_int__std__allocator_int_____capacity___const(t599);
    _Bool c607 = ((t605 > r606)) ? 1 : 0;
    if (c607) {
      int* __tmp608;
        unsigned long t609 = __len598;
        unsigned long t610 = __sz597;
        _Bool c611 = ((t609 <= t610)) ? 1 : 0;
        if (c611) {
          __builtin_unreachable();
        }
      unsigned long t612 = __len598;
      struct std___Vector_base_int__std__allocator_int__* base613 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t599 + 0);
      struct std__allocator_int_* r614 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base613);
      unsigned long r615 = std__vector_int__std__allocator_int______S_check_init_len(t612, r614);
      unsigned long t616 = __len598;
      int* t617 = __first594;
      int* t618 = __last595;
      int* r619 = int__std__vector_int__std__allocator_int______M_allocate_and_copy_int__(t599, t616, t617, t618);
      __tmp608 = r619;
      struct std___Vector_base_int__std__allocator_int__* base620 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t599 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base621 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base620->_M_impl) + 0);
      int* t622 = base621->_M_start;
      struct std___Vector_base_int__std__allocator_int__* base623 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t599 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base624 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base623->_M_impl) + 0);
      int* t625 = base624->_M_finish;
      struct std___Vector_base_int__std__allocator_int__* base626 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t599 + 0);
      struct std__allocator_int_* r627 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base626);
      void_std___Destroy_int___int_(t622, t625, r627);
      struct std___Vector_base_int__std__allocator_int__* base628 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t599 + 0);
      struct std___Vector_base_int__std__allocator_int__* base629 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t599 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base630 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base629->_M_impl) + 0);
      int* t631 = base630->_M_start;
      struct std___Vector_base_int__std__allocator_int__* base632 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t599 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base633 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base632->_M_impl) + 0);
      int* t634 = base633->_M_end_of_storage;
      struct std___Vector_base_int__std__allocator_int__* base635 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t599 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base636 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base635->_M_impl) + 0);
      int* t637 = base636->_M_start;
      long diff638 = t634 - t637;
      unsigned long cast639 = (unsigned long)diff638;
      std___Vector_base_int__std__allocator_int______M_deallocate(base628, t631, cast639);
      int* t640 = __tmp608;
      struct std___Vector_base_int__std__allocator_int__* base641 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t599 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base642 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base641->_M_impl) + 0);
      base642->_M_start = t640;
      struct std___Vector_base_int__std__allocator_int__* base643 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t599 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base644 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base643->_M_impl) + 0);
      int* t645 = base644->_M_start;
      unsigned long t646 = __len598;
      int* ptr647 = &(t645)[t646];
      struct std___Vector_base_int__std__allocator_int__* base648 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t599 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base649 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base648->_M_impl) + 0);
      base649->_M_finish = ptr647;
      struct std___Vector_base_int__std__allocator_int__* base650 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t599 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base651 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base650->_M_impl) + 0);
      int* t652 = base651->_M_finish;
      struct std___Vector_base_int__std__allocator_int__* base653 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t599 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base654 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base653->_M_impl) + 0);
      base654->_M_end_of_storage = t652;
    } else {
        unsigned long t655 = __sz597;
        unsigned long t656 = __len598;
        _Bool c657 = ((t655 >= t656)) ? 1 : 0;
        if (c657) {
          int* t658 = __first594;
          int* t659 = __last595;
          struct std___Vector_base_int__std__allocator_int__* base660 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t599 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base661 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base660->_M_impl) + 0);
          int* t662 = base661->_M_start;
          int* r663 = int__std__copy_int___int__(t658, t659, t662);
          std__vector_int__std__allocator_int______M_erase_at_end(t599, r663);
        } else {
          int* __mid664;
          unsigned long __n665;
          int* t666 = __first594;
          __mid664 = t666;
          unsigned long t667 = __sz597;
          void_std__advance_int___unsigned_long_(&__mid664, t667);
          int* t668 = __first594;
          int* t669 = __mid664;
          struct std___Vector_base_int__std__allocator_int__* base670 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t599 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base671 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base670->_M_impl) + 0);
          int* t672 = base671->_M_start;
          int* r673 = int__std__copy_int___int__(t668, t669, t672);
          unsigned long t674 = __len598;
          unsigned long t675 = __sz597;
          unsigned long b676 = t674 - t675;
          __n665 = b676;
          int* t677 = __mid664;
          int* t678 = __last595;
          struct std___Vector_base_int__std__allocator_int__* base679 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t599 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base680 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base679->_M_impl) + 0);
          int* t681 = base680->_M_finish;
          struct std___Vector_base_int__std__allocator_int__* base682 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t599 + 0);
          struct std__allocator_int_* r683 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base682);
          int* r684 = int__std____uninitialized_copy_a_int___int___int___int_(t677, t678, t681, r683);
          struct std___Vector_base_int__std__allocator_int__* base685 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t599 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base686 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base685->_M_impl) + 0);
          base686->_M_finish = r684;
        }
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE6assignIPivEEvT_S4_
void void_std__vector_int__std__allocator_int_____assign_int___void_(struct std__vector_int__std__allocator_int__* v687, int* v688, int* v689) {
bb690: ;
  struct std__vector_int__std__allocator_int__* this691;
  int* __first692;
  int* __last693;
  struct std__forward_iterator_tag agg_tmp0694;
  struct std__random_access_iterator_tag ref_tmp0695;
  this691 = v687;
  __first692 = v688;
  __last693 = v689;
  struct std__vector_int__std__allocator_int__* t696 = this691;
  int* t697 = __first692;
  int* t698 = __last693;
  struct std__random_access_iterator_tag r699 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first692);
  ref_tmp0695 = r699;
  struct std__forward_iterator_tag* base700 = (struct std__forward_iterator_tag*)((char *)&(ref_tmp0695) + 0);
  struct std__forward_iterator_tag t701 = agg_tmp0694;
  void_std__vector_int__std__allocator_int______M_assign_aux_int__(t696, t697, t698, t701);
  return;
}

// function: _ZN9__gnu_cxx5__ops15_Iter_comp_iterIPFbiiEEclINS_17__normal_iteratorIPiSt6vectorIiSaIiEEEESB_EEbT_T0_
_Bool bool___gnu_cxx____ops___Iter_comp_iter_bool_____int__int____operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* v702, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v703, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v704) {
bb705: ;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* this706;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it1707;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it2708;
  _Bool __retval709;
  this706 = v702;
  __it1707 = v703;
  __it2708 = v704;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* t710 = this706;
  void* t711 = t710->_M_comp;
  int* r712 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it1707);
  int t713 = *r712;
  int* r714 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it2708);
  int t715 = *r714;
  _Bool r716 = ((_Bool (*)(int, int))t711)(t713, t715);
  __retval709 = r716;
  _Bool t717 = __retval709;
  return t717;
}

// function: _ZSt13__unique_copyIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_NS0_5__ops15_Iter_comp_iterIPFbiiEEEET0_T_SD_SC_T1_St18input_iterator_tagSt20forward_iterator_tag
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____unique_copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_bool_____int__int_______gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_bool____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v718, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v719, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v720, struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ v721, struct std__input_iterator_tag v722, struct std__forward_iterator_tag v723) {
bb724: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first725;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last726;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result727;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ __binary_pred728;
  struct std__input_iterator_tag unnamed729;
  struct std__forward_iterator_tag unnamed730;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval731;
  __first725 = v718;
  __last726 = v719;
  __result727 = v720;
  __binary_pred728 = v721;
  unnamed729 = v722;
  unnamed730 = v723;
  int* r732 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__first725);
  int t733 = *r732;
  int* r734 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__result727);
  *r734 = t733;
    while (1) {
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r735 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(&__first725);
      _Bool r736 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(r735, &__last726);
      _Bool u737 = !r736;
      if (!u737) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0738;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1739;
        agg_tmp0738 = __result727; // copy
        agg_tmp1739 = __first725; // copy
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t740 = agg_tmp0738;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t741 = agg_tmp1739;
        _Bool r742 = bool___gnu_cxx____ops___Iter_comp_iter_bool_____int__int____operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(&__binary_pred728, t740, t741);
        _Bool u743 = !r742;
        if (u743) {
          int* r744 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__first725);
          int t745 = *r744;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r746 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(&__result727);
          int* r747 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(r746);
          *r747 = t745;
        }
    }
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r748 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(&__result727);
  __retval731 = *r748; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t749 = __retval731;
  return t749;
}

// function: _ZN9__gnu_cxx5__ops15_Iter_comp_iterIPFbiiEEC2ES3_
void __gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____Iter_comp_iter_bool____(struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* v750, void* v751) {
bb752: ;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* this753;
  void* __comp754;
  this753 = v750;
  __comp754 = v751;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* t755 = this753;
  void* t756 = __comp754;
  t755->_M_comp = t756;
  return;
}

// function: _ZN9__gnu_cxx5__ops16__iter_comp_iterIPFbiiEEENS0_15_Iter_comp_iterIT_EES5_
struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ __gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____gnu_cxx____ops____iter_comp_iter_bool_____int__int___bool____(void* v757) {
bb758: ;
  void* __comp759;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ __retval760;
  __comp759 = v757;
  void* t761 = __comp759;
  __gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____Iter_comp_iter_bool____(&__retval760, t761);
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ t762 = __retval760;
  return t762;
}

// function: _ZSt11unique_copyIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_PFbiiEET0_T_SA_S9_T1_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__unique_copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool_____int__int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v763, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v764, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v765, void* v766) {
bb767: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first768;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last769;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result770;
  void* __binary_pred771;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval772;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0773;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1774;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2775;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ agg_tmp3776;
  struct std__input_iterator_tag agg_tmp4777;
  struct std__random_access_iterator_tag ref_tmp0778;
  struct std__forward_iterator_tag agg_tmp5779;
  struct std__random_access_iterator_tag ref_tmp1780;
  __first768 = v763;
  __last769 = v764;
  __result770 = v765;
  __binary_pred771 = v766;
    _Bool r781 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first768, &__last769);
    if (r781) {
      __retval772 = __result770; // copy
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t782 = __retval772;
      return t782;
    }
  agg_tmp0773 = __first768; // copy
  agg_tmp1774 = __last769; // copy
  agg_tmp2775 = __result770; // copy
  void* t783 = __binary_pred771;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ r784 = __gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____gnu_cxx____ops____iter_comp_iter_bool_____int__int___bool____(t783);
  agg_tmp3776 = r784;
  struct std__random_access_iterator_tag r785 = std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________iterator_category_std____iterator_category___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(&__first768);
  ref_tmp0778 = r785;
  struct std__input_iterator_tag* base786 = (struct std__input_iterator_tag*)((char *)&(ref_tmp0778) + 0);
  struct std__random_access_iterator_tag r787 = std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________iterator_category_std____iterator_category___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(&__result770);
  ref_tmp1780 = r787;
  struct std__forward_iterator_tag* base788 = (struct std__forward_iterator_tag*)((char *)&(ref_tmp1780) + 0);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t789 = agg_tmp0773;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t790 = agg_tmp1774;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t791 = agg_tmp2775;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ t792 = agg_tmp3776;
  struct std__input_iterator_tag t793 = agg_tmp4777;
  struct std__forward_iterator_tag t794 = agg_tmp5779;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r795 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____unique_copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_bool_____int__int_______gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_bool____(t789, t790, t791, t792, t793, t794);
  __retval772 = r795;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t796 = __retval772;
  return t796;
}

// function: _ZNSt6vectorIiSaIiEEixEm
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* v797, unsigned long v798) {
bb799: ;
  struct std__vector_int__std__allocator_int__* this800;
  unsigned long __n801;
  int* __retval802;
  this800 = v797;
  __n801 = v798;
  struct std__vector_int__std__allocator_int__* t803 = this800;
    do {
          unsigned long t804 = __n801;
          unsigned long r805 = std__vector_int__std__allocator_int_____size___const(t803);
          _Bool c806 = ((t804 < r805)) ? 1 : 0;
          _Bool u807 = !c806;
          if (u807) {
            char* cast808 = (char*)&(_str_9);
            int c809 = 1263;
            char* cast810 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm);
            char* cast811 = (char*)&(_str_10);
            std____glibcxx_assert_fail(cast808, c809, cast810, cast811);
          }
      _Bool c812 = 0;
      if (!c812) break;
    } while (1);
  struct std___Vector_base_int__std__allocator_int__* base813 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t803 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base814 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base813->_M_impl) + 0);
  int* t815 = base814->_M_start;
  unsigned long t816 = __n801;
  int* ptr817 = &(t815)[t816];
  __retval802 = ptr817;
  int* t818 = __retval802;
  return t818;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v819, int v820) {
bb821: ;
  int __a822;
  int __b823;
  int __retval824;
  __a822 = v819;
  __b823 = v820;
  int t825 = __a822;
  int t826 = __b823;
  int b827 = t825 | t826;
  __retval824 = b827;
  int t828 = __retval824;
  return t828;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v829) {
bb830: ;
  struct std__basic_ios_char__std__char_traits_char__* this831;
  int __retval832;
  this831 = v829;
  struct std__basic_ios_char__std__char_traits_char__* t833 = this831;
  struct std__ios_base* base834 = (struct std__ios_base*)((char *)t833 + 0);
  int t835 = base834->_M_streambuf_state;
  __retval832 = t835;
  int t836 = __retval832;
  return t836;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v837, int v838) {
bb839: ;
  struct std__basic_ios_char__std__char_traits_char__* this840;
  int __state841;
  this840 = v837;
  __state841 = v838;
  struct std__basic_ios_char__std__char_traits_char__* t842 = this840;
  int r843 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t842);
  int t844 = __state841;
  int r845 = std__operator_(r843, t844);
  std__basic_ios_char__std__char_traits_char_____clear(t842, r845);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v846, char* v847) {
bb848: ;
  char* __c1849;
  char* __c2850;
  _Bool __retval851;
  __c1849 = v846;
  __c2850 = v847;
  char* t852 = __c1849;
  char t853 = *t852;
  int cast854 = (int)t853;
  char* t855 = __c2850;
  char t856 = *t855;
  int cast857 = (int)t856;
  _Bool c858 = ((cast854 == cast857)) ? 1 : 0;
  __retval851 = c858;
  _Bool t859 = __retval851;
  return t859;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v860) {
bb861: ;
  char* __p862;
  unsigned long __retval863;
  unsigned long __i864;
  __p862 = v860;
  unsigned long c865 = 0;
  __i864 = c865;
    char ref_tmp0866;
    while (1) {
      unsigned long t867 = __i864;
      char* t868 = __p862;
      char* ptr869 = &(t868)[t867];
      char c870 = 0;
      ref_tmp0866 = c870;
      _Bool r871 = __gnu_cxx__char_traits_char___eq(ptr869, &ref_tmp0866);
      _Bool u872 = !r871;
      if (!u872) break;
      unsigned long t873 = __i864;
      unsigned long u874 = t873 + 1;
      __i864 = u874;
    }
  unsigned long t875 = __i864;
  __retval863 = t875;
  unsigned long t876 = __retval863;
  return t876;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v877) {
bb878: ;
  char* __s879;
  unsigned long __retval880;
  __s879 = v877;
    _Bool r881 = std____is_constant_evaluated();
    if (r881) {
      char* t882 = __s879;
      unsigned long r883 = __gnu_cxx__char_traits_char___length(t882);
      __retval880 = r883;
      unsigned long t884 = __retval880;
      return t884;
    }
  char* t885 = __s879;
  unsigned long r886 = strlen(t885);
  __retval880 = r886;
  unsigned long t887 = __retval880;
  return t887;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v888, char* v889) {
bb890: ;
  struct std__basic_ostream_char__std__char_traits_char__* __out891;
  char* __s892;
  struct std__basic_ostream_char__std__char_traits_char__* __retval893;
  __out891 = v888;
  __s892 = v889;
    char* t894 = __s892;
    _Bool cast895 = (_Bool)t894;
    _Bool u896 = !cast895;
    if (u896) {
      struct std__basic_ostream_char__std__char_traits_char__* t897 = __out891;
      void** v898 = (void**)t897;
      void* v899 = *((void**)v898);
      unsigned char* cast900 = (unsigned char*)v899;
      long c901 = -24;
      unsigned char* ptr902 = &(cast900)[c901];
      long* cast903 = (long*)ptr902;
      long t904 = *cast903;
      unsigned char* cast905 = (unsigned char*)t897;
      unsigned char* ptr906 = &(cast905)[t904];
      struct std__basic_ostream_char__std__char_traits_char__* cast907 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr906;
      struct std__basic_ios_char__std__char_traits_char__* cast908 = (struct std__basic_ios_char__std__char_traits_char__*)cast907;
      int t909 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast908, t909);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t910 = __out891;
      char* t911 = __s892;
      char* t912 = __s892;
      unsigned long r913 = std__char_traits_char___length(t912);
      long cast914 = (long)r913;
      struct std__basic_ostream_char__std__char_traits_char__* r915 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t910, t911, cast914);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t916 = __out891;
  __retval893 = t916;
  struct std__basic_ostream_char__std__char_traits_char__* t917 = __retval893;
  return t917;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v918) {
bb919: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this920;
  int** __retval921;
  this920 = v918;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t922 = this920;
  __retval921 = &t922->_M_current;
  int** t923 = __retval921;
  return t923;
}

// function: _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v924, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v925) {
bb926: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs927;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs928;
  _Bool __retval929;
  __lhs927 = v924;
  __rhs928 = v925;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t930 = __lhs927;
  int** r931 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t930);
  int* t932 = *r931;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t933 = __rhs928;
  int** r934 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t933);
  int* t935 = *r934;
  _Bool c936 = ((t932 == t935)) ? 1 : 0;
  __retval929 = c936;
  _Bool t937 = __retval929;
  return t937;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v938) {
bb939: ;
  struct std__vector_int__std__allocator_int__* this940;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval941;
  this940 = v938;
  struct std__vector_int__std__allocator_int__* t942 = this940;
  struct std___Vector_base_int__std__allocator_int__* base943 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t942 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base944 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base943->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval941, &base944->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t945 = __retval941;
  return t945;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v946) {
bb947: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this948;
  int* __retval949;
  this948 = v946;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t950 = this948;
  int* t951 = t950->_M_current;
  __retval949 = t951;
  int* t952 = __retval949;
  return t952;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEi
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v953, int v954) {
bb955: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this956;
  int unnamed957;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval958;
  int* ref_tmp0959;
  this956 = v953;
  unnamed957 = v954;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t960 = this956;
  int* t961 = t960->_M_current;
  int c962 = 1;
  int* ptr963 = &(t961)[c962];
  t960->_M_current = ptr963;
  ref_tmp0959 = t961;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval958, &ref_tmp0959);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t964 = __retval958;
  return t964;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v965, void* v966) {
bb967: ;
  struct std__basic_ostream_char__std__char_traits_char__* this968;
  void* __pf969;
  struct std__basic_ostream_char__std__char_traits_char__* __retval970;
  this968 = v965;
  __pf969 = v966;
  struct std__basic_ostream_char__std__char_traits_char__* t971 = this968;
  void* t972 = __pf969;
  struct std__basic_ostream_char__std__char_traits_char__* r973 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t972)(t971);
  __retval970 = r973;
  struct std__basic_ostream_char__std__char_traits_char__* t974 = __retval970;
  return t974;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v975) {
bb976: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os977;
  struct std__basic_ostream_char__std__char_traits_char__* __retval978;
  __os977 = v975;
  struct std__basic_ostream_char__std__char_traits_char__* t979 = __os977;
  struct std__basic_ostream_char__std__char_traits_char__* r980 = std__ostream__flush(t979);
  __retval978 = r980;
  struct std__basic_ostream_char__std__char_traits_char__* t981 = __retval978;
  return t981;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v982) {
bb983: ;
  struct std__ctype_char_* __f984;
  struct std__ctype_char_* __retval985;
  __f984 = v982;
    struct std__ctype_char_* t986 = __f984;
    _Bool cast987 = (_Bool)t986;
    _Bool u988 = !cast987;
    if (u988) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t989 = __f984;
  __retval985 = t989;
  struct std__ctype_char_* t990 = __retval985;
  return t990;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v991, char v992) {
bb993: ;
  struct std__ctype_char_* this994;
  char __c995;
  char __retval996;
  this994 = v991;
  __c995 = v992;
  struct std__ctype_char_* t997 = this994;
    char t998 = t997->_M_widen_ok;
    _Bool cast999 = (_Bool)t998;
    if (cast999) {
      char t1000 = __c995;
      unsigned char cast1001 = (unsigned char)t1000;
      unsigned long cast1002 = (unsigned long)cast1001;
      char t1003 = t997->_M_widen[cast1002];
      __retval996 = t1003;
      char t1004 = __retval996;
      return t1004;
    }
  std__ctype_char____M_widen_init___const(t997);
  char t1005 = __c995;
  void** v1006 = (void**)t997;
  void* v1007 = *((void**)v1006);
  char vcall1010 = (char)__VERIFIER_virtual_call_char_char(t997, 6, t1005);
  __retval996 = vcall1010;
  char t1011 = __retval996;
  return t1011;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v1012, char v1013) {
bb1014: ;
  struct std__basic_ios_char__std__char_traits_char__* this1015;
  char __c1016;
  char __retval1017;
  this1015 = v1012;
  __c1016 = v1013;
  struct std__basic_ios_char__std__char_traits_char__* t1018 = this1015;
  struct std__ctype_char_* t1019 = t1018->_M_ctype;
  struct std__ctype_char_* r1020 = std__ctype_char__const__std____check_facet_std__ctype_char___(t1019);
  char t1021 = __c1016;
  char r1022 = std__ctype_char___widen_char__const(r1020, t1021);
  __retval1017 = r1022;
  char t1023 = __retval1017;
  return t1023;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1024) {
bb1025: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os1026;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1027;
  __os1026 = v1024;
  struct std__basic_ostream_char__std__char_traits_char__* t1028 = __os1026;
  struct std__basic_ostream_char__std__char_traits_char__* t1029 = __os1026;
  void** v1030 = (void**)t1029;
  void* v1031 = *((void**)v1030);
  unsigned char* cast1032 = (unsigned char*)v1031;
  long c1033 = -24;
  unsigned char* ptr1034 = &(cast1032)[c1033];
  long* cast1035 = (long*)ptr1034;
  long t1036 = *cast1035;
  unsigned char* cast1037 = (unsigned char*)t1029;
  unsigned char* ptr1038 = &(cast1037)[t1036];
  struct std__basic_ostream_char__std__char_traits_char__* cast1039 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1038;
  struct std__basic_ios_char__std__char_traits_char__* cast1040 = (struct std__basic_ios_char__std__char_traits_char__*)cast1039;
  char c1041 = 10;
  char r1042 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast1040, c1041);
  struct std__basic_ostream_char__std__char_traits_char__* r1043 = std__ostream__put(t1028, r1042);
  struct std__basic_ostream_char__std__char_traits_char__* r1044 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r1043);
  __retval1027 = r1044;
  struct std__basic_ostream_char__std__char_traits_char__* t1045 = __retval1027;
  return t1045;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v1046) {
bb1047: ;
  struct std__vector_int__std__allocator_int__* this1048;
  this1048 = v1046;
  struct std__vector_int__std__allocator_int__* t1049 = this1048;
    struct std___Vector_base_int__std__allocator_int__* base1050 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1049 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1051 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1050->_M_impl) + 0);
    int* t1052 = base1051->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base1053 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1049 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1054 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1053->_M_impl) + 0);
    int* t1055 = base1054->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base1056 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1049 + 0);
    struct std__allocator_int_* r1057 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1056);
    void_std___Destroy_int___int_(t1052, t1055, r1057);
  {
    struct std___Vector_base_int__std__allocator_int__* base1058 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1049 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base1058);
  }
  return;
}

// function: main
int main() {
bb1059: ;
  int __retval1060;
  int myints1061[9];
  int myints11062[9];
  struct std__vector_int__std__allocator_int__ myvector1063;
  struct std__allocator_int_ ref_tmp01064;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it1065;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp11066;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01067;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp21068;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11069;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp21070;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp31071;
  int c1072 = 0;
  __retval1060 = c1072;
  // array copy
  __builtin_memcpy(myints1061, __const_main_myints, (unsigned long)9 * sizeof(__const_main_myints[0]));
  // array copy
  __builtin_memcpy(myints11062, __const_main_myints1, (unsigned long)9 * sizeof(__const_main_myints1[0]));
  unsigned long c1073 = 9;
  std__allocator_int___allocator_2(&ref_tmp01064);
    std__vector_int__std__allocator_int_____vector(&myvector1063, c1073, &ref_tmp01064);
  {
    std__allocator_int____allocator(&ref_tmp01064);
  }
    __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(&it1065);
    int* cast1074 = (int*)&(myints1061);
    int* cast1075 = (int*)&(myints1061);
    int c1076 = 9;
    int* ptr1077 = &(cast1075)[c1076];
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1078 = std__vector_int__std__allocator_int_____begin(&myvector1063);
    agg_tmp01067 = r1078;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1079 = agg_tmp01067;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1080 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__unique_copy_int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(cast1074, ptr1077, t1079);
    ref_tmp11066 = r1080;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1081 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&it1065, &ref_tmp11066);
    int* cast1082 = (int*)&(myints11062);
    int* cast1083 = (int*)&(myints11062);
    int c1084 = 9;
    int* ptr1085 = &(cast1083)[c1084];
    void_std__vector_int__std__allocator_int_____assign_int___void_(&myvector1063, cast1082, ptr1085);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1086 = std__vector_int__std__allocator_int_____begin(&myvector1063);
    agg_tmp11069 = r1086;
    agg_tmp21070 = it1065; // copy
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1087 = std__vector_int__std__allocator_int_____begin(&myvector1063);
    agg_tmp31071 = r1087;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1088 = agg_tmp11069;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1089 = agg_tmp21070;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1090 = agg_tmp31071;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1091 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__unique_copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool_____int__int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool____(t1088, t1089, t1090, &myfunction);
    ref_tmp21068 = r1091;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1092 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&it1065, &ref_tmp21068);
    unsigned long c1093 = 0;
    int* r1094 = std__vector_int__std__allocator_int_____operator__(&myvector1063, c1093);
    int t1095 = *r1094;
    int c1096 = 10;
    _Bool c1097 = ((t1095 == c1096)) ? 1 : 0;
    if (c1097) {
    } else {
      char* cast1098 = (char*)&(_str);
      char* c1099 = (char*)_str_1;
      unsigned int c1100 = 36;
      char* cast1101 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1098, c1099, c1100, cast1101);
    }
    unsigned long c1102 = 1;
    int* r1103 = std__vector_int__std__allocator_int_____operator__(&myvector1063, c1102);
    int t1104 = *r1103;
    int c1105 = 20;
    _Bool c1106 = ((t1104 == c1105)) ? 1 : 0;
    if (c1106) {
    } else {
      char* cast1107 = (char*)&(_str_2);
      char* c1108 = (char*)_str_1;
      unsigned int c1109 = 37;
      char* cast1110 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1107, c1108, c1109, cast1110);
    }
    unsigned long c1111 = 2;
    int* r1112 = std__vector_int__std__allocator_int_____operator__(&myvector1063, c1111);
    int t1113 = *r1112;
    int c1114 = 30;
    _Bool c1115 = ((t1113 == c1114)) ? 1 : 0;
    if (c1115) {
    } else {
      char* cast1116 = (char*)&(_str_3);
      char* c1117 = (char*)_str_1;
      unsigned int c1118 = 38;
      char* cast1119 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1116, c1117, c1118, cast1119);
    }
    unsigned long c1120 = 3;
    int* r1121 = std__vector_int__std__allocator_int_____operator__(&myvector1063, c1120);
    int t1122 = *r1121;
    int c1123 = 20;
    _Bool c1124 = ((t1122 == c1123)) ? 1 : 0;
    if (c1124) {
    } else {
      char* cast1125 = (char*)&(_str_4);
      char* c1126 = (char*)_str_1;
      unsigned int c1127 = 39;
      char* cast1128 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1125, c1126, c1127, cast1128);
    }
    unsigned long c1129 = 4;
    int* r1130 = std__vector_int__std__allocator_int_____operator__(&myvector1063, c1129);
    int t1131 = *r1130;
    int c1132 = 30;
    _Bool c1133 = ((t1131 == c1132)) ? 1 : 0;
    if (c1133) {
    } else {
      char* cast1134 = (char*)&(_str_5);
      char* c1135 = (char*)_str_1;
      unsigned int c1136 = 40;
      char* cast1137 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1134, c1135, c1136, cast1137);
    }
    char* cast1138 = (char*)&(_str_6);
    struct std__basic_ostream_char__std__char_traits_char__* r1139 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1138);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp31140;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp41141;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp41142;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1143 = std__vector_int__std__allocator_int_____begin(&myvector1063);
      ref_tmp31140 = r1143;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1144 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&it1065, &ref_tmp31140);
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1146 = std__vector_int__std__allocator_int_____end(&myvector1063);
        ref_tmp41141 = r1146;
        _Bool r1147 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&it1065, &ref_tmp41141);
        _Bool u1148 = !r1147;
        if (!u1148) break;
        char* cast1149 = (char*)&(_str_7);
        struct std__basic_ostream_char__std__char_traits_char__* r1150 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1149);
        int* r1151 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&it1065);
        int t1152 = *r1151;
        struct std__basic_ostream_char__std__char_traits_char__* r1153 = std__ostream__operator__(r1150, t1152);
      for_step1145: ;
        int c1154 = 0;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1155 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&it1065, c1154);
        agg_tmp41142 = r1155;
      }
    struct std__basic_ostream_char__std__char_traits_char__* r1156 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c1157 = 0;
    __retval1060 = c1157;
    int t1158 = __retval1060;
    int ret_val1159 = t1158;
    {
      std__vector_int__std__allocator_int______vector(&myvector1063);
    }
    return ret_val1159;
  int t1160 = __retval1060;
  return t1160;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v1161) {
bb1162: ;
  struct std____new_allocator_int_* this1163;
  this1163 = v1161;
  struct std____new_allocator_int_* t1164 = this1163;
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v1165, unsigned long* v1166) {
bb1167: ;
  unsigned long* __a1168;
  unsigned long* __b1169;
  unsigned long* __retval1170;
  __a1168 = v1165;
  __b1169 = v1166;
    unsigned long* t1171 = __b1169;
    unsigned long t1172 = *t1171;
    unsigned long* t1173 = __a1168;
    unsigned long t1174 = *t1173;
    _Bool c1175 = ((t1172 < t1174)) ? 1 : 0;
    if (c1175) {
      unsigned long* t1176 = __b1169;
      __retval1170 = t1176;
      unsigned long* t1177 = __retval1170;
      return t1177;
    }
  unsigned long* t1178 = __a1168;
  __retval1170 = t1178;
  unsigned long* t1179 = __retval1170;
  return t1179;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v1180) {
bb1181: ;
  struct std__allocator_int_* __a1182;
  unsigned long __retval1183;
  unsigned long __diffmax1184;
  unsigned long __allocmax1185;
  __a1182 = v1180;
  unsigned long c1186 = 2305843009213693951;
  __diffmax1184 = c1186;
  unsigned long c1187 = 4611686018427387903;
  __allocmax1185 = c1187;
  unsigned long* r1188 = unsigned_long_const__std__min_unsigned_long_(&__diffmax1184, &__allocmax1185);
  unsigned long t1189 = *r1188;
  __retval1183 = t1189;
  unsigned long t1190 = __retval1183;
  return t1190;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v1191, struct std__allocator_int_* v1192) {
bb1193: ;
  struct std__allocator_int_* this1194;
  struct std__allocator_int_* __a1195;
  this1194 = v1191;
  __a1195 = v1192;
  struct std__allocator_int_* t1196 = this1194;
  struct std____new_allocator_int_* base1197 = (struct std____new_allocator_int_*)((char *)t1196 + 0);
  struct std__allocator_int_* t1198 = __a1195;
  struct std____new_allocator_int_* base1199 = (struct std____new_allocator_int_*)((char *)t1198 + 0);
  std____new_allocator_int_____new_allocator(base1197, base1199);
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long v1200, struct std__allocator_int_* v1201) {
bb1202: ;
  unsigned long __n1203;
  struct std__allocator_int_* __a1204;
  unsigned long __retval1205;
  __n1203 = v1200;
  __a1204 = v1201;
    struct std__allocator_int_ ref_tmp01206;
    _Bool tmp_exprcleanup1207;
    unsigned long t1208 = __n1203;
    struct std__allocator_int_* t1209 = __a1204;
    std__allocator_int___allocator(&ref_tmp01206, t1209);
      unsigned long r1210 = std__vector_int__std__allocator_int______S_max_size(&ref_tmp01206);
      _Bool c1211 = ((t1208 > r1210)) ? 1 : 0;
      tmp_exprcleanup1207 = c1211;
    {
      std__allocator_int____allocator(&ref_tmp01206);
    }
    _Bool t1212 = tmp_exprcleanup1207;
    if (t1212) {
      char* cast1213 = (char*)&(_str_8);
      std____throw_length_error(cast1213);
    }
  unsigned long t1214 = __n1203;
  __retval1205 = t1214;
  unsigned long t1215 = __retval1205;
  return t1215;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1216, struct std__allocator_int_* v1217) {
bb1218: ;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1219;
  struct std__allocator_int_* __a1220;
  this1219 = v1216;
  __a1220 = v1217;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1221 = this1219;
  struct std__allocator_int_* base1222 = (struct std__allocator_int_*)((char *)t1221 + 0);
  struct std__allocator_int_* t1223 = __a1220;
  std__allocator_int___allocator(base1222, t1223);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1224 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t1221 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base1224);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1225: ;
  _Bool __retval1226;
    _Bool c1227 = 0;
    __retval1226 = c1227;
    _Bool t1228 = __retval1226;
    return t1228;
  abort();
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v1229) {
bb1230: ;
  struct std____new_allocator_int_* this1231;
  unsigned long __retval1232;
  this1231 = v1229;
  struct std____new_allocator_int_* t1233 = this1231;
  unsigned long c1234 = 9223372036854775807;
  unsigned long c1235 = 4;
  unsigned long b1236 = c1234 / c1235;
  __retval1232 = b1236;
  unsigned long t1237 = __retval1232;
  return t1237;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v1238, unsigned long v1239, void* v1240) {
bb1241: ;
  struct std____new_allocator_int_* this1242;
  unsigned long __n1243;
  void* unnamed1244;
  int* __retval1245;
  this1242 = v1238;
  __n1243 = v1239;
  unnamed1244 = v1240;
  struct std____new_allocator_int_* t1246 = this1242;
    unsigned long t1247 = __n1243;
    unsigned long r1248 = std____new_allocator_int____M_max_size___const(t1246);
    _Bool c1249 = ((t1247 > r1248)) ? 1 : 0;
    if (c1249) {
        unsigned long t1250 = __n1243;
        unsigned long c1251 = -1;
        unsigned long c1252 = 4;
        unsigned long b1253 = c1251 / c1252;
        _Bool c1254 = ((t1250 > b1253)) ? 1 : 0;
        if (c1254) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c1255 = 4;
    unsigned long c1256 = 16;
    _Bool c1257 = ((c1255 > c1256)) ? 1 : 0;
    if (c1257) {
      unsigned long __al1258;
      unsigned long c1259 = 4;
      __al1258 = c1259;
      unsigned long t1260 = __n1243;
      unsigned long c1261 = 4;
      unsigned long b1262 = t1260 * c1261;
      unsigned long t1263 = __al1258;
      void* r1264 = operator_new_2(b1262, t1263);
      int* cast1265 = (int*)r1264;
      __retval1245 = cast1265;
      int* t1266 = __retval1245;
      return t1266;
    }
  unsigned long t1267 = __n1243;
  unsigned long c1268 = 4;
  unsigned long b1269 = t1267 * c1268;
  void* r1270 = operator_new(b1269);
  int* cast1271 = (int*)r1270;
  __retval1245 = cast1271;
  int* t1272 = __retval1245;
  return t1272;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v1273, unsigned long v1274) {
bb1275: ;
  struct std__allocator_int_* this1276;
  unsigned long __n1277;
  int* __retval1278;
  this1276 = v1273;
  __n1277 = v1274;
  struct std__allocator_int_* t1279 = this1276;
    _Bool r1280 = std____is_constant_evaluated();
    if (r1280) {
        unsigned long t1281 = __n1277;
        unsigned long c1282 = 4;
        unsigned long ovr1283;
        _Bool ovf1284 = __builtin_mul_overflow(t1281, c1282, &ovr1283);
        __n1277 = ovr1283;
        if (ovf1284) {
          std____throw_bad_array_new_length();
        }
      unsigned long t1285 = __n1277;
      void* r1286 = operator_new(t1285);
      int* cast1287 = (int*)r1286;
      __retval1278 = cast1287;
      int* t1288 = __retval1278;
      return t1288;
    }
  struct std____new_allocator_int_* base1289 = (struct std____new_allocator_int_*)((char *)t1279 + 0);
  unsigned long t1290 = __n1277;
  void* c1291 = ((void*)0);
  int* r1292 = std____new_allocator_int___allocate(base1289, t1290, c1291);
  __retval1278 = r1292;
  int* t1293 = __retval1278;
  return t1293;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v1294, unsigned long v1295) {
bb1296: ;
  struct std__allocator_int_* __a1297;
  unsigned long __n1298;
  int* __retval1299;
  __a1297 = v1294;
  __n1298 = v1295;
  struct std__allocator_int_* t1300 = __a1297;
  unsigned long t1301 = __n1298;
  int* r1302 = std__allocator_int___allocate(t1300, t1301);
  __retval1299 = r1302;
  int* t1303 = __retval1299;
  return t1303;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v1304, unsigned long v1305) {
bb1306: ;
  struct std___Vector_base_int__std__allocator_int__* this1307;
  unsigned long __n1308;
  int* __retval1309;
  this1307 = v1304;
  __n1308 = v1305;
  struct std___Vector_base_int__std__allocator_int__* t1310 = this1307;
  unsigned long t1311 = __n1308;
  unsigned long c1312 = 0;
  _Bool c1313 = ((t1311 != c1312)) ? 1 : 0;
  int* ternary1314;
  if (c1313) {
    struct std__allocator_int_* base1315 = (struct std__allocator_int_*)((char *)&(t1310->_M_impl) + 0);
    unsigned long t1316 = __n1308;
    int* r1317 = std__allocator_traits_std__allocator_int_____allocate(base1315, t1316);
    ternary1314 = (int*)r1317;
  } else {
    int* c1318 = ((void*)0);
    ternary1314 = (int*)c1318;
  }
  __retval1309 = ternary1314;
  int* t1319 = __retval1309;
  return t1319;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_M_create_storageEm
void std___Vector_base_int__std__allocator_int______M_create_storage(struct std___Vector_base_int__std__allocator_int__* v1320, unsigned long v1321) {
bb1322: ;
  struct std___Vector_base_int__std__allocator_int__* this1323;
  unsigned long __n1324;
  this1323 = v1320;
  __n1324 = v1321;
  struct std___Vector_base_int__std__allocator_int__* t1325 = this1323;
  unsigned long t1326 = __n1324;
  int* r1327 = std___Vector_base_int__std__allocator_int______M_allocate(t1325, t1326);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1328 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1325->_M_impl) + 0);
  base1328->_M_start = r1327;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1329 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1325->_M_impl) + 0);
  int* t1330 = base1329->_M_start;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1331 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1325->_M_impl) + 0);
  base1331->_M_finish = t1330;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1332 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1325->_M_impl) + 0);
  int* t1333 = base1332->_M_start;
  unsigned long t1334 = __n1324;
  int* ptr1335 = &(t1333)[t1334];
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1336 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1325->_M_impl) + 0);
  base1336->_M_end_of_storage = ptr1335;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1337) {
bb1338: ;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1339;
  this1339 = v1337;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1340 = this1339;
  {
    struct std__allocator_int_* base1341 = (struct std__allocator_int_*)((char *)t1340 + 0);
    std__allocator_int____allocator(base1341);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2EmRKS0_
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1342, unsigned long v1343, struct std__allocator_int_* v1344) {
bb1345: ;
  struct std___Vector_base_int__std__allocator_int__* this1346;
  unsigned long __n1347;
  struct std__allocator_int_* __a1348;
  this1346 = v1342;
  __n1347 = v1343;
  __a1348 = v1344;
  struct std___Vector_base_int__std__allocator_int__* t1349 = this1346;
  struct std__allocator_int_* t1350 = __a1348;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t1349->_M_impl, t1350);
    unsigned long t1351 = __n1347;
    std___Vector_base_int__std__allocator_int______M_create_storage(t1349, t1351);
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1352: ;
  _Bool __retval1353;
    _Bool c1354 = 0;
    __retval1353 = c1354;
    _Bool t1355 = __retval1353;
    return t1355;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v1356, int** v1357) {
bb1358: ;
  struct std___UninitDestroyGuard_int____void_* this1359;
  int** __first1360;
  this1359 = v1356;
  __first1360 = v1357;
  struct std___UninitDestroyGuard_int____void_* t1361 = this1359;
  int** t1362 = __first1360;
  int* t1363 = *t1362;
  t1361->_M_first = t1363;
  int** t1364 = __first1360;
  t1361->_M_cur = t1364;
  return;
}

// function: _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v1365) {
bb1366: ;
  int* __location1367;
  int* __retval1368;
  void* __loc1369;
  __location1367 = v1365;
  int* t1370 = __location1367;
  void* cast1371 = (void*)t1370;
  __loc1369 = cast1371;
    void* t1372 = __loc1369;
    int* cast1373 = (int*)t1372;
    int c1374 = 0;
    *cast1373 = c1374;
    __retval1368 = cast1373;
    int* t1375 = __retval1368;
    return t1375;
  abort();
}

// function: _ZSt10_ConstructIiJEEvPT_DpOT0_
void void_std___Construct_int_(int* v1376) {
bb1377: ;
  int* __p1378;
  __p1378 = v1376;
    _Bool r1379 = std____is_constant_evaluated();
    if (r1379) {
      int* t1380 = __p1378;
      int* r1381 = _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t1380);
      return;
    }
  int* t1382 = __p1378;
  void* cast1383 = (void*)t1382;
  int* cast1384 = (int*)cast1383;
  int c1385 = 0;
  *cast1384 = c1385;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v1386) {
bb1387: ;
  struct std___UninitDestroyGuard_int____void_* this1388;
  this1388 = v1386;
  struct std___UninitDestroyGuard_int____void_* t1389 = this1388;
  int** c1390 = ((void*)0);
  t1389->_M_cur = c1390;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v1391) {
bb1392: ;
  struct std___UninitDestroyGuard_int____void_* this1393;
  this1393 = v1391;
  struct std___UninitDestroyGuard_int____void_* t1394 = this1393;
    int** t1395 = t1394->_M_cur;
    int** c1396 = ((void*)0);
    _Bool c1397 = ((t1395 != c1396)) ? 1 : 0;
    if (c1397) {
      int* t1398 = t1394->_M_first;
      int** t1399 = t1394->_M_cur;
      int* t1400 = *t1399;
      void_std___Destroy_int__(t1398, t1400);
    }
  return;
}

// function: _ZNSt27__uninitialized_default_n_1ILb0EE18__uninit_default_nIPimEET_S3_T0_
int* int__std____uninitialized_default_n_1_false_____uninit_default_n_int___unsigned_long_(int* v1401, unsigned long v1402) {
bb1403: ;
  int* __first1404;
  unsigned long __n1405;
  int* __retval1406;
  struct std___UninitDestroyGuard_int____void_ __guard1407;
  __first1404 = v1401;
  __n1405 = v1402;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard1407, &__first1404);
      while (1) {
        unsigned long t1409 = __n1405;
        unsigned long c1410 = 0;
        _Bool c1411 = ((t1409 > c1410)) ? 1 : 0;
        if (!c1411) break;
        int* t1412 = __first1404;
        void_std___Construct_int_(t1412);
      for_step1408: ;
        unsigned long t1413 = __n1405;
        unsigned long u1414 = t1413 - 1;
        __n1405 = u1414;
        int* t1415 = __first1404;
        int c1416 = 1;
        int* ptr1417 = &(t1415)[c1416];
        __first1404 = ptr1417;
      }
    std___UninitDestroyGuard_int___void___release(&__guard1407);
    int* t1418 = __first1404;
    __retval1406 = t1418;
    int* t1419 = __retval1406;
    int* ret_val1420 = t1419;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1407);
    }
    return ret_val1420;
  abort();
}

// function: _ZSt9__fill_a1IPiiEvT_S1_RKT0_
void void_std____fill_a1_int___int_(int* v1421, int* v1422, int* v1423) {
bb1424: ;
  int* __first1425;
  int* __last1426;
  int* __value1427;
  _Bool __load_outside_loop1428;
  int __val1429;
  __first1425 = v1421;
  __last1426 = v1422;
  __value1427 = v1423;
  _Bool c1430 = 1;
  __load_outside_loop1428 = c1430;
  int* t1431 = __value1427;
  int t1432 = *t1431;
  __val1429 = t1432;
    while (1) {
      int* t1434 = __first1425;
      int* t1435 = __last1426;
      _Bool c1436 = ((t1434 != t1435)) ? 1 : 0;
      if (!c1436) break;
      int t1437 = __val1429;
      int* t1438 = __first1425;
      *t1438 = t1437;
    for_step1433: ;
      int* t1439 = __first1425;
      int c1440 = 1;
      int* ptr1441 = &(t1439)[c1440];
      __first1425 = ptr1441;
    }
  return;
}

// function: _ZSt8__fill_aIPiiEvT_S1_RKT0_
void void_std____fill_a_int___int_(int* v1442, int* v1443, int* v1444) {
bb1445: ;
  int* __first1446;
  int* __last1447;
  int* __value1448;
  __first1446 = v1442;
  __last1447 = v1443;
  __value1448 = v1444;
  int* t1449 = __first1446;
  int* t1450 = __last1447;
  int* t1451 = __value1448;
  void_std____fill_a1_int___int_(t1449, t1450, t1451);
  return;
}

// function: _ZSt10__fill_n_aIPimiET_S1_T0_RKT1_St26random_access_iterator_tag
int* int__std____fill_n_a_int___unsigned_long__int_(int* v1452, unsigned long v1453, int* v1454, struct std__random_access_iterator_tag v1455) {
bb1456: ;
  int* __first1457;
  unsigned long __n1458;
  int* __value1459;
  struct std__random_access_iterator_tag unnamed1460;
  int* __retval1461;
  __first1457 = v1452;
  __n1458 = v1453;
  __value1459 = v1454;
  unnamed1460 = v1455;
    unsigned long t1462 = __n1458;
    unsigned long c1463 = 0;
    _Bool c1464 = ((t1462 <= c1463)) ? 1 : 0;
    if (c1464) {
      int* t1465 = __first1457;
      __retval1461 = t1465;
      int* t1466 = __retval1461;
      return t1466;
    }
  int* t1467 = __first1457;
  int* t1468 = __first1457;
  unsigned long t1469 = __n1458;
  int* ptr1470 = &(t1468)[t1469];
  int* t1471 = __value1459;
  void_std____fill_a_int___int_(t1467, ptr1470, t1471);
  int* t1472 = __first1457;
  unsigned long t1473 = __n1458;
  int* ptr1474 = &(t1472)[t1473];
  __retval1461 = ptr1474;
  int* t1475 = __retval1461;
  return t1475;
}

// function: _ZSt17__size_to_integerm
unsigned long std____size_to_integer(unsigned long v1476) {
bb1477: ;
  unsigned long __n1478;
  unsigned long __retval1479;
  __n1478 = v1476;
  unsigned long t1480 = __n1478;
  __retval1479 = t1480;
  unsigned long t1481 = __retval1479;
  return t1481;
}

// function: _ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** v1482) {
bb1483: ;
  int** unnamed1484;
  struct std__random_access_iterator_tag __retval1485;
  unnamed1484 = v1482;
  struct std__random_access_iterator_tag t1486 = __retval1485;
  return t1486;
}

// function: _ZSt6fill_nIPimiET_S1_T0_RKT1_
int* int__std__fill_n_int___unsigned_long__int_(int* v1487, unsigned long v1488, int* v1489) {
bb1490: ;
  int* __first1491;
  unsigned long __n1492;
  int* __value1493;
  int* __retval1494;
  struct std__random_access_iterator_tag agg_tmp01495;
  __first1491 = v1487;
  __n1492 = v1488;
  __value1493 = v1489;
  int* t1496 = __first1491;
  unsigned long t1497 = __n1492;
  unsigned long r1498 = std____size_to_integer(t1497);
  int* t1499 = __value1493;
  struct std__random_access_iterator_tag r1500 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first1491);
  agg_tmp01495 = r1500;
  struct std__random_access_iterator_tag t1501 = agg_tmp01495;
  int* r1502 = int__std____fill_n_a_int___unsigned_long__int_(t1496, r1498, t1499, t1501);
  __retval1494 = r1502;
  int* t1503 = __retval1494;
  return t1503;
}

// function: _ZNSt27__uninitialized_default_n_1ILb1EE18__uninit_default_nIPimEET_S3_T0_
int* int__std____uninitialized_default_n_1_true_____uninit_default_n_int___unsigned_long_(int* v1504, unsigned long v1505) {
bb1506: ;
  int* __first1507;
  unsigned long __n1508;
  int* __retval1509;
  __first1507 = v1504;
  __n1508 = v1505;
    unsigned long t1510 = __n1508;
    unsigned long c1511 = 0;
    _Bool c1512 = ((t1510 > c1511)) ? 1 : 0;
    if (c1512) {
      int* __val1513;
      int* t1514 = __first1507;
      __val1513 = t1514;
      int* t1515 = __val1513;
      void_std___Construct_int_(t1515);
      int* t1516 = __first1507;
      int c1517 = 1;
      int* ptr1518 = &(t1516)[c1517];
      __first1507 = ptr1518;
      int* t1519 = __first1507;
      unsigned long t1520 = __n1508;
      unsigned long c1521 = 1;
      unsigned long b1522 = t1520 - c1521;
      int* t1523 = __val1513;
      int* r1524 = int__std__fill_n_int___unsigned_long__int_(t1519, b1522, t1523);
      __first1507 = r1524;
    }
  int* t1525 = __first1507;
  __retval1509 = t1525;
  int* t1526 = __retval1509;
  return t1526;
}

// function: _ZSt25__uninitialized_default_nIPimET_S1_T0_
int* int__std____uninitialized_default_n_int___unsigned_long_(int* v1527, unsigned long v1528) {
bb1529: ;
  int* __first1530;
  unsigned long __n1531;
  int* __retval1532;
  _Bool __can_fill1533;
  __first1530 = v1527;
  __n1531 = v1528;
    _Bool r1534 = std__is_constant_evaluated();
    if (r1534) {
      int* t1535 = __first1530;
      unsigned long t1536 = __n1531;
      int* r1537 = int__std____uninitialized_default_n_1_false_____uninit_default_n_int___unsigned_long_(t1535, t1536);
      __retval1532 = r1537;
      int* t1538 = __retval1532;
      return t1538;
    }
  _Bool c1539 = 1;
  __can_fill1533 = c1539;
  int* t1540 = __first1530;
  unsigned long t1541 = __n1531;
  int* r1542 = int__std____uninitialized_default_n_1_true_____uninit_default_n_int___unsigned_long_(t1540, t1541);
  __retval1532 = r1542;
  int* t1543 = __retval1532;
  return t1543;
}

// function: _ZSt27__uninitialized_default_n_aIPimiET_S1_T0_RSaIT1_E
int* int__std____uninitialized_default_n_a_int___unsigned_long__int_(int* v1544, unsigned long v1545, struct std__allocator_int_* v1546) {
bb1547: ;
  int* __first1548;
  unsigned long __n1549;
  struct std__allocator_int_* unnamed1550;
  int* __retval1551;
  __first1548 = v1544;
  __n1549 = v1545;
  unnamed1550 = v1546;
  int* t1552 = __first1548;
  unsigned long t1553 = __n1549;
  int* r1554 = int__std____uninitialized_default_n_int___unsigned_long_(t1552, t1553);
  __retval1551 = r1554;
  int* t1555 = __retval1551;
  return t1555;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v1556) {
bb1557: ;
  struct std___Vector_base_int__std__allocator_int__* this1558;
  struct std__allocator_int_* __retval1559;
  this1558 = v1556;
  struct std___Vector_base_int__std__allocator_int__* t1560 = this1558;
  struct std__allocator_int_* base1561 = (struct std__allocator_int_*)((char *)&(t1560->_M_impl) + 0);
  __retval1559 = base1561;
  struct std__allocator_int_* t1562 = __retval1559;
  return t1562;
}

// function: _ZNSt6vectorIiSaIiEE21_M_default_initializeEm
void std__vector_int__std__allocator_int______M_default_initialize(struct std__vector_int__std__allocator_int__* v1563, unsigned long v1564) {
bb1565: ;
  struct std__vector_int__std__allocator_int__* this1566;
  unsigned long __n1567;
  this1566 = v1563;
  __n1567 = v1564;
  struct std__vector_int__std__allocator_int__* t1568 = this1566;
  struct std___Vector_base_int__std__allocator_int__* base1569 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1568 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1570 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1569->_M_impl) + 0);
  int* t1571 = base1570->_M_start;
  unsigned long t1572 = __n1567;
  struct std___Vector_base_int__std__allocator_int__* base1573 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1568 + 0);
  struct std__allocator_int_* r1574 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1573);
  int* r1575 = int__std____uninitialized_default_n_a_int___unsigned_long__int_(t1571, t1572, r1574);
  struct std___Vector_base_int__std__allocator_int__* base1576 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1568 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1577 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1576->_M_impl) + 0);
  base1577->_M_finish = r1575;
  return;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v1578, int* v1579, unsigned long v1580) {
bb1581: ;
  struct std____new_allocator_int_* this1582;
  int* __p1583;
  unsigned long __n1584;
  this1582 = v1578;
  __p1583 = v1579;
  __n1584 = v1580;
  struct std____new_allocator_int_* t1585 = this1582;
    unsigned long c1586 = 4;
    unsigned long c1587 = 16;
    _Bool c1588 = ((c1586 > c1587)) ? 1 : 0;
    if (c1588) {
      int* t1589 = __p1583;
      void* cast1590 = (void*)t1589;
      unsigned long t1591 = __n1584;
      unsigned long c1592 = 4;
      unsigned long b1593 = t1591 * c1592;
      unsigned long c1594 = 4;
      operator_delete_3(cast1590, b1593, c1594);
      return;
    }
  int* t1595 = __p1583;
  void* cast1596 = (void*)t1595;
  unsigned long t1597 = __n1584;
  unsigned long c1598 = 4;
  unsigned long b1599 = t1597 * c1598;
  operator_delete_2(cast1596, b1599);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1600, int* v1601, unsigned long v1602) {
bb1603: ;
  struct std__allocator_int_* this1604;
  int* __p1605;
  unsigned long __n1606;
  this1604 = v1600;
  __p1605 = v1601;
  __n1606 = v1602;
  struct std__allocator_int_* t1607 = this1604;
    _Bool r1608 = std____is_constant_evaluated();
    if (r1608) {
      int* t1609 = __p1605;
      void* cast1610 = (void*)t1609;
      operator_delete(cast1610);
      return;
    }
  struct std____new_allocator_int_* base1611 = (struct std____new_allocator_int_*)((char *)t1607 + 0);
  int* t1612 = __p1605;
  unsigned long t1613 = __n1606;
  std____new_allocator_int___deallocate(base1611, t1612, t1613);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1614, int* v1615, unsigned long v1616) {
bb1617: ;
  struct std__allocator_int_* __a1618;
  int* __p1619;
  unsigned long __n1620;
  __a1618 = v1614;
  __p1619 = v1615;
  __n1620 = v1616;
  struct std__allocator_int_* t1621 = __a1618;
  int* t1622 = __p1619;
  unsigned long t1623 = __n1620;
  std__allocator_int___deallocate(t1621, t1622, t1623);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v1624, int* v1625, unsigned long v1626) {
bb1627: ;
  struct std___Vector_base_int__std__allocator_int__* this1628;
  int* __p1629;
  unsigned long __n1630;
  this1628 = v1624;
  __p1629 = v1625;
  __n1630 = v1626;
  struct std___Vector_base_int__std__allocator_int__* t1631 = this1628;
    int* t1632 = __p1629;
    _Bool cast1633 = (_Bool)t1632;
    if (cast1633) {
      struct std__allocator_int_* base1634 = (struct std__allocator_int_*)((char *)&(t1631->_M_impl) + 0);
      int* t1635 = __p1629;
      unsigned long t1636 = __n1630;
      std__allocator_traits_std__allocator_int_____deallocate(base1634, t1635, t1636);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1637) {
bb1638: ;
  struct std___Vector_base_int__std__allocator_int__* this1639;
  this1639 = v1637;
  struct std___Vector_base_int__std__allocator_int__* t1640 = this1639;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1641 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1640->_M_impl) + 0);
    int* t1642 = base1641->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1643 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1640->_M_impl) + 0);
    int* t1644 = base1643->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1645 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1640->_M_impl) + 0);
    int* t1646 = base1645->_M_start;
    long diff1647 = t1644 - t1646;
    unsigned long cast1648 = (unsigned long)diff1647;
    std___Vector_base_int__std__allocator_int______M_deallocate(t1640, t1642, cast1648);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t1640->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1649, struct std____new_allocator_int_* v1650) {
bb1651: ;
  struct std____new_allocator_int_* this1652;
  struct std____new_allocator_int_* unnamed1653;
  this1652 = v1649;
  unnamed1653 = v1650;
  struct std____new_allocator_int_* t1654 = this1652;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v1655) {
bb1656: ;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this1657;
  this1657 = v1655;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1658 = this1657;
  int* c1659 = ((void*)0);
  t1658->_M_start = c1659;
  int* c1660 = ((void*)0);
  t1658->_M_finish = c1660;
  int* c1661 = ((void*)0);
  t1658->_M_end_of_storage = c1661;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v1662) {
bb1663: ;
  int* __location1664;
  __location1664 = v1662;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1665, int* v1666) {
bb1667: ;
  int* __first1668;
  int* __last1669;
  __first1668 = v1665;
  __last1669 = v1666;
      _Bool r1670 = std____is_constant_evaluated();
      if (r1670) {
          while (1) {
            int* t1672 = __first1668;
            int* t1673 = __last1669;
            _Bool c1674 = ((t1672 != t1673)) ? 1 : 0;
            if (!c1674) break;
            int* t1675 = __first1668;
            void_std__destroy_at_int_(t1675);
          for_step1671: ;
            int* t1676 = __first1668;
            int c1677 = 1;
            int* ptr1678 = &(t1676)[c1677];
            __first1668 = ptr1678;
          }
      }
  return;
}

