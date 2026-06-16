extern void abort(void);
// Struct definitions (auto-parsed)
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ { int* _M_current; };
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
char _str[8] = "x == 20";
char _str_1[106] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/vector/algorithm15/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[8] = "y == 10";
char _str_3[15] = "first[3] == 10";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_4[16] = "first contains:";
char _str_5[2] = " ";
char _str_6[49] = "cannot create std::vector larger than max_size()";
char _str_7[98] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_uninitialized.h";
char __PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_[140] = "_ForwardIterator std::__do_uninit_fill_n(_ForwardIterator, _Size _Tp &) [_ForwardIterator = int *, _Size = unsigned long, _Tp = int]";
char _str_8[9] = "__n >= 0";
char _str_9[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_10[19] = "__n < this->size()";
_Bool _ZNSt17integral_constantIbLb0EE5valueE;
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
void void_swap_esbmc_int_(int* p0, int* p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
void std__allocator_int___allocator_2(struct std__allocator_int_* p0);
void std__vector_int__std__allocator_int_____vector_2(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, int* p2, struct std__allocator_int_* p3);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0, struct std__vector_int__std__allocator_int__* p1);
_Bool __gnu_cxx____alloc_traits_std__allocator_int___int____S_propagate_on_copy_assign();
_Bool __gnu_cxx____alloc_traits_std__allocator_int___int____S_always_equal();
_Bool std__operator__(struct std__allocator_int_* p0, struct std__allocator_int_* p1);
void std__vector_int__std__allocator_int______M_erase_at_end(struct std__vector_int__std__allocator_int__* p0, int* p1);
void std__vector_int__std__allocator_int_____clear(struct std__vector_int__std__allocator_int__* p0);
void void_std____alloc_on_copy_std__allocator_int___(struct std__allocator_int_* p0, struct std__allocator_int_* p1);
unsigned long std__vector_int__std__allocator_int_____capacity___const(struct std__vector_int__std__allocator_int__* p0);
void std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* p0, int* p1, unsigned long p2, struct std___Vector_base_int__std__allocator_int__* p3);
int* std__vector_int__std__allocator_int______Guard_alloc___M_release(struct std__vector_int__std__allocator_int_____Guard_alloc* p0);
void std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* p0);
int* int__std__vector_int__std__allocator_int______M_allocate_and_copy___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p2, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p3);
void void_std___Destroy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1);
void void_std___Destroy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct std__allocator_int_* p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, long p1);
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
void void_swap_esbmc_std__vector_int__std__allocator_int_____(struct std__vector_int__std__allocator_int__* p0, struct std__vector_int__std__allocator_int__* p1);
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* p0);
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
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* p0);
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* p0);
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
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* p0, int* p1);
void void_std___Construct_int__int_const__(int* p0, int* p1);
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* p0);
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* p0);
int* int__std____do_uninit_fill_n_int___unsigned_long__int_(int* p0, unsigned long p1, int* p2);
int* int__std__uninitialized_fill_n_int___unsigned_long__int_(int* p0, unsigned long p1, int* p2);
int* int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(int* p0, unsigned long p1, int* p2, struct std__allocator_int_* p3);
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* p0);
void std__vector_int__std__allocator_int______M_fill_initialize(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, int* p2);
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
void void_std___Destroy_int___int_(int* p0, int* p1, struct std__allocator_int_* p2);
struct std__allocator_int_ std__allocator_traits_std__allocator_int_____select_on_container_copy_construction(struct std__allocator_int_* p0);
struct std__allocator_int_ __gnu_cxx____alloc_traits_std__allocator_int___int____S_select_on_copy(struct std__allocator_int_* p0);
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Vector_base_int__std__allocator_int__* p0);
int** __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0);
_Bool _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p1);
int* __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0);
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0);
int* int__std____do_uninit_copy___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p1, int* p2);
long __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int_const___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p1);
extern void* memcpy(void* p0, void* p1, unsigned long p2);
int* int__std____niter_base_int__(int* p0);
int* int_const__std____niter_base_int_const___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p0);
int* int__std__uninitialized_copy___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p1, int* p2);
int* int__std____uninitialized_copy_a___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______int___int_(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p1, int* p2, struct std__allocator_int_* p3);
void __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin___const(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end___const(struct std__vector_int__std__allocator_int__* p0);

// function: _Z10swap_esbmcIiEvRT_S1_
void void_swap_esbmc_int_(int* v0, int* v1) {
bb2: ;
  int* a3;
  int* b4;
  int c5;
  a3 = v0;
  b4 = v1;
  int* t6 = a3;
  int t7 = *t6;
  c5 = t7;
  int* t8 = b4;
  int t9 = *t8;
  int* t10 = a3;
  *t10 = t9;
  int t11 = c5;
  int* t12 = b4;
  *t12 = t11;
  return;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator_2(struct std__allocator_int_* v13) {
bb14: ;
  struct std__allocator_int_* this15;
  this15 = v13;
  struct std__allocator_int_* t16 = this15;
  struct std____new_allocator_int_* base17 = (struct std____new_allocator_int_*)((char *)t16 + 0);
  std____new_allocator_int_____new_allocator_2(base17);
  return;
}

// function: _ZNSt6vectorIiSaIiEEC2EmRKiRKS0_
void std__vector_int__std__allocator_int_____vector_2(struct std__vector_int__std__allocator_int__* v18, unsigned long v19, int* v20, struct std__allocator_int_* v21) {
bb22: ;
  struct std__vector_int__std__allocator_int__* this23;
  unsigned long __n24;
  int* __value25;
  struct std__allocator_int_* __a26;
  this23 = v18;
  __n24 = v19;
  __value25 = v20;
  __a26 = v21;
  struct std__vector_int__std__allocator_int__* t27 = this23;
  struct std___Vector_base_int__std__allocator_int__* base28 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t27 + 0);
  unsigned long t29 = __n24;
  struct std__allocator_int_* t30 = __a26;
  unsigned long r31 = std__vector_int__std__allocator_int______S_check_init_len(t29, t30);
  struct std__allocator_int_* t32 = __a26;
  std___Vector_base_int__std__allocator_int______Vector_base(base28, r31, t32);
    unsigned long t33 = __n24;
    int* t34 = __value25;
    std__vector_int__std__allocator_int______M_fill_initialize(t27, t33, t34);
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v35) {
bb36: ;
  struct std__allocator_int_* this37;
  this37 = v35;
  struct std__allocator_int_* t38 = this37;
  return;
}

// function: _ZNSt6vectorIiSaIiEEC2ERKS1_
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* v39, struct std__vector_int__std__allocator_int__* v40) {
bb41: ;
  struct std__vector_int__std__allocator_int__* this42;
  struct std__vector_int__std__allocator_int__* __x43;
  struct std__allocator_int_ ref_tmp044;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp045;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp146;
  this42 = v39;
  __x43 = v40;
  struct std__vector_int__std__allocator_int__* t47 = this42;
  struct std___Vector_base_int__std__allocator_int__* base48 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t47 + 0);
  struct std__vector_int__std__allocator_int__* t49 = __x43;
  unsigned long r50 = std__vector_int__std__allocator_int_____size___const(t49);
  struct std__vector_int__std__allocator_int__* t51 = __x43;
  struct std___Vector_base_int__std__allocator_int__* base52 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t51 + 0);
  struct std__allocator_int_* r53 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(base52);
  struct std__allocator_int_ r54 = __gnu_cxx____alloc_traits_std__allocator_int___int____S_select_on_copy(r53);
  ref_tmp044 = r54;
    std___Vector_base_int__std__allocator_int______Vector_base(base48, r50, &ref_tmp044);
  {
    std__allocator_int____allocator(&ref_tmp044);
  }
    struct std__vector_int__std__allocator_int__* t55 = __x43;
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r56 = std__vector_int__std__allocator_int_____begin___const(t55);
    agg_tmp045 = r56;
    struct std__vector_int__std__allocator_int__* t57 = __x43;
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r58 = std__vector_int__std__allocator_int_____end___const(t57);
    agg_tmp146 = r58;
    struct std___Vector_base_int__std__allocator_int__* base59 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t47 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base60 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base59->_M_impl) + 0);
    int* t61 = base60->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base62 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t47 + 0);
    struct std__allocator_int_* r63 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base62);
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t64 = agg_tmp045;
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t65 = agg_tmp146;
    int* r66 = int__std____uninitialized_copy_a___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______int___int_(t64, t65, t61, r63);
    struct std___Vector_base_int__std__allocator_int__* base67 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t47 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base68 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base67->_M_impl) + 0);
    base68->_M_finish = r66;
  return;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIiEiE27_S_propagate_on_copy_assignEv
_Bool __gnu_cxx____alloc_traits_std__allocator_int___int____S_propagate_on_copy_assign() {
bb69: ;
  _Bool __retval70;
  _Bool t71 = _ZNSt17integral_constantIbLb0EE5valueE;
  __retval70 = t71;
  _Bool t72 = __retval70;
  return t72;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIiEiE15_S_always_equalEv
_Bool __gnu_cxx____alloc_traits_std__allocator_int___int____S_always_equal() {
bb73: ;
  _Bool __retval74;
  _Bool t75 = _ZNSt17integral_constantIbLb1EE5valueE;
  __retval74 = t75;
  _Bool t76 = __retval74;
  return t76;
}

// function: _ZSteqRKSaIiES1_
_Bool std__operator__(struct std__allocator_int_* v77, struct std__allocator_int_* v78) {
bb79: ;
  struct std__allocator_int_* unnamed80;
  struct std__allocator_int_* unnamed81;
  _Bool __retval82;
  unnamed80 = v77;
  unnamed81 = v78;
  _Bool c83 = 1;
  __retval82 = c83;
  _Bool t84 = __retval82;
  return t84;
}

// function: _ZNSt6vectorIiSaIiEE15_M_erase_at_endEPi
void std__vector_int__std__allocator_int______M_erase_at_end(struct std__vector_int__std__allocator_int__* v85, int* v86) {
bb87: ;
  struct std__vector_int__std__allocator_int__* this88;
  int* __pos89;
  this88 = v85;
  __pos89 = v86;
  struct std__vector_int__std__allocator_int__* t90 = this88;
    unsigned long __n91;
    struct std___Vector_base_int__std__allocator_int__* base92 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t90 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base93 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base92->_M_impl) + 0);
    int* t94 = base93->_M_finish;
    int* t95 = __pos89;
    long diff96 = t94 - t95;
    unsigned long cast97 = (unsigned long)diff96;
    __n91 = cast97;
    unsigned long t98 = __n91;
    _Bool cast99 = (_Bool)t98;
    if (cast99) {
      int* t100 = __pos89;
      struct std___Vector_base_int__std__allocator_int__* base101 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t90 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base102 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base101->_M_impl) + 0);
      int* t103 = base102->_M_finish;
      struct std___Vector_base_int__std__allocator_int__* base104 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t90 + 0);
      struct std__allocator_int_* r105 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base104);
      void_std___Destroy_int___int_(t100, t103, r105);
      int* t106 = __pos89;
      struct std___Vector_base_int__std__allocator_int__* base107 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t90 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base108 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base107->_M_impl) + 0);
      base108->_M_finish = t106;
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE5clearEv
void std__vector_int__std__allocator_int_____clear(struct std__vector_int__std__allocator_int__* v109) {
bb110: ;
  struct std__vector_int__std__allocator_int__* this111;
  this111 = v109;
  struct std__vector_int__std__allocator_int__* t112 = this111;
  struct std___Vector_base_int__std__allocator_int__* base113 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t112 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base114 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base113->_M_impl) + 0);
  int* t115 = base114->_M_start;
  std__vector_int__std__allocator_int______M_erase_at_end(t112, t115);
  return;
}

// function: _ZSt15__alloc_on_copyISaIiEEvRT_RKS1_
void void_std____alloc_on_copy_std__allocator_int___(struct std__allocator_int_* v116, struct std__allocator_int_* v117) {
bb118: ;
  struct std__allocator_int_* __one119;
  struct std__allocator_int_* __two120;
  __one119 = v116;
  __two120 = v117;
  return;
}

// function: _ZNKSt6vectorIiSaIiEE8capacityEv
unsigned long std__vector_int__std__allocator_int_____capacity___const(struct std__vector_int__std__allocator_int__* v121) {
bb122: ;
  struct std__vector_int__std__allocator_int__* this123;
  unsigned long __retval124;
  long __dif125;
  this123 = v121;
  struct std__vector_int__std__allocator_int__* t126 = this123;
  struct std___Vector_base_int__std__allocator_int__* base127 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t126 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base128 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base127->_M_impl) + 0);
  int* t129 = base128->_M_end_of_storage;
  struct std___Vector_base_int__std__allocator_int__* base130 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t126 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base131 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base130->_M_impl) + 0);
  int* t132 = base131->_M_start;
  long diff133 = t129 - t132;
  __dif125 = diff133;
    long t134 = __dif125;
    long c135 = 0;
    _Bool c136 = ((t134 < c135)) ? 1 : 0;
    if (c136) {
      __builtin_unreachable();
    }
  long t137 = __dif125;
  unsigned long cast138 = (unsigned long)t137;
  __retval124 = cast138;
  unsigned long t139 = __retval124;
  return t139;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocC2EPimRSt12_Vector_baseIiS0_E
void std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v140, int* v141, unsigned long v142, struct std___Vector_base_int__std__allocator_int__* v143) {
bb144: ;
  struct std__vector_int__std__allocator_int_____Guard_alloc* this145;
  int* __s146;
  unsigned long __l147;
  struct std___Vector_base_int__std__allocator_int__* __vect148;
  this145 = v140;
  __s146 = v141;
  __l147 = v142;
  __vect148 = v143;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t149 = this145;
  int* t150 = __s146;
  t149->_M_storage = t150;
  unsigned long t151 = __l147;
  t149->_M_len = t151;
  struct std___Vector_base_int__std__allocator_int__* t152 = __vect148;
  t149->_M_vect = t152;
  return;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_alloc10_M_releaseEv
int* std__vector_int__std__allocator_int______Guard_alloc___M_release(struct std__vector_int__std__allocator_int_____Guard_alloc* v153) {
bb154: ;
  struct std__vector_int__std__allocator_int_____Guard_alloc* this155;
  int* __retval156;
  int* __res157;
  this155 = v153;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t158 = this155;
  int* t159 = t158->_M_storage;
  __res157 = t159;
  int* c160 = ((void*)0);
  t158->_M_storage = c160;
  int* t161 = __res157;
  __retval156 = t161;
  int* t162 = __retval156;
  return t162;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocD2Ev
void std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v163) {
bb164: ;
  struct std__vector_int__std__allocator_int_____Guard_alloc* this165;
  this165 = v163;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t166 = this165;
    int* t167 = t166->_M_storage;
    _Bool cast168 = (_Bool)t167;
    if (cast168) {
      struct std___Vector_base_int__std__allocator_int__* t169 = t166->_M_vect;
      int* t170 = t166->_M_storage;
      unsigned long t171 = t166->_M_len;
      std___Vector_base_int__std__allocator_int______M_deallocate(t169, t170, t171);
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE20_M_allocate_and_copyIN9__gnu_cxx17__normal_iteratorIPKiS1_EEEEPimT_S9_
int* int__std__vector_int__std__allocator_int______M_allocate_and_copy___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______(struct std__vector_int__std__allocator_int__* v172, unsigned long v173, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v174, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v175) {
bb176: ;
  struct std__vector_int__std__allocator_int__* this177;
  unsigned long __n178;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __first179;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __last180;
  int* __retval181;
  struct std__vector_int__std__allocator_int_____Guard_alloc __guard182;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp0183;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp1184;
  this177 = v172;
  __n178 = v173;
  __first179 = v174;
  __last180 = v175;
  struct std__vector_int__std__allocator_int__* t185 = this177;
  struct std___Vector_base_int__std__allocator_int__* base186 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t185 + 0);
  unsigned long t187 = __n178;
  int* r188 = std___Vector_base_int__std__allocator_int______M_allocate(base186, t187);
  unsigned long t189 = __n178;
  struct std___Vector_base_int__std__allocator_int__* base190 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t185 + 0);
  std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(&__guard182, r188, t189, base190);
    agg_tmp0183 = __first179; // copy
    agg_tmp1184 = __last180; // copy
    int* t191 = __guard182._M_storage;
    struct std___Vector_base_int__std__allocator_int__* base192 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t185 + 0);
    struct std__allocator_int_* r193 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base192);
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t194 = agg_tmp0183;
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t195 = agg_tmp1184;
    int* r196 = int__std____uninitialized_copy_a___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______int___int_(t194, t195, t191, r193);
    int* r197 = std__vector_int__std__allocator_int______Guard_alloc___M_release(&__guard182);
    __retval181 = r197;
    int* t198 = __retval181;
    int* ret_val199 = t198;
    {
      std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(&__guard182);
    }
    return ret_val199;
  abort();
}

// function: _ZSt8_DestroyIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEEvT_S7_
void void_std___Destroy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v200, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v201) {
bb202: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first203;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last204;
  __first203 = v200;
  __last204 = v201;
      _Bool r205 = std____is_constant_evaluated();
      if (r205) {
          while (1) {
            _Bool r207 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first203, &__last204);
            _Bool u208 = !r207;
            if (!u208) break;
            int* r209 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__first203);
            void_std__destroy_at_int_(r209);
          for_step206: ;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r210 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__first203);
          }
      }
  return;
}

// function: _ZSt8_DestroyIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEiEvT_S7_RSaIT0_E
void void_std___Destroy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v211, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v212, struct std__allocator_int_* v213) {
bb214: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first215;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last216;
  struct std__allocator_int_* unnamed217;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0218;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1219;
  __first215 = v211;
  __last216 = v212;
  unnamed217 = v213;
  agg_tmp0218 = __first215; // copy
  agg_tmp1219 = __last216; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t220 = agg_tmp0218;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t221 = agg_tmp1219;
  void_std___Destroy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t220, t221);
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEplEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v222, long v223) {
bb224: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this225;
  long __n226;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval227;
  int* ref_tmp0228;
  this225 = v222;
  __n226 = v223;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t229 = this225;
  int* t230 = t229->_M_current;
  long t231 = __n226;
  int* ptr232 = &(t230)[t231];
  ref_tmp0228 = ptr232;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval227, &ref_tmp0228);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t233 = __retval227;
  return t233;
}

// function: _ZSt12__niter_wrapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES2_ET_S7_T0_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____niter_wrap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v234, int* v235) {
bb236: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __from237;
  int* __res238;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval239;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0240;
  __from237 = v234;
  __res238 = v235;
  int* t241 = __res238;
  int* r242 = int__std____niter_base_int__(t241);
  agg_tmp0240 = __from237; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t243 = agg_tmp0240;
  int* r244 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t243);
  long diff245 = r242 - r244;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r246 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__from237, diff245);
  __retval239 = r246;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t247 = __retval239;
  return t247;
}

// function: _ZSt10__distanceIPKiENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_int_const____difference_type_std____distance_int_const__(int* v248, int* v249, struct std__random_access_iterator_tag v250) {
bb251: ;
  int* __first252;
  int* __last253;
  struct std__random_access_iterator_tag unnamed254;
  long __retval255;
  __first252 = v248;
  __last253 = v249;
  unnamed254 = v250;
  int* t256 = __last253;
  int* t257 = __first252;
  long diff258 = t256 - t257;
  __retval255 = diff258;
  long t259 = __retval255;
  return t259;
}

// function: _ZSt19__iterator_categoryIPKiENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_int_const____iterator_category_std____iterator_category_int_const__(int** v260) {
bb261: ;
  int** unnamed262;
  struct std__random_access_iterator_tag __retval263;
  unnamed262 = v260;
  struct std__random_access_iterator_tag t264 = __retval263;
  return t264;
}

// function: _ZSt8distanceIPKiENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_int_const____difference_type_std__distance_int_const__(int* v265, int* v266) {
bb267: ;
  int* __first268;
  int* __last269;
  long __retval270;
  struct std__random_access_iterator_tag agg_tmp0271;
  __first268 = v265;
  __last269 = v266;
  int* t272 = __first268;
  int* t273 = __last269;
  struct std__random_access_iterator_tag r274 = std__iterator_traits_int_const____iterator_category_std____iterator_category_int_const__(&__first268);
  agg_tmp0271 = r274;
  struct std__random_access_iterator_tag t275 = agg_tmp0271;
  long r276 = std__iterator_traits_int_const____difference_type_std____distance_int_const__(t272, t273, t275);
  __retval270 = r276;
  long t277 = __retval270;
  return t277;
}

// function: _ZSt12__assign_oneILb0EPiPKiEvRT0_RT1_
void void_std____assign_one_false__int___int_const__(int** v278, int** v279) {
bb280: ;
  int** __out281;
  int** __in282;
  __out281 = v278;
  __in282 = v279;
    int** t283 = __in282;
    int* t284 = *t283;
    int t285 = *t284;
    int** t286 = __out281;
    int* t287 = *t286;
    *t287 = t285;
  return;
}

// function: _ZSt14__copy_move_a2ILb0EPKiS1_PiET2_T0_T1_S3_
int* int__std____copy_move_a2_false__int_const___int_const___int__(int* v288, int* v289, int* v290) {
bb291: ;
  int* __first292;
  int* __last293;
  int* __result294;
  int* __retval295;
  __first292 = v288;
  __last293 = v289;
  __result294 = v290;
      _Bool r296 = std____is_constant_evaluated();
      if (r296) {
      } else {
          long __n297;
          int* t298 = __first292;
          int* t299 = __last293;
          long r300 = std__iterator_traits_int_const____difference_type_std__distance_int_const__(t298, t299);
          __n297 = r300;
            long t301 = __n297;
            long c302 = 1;
            _Bool c303 = ((t301 > c302)) ? 1 : 0;
            if (c303) {
              int* t304 = __result294;
              void* cast305 = (void*)t304;
              int* t306 = __first292;
              void* cast307 = (void*)t306;
              long t308 = __n297;
              unsigned long cast309 = (unsigned long)t308;
              unsigned long c310 = 4;
              unsigned long b311 = cast309 * c310;
              void* r312 = memmove(cast305, cast307, b311);
              long t313 = __n297;
              int* t314 = __result294;
              int* ptr315 = &(t314)[t313];
              __result294 = ptr315;
            } else {
                long t316 = __n297;
                long c317 = 1;
                _Bool c318 = ((t316 == c317)) ? 1 : 0;
                if (c318) {
                  void_std____assign_one_false__int___int_const__(&__result294, &__first292);
                  int* t319 = __result294;
                  int c320 = 1;
                  int* ptr321 = &(t319)[c320];
                  __result294 = ptr321;
                }
            }
          int* t322 = __result294;
          __retval295 = t322;
          int* t323 = __retval295;
          return t323;
      }
    while (1) {
      int* t325 = __first292;
      int* t326 = __last293;
      _Bool c327 = ((t325 != t326)) ? 1 : 0;
      if (!c327) break;
      void_std____assign_one_false__int___int_const__(&__result294, &__first292);
    for_step324: ;
      int* t328 = __result294;
      int c329 = 1;
      int* ptr330 = &(t328)[c329];
      __result294 = ptr330;
      int* t331 = __first292;
      int c332 = 1;
      int* ptr333 = &(t331)[c332];
      __first292 = ptr333;
    }
  int* t334 = __result294;
  __retval295 = t334;
  int* t335 = __retval295;
  return t335;
}

// function: _ZSt14__copy_move_a1ILb0EPKiPiET1_T0_S4_S3_
int* int__std____copy_move_a1_false__int_const___int__(int* v336, int* v337, int* v338) {
bb339: ;
  int* __first340;
  int* __last341;
  int* __result342;
  int* __retval343;
  __first340 = v336;
  __last341 = v337;
  __result342 = v338;
  int* t344 = __first340;
  int* t345 = __last341;
  int* t346 = __result342;
  int* r347 = int__std____copy_move_a2_false__int_const___int_const___int__(t344, t345, t346);
  __retval343 = r347;
  int* t348 = __retval343;
  return t348;
}

// function: _ZSt12__niter_baseIPiSt6vectorIiSaIiEEET_N9__gnu_cxx17__normal_iteratorIS4_T0_EE
int* int__std____niter_base_int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v349) {
bb350: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it351;
  int* __retval352;
  __it351 = v349;
  int** r353 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__it351);
  int* t354 = *r353;
  __retval352 = t354;
  int* t355 = __retval352;
  return t355;
}

// function: _ZSt13__copy_move_aILb0EN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEENS1_IPiS6_EEET1_T0_SB_SA_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____copy_move_a_false____gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v356, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v357, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v358) {
bb359: ;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __first360;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __last361;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result362;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval363;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0364;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp1365;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp2366;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3367;
  __first360 = v356;
  __last361 = v357;
  __result362 = v358;
  agg_tmp0364 = __result362; // copy
  agg_tmp1365 = __first360; // copy
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t368 = agg_tmp1365;
  int* r369 = int_const__std____niter_base_int_const___std__vector_int__std__allocator_int_____(t368);
  agg_tmp2366 = __last361; // copy
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t370 = agg_tmp2366;
  int* r371 = int_const__std____niter_base_int_const___std__vector_int__std__allocator_int_____(t370);
  agg_tmp3367 = __result362; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t372 = agg_tmp3367;
  int* r373 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t372);
  int* r374 = int__std____copy_move_a1_false__int_const___int__(r369, r371, r373);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t375 = agg_tmp0364;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r376 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____niter_wrap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(t375, r374);
  __retval363 = r376;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t377 = __retval363;
  return t377;
}

// function: _ZSt12__miter_baseIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEET_S8_
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v378) {
bb379: ;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __it380;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __retval381;
  __it380 = v378;
  __retval381 = __it380; // copy
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t382 = __retval381;
  return t382;
}

// function: _ZSt4copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEENS1_IPiS6_EEET0_T_SB_SA_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__copy___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v383, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v384, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v385) {
bb386: ;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __first387;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __last388;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result389;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval390;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp0391;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp1392;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp2393;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp3394;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp4395;
  __first387 = v383;
  __last388 = v384;
  __result389 = v385;
  agg_tmp1392 = __first387; // copy
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t396 = agg_tmp1392;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r397 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______(t396);
  agg_tmp0391 = r397;
  agg_tmp3394 = __last388; // copy
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t398 = agg_tmp3394;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r399 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______(t398);
  agg_tmp2393 = r399;
  agg_tmp4395 = __result389; // copy
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t400 = agg_tmp0391;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t401 = agg_tmp2393;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t402 = agg_tmp4395;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r403 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____copy_move_a_false____gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t400, t401, t402);
  __retval390 = r403;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t404 = __retval390;
  return t404;
}

// function: _ZSt12__niter_wrapIPiET_RKS1_S1_
int* int__std____niter_wrap_int__(int** v405, int* v406) {
bb407: ;
  int** unnamed408;
  int* __res409;
  int* __retval410;
  unnamed408 = v405;
  __res409 = v406;
  int* t411 = __res409;
  __retval410 = t411;
  int* t412 = __retval410;
  return t412;
}

// function: _ZSt10__distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_St26random_access_iterator_tag
long std__iterator_traits_int____difference_type_std____distance_int__(int* v413, int* v414, struct std__random_access_iterator_tag v415) {
bb416: ;
  int* __first417;
  int* __last418;
  struct std__random_access_iterator_tag unnamed419;
  long __retval420;
  __first417 = v413;
  __last418 = v414;
  unnamed419 = v415;
  int* t421 = __last418;
  int* t422 = __first417;
  long diff423 = t421 - t422;
  __retval420 = diff423;
  long t424 = __retval420;
  return t424;
}

// function: _ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** v425) {
bb426: ;
  int** unnamed427;
  struct std__random_access_iterator_tag __retval428;
  unnamed427 = v425;
  struct std__random_access_iterator_tag t429 = __retval428;
  return t429;
}

// function: _ZSt8distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_
long std__iterator_traits_int____difference_type_std__distance_int__(int* v430, int* v431) {
bb432: ;
  int* __first433;
  int* __last434;
  long __retval435;
  struct std__random_access_iterator_tag agg_tmp0436;
  __first433 = v430;
  __last434 = v431;
  int* t437 = __first433;
  int* t438 = __last434;
  struct std__random_access_iterator_tag r439 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first433);
  agg_tmp0436 = r439;
  struct std__random_access_iterator_tag t440 = agg_tmp0436;
  long r441 = std__iterator_traits_int____difference_type_std____distance_int__(t437, t438, t440);
  __retval435 = r441;
  long t442 = __retval435;
  return t442;
}

// function: _ZSt12__assign_oneILb0EPiS0_EvRT0_RT1_
void void_std____assign_one_false__int___int__(int** v443, int** v444) {
bb445: ;
  int** __out446;
  int** __in447;
  __out446 = v443;
  __in447 = v444;
    int** t448 = __in447;
    int* t449 = *t448;
    int t450 = *t449;
    int** t451 = __out446;
    int* t452 = *t451;
    *t452 = t450;
  return;
}

// function: _ZSt14__copy_move_a2ILb0EPiS0_S0_ET2_T0_T1_S1_
int* int__std____copy_move_a2_false__int___int___int__(int* v453, int* v454, int* v455) {
bb456: ;
  int* __first457;
  int* __last458;
  int* __result459;
  int* __retval460;
  __first457 = v453;
  __last458 = v454;
  __result459 = v455;
      _Bool r461 = std____is_constant_evaluated();
      if (r461) {
      } else {
          long __n462;
          int* t463 = __first457;
          int* t464 = __last458;
          long r465 = std__iterator_traits_int____difference_type_std__distance_int__(t463, t464);
          __n462 = r465;
            long t466 = __n462;
            long c467 = 1;
            _Bool c468 = ((t466 > c467)) ? 1 : 0;
            if (c468) {
              int* t469 = __result459;
              void* cast470 = (void*)t469;
              int* t471 = __first457;
              void* cast472 = (void*)t471;
              long t473 = __n462;
              unsigned long cast474 = (unsigned long)t473;
              unsigned long c475 = 4;
              unsigned long b476 = cast474 * c475;
              void* r477 = memmove(cast470, cast472, b476);
              long t478 = __n462;
              int* t479 = __result459;
              int* ptr480 = &(t479)[t478];
              __result459 = ptr480;
            } else {
                long t481 = __n462;
                long c482 = 1;
                _Bool c483 = ((t481 == c482)) ? 1 : 0;
                if (c483) {
                  void_std____assign_one_false__int___int__(&__result459, &__first457);
                  int* t484 = __result459;
                  int c485 = 1;
                  int* ptr486 = &(t484)[c485];
                  __result459 = ptr486;
                }
            }
          int* t487 = __result459;
          __retval460 = t487;
          int* t488 = __retval460;
          return t488;
      }
    while (1) {
      int* t490 = __first457;
      int* t491 = __last458;
      _Bool c492 = ((t490 != t491)) ? 1 : 0;
      if (!c492) break;
      void_std____assign_one_false__int___int__(&__result459, &__first457);
    for_step489: ;
      int* t493 = __result459;
      int c494 = 1;
      int* ptr495 = &(t493)[c494];
      __result459 = ptr495;
      int* t496 = __first457;
      int c497 = 1;
      int* ptr498 = &(t496)[c497];
      __first457 = ptr498;
    }
  int* t499 = __result459;
  __retval460 = t499;
  int* t500 = __retval460;
  return t500;
}

// function: _ZSt14__copy_move_a1ILb0EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_a1_false__int___int__(int* v501, int* v502, int* v503) {
bb504: ;
  int* __first505;
  int* __last506;
  int* __result507;
  int* __retval508;
  __first505 = v501;
  __last506 = v502;
  __result507 = v503;
  int* t509 = __first505;
  int* t510 = __last506;
  int* t511 = __result507;
  int* r512 = int__std____copy_move_a2_false__int___int___int__(t509, t510, t511);
  __retval508 = r512;
  int* t513 = __retval508;
  return t513;
}

// function: _ZSt13__copy_move_aILb0EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_a_false__int___int__(int* v514, int* v515, int* v516) {
bb517: ;
  int* __first518;
  int* __last519;
  int* __result520;
  int* __retval521;
  __first518 = v514;
  __last519 = v515;
  __result520 = v516;
  int* t522 = __first518;
  int* r523 = int__std____niter_base_int__(t522);
  int* t524 = __last519;
  int* r525 = int__std____niter_base_int__(t524);
  int* t526 = __result520;
  int* r527 = int__std____niter_base_int__(t526);
  int* r528 = int__std____copy_move_a1_false__int___int__(r523, r525, r527);
  int* r529 = int__std____niter_wrap_int__(&__result520, r528);
  __retval521 = r529;
  int* t530 = __retval521;
  return t530;
}

// function: _ZSt12__miter_baseIPiET_S1_
int* int__std____miter_base_int__(int* v531) {
bb532: ;
  int* __it533;
  int* __retval534;
  __it533 = v531;
  int* t535 = __it533;
  __retval534 = t535;
  int* t536 = __retval534;
  return t536;
}

// function: _ZSt4copyIPiS0_ET0_T_S2_S1_
int* int__std__copy_int___int__(int* v537, int* v538, int* v539) {
bb540: ;
  int* __first541;
  int* __last542;
  int* __result543;
  int* __retval544;
  __first541 = v537;
  __last542 = v538;
  __result543 = v539;
  int* t545 = __first541;
  int* r546 = int__std____miter_base_int__(t545);
  int* t547 = __last542;
  int* r548 = int__std____miter_base_int__(t547);
  int* t549 = __result543;
  int* r550 = int__std____copy_move_a_false__int___int__(r546, r548, t549);
  __retval544 = r550;
  int* t551 = __retval544;
  return t551;
}

// function: _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* v552, int* v553) {
bb554: ;
  int* __location555;
  int* __args556;
  int* __retval557;
  void* __loc558;
  __location555 = v552;
  __args556 = v553;
  int* t559 = __location555;
  void* cast560 = (void*)t559;
  __loc558 = cast560;
    void* t561 = __loc558;
    int* cast562 = (int*)t561;
    int* t563 = __args556;
    int t564 = *t563;
    *cast562 = t564;
    __retval557 = cast562;
    int* t565 = __retval557;
    return t565;
  abort();
}

// function: _ZSt10_ConstructIiJRiEEvPT_DpOT0_
void void_std___Construct_int__int__(int* v566, int* v567) {
bb568: ;
  int* __p569;
  int* __args570;
  __p569 = v566;
  __args570 = v567;
    _Bool r571 = std____is_constant_evaluated();
    if (r571) {
      int* t572 = __p569;
      int* t573 = __args570;
      int* r574 = _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t572, t573);
      return;
    }
  int* t575 = __p569;
  void* cast576 = (void*)t575;
  int* cast577 = (int*)cast576;
  int* t578 = __args570;
  int t579 = *t578;
  *cast577 = t579;
  return;
}

// function: _ZSt16__do_uninit_copyIPiS0_S0_ET1_T_T0_S1_
int* int__std____do_uninit_copy_int___int___int__(int* v580, int* v581, int* v582) {
bb583: ;
  int* __first584;
  int* __last585;
  int* __result586;
  int* __retval587;
  struct std___UninitDestroyGuard_int____void_ __guard588;
  __first584 = v580;
  __last585 = v581;
  __result586 = v582;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard588, &__result586);
      while (1) {
        int* t590 = __first584;
        int* t591 = __last585;
        _Bool c592 = ((t590 != t591)) ? 1 : 0;
        if (!c592) break;
        int* t593 = __result586;
        int* t594 = __first584;
        void_std___Construct_int__int__(t593, t594);
      for_step589: ;
        int* t595 = __first584;
        int c596 = 1;
        int* ptr597 = &(t595)[c596];
        __first584 = ptr597;
        int* t598 = __result586;
        int c599 = 1;
        int* ptr600 = &(t598)[c599];
        __result586 = ptr600;
      }
    std___UninitDestroyGuard_int___void___release(&__guard588);
    int* t601 = __result586;
    __retval587 = t601;
    int* t602 = __retval587;
    int* ret_val603 = t602;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard588);
    }
    return ret_val603;
  abort();
}

// function: _ZSt18uninitialized_copyIPiS0_ET0_T_S2_S1_
int* int__std__uninitialized_copy_int___int__(int* v604, int* v605, int* v606) {
bb607: ;
  int* __first608;
  int* __last609;
  int* __result610;
  int* __retval611;
  __first608 = v604;
  __last609 = v605;
  __result610 = v606;
      long __n612;
      int* t613 = __last609;
      int* t614 = __first608;
      long diff615 = t613 - t614;
      __n612 = diff615;
        long t616 = __n612;
        long c617 = 0;
        _Bool c618 = ((t616 > c617)) ? 1 : 0;
        if (c618) {
          int* t619 = __result610;
          int* r620 = int__std____niter_base_int__(t619);
          void* cast621 = (void*)r620;
          int* t622 = __first608;
          int* r623 = int__std____niter_base_int__(t622);
          void* cast624 = (void*)r623;
          long t625 = __n612;
          unsigned long cast626 = (unsigned long)t625;
          unsigned long c627 = 4;
          unsigned long b628 = cast626 * c627;
          void* r629 = memcpy(cast621, cast624, b628);
          long t630 = __n612;
          int* t631 = __result610;
          int* ptr632 = &(t631)[t630];
          __result610 = ptr632;
        }
      int* t633 = __result610;
      __retval611 = t633;
      int* t634 = __retval611;
      return t634;
  abort();
}

// function: _ZSt22__uninitialized_copy_aIPiS0_S0_iET1_T_T0_S1_RSaIT2_E
int* int__std____uninitialized_copy_a_int___int___int___int_(int* v635, int* v636, int* v637, struct std__allocator_int_* v638) {
bb639: ;
  int* __first640;
  int* __last641;
  int* __result642;
  struct std__allocator_int_* unnamed643;
  int* __retval644;
  __first640 = v635;
  __last641 = v636;
  __result642 = v637;
  unnamed643 = v638;
    _Bool r645 = std__is_constant_evaluated();
    if (r645) {
      int* t646 = __first640;
      int* t647 = __last641;
      int* t648 = __result642;
      int* r649 = int__std____do_uninit_copy_int___int___int__(t646, t647, t648);
      __retval644 = r649;
      int* t650 = __retval644;
      return t650;
    }
    int* t651 = __first640;
    int* t652 = __last641;
    int* t653 = __result642;
    int* r654 = int__std__uninitialized_copy_int___int__(t651, t652, t653);
    __retval644 = r654;
    int* t655 = __retval644;
    return t655;
  abort();
}

// function: _ZNSt6vectorIiSaIiEEaSERKS1_
struct std__vector_int__std__allocator_int__* std__vector_int__std__allocator_int_____operator_(struct std__vector_int__std__allocator_int__* v656, struct std__vector_int__std__allocator_int__* v657) {
bb658: ;
  struct std__vector_int__std__allocator_int__* this659;
  struct std__vector_int__std__allocator_int__* __x660;
  struct std__vector_int__std__allocator_int__* __retval661;
  this659 = v656;
  __x660 = v657;
  struct std__vector_int__std__allocator_int__* t662 = this659;
    struct std__vector_int__std__allocator_int__* t663 = __x660;
    _Bool c664 = ((t663 != t662)) ? 1 : 0;
    if (c664) {
      unsigned long __xlen665;
        _Bool r666 = __gnu_cxx____alloc_traits_std__allocator_int___int____S_propagate_on_copy_assign();
        if (r666) {
            _Bool r667 = __gnu_cxx____alloc_traits_std__allocator_int___int____S_always_equal();
            _Bool u668 = !r667;
            _Bool ternary669;
            if (u668) {
              struct std___Vector_base_int__std__allocator_int__* base670 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t662 + 0);
              struct std__allocator_int_* r671 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base670);
              struct std__vector_int__std__allocator_int__* t672 = __x660;
              struct std___Vector_base_int__std__allocator_int__* base673 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t672 + 0);
              struct std__allocator_int_* r674 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(base673);
              _Bool r675 = std__operator__(r671, r674);
              _Bool u676 = !r675;
              ternary669 = (_Bool)u676;
            } else {
              _Bool c677 = 0;
              ternary669 = (_Bool)c677;
            }
            if (ternary669) {
              std__vector_int__std__allocator_int_____clear(t662);
              struct std___Vector_base_int__std__allocator_int__* base678 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t662 + 0);
              struct std___Vector_base_int__std__allocator_int__* base679 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t662 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base680 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base679->_M_impl) + 0);
              int* t681 = base680->_M_start;
              struct std___Vector_base_int__std__allocator_int__* base682 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t662 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base683 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base682->_M_impl) + 0);
              int* t684 = base683->_M_end_of_storage;
              struct std___Vector_base_int__std__allocator_int__* base685 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t662 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base686 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base685->_M_impl) + 0);
              int* t687 = base686->_M_start;
              long diff688 = t684 - t687;
              unsigned long cast689 = (unsigned long)diff688;
              std___Vector_base_int__std__allocator_int______M_deallocate(base678, t681, cast689);
              int* c690 = ((void*)0);
              struct std___Vector_base_int__std__allocator_int__* base691 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t662 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base692 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base691->_M_impl) + 0);
              base692->_M_start = c690;
              int* c693 = ((void*)0);
              struct std___Vector_base_int__std__allocator_int__* base694 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t662 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base695 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base694->_M_impl) + 0);
              base695->_M_finish = c693;
              int* c696 = ((void*)0);
              struct std___Vector_base_int__std__allocator_int__* base697 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t662 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base698 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base697->_M_impl) + 0);
              base698->_M_end_of_storage = c696;
            }
          struct std___Vector_base_int__std__allocator_int__* base699 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t662 + 0);
          struct std__allocator_int_* r700 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base699);
          struct std__vector_int__std__allocator_int__* t701 = __x660;
          struct std___Vector_base_int__std__allocator_int__* base702 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t701 + 0);
          struct std__allocator_int_* r703 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(base702);
          void_std____alloc_on_copy_std__allocator_int___(r700, r703);
        }
      struct std__vector_int__std__allocator_int__* t704 = __x660;
      unsigned long r705 = std__vector_int__std__allocator_int_____size___const(t704);
      __xlen665 = r705;
        unsigned long t706 = __xlen665;
        unsigned long r707 = std__vector_int__std__allocator_int_____capacity___const(t662);
        _Bool c708 = ((t706 > r707)) ? 1 : 0;
        if (c708) {
          int* __tmp709;
          struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp0710;
          struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp1711;
          unsigned long t712 = __xlen665;
          struct std__vector_int__std__allocator_int__* t713 = __x660;
          struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r714 = std__vector_int__std__allocator_int_____begin___const(t713);
          agg_tmp0710 = r714;
          struct std__vector_int__std__allocator_int__* t715 = __x660;
          struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r716 = std__vector_int__std__allocator_int_____end___const(t715);
          agg_tmp1711 = r716;
          struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t717 = agg_tmp0710;
          struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t718 = agg_tmp1711;
          int* r719 = int__std__vector_int__std__allocator_int______M_allocate_and_copy___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______(t662, t712, t717, t718);
          __tmp709 = r719;
          struct std___Vector_base_int__std__allocator_int__* base720 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t662 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base721 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base720->_M_impl) + 0);
          int* t722 = base721->_M_start;
          struct std___Vector_base_int__std__allocator_int__* base723 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t662 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base724 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base723->_M_impl) + 0);
          int* t725 = base724->_M_finish;
          struct std___Vector_base_int__std__allocator_int__* base726 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t662 + 0);
          struct std__allocator_int_* r727 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base726);
          void_std___Destroy_int___int_(t722, t725, r727);
          struct std___Vector_base_int__std__allocator_int__* base728 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t662 + 0);
          struct std___Vector_base_int__std__allocator_int__* base729 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t662 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base730 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base729->_M_impl) + 0);
          int* t731 = base730->_M_start;
          struct std___Vector_base_int__std__allocator_int__* base732 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t662 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base733 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base732->_M_impl) + 0);
          int* t734 = base733->_M_end_of_storage;
          struct std___Vector_base_int__std__allocator_int__* base735 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t662 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base736 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base735->_M_impl) + 0);
          int* t737 = base736->_M_start;
          long diff738 = t734 - t737;
          unsigned long cast739 = (unsigned long)diff738;
          std___Vector_base_int__std__allocator_int______M_deallocate(base728, t731, cast739);
          int* t740 = __tmp709;
          struct std___Vector_base_int__std__allocator_int__* base741 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t662 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base742 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base741->_M_impl) + 0);
          base742->_M_start = t740;
          struct std___Vector_base_int__std__allocator_int__* base743 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t662 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base744 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base743->_M_impl) + 0);
          int* t745 = base744->_M_start;
          unsigned long t746 = __xlen665;
          int* ptr747 = &(t745)[t746];
          struct std___Vector_base_int__std__allocator_int__* base748 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t662 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base749 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base748->_M_impl) + 0);
          base749->_M_end_of_storage = ptr747;
        } else {
            unsigned long r750 = std__vector_int__std__allocator_int_____size___const(t662);
            unsigned long t751 = __xlen665;
            _Bool c752 = ((r750 >= t751)) ? 1 : 0;
            if (c752) {
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2753;
              struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp3754;
              struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp4755;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp5756;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp6757;
              struct std__vector_int__std__allocator_int__* t758 = __x660;
              struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r759 = std__vector_int__std__allocator_int_____begin___const(t758);
              agg_tmp3754 = r759;
              struct std__vector_int__std__allocator_int__* t760 = __x660;
              struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r761 = std__vector_int__std__allocator_int_____end___const(t760);
              agg_tmp4755 = r761;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r762 = std__vector_int__std__allocator_int_____begin(t662);
              agg_tmp5756 = r762;
              struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t763 = agg_tmp3754;
              struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t764 = agg_tmp4755;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t765 = agg_tmp5756;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r766 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__copy___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t763, t764, t765);
              agg_tmp2753 = r766;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r767 = std__vector_int__std__allocator_int_____end(t662);
              agg_tmp6757 = r767;
              struct std___Vector_base_int__std__allocator_int__* base768 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t662 + 0);
              struct std__allocator_int_* r769 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base768);
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t770 = agg_tmp2753;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t771 = agg_tmp6757;
              void_std___Destroy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(t770, t771, r769);
            } else {
              struct std__vector_int__std__allocator_int__* t772 = __x660;
              struct std___Vector_base_int__std__allocator_int__* base773 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t772 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base774 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base773->_M_impl) + 0);
              int* t775 = base774->_M_start;
              struct std__vector_int__std__allocator_int__* t776 = __x660;
              struct std___Vector_base_int__std__allocator_int__* base777 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t776 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base778 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base777->_M_impl) + 0);
              int* t779 = base778->_M_start;
              unsigned long r780 = std__vector_int__std__allocator_int_____size___const(t662);
              int* ptr781 = &(t779)[r780];
              struct std___Vector_base_int__std__allocator_int__* base782 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t662 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base783 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base782->_M_impl) + 0);
              int* t784 = base783->_M_start;
              int* r785 = int__std__copy_int___int__(t775, ptr781, t784);
              struct std__vector_int__std__allocator_int__* t786 = __x660;
              struct std___Vector_base_int__std__allocator_int__* base787 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t786 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base788 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base787->_M_impl) + 0);
              int* t789 = base788->_M_start;
              unsigned long r790 = std__vector_int__std__allocator_int_____size___const(t662);
              int* ptr791 = &(t789)[r790];
              struct std__vector_int__std__allocator_int__* t792 = __x660;
              struct std___Vector_base_int__std__allocator_int__* base793 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t792 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base794 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base793->_M_impl) + 0);
              int* t795 = base794->_M_finish;
              struct std___Vector_base_int__std__allocator_int__* base796 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t662 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base797 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base796->_M_impl) + 0);
              int* t798 = base797->_M_finish;
              struct std___Vector_base_int__std__allocator_int__* base799 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t662 + 0);
              struct std__allocator_int_* r800 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base799);
              int* r801 = int__std____uninitialized_copy_a_int___int___int___int_(ptr791, t795, t798, r800);
            }
        }
      struct std___Vector_base_int__std__allocator_int__* base802 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t662 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base803 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base802->_M_impl) + 0);
      int* t804 = base803->_M_start;
      unsigned long t805 = __xlen665;
      int* ptr806 = &(t804)[t805];
      struct std___Vector_base_int__std__allocator_int__* base807 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t662 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base808 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base807->_M_impl) + 0);
      base808->_M_finish = ptr806;
    }
  __retval661 = t662;
  struct std__vector_int__std__allocator_int__* t809 = __retval661;
  return t809;
}

// function: _Z10swap_esbmcISt6vectorIiSaIiEEEvRT_S4_
void void_swap_esbmc_std__vector_int__std__allocator_int_____(struct std__vector_int__std__allocator_int__* v810, struct std__vector_int__std__allocator_int__* v811) {
bb812: ;
  struct std__vector_int__std__allocator_int__* a813;
  struct std__vector_int__std__allocator_int__* b814;
  struct std__vector_int__std__allocator_int__ c815;
  a813 = v810;
  b814 = v811;
  struct std__vector_int__std__allocator_int__* t816 = a813;
  std__vector_int__std__allocator_int_____vector(&c815, t816);
    struct std__vector_int__std__allocator_int__* t817 = b814;
    struct std__vector_int__std__allocator_int__* t818 = a813;
    struct std__vector_int__std__allocator_int__* r819 = std__vector_int__std__allocator_int_____operator_(t818, t817);
    struct std__vector_int__std__allocator_int__* t820 = b814;
    struct std__vector_int__std__allocator_int__* r821 = std__vector_int__std__allocator_int_____operator_(t820, &c815);
  {
    std__vector_int__std__allocator_int______vector(&c815);
  }
  return;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v822) {
bb823: ;
  struct std__vector_int__std__allocator_int__* this824;
  unsigned long __retval825;
  long __dif826;
  this824 = v822;
  struct std__vector_int__std__allocator_int__* t827 = this824;
  struct std___Vector_base_int__std__allocator_int__* base828 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t827 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base829 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base828->_M_impl) + 0);
  int* t830 = base829->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base831 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t827 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base832 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base831->_M_impl) + 0);
  int* t833 = base832->_M_start;
  long diff834 = t830 - t833;
  __dif826 = diff834;
    long t835 = __dif826;
    long c836 = 0;
    _Bool c837 = ((t835 < c836)) ? 1 : 0;
    if (c837) {
      __builtin_unreachable();
    }
  long t838 = __dif826;
  unsigned long cast839 = (unsigned long)t838;
  __retval825 = cast839;
  unsigned long t840 = __retval825;
  return t840;
}

// function: _ZNSt6vectorIiSaIiEEixEm
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* v841, unsigned long v842) {
bb843: ;
  struct std__vector_int__std__allocator_int__* this844;
  unsigned long __n845;
  int* __retval846;
  this844 = v841;
  __n845 = v842;
  struct std__vector_int__std__allocator_int__* t847 = this844;
    do {
          unsigned long t848 = __n845;
          unsigned long r849 = std__vector_int__std__allocator_int_____size___const(t847);
          _Bool c850 = ((t848 < r849)) ? 1 : 0;
          _Bool u851 = !c850;
          if (u851) {
            char* cast852 = (char*)&(_str_9);
            int c853 = 1263;
            char* cast854 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm);
            char* cast855 = (char*)&(_str_10);
            std____glibcxx_assert_fail(cast852, c853, cast854, cast855);
          }
      _Bool c856 = 0;
      if (!c856) break;
    } while (1);
  struct std___Vector_base_int__std__allocator_int__* base857 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t847 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base858 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base857->_M_impl) + 0);
  int* t859 = base858->_M_start;
  unsigned long t860 = __n845;
  int* ptr861 = &(t859)[t860];
  __retval846 = ptr861;
  int* t862 = __retval846;
  return t862;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v863, int v864) {
bb865: ;
  int __a866;
  int __b867;
  int __retval868;
  __a866 = v863;
  __b867 = v864;
  int t869 = __a866;
  int t870 = __b867;
  int b871 = t869 | t870;
  __retval868 = b871;
  int t872 = __retval868;
  return t872;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v873) {
bb874: ;
  struct std__basic_ios_char__std__char_traits_char__* this875;
  int __retval876;
  this875 = v873;
  struct std__basic_ios_char__std__char_traits_char__* t877 = this875;
  struct std__ios_base* base878 = (struct std__ios_base*)((char *)t877 + 0);
  int t879 = base878->_M_streambuf_state;
  __retval876 = t879;
  int t880 = __retval876;
  return t880;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v881, int v882) {
bb883: ;
  struct std__basic_ios_char__std__char_traits_char__* this884;
  int __state885;
  this884 = v881;
  __state885 = v882;
  struct std__basic_ios_char__std__char_traits_char__* t886 = this884;
  int r887 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t886);
  int t888 = __state885;
  int r889 = std__operator_(r887, t888);
  std__basic_ios_char__std__char_traits_char_____clear(t886, r889);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v890, char* v891) {
bb892: ;
  char* __c1893;
  char* __c2894;
  _Bool __retval895;
  __c1893 = v890;
  __c2894 = v891;
  char* t896 = __c1893;
  char t897 = *t896;
  int cast898 = (int)t897;
  char* t899 = __c2894;
  char t900 = *t899;
  int cast901 = (int)t900;
  _Bool c902 = ((cast898 == cast901)) ? 1 : 0;
  __retval895 = c902;
  _Bool t903 = __retval895;
  return t903;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v904) {
bb905: ;
  char* __p906;
  unsigned long __retval907;
  unsigned long __i908;
  __p906 = v904;
  unsigned long c909 = 0;
  __i908 = c909;
    char ref_tmp0910;
    while (1) {
      unsigned long t911 = __i908;
      char* t912 = __p906;
      char* ptr913 = &(t912)[t911];
      char c914 = 0;
      ref_tmp0910 = c914;
      _Bool r915 = __gnu_cxx__char_traits_char___eq(ptr913, &ref_tmp0910);
      _Bool u916 = !r915;
      if (!u916) break;
      unsigned long t917 = __i908;
      unsigned long u918 = t917 + 1;
      __i908 = u918;
    }
  unsigned long t919 = __i908;
  __retval907 = t919;
  unsigned long t920 = __retval907;
  return t920;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v921) {
bb922: ;
  char* __s923;
  unsigned long __retval924;
  __s923 = v921;
    _Bool r925 = std____is_constant_evaluated();
    if (r925) {
      char* t926 = __s923;
      unsigned long r927 = __gnu_cxx__char_traits_char___length(t926);
      __retval924 = r927;
      unsigned long t928 = __retval924;
      return t928;
    }
  char* t929 = __s923;
  unsigned long r930 = strlen(t929);
  __retval924 = r930;
  unsigned long t931 = __retval924;
  return t931;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v932, char* v933) {
bb934: ;
  struct std__basic_ostream_char__std__char_traits_char__* __out935;
  char* __s936;
  struct std__basic_ostream_char__std__char_traits_char__* __retval937;
  __out935 = v932;
  __s936 = v933;
    char* t938 = __s936;
    _Bool cast939 = (_Bool)t938;
    _Bool u940 = !cast939;
    if (u940) {
      struct std__basic_ostream_char__std__char_traits_char__* t941 = __out935;
      void** v942 = (void**)t941;
      void* v943 = *((void**)v942);
      unsigned char* cast944 = (unsigned char*)v943;
      long c945 = -24;
      unsigned char* ptr946 = &(cast944)[c945];
      long* cast947 = (long*)ptr946;
      long t948 = *cast947;
      unsigned char* cast949 = (unsigned char*)t941;
      unsigned char* ptr950 = &(cast949)[t948];
      struct std__basic_ostream_char__std__char_traits_char__* cast951 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr950;
      struct std__basic_ios_char__std__char_traits_char__* cast952 = (struct std__basic_ios_char__std__char_traits_char__*)cast951;
      int t953 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast952, t953);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t954 = __out935;
      char* t955 = __s936;
      char* t956 = __s936;
      unsigned long r957 = std__char_traits_char___length(t956);
      long cast958 = (long)r957;
      struct std__basic_ostream_char__std__char_traits_char__* r959 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t954, t955, cast958);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t960 = __out935;
  __retval937 = t960;
  struct std__basic_ostream_char__std__char_traits_char__* t961 = __retval937;
  return t961;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v962, int** v963) {
bb964: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this965;
  int** __i966;
  this965 = v962;
  __i966 = v963;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t967 = this965;
  int** t968 = __i966;
  int* t969 = *t968;
  t967->_M_current = t969;
  return;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v970) {
bb971: ;
  struct std__vector_int__std__allocator_int__* this972;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval973;
  this972 = v970;
  struct std__vector_int__std__allocator_int__* t974 = this972;
  struct std___Vector_base_int__std__allocator_int__* base975 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t974 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base976 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base975->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval973, &base976->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t977 = __retval973;
  return t977;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v978) {
bb979: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this980;
  int** __retval981;
  this980 = v978;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t982 = this980;
  __retval981 = &t982->_M_current;
  int** t983 = __retval981;
  return t983;
}

// function: _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v984, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v985) {
bb986: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs987;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs988;
  _Bool __retval989;
  __lhs987 = v984;
  __rhs988 = v985;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t990 = __lhs987;
  int** r991 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t990);
  int* t992 = *r991;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t993 = __rhs988;
  int** r994 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t993);
  int* t995 = *r994;
  _Bool c996 = ((t992 == t995)) ? 1 : 0;
  __retval989 = c996;
  _Bool t997 = __retval989;
  return t997;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v998) {
bb999: ;
  struct std__vector_int__std__allocator_int__* this1000;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval1001;
  this1000 = v998;
  struct std__vector_int__std__allocator_int__* t1002 = this1000;
  struct std___Vector_base_int__std__allocator_int__* base1003 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1002 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1004 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1003->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval1001, &base1004->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1005 = __retval1001;
  return t1005;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1006) {
bb1007: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this1008;
  int* __retval1009;
  this1008 = v1006;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1010 = this1008;
  int* t1011 = t1010->_M_current;
  __retval1009 = t1011;
  int* t1012 = __retval1009;
  return t1012;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1013) {
bb1014: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this1015;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval1016;
  this1015 = v1013;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1017 = this1015;
  int* t1018 = t1017->_M_current;
  int c1019 = 1;
  int* ptr1020 = &(t1018)[c1019];
  t1017->_M_current = ptr1020;
  __retval1016 = t1017;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1021 = __retval1016;
  return t1021;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v1022, void* v1023) {
bb1024: ;
  struct std__basic_ostream_char__std__char_traits_char__* this1025;
  void* __pf1026;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1027;
  this1025 = v1022;
  __pf1026 = v1023;
  struct std__basic_ostream_char__std__char_traits_char__* t1028 = this1025;
  void* t1029 = __pf1026;
  struct std__basic_ostream_char__std__char_traits_char__* r1030 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t1029)(t1028);
  __retval1027 = r1030;
  struct std__basic_ostream_char__std__char_traits_char__* t1031 = __retval1027;
  return t1031;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1032) {
bb1033: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os1034;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1035;
  __os1034 = v1032;
  struct std__basic_ostream_char__std__char_traits_char__* t1036 = __os1034;
  struct std__basic_ostream_char__std__char_traits_char__* r1037 = std__ostream__flush(t1036);
  __retval1035 = r1037;
  struct std__basic_ostream_char__std__char_traits_char__* t1038 = __retval1035;
  return t1038;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v1039) {
bb1040: ;
  struct std__ctype_char_* __f1041;
  struct std__ctype_char_* __retval1042;
  __f1041 = v1039;
    struct std__ctype_char_* t1043 = __f1041;
    _Bool cast1044 = (_Bool)t1043;
    _Bool u1045 = !cast1044;
    if (u1045) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t1046 = __f1041;
  __retval1042 = t1046;
  struct std__ctype_char_* t1047 = __retval1042;
  return t1047;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v1048, char v1049) {
bb1050: ;
  struct std__ctype_char_* this1051;
  char __c1052;
  char __retval1053;
  this1051 = v1048;
  __c1052 = v1049;
  struct std__ctype_char_* t1054 = this1051;
    char t1055 = t1054->_M_widen_ok;
    _Bool cast1056 = (_Bool)t1055;
    if (cast1056) {
      char t1057 = __c1052;
      unsigned char cast1058 = (unsigned char)t1057;
      unsigned long cast1059 = (unsigned long)cast1058;
      char t1060 = t1054->_M_widen[cast1059];
      __retval1053 = t1060;
      char t1061 = __retval1053;
      return t1061;
    }
  std__ctype_char____M_widen_init___const(t1054);
  char t1062 = __c1052;
  void** v1063 = (void**)t1054;
  void* v1064 = *((void**)v1063);
  char vcall1067 = (char)__VERIFIER_virtual_call_char_char(t1054, 6, t1062);
  __retval1053 = vcall1067;
  char t1068 = __retval1053;
  return t1068;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v1069, char v1070) {
bb1071: ;
  struct std__basic_ios_char__std__char_traits_char__* this1072;
  char __c1073;
  char __retval1074;
  this1072 = v1069;
  __c1073 = v1070;
  struct std__basic_ios_char__std__char_traits_char__* t1075 = this1072;
  struct std__ctype_char_* t1076 = t1075->_M_ctype;
  struct std__ctype_char_* r1077 = std__ctype_char__const__std____check_facet_std__ctype_char___(t1076);
  char t1078 = __c1073;
  char r1079 = std__ctype_char___widen_char__const(r1077, t1078);
  __retval1074 = r1079;
  char t1080 = __retval1074;
  return t1080;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1081) {
bb1082: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os1083;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1084;
  __os1083 = v1081;
  struct std__basic_ostream_char__std__char_traits_char__* t1085 = __os1083;
  struct std__basic_ostream_char__std__char_traits_char__* t1086 = __os1083;
  void** v1087 = (void**)t1086;
  void* v1088 = *((void**)v1087);
  unsigned char* cast1089 = (unsigned char*)v1088;
  long c1090 = -24;
  unsigned char* ptr1091 = &(cast1089)[c1090];
  long* cast1092 = (long*)ptr1091;
  long t1093 = *cast1092;
  unsigned char* cast1094 = (unsigned char*)t1086;
  unsigned char* ptr1095 = &(cast1094)[t1093];
  struct std__basic_ostream_char__std__char_traits_char__* cast1096 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1095;
  struct std__basic_ios_char__std__char_traits_char__* cast1097 = (struct std__basic_ios_char__std__char_traits_char__*)cast1096;
  char c1098 = 10;
  char r1099 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast1097, c1098);
  struct std__basic_ostream_char__std__char_traits_char__* r1100 = std__ostream__put(t1085, r1099);
  struct std__basic_ostream_char__std__char_traits_char__* r1101 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r1100);
  __retval1084 = r1101;
  struct std__basic_ostream_char__std__char_traits_char__* t1102 = __retval1084;
  return t1102;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v1103) {
bb1104: ;
  struct std__vector_int__std__allocator_int__* this1105;
  this1105 = v1103;
  struct std__vector_int__std__allocator_int__* t1106 = this1105;
    struct std___Vector_base_int__std__allocator_int__* base1107 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1106 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1108 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1107->_M_impl) + 0);
    int* t1109 = base1108->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base1110 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1106 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1111 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1110->_M_impl) + 0);
    int* t1112 = base1111->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base1113 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1106 + 0);
    struct std__allocator_int_* r1114 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1113);
    void_std___Destroy_int___int_(t1109, t1112, r1114);
  {
    struct std___Vector_base_int__std__allocator_int__* base1115 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1106 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base1115);
  }
  return;
}

// function: main
int main() {
bb1116: ;
  int __retval1117;
  int x1118;
  int y1119;
  struct std__vector_int__std__allocator_int__ first1120;
  struct std__allocator_int_ ref_tmp01121;
  struct std__vector_int__std__allocator_int__ second1122;
  struct std__allocator_int_ ref_tmp11123;
  int c1124 = 0;
  __retval1117 = c1124;
  int c1125 = 10;
  x1118 = c1125;
  int c1126 = 20;
  y1119 = c1126;
  void_swap_esbmc_int_(&x1118, &y1119);
  int t1127 = x1118;
  int c1128 = 20;
  _Bool c1129 = ((t1127 == c1128)) ? 1 : 0;
  if (c1129) {
  } else {
    char* cast1130 = (char*)&(_str);
    char* c1131 = (char*)_str_1;
    unsigned int c1132 = 25;
    char* cast1133 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast1130, c1131, c1132, cast1133);
  }
  int t1134 = y1119;
  int c1135 = 10;
  _Bool c1136 = ((t1134 == c1135)) ? 1 : 0;
  if (c1136) {
  } else {
    char* cast1137 = (char*)&(_str_2);
    char* c1138 = (char*)_str_1;
    unsigned int c1139 = 26;
    char* cast1140 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast1137, c1138, c1139, cast1140);
  }
  unsigned long c1141 = 4;
  std__allocator_int___allocator_2(&ref_tmp01121);
    std__vector_int__std__allocator_int_____vector_2(&first1120, c1141, &x1118, &ref_tmp01121);
  {
    std__allocator_int____allocator(&ref_tmp01121);
  }
    unsigned long c1142 = 6;
    std__allocator_int___allocator_2(&ref_tmp11123);
      std__vector_int__std__allocator_int_____vector_2(&second1122, c1142, &y1119, &ref_tmp11123);
    {
      std__allocator_int____allocator(&ref_tmp11123);
    }
      void_swap_esbmc_std__vector_int__std__allocator_int_____(&first1120, &second1122);
      unsigned long c1143 = 3;
      int* r1144 = std__vector_int__std__allocator_int_____operator__(&first1120, c1143);
      int t1145 = *r1144;
      int c1146 = 10;
      _Bool c1147 = ((t1145 == c1146)) ? 1 : 0;
      if (c1147) {
      } else {
        char* cast1148 = (char*)&(_str_3);
        char* c1149 = (char*)_str_1;
        unsigned int c1150 = 29;
        char* cast1151 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast1148, c1149, c1150, cast1151);
      }
      char* cast1152 = (char*)&(_str_4);
      struct std__basic_ostream_char__std__char_traits_char__* r1153 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1152);
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it1154;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp21155;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1156 = std__vector_int__std__allocator_int_____begin(&first1120);
        it1154 = r1156;
        while (1) {
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1158 = std__vector_int__std__allocator_int_____end(&first1120);
          ref_tmp21155 = r1158;
          _Bool r1159 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&it1154, &ref_tmp21155);
          _Bool u1160 = !r1159;
          if (!u1160) break;
          char* cast1161 = (char*)&(_str_5);
          struct std__basic_ostream_char__std__char_traits_char__* r1162 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1161);
          int* r1163 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&it1154);
          int t1164 = *r1163;
          struct std__basic_ostream_char__std__char_traits_char__* r1165 = std__ostream__operator__(r1162, t1164);
        for_step1157: ;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1166 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&it1154);
        }
      struct std__basic_ostream_char__std__char_traits_char__* r1167 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      int c1168 = 0;
      __retval1117 = c1168;
      int t1169 = __retval1117;
      int ret_val1170 = t1169;
      {
        std__vector_int__std__allocator_int______vector(&second1122);
      }
      {
        std__vector_int__std__allocator_int______vector(&first1120);
      }
      return ret_val1170;
  int t1171 = __retval1117;
  return t1171;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v1172) {
bb1173: ;
  struct std____new_allocator_int_* this1174;
  this1174 = v1172;
  struct std____new_allocator_int_* t1175 = this1174;
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v1176, unsigned long* v1177) {
bb1178: ;
  unsigned long* __a1179;
  unsigned long* __b1180;
  unsigned long* __retval1181;
  __a1179 = v1176;
  __b1180 = v1177;
    unsigned long* t1182 = __b1180;
    unsigned long t1183 = *t1182;
    unsigned long* t1184 = __a1179;
    unsigned long t1185 = *t1184;
    _Bool c1186 = ((t1183 < t1185)) ? 1 : 0;
    if (c1186) {
      unsigned long* t1187 = __b1180;
      __retval1181 = t1187;
      unsigned long* t1188 = __retval1181;
      return t1188;
    }
  unsigned long* t1189 = __a1179;
  __retval1181 = t1189;
  unsigned long* t1190 = __retval1181;
  return t1190;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v1191) {
bb1192: ;
  struct std__allocator_int_* __a1193;
  unsigned long __retval1194;
  unsigned long __diffmax1195;
  unsigned long __allocmax1196;
  __a1193 = v1191;
  unsigned long c1197 = 2305843009213693951;
  __diffmax1195 = c1197;
  unsigned long c1198 = 4611686018427387903;
  __allocmax1196 = c1198;
  unsigned long* r1199 = unsigned_long_const__std__min_unsigned_long_(&__diffmax1195, &__allocmax1196);
  unsigned long t1200 = *r1199;
  __retval1194 = t1200;
  unsigned long t1201 = __retval1194;
  return t1201;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v1202, struct std__allocator_int_* v1203) {
bb1204: ;
  struct std__allocator_int_* this1205;
  struct std__allocator_int_* __a1206;
  this1205 = v1202;
  __a1206 = v1203;
  struct std__allocator_int_* t1207 = this1205;
  struct std____new_allocator_int_* base1208 = (struct std____new_allocator_int_*)((char *)t1207 + 0);
  struct std__allocator_int_* t1209 = __a1206;
  struct std____new_allocator_int_* base1210 = (struct std____new_allocator_int_*)((char *)t1209 + 0);
  std____new_allocator_int_____new_allocator(base1208, base1210);
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long v1211, struct std__allocator_int_* v1212) {
bb1213: ;
  unsigned long __n1214;
  struct std__allocator_int_* __a1215;
  unsigned long __retval1216;
  __n1214 = v1211;
  __a1215 = v1212;
    struct std__allocator_int_ ref_tmp01217;
    _Bool tmp_exprcleanup1218;
    unsigned long t1219 = __n1214;
    struct std__allocator_int_* t1220 = __a1215;
    std__allocator_int___allocator(&ref_tmp01217, t1220);
      unsigned long r1221 = std__vector_int__std__allocator_int______S_max_size(&ref_tmp01217);
      _Bool c1222 = ((t1219 > r1221)) ? 1 : 0;
      tmp_exprcleanup1218 = c1222;
    {
      std__allocator_int____allocator(&ref_tmp01217);
    }
    _Bool t1223 = tmp_exprcleanup1218;
    if (t1223) {
      char* cast1224 = (char*)&(_str_6);
      std____throw_length_error(cast1224);
    }
  unsigned long t1225 = __n1214;
  __retval1216 = t1225;
  unsigned long t1226 = __retval1216;
  return t1226;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1227, struct std__allocator_int_* v1228) {
bb1229: ;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1230;
  struct std__allocator_int_* __a1231;
  this1230 = v1227;
  __a1231 = v1228;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1232 = this1230;
  struct std__allocator_int_* base1233 = (struct std__allocator_int_*)((char *)t1232 + 0);
  struct std__allocator_int_* t1234 = __a1231;
  std__allocator_int___allocator(base1233, t1234);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1235 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t1232 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base1235);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1236: ;
  _Bool __retval1237;
    _Bool c1238 = 0;
    __retval1237 = c1238;
    _Bool t1239 = __retval1237;
    return t1239;
  abort();
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v1240) {
bb1241: ;
  struct std____new_allocator_int_* this1242;
  unsigned long __retval1243;
  this1242 = v1240;
  struct std____new_allocator_int_* t1244 = this1242;
  unsigned long c1245 = 9223372036854775807;
  unsigned long c1246 = 4;
  unsigned long b1247 = c1245 / c1246;
  __retval1243 = b1247;
  unsigned long t1248 = __retval1243;
  return t1248;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v1249, unsigned long v1250, void* v1251) {
bb1252: ;
  struct std____new_allocator_int_* this1253;
  unsigned long __n1254;
  void* unnamed1255;
  int* __retval1256;
  this1253 = v1249;
  __n1254 = v1250;
  unnamed1255 = v1251;
  struct std____new_allocator_int_* t1257 = this1253;
    unsigned long t1258 = __n1254;
    unsigned long r1259 = std____new_allocator_int____M_max_size___const(t1257);
    _Bool c1260 = ((t1258 > r1259)) ? 1 : 0;
    if (c1260) {
        unsigned long t1261 = __n1254;
        unsigned long c1262 = -1;
        unsigned long c1263 = 4;
        unsigned long b1264 = c1262 / c1263;
        _Bool c1265 = ((t1261 > b1264)) ? 1 : 0;
        if (c1265) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c1266 = 4;
    unsigned long c1267 = 16;
    _Bool c1268 = ((c1266 > c1267)) ? 1 : 0;
    if (c1268) {
      unsigned long __al1269;
      unsigned long c1270 = 4;
      __al1269 = c1270;
      unsigned long t1271 = __n1254;
      unsigned long c1272 = 4;
      unsigned long b1273 = t1271 * c1272;
      unsigned long t1274 = __al1269;
      void* r1275 = operator_new_2(b1273, t1274);
      int* cast1276 = (int*)r1275;
      __retval1256 = cast1276;
      int* t1277 = __retval1256;
      return t1277;
    }
  unsigned long t1278 = __n1254;
  unsigned long c1279 = 4;
  unsigned long b1280 = t1278 * c1279;
  void* r1281 = operator_new(b1280);
  int* cast1282 = (int*)r1281;
  __retval1256 = cast1282;
  int* t1283 = __retval1256;
  return t1283;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v1284, unsigned long v1285) {
bb1286: ;
  struct std__allocator_int_* this1287;
  unsigned long __n1288;
  int* __retval1289;
  this1287 = v1284;
  __n1288 = v1285;
  struct std__allocator_int_* t1290 = this1287;
    _Bool r1291 = std____is_constant_evaluated();
    if (r1291) {
        unsigned long t1292 = __n1288;
        unsigned long c1293 = 4;
        unsigned long ovr1294;
        _Bool ovf1295 = __builtin_mul_overflow(t1292, c1293, &ovr1294);
        __n1288 = ovr1294;
        if (ovf1295) {
          std____throw_bad_array_new_length();
        }
      unsigned long t1296 = __n1288;
      void* r1297 = operator_new(t1296);
      int* cast1298 = (int*)r1297;
      __retval1289 = cast1298;
      int* t1299 = __retval1289;
      return t1299;
    }
  struct std____new_allocator_int_* base1300 = (struct std____new_allocator_int_*)((char *)t1290 + 0);
  unsigned long t1301 = __n1288;
  void* c1302 = ((void*)0);
  int* r1303 = std____new_allocator_int___allocate(base1300, t1301, c1302);
  __retval1289 = r1303;
  int* t1304 = __retval1289;
  return t1304;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v1305, unsigned long v1306) {
bb1307: ;
  struct std__allocator_int_* __a1308;
  unsigned long __n1309;
  int* __retval1310;
  __a1308 = v1305;
  __n1309 = v1306;
  struct std__allocator_int_* t1311 = __a1308;
  unsigned long t1312 = __n1309;
  int* r1313 = std__allocator_int___allocate(t1311, t1312);
  __retval1310 = r1313;
  int* t1314 = __retval1310;
  return t1314;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v1315, unsigned long v1316) {
bb1317: ;
  struct std___Vector_base_int__std__allocator_int__* this1318;
  unsigned long __n1319;
  int* __retval1320;
  this1318 = v1315;
  __n1319 = v1316;
  struct std___Vector_base_int__std__allocator_int__* t1321 = this1318;
  unsigned long t1322 = __n1319;
  unsigned long c1323 = 0;
  _Bool c1324 = ((t1322 != c1323)) ? 1 : 0;
  int* ternary1325;
  if (c1324) {
    struct std__allocator_int_* base1326 = (struct std__allocator_int_*)((char *)&(t1321->_M_impl) + 0);
    unsigned long t1327 = __n1319;
    int* r1328 = std__allocator_traits_std__allocator_int_____allocate(base1326, t1327);
    ternary1325 = (int*)r1328;
  } else {
    int* c1329 = ((void*)0);
    ternary1325 = (int*)c1329;
  }
  __retval1320 = ternary1325;
  int* t1330 = __retval1320;
  return t1330;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_M_create_storageEm
void std___Vector_base_int__std__allocator_int______M_create_storage(struct std___Vector_base_int__std__allocator_int__* v1331, unsigned long v1332) {
bb1333: ;
  struct std___Vector_base_int__std__allocator_int__* this1334;
  unsigned long __n1335;
  this1334 = v1331;
  __n1335 = v1332;
  struct std___Vector_base_int__std__allocator_int__* t1336 = this1334;
  unsigned long t1337 = __n1335;
  int* r1338 = std___Vector_base_int__std__allocator_int______M_allocate(t1336, t1337);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1339 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1336->_M_impl) + 0);
  base1339->_M_start = r1338;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1340 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1336->_M_impl) + 0);
  int* t1341 = base1340->_M_start;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1342 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1336->_M_impl) + 0);
  base1342->_M_finish = t1341;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1343 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1336->_M_impl) + 0);
  int* t1344 = base1343->_M_start;
  unsigned long t1345 = __n1335;
  int* ptr1346 = &(t1344)[t1345];
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1347 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1336->_M_impl) + 0);
  base1347->_M_end_of_storage = ptr1346;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1348) {
bb1349: ;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1350;
  this1350 = v1348;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1351 = this1350;
  {
    struct std__allocator_int_* base1352 = (struct std__allocator_int_*)((char *)t1351 + 0);
    std__allocator_int____allocator(base1352);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2EmRKS0_
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1353, unsigned long v1354, struct std__allocator_int_* v1355) {
bb1356: ;
  struct std___Vector_base_int__std__allocator_int__* this1357;
  unsigned long __n1358;
  struct std__allocator_int_* __a1359;
  this1357 = v1353;
  __n1358 = v1354;
  __a1359 = v1355;
  struct std___Vector_base_int__std__allocator_int__* t1360 = this1357;
  struct std__allocator_int_* t1361 = __a1359;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t1360->_M_impl, t1361);
    unsigned long t1362 = __n1358;
    std___Vector_base_int__std__allocator_int______M_create_storage(t1360, t1362);
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1363: ;
  _Bool __retval1364;
    _Bool c1365 = 0;
    __retval1364 = c1365;
    _Bool t1366 = __retval1364;
    return t1366;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v1367, int** v1368) {
bb1369: ;
  struct std___UninitDestroyGuard_int____void_* this1370;
  int** __first1371;
  this1370 = v1367;
  __first1371 = v1368;
  struct std___UninitDestroyGuard_int____void_* t1372 = this1370;
  int** t1373 = __first1371;
  int* t1374 = *t1373;
  t1372->_M_first = t1374;
  int** t1375 = __first1371;
  t1372->_M_cur = t1375;
  return;
}

// function: _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* v1376, int* v1377) {
bb1378: ;
  int* __location1379;
  int* __args1380;
  int* __retval1381;
  void* __loc1382;
  __location1379 = v1376;
  __args1380 = v1377;
  int* t1383 = __location1379;
  void* cast1384 = (void*)t1383;
  __loc1382 = cast1384;
    void* t1385 = __loc1382;
    int* cast1386 = (int*)t1385;
    int* t1387 = __args1380;
    int t1388 = *t1387;
    *cast1386 = t1388;
    __retval1381 = cast1386;
    int* t1389 = __retval1381;
    return t1389;
  abort();
}

// function: _ZSt10_ConstructIiJRKiEEvPT_DpOT0_
void void_std___Construct_int__int_const__(int* v1390, int* v1391) {
bb1392: ;
  int* __p1393;
  int* __args1394;
  __p1393 = v1390;
  __args1394 = v1391;
    _Bool r1395 = std____is_constant_evaluated();
    if (r1395) {
      int* t1396 = __p1393;
      int* t1397 = __args1394;
      int* r1398 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1396, t1397);
      return;
    }
  int* t1399 = __p1393;
  void* cast1400 = (void*)t1399;
  int* cast1401 = (int*)cast1400;
  int* t1402 = __args1394;
  int t1403 = *t1402;
  *cast1401 = t1403;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v1404) {
bb1405: ;
  struct std___UninitDestroyGuard_int____void_* this1406;
  this1406 = v1404;
  struct std___UninitDestroyGuard_int____void_* t1407 = this1406;
  int** c1408 = ((void*)0);
  t1407->_M_cur = c1408;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v1409) {
bb1410: ;
  struct std___UninitDestroyGuard_int____void_* this1411;
  this1411 = v1409;
  struct std___UninitDestroyGuard_int____void_* t1412 = this1411;
    int** t1413 = t1412->_M_cur;
    int** c1414 = ((void*)0);
    _Bool c1415 = ((t1413 != c1414)) ? 1 : 0;
    if (c1415) {
      int* t1416 = t1412->_M_first;
      int** t1417 = t1412->_M_cur;
      int* t1418 = *t1417;
      void_std___Destroy_int__(t1416, t1418);
    }
  return;
}

// function: _ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_
int* int__std____do_uninit_fill_n_int___unsigned_long__int_(int* v1419, unsigned long v1420, int* v1421) {
bb1422: ;
  int* __first1423;
  unsigned long __n1424;
  int* __x1425;
  int* __retval1426;
  struct std___UninitDestroyGuard_int____void_ __guard1427;
  __first1423 = v1419;
  __n1424 = v1420;
  __x1425 = v1421;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard1427, &__first1423);
        do {
              unsigned long t1428 = __n1424;
              unsigned long c1429 = 0;
              _Bool c1430 = ((t1428 >= c1429)) ? 1 : 0;
              _Bool u1431 = !c1430;
              if (u1431) {
                char* cast1432 = (char*)&(_str_7);
                int c1433 = 463;
                char* cast1434 = (char*)&(__PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_);
                char* cast1435 = (char*)&(_str_8);
                std____glibcxx_assert_fail(cast1432, c1433, cast1434, cast1435);
              }
          _Bool c1436 = 0;
          if (!c1436) break;
        } while (1);
      while (1) {
        unsigned long t1438 = __n1424;
        unsigned long u1439 = t1438 - 1;
        __n1424 = u1439;
        _Bool cast1440 = (_Bool)t1438;
        if (!cast1440) break;
        int* t1441 = __first1423;
        int* t1442 = __x1425;
        void_std___Construct_int__int_const__(t1441, t1442);
      for_step1437: ;
        int* t1443 = __first1423;
        int c1444 = 1;
        int* ptr1445 = &(t1443)[c1444];
        __first1423 = ptr1445;
      }
    std___UninitDestroyGuard_int___void___release(&__guard1427);
    int* t1446 = __first1423;
    __retval1426 = t1446;
    int* t1447 = __retval1426;
    int* ret_val1448 = t1447;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1427);
    }
    return ret_val1448;
  abort();
}

// function: _ZSt20uninitialized_fill_nIPimiET_S1_T0_RKT1_
int* int__std__uninitialized_fill_n_int___unsigned_long__int_(int* v1449, unsigned long v1450, int* v1451) {
bb1452: ;
  int* __first1453;
  unsigned long __n1454;
  int* __x1455;
  int* __retval1456;
  __first1453 = v1449;
  __n1454 = v1450;
  __x1455 = v1451;
  int* t1457 = __first1453;
  unsigned long t1458 = __n1454;
  int* t1459 = __x1455;
  int* r1460 = int__std____do_uninit_fill_n_int___unsigned_long__int_(t1457, t1458, t1459);
  __retval1456 = r1460;
  int* t1461 = __retval1456;
  return t1461;
}

// function: _ZSt24__uninitialized_fill_n_aIPimiiET_S1_T0_RKT1_RSaIT2_E
int* int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(int* v1462, unsigned long v1463, int* v1464, struct std__allocator_int_* v1465) {
bb1466: ;
  int* __first1467;
  unsigned long __n1468;
  int* __x1469;
  struct std__allocator_int_* unnamed1470;
  int* __retval1471;
  __first1467 = v1462;
  __n1468 = v1463;
  __x1469 = v1464;
  unnamed1470 = v1465;
    _Bool r1472 = std__is_constant_evaluated();
    if (r1472) {
      int* t1473 = __first1467;
      unsigned long t1474 = __n1468;
      int* t1475 = __x1469;
      int* r1476 = int__std____do_uninit_fill_n_int___unsigned_long__int_(t1473, t1474, t1475);
      __retval1471 = r1476;
      int* t1477 = __retval1471;
      return t1477;
    }
  int* t1478 = __first1467;
  unsigned long t1479 = __n1468;
  int* t1480 = __x1469;
  int* r1481 = int__std__uninitialized_fill_n_int___unsigned_long__int_(t1478, t1479, t1480);
  __retval1471 = r1481;
  int* t1482 = __retval1471;
  return t1482;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v1483) {
bb1484: ;
  struct std___Vector_base_int__std__allocator_int__* this1485;
  struct std__allocator_int_* __retval1486;
  this1485 = v1483;
  struct std___Vector_base_int__std__allocator_int__* t1487 = this1485;
  struct std__allocator_int_* base1488 = (struct std__allocator_int_*)((char *)&(t1487->_M_impl) + 0);
  __retval1486 = base1488;
  struct std__allocator_int_* t1489 = __retval1486;
  return t1489;
}

// function: _ZNSt6vectorIiSaIiEE18_M_fill_initializeEmRKi
void std__vector_int__std__allocator_int______M_fill_initialize(struct std__vector_int__std__allocator_int__* v1490, unsigned long v1491, int* v1492) {
bb1493: ;
  struct std__vector_int__std__allocator_int__* this1494;
  unsigned long __n1495;
  int* __value1496;
  this1494 = v1490;
  __n1495 = v1491;
  __value1496 = v1492;
  struct std__vector_int__std__allocator_int__* t1497 = this1494;
  struct std___Vector_base_int__std__allocator_int__* base1498 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1497 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1499 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1498->_M_impl) + 0);
  int* t1500 = base1499->_M_start;
  unsigned long t1501 = __n1495;
  int* t1502 = __value1496;
  struct std___Vector_base_int__std__allocator_int__* base1503 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1497 + 0);
  struct std__allocator_int_* r1504 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1503);
  int* r1505 = int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(t1500, t1501, t1502, r1504);
  struct std___Vector_base_int__std__allocator_int__* base1506 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1497 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1507 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1506->_M_impl) + 0);
  base1507->_M_finish = r1505;
  return;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v1508, int* v1509, unsigned long v1510) {
bb1511: ;
  struct std____new_allocator_int_* this1512;
  int* __p1513;
  unsigned long __n1514;
  this1512 = v1508;
  __p1513 = v1509;
  __n1514 = v1510;
  struct std____new_allocator_int_* t1515 = this1512;
    unsigned long c1516 = 4;
    unsigned long c1517 = 16;
    _Bool c1518 = ((c1516 > c1517)) ? 1 : 0;
    if (c1518) {
      int* t1519 = __p1513;
      void* cast1520 = (void*)t1519;
      unsigned long t1521 = __n1514;
      unsigned long c1522 = 4;
      unsigned long b1523 = t1521 * c1522;
      unsigned long c1524 = 4;
      operator_delete_3(cast1520, b1523, c1524);
      return;
    }
  int* t1525 = __p1513;
  void* cast1526 = (void*)t1525;
  unsigned long t1527 = __n1514;
  unsigned long c1528 = 4;
  unsigned long b1529 = t1527 * c1528;
  operator_delete_2(cast1526, b1529);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1530, int* v1531, unsigned long v1532) {
bb1533: ;
  struct std__allocator_int_* this1534;
  int* __p1535;
  unsigned long __n1536;
  this1534 = v1530;
  __p1535 = v1531;
  __n1536 = v1532;
  struct std__allocator_int_* t1537 = this1534;
    _Bool r1538 = std____is_constant_evaluated();
    if (r1538) {
      int* t1539 = __p1535;
      void* cast1540 = (void*)t1539;
      operator_delete(cast1540);
      return;
    }
  struct std____new_allocator_int_* base1541 = (struct std____new_allocator_int_*)((char *)t1537 + 0);
  int* t1542 = __p1535;
  unsigned long t1543 = __n1536;
  std____new_allocator_int___deallocate(base1541, t1542, t1543);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1544, int* v1545, unsigned long v1546) {
bb1547: ;
  struct std__allocator_int_* __a1548;
  int* __p1549;
  unsigned long __n1550;
  __a1548 = v1544;
  __p1549 = v1545;
  __n1550 = v1546;
  struct std__allocator_int_* t1551 = __a1548;
  int* t1552 = __p1549;
  unsigned long t1553 = __n1550;
  std__allocator_int___deallocate(t1551, t1552, t1553);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v1554, int* v1555, unsigned long v1556) {
bb1557: ;
  struct std___Vector_base_int__std__allocator_int__* this1558;
  int* __p1559;
  unsigned long __n1560;
  this1558 = v1554;
  __p1559 = v1555;
  __n1560 = v1556;
  struct std___Vector_base_int__std__allocator_int__* t1561 = this1558;
    int* t1562 = __p1559;
    _Bool cast1563 = (_Bool)t1562;
    if (cast1563) {
      struct std__allocator_int_* base1564 = (struct std__allocator_int_*)((char *)&(t1561->_M_impl) + 0);
      int* t1565 = __p1559;
      unsigned long t1566 = __n1560;
      std__allocator_traits_std__allocator_int_____deallocate(base1564, t1565, t1566);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1567) {
bb1568: ;
  struct std___Vector_base_int__std__allocator_int__* this1569;
  this1569 = v1567;
  struct std___Vector_base_int__std__allocator_int__* t1570 = this1569;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1571 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1570->_M_impl) + 0);
    int* t1572 = base1571->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1573 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1570->_M_impl) + 0);
    int* t1574 = base1573->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1575 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1570->_M_impl) + 0);
    int* t1576 = base1575->_M_start;
    long diff1577 = t1574 - t1576;
    unsigned long cast1578 = (unsigned long)diff1577;
    std___Vector_base_int__std__allocator_int______M_deallocate(t1570, t1572, cast1578);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t1570->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1579, struct std____new_allocator_int_* v1580) {
bb1581: ;
  struct std____new_allocator_int_* this1582;
  struct std____new_allocator_int_* unnamed1583;
  this1582 = v1579;
  unnamed1583 = v1580;
  struct std____new_allocator_int_* t1584 = this1582;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v1585) {
bb1586: ;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this1587;
  this1587 = v1585;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1588 = this1587;
  int* c1589 = ((void*)0);
  t1588->_M_start = c1589;
  int* c1590 = ((void*)0);
  t1588->_M_finish = c1590;
  int* c1591 = ((void*)0);
  t1588->_M_end_of_storage = c1591;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v1592) {
bb1593: ;
  int* __location1594;
  __location1594 = v1592;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1595, int* v1596) {
bb1597: ;
  int* __first1598;
  int* __last1599;
  __first1598 = v1595;
  __last1599 = v1596;
      _Bool r1600 = std____is_constant_evaluated();
      if (r1600) {
          while (1) {
            int* t1602 = __first1598;
            int* t1603 = __last1599;
            _Bool c1604 = ((t1602 != t1603)) ? 1 : 0;
            if (!c1604) break;
            int* t1605 = __first1598;
            void_std__destroy_at_int_(t1605);
          for_step1601: ;
            int* t1606 = __first1598;
            int c1607 = 1;
            int* ptr1608 = &(t1606)[c1607];
            __first1598 = ptr1608;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v1609, int* v1610, struct std__allocator_int_* v1611) {
bb1612: ;
  int* __first1613;
  int* __last1614;
  struct std__allocator_int_* unnamed1615;
  __first1613 = v1609;
  __last1614 = v1610;
  unnamed1615 = v1611;
  int* t1616 = __first1613;
  int* t1617 = __last1614;
  void_std___Destroy_int__(t1616, t1617);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE37select_on_container_copy_constructionERKS0_
struct std__allocator_int_ std__allocator_traits_std__allocator_int_____select_on_container_copy_construction(struct std__allocator_int_* v1618) {
bb1619: ;
  struct std__allocator_int_* __rhs1620;
  struct std__allocator_int_ __retval1621;
  __rhs1620 = v1618;
  struct std__allocator_int_* t1622 = __rhs1620;
  std__allocator_int___allocator(&__retval1621, t1622);
  struct std__allocator_int_ t1623 = __retval1621;
  return t1623;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIiEiE17_S_select_on_copyERKS1_
struct std__allocator_int_ __gnu_cxx____alloc_traits_std__allocator_int___int____S_select_on_copy(struct std__allocator_int_* v1624) {
bb1625: ;
  struct std__allocator_int_* __a1626;
  struct std__allocator_int_ __retval1627;
  __a1626 = v1624;
  struct std__allocator_int_* t1628 = __a1626;
  struct std__allocator_int_ r1629 = std__allocator_traits_std__allocator_int_____select_on_container_copy_construction(t1628);
  __retval1627 = r1629;
  struct std__allocator_int_ t1630 = __retval1627;
  return t1630;
}

// function: _ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Vector_base_int__std__allocator_int__* v1631) {
bb1632: ;
  struct std___Vector_base_int__std__allocator_int__* this1633;
  struct std__allocator_int_* __retval1634;
  this1633 = v1631;
  struct std___Vector_base_int__std__allocator_int__* t1635 = this1633;
  struct std__allocator_int_* base1636 = (struct std__allocator_int_*)((char *)&(t1635->_M_impl) + 0);
  __retval1634 = base1636;
  struct std__allocator_int_* t1637 = __retval1634;
  return t1637;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v1638) {
bb1639: ;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this1640;
  int** __retval1641;
  this1640 = v1638;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t1642 = this1640;
  __retval1641 = &t1642->_M_current;
  int** t1643 = __retval1641;
  return t1643;
}

// function: _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v1644, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v1645) {
bb1646: ;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __lhs1647;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __rhs1648;
  _Bool __retval1649;
  __lhs1647 = v1644;
  __rhs1648 = v1645;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t1650 = __lhs1647;
  int** r1651 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t1650);
  int* t1652 = *r1651;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t1653 = __rhs1648;
  int** r1654 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t1653);
  int* t1655 = *r1654;
  _Bool c1656 = ((t1652 == t1655)) ? 1 : 0;
  __retval1649 = c1656;
  _Bool t1657 = __retval1649;
  return t1657;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v1658) {
bb1659: ;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this1660;
  int* __retval1661;
  this1660 = v1658;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t1662 = this1660;
  int* t1663 = t1662->_M_current;
  __retval1661 = t1663;
  int* t1664 = __retval1661;
  return t1664;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v1665) {
bb1666: ;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this1667;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __retval1668;
  this1667 = v1665;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t1669 = this1667;
  int* t1670 = t1669->_M_current;
  int c1671 = 1;
  int* ptr1672 = &(t1670)[c1671];
  t1669->_M_current = ptr1672;
  __retval1668 = t1669;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t1673 = __retval1668;
  return t1673;
}

// function: _ZSt16__do_uninit_copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEES7_PiET1_T_T0_S9_
int* int__std____do_uninit_copy___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v1674, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v1675, int* v1676) {
bb1677: ;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __first1678;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __last1679;
  int* __result1680;
  int* __retval1681;
  struct std___UninitDestroyGuard_int____void_ __guard1682;
  __first1678 = v1674;
  __last1679 = v1675;
  __result1680 = v1676;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard1682, &__result1680);
      while (1) {
        _Bool r1684 = _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first1678, &__last1679);
        _Bool u1685 = !r1684;
        if (!u1685) break;
        int* t1686 = __result1680;
        int* r1687 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______operator____const(&__first1678);
        void_std___Construct_int__int_const__(t1686, r1687);
      for_step1683: ;
        struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* r1688 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______operator__(&__first1678);
        int* t1689 = __result1680;
        int c1690 = 1;
        int* ptr1691 = &(t1689)[c1690];
        __result1680 = ptr1691;
      }
    std___UninitDestroyGuard_int___void___release(&__guard1682);
    int* t1692 = __result1680;
    __retval1681 = t1692;
    int* t1693 = __retval1681;
    int* ret_val1694 = t1693;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1682);
    }
    return ret_val1694;
  abort();
}

// function: _ZN9__gnu_cxxmiIPKiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS9_SC_
long __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int_const___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v1695, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v1696) {
bb1697: ;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __lhs1698;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __rhs1699;
  long __retval1700;
  __lhs1698 = v1695;
  __rhs1699 = v1696;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t1701 = __lhs1698;
  int** r1702 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t1701);
  int* t1703 = *r1702;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t1704 = __rhs1699;
  int** r1705 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t1704);
  int* t1706 = *r1705;
  long diff1707 = t1703 - t1706;
  __retval1700 = diff1707;
  long t1708 = __retval1700;
  return t1708;
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v1709) {
bb1710: ;
  int* __it1711;
  int* __retval1712;
  __it1711 = v1709;
  int* t1713 = __it1711;
  __retval1712 = t1713;
  int* t1714 = __retval1712;
  return t1714;
}

// function: _ZSt12__niter_baseIPKiSt6vectorIiSaIiEEET_N9__gnu_cxx17__normal_iteratorIS5_T0_EE
int* int_const__std____niter_base_int_const___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v1715) {
bb1716: ;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __it1717;
  int* __retval1718;
  __it1717 = v1715;
  int** r1719 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(&__it1717);
  int* t1720 = *r1719;
  __retval1718 = t1720;
  int* t1721 = __retval1718;
  return t1721;
}

// function: _ZSt18uninitialized_copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiET0_T_SA_S9_
int* int__std__uninitialized_copy___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v1722, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v1723, int* v1724) {
bb1725: ;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __first1726;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __last1727;
  int* __result1728;
  int* __retval1729;
  __first1726 = v1722;
  __last1727 = v1723;
  __result1728 = v1724;
      long __n1730;
      long r1731 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int_const___std__vector_int__std__allocator_int_____(&__last1727, &__first1726);
      __n1730 = r1731;
        long t1732 = __n1730;
        long c1733 = 0;
        _Bool c1734 = ((t1732 > c1733)) ? 1 : 0;
        if (c1734) {
          struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp01735;
          int* t1736 = __result1728;
          int* r1737 = int__std____niter_base_int__(t1736);
          void* cast1738 = (void*)r1737;
          agg_tmp01735 = __first1726; // copy
          struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t1739 = agg_tmp01735;
          int* r1740 = int_const__std____niter_base_int_const___std__vector_int__std__allocator_int_____(t1739);
          void* cast1741 = (void*)r1740;
          long t1742 = __n1730;
          unsigned long cast1743 = (unsigned long)t1742;
          unsigned long c1744 = 4;
          unsigned long b1745 = cast1743 * c1744;
          void* r1746 = memcpy(cast1738, cast1741, b1745);
          long t1747 = __n1730;
          int* t1748 = __result1728;
          int* ptr1749 = &(t1748)[t1747];
          __result1728 = ptr1749;
        }
      int* t1750 = __result1728;
      __retval1729 = t1750;
      int* t1751 = __retval1729;
      return t1751;
  abort();
}

// function: _ZSt22__uninitialized_copy_aIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEES7_PiiET1_T_T0_S9_RSaIT2_E
int* int__std____uninitialized_copy_a___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______int___int_(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v1752, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v1753, int* v1754, struct std__allocator_int_* v1755) {
bb1756: ;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __first1757;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __last1758;
  int* __result1759;
  struct std__allocator_int_* unnamed1760;
  int* __retval1761;
  __first1757 = v1752;
  __last1758 = v1753;
  __result1759 = v1754;
  unnamed1760 = v1755;
    _Bool r1762 = std__is_constant_evaluated();
    if (r1762) {
      struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp01763;
      struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp11764;
      agg_tmp01763 = __first1757; // copy
      agg_tmp11764 = __last1758; // copy
      int* t1765 = __result1759;
      struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t1766 = agg_tmp01763;
      struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t1767 = agg_tmp11764;
      int* r1768 = int__std____do_uninit_copy___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______int__(t1766, t1767, t1765);
      __retval1761 = r1768;
      int* t1769 = __retval1761;
      return t1769;
    }
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp21770;
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp31771;
    agg_tmp21770 = __first1757; // copy
    agg_tmp31771 = __last1758; // copy
    int* t1772 = __result1759;
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t1773 = agg_tmp21770;
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t1774 = agg_tmp31771;
    int* r1775 = int__std__uninitialized_copy___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______int__(t1773, t1774, t1772);
    __retval1761 = r1775;
    int* t1776 = __retval1761;
    return t1776;
  abort();
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2ERKS2_
void __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v1777, int** v1778) {
bb1779: ;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this1780;
  int** __i1781;
  this1780 = v1777;
  __i1781 = v1778;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t1782 = this1780;
  int** t1783 = __i1781;
  int* t1784 = *t1783;
  t1782->_M_current = t1784;
  return;
}

// function: _ZNKSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin___const(struct std__vector_int__std__allocator_int__* v1785) {
bb1786: ;
  struct std__vector_int__std__allocator_int__* this1787;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __retval1788;
  this1787 = v1785;
  struct std__vector_int__std__allocator_int__* t1789 = this1787;
  struct std___Vector_base_int__std__allocator_int__* base1790 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1789 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1791 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1790->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(&__retval1788, &base1791->_M_start);
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t1792 = __retval1788;
  return t1792;
}

// function: _ZNKSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end___const(struct std__vector_int__std__allocator_int__* v1793) {
bb1794: ;
  struct std__vector_int__std__allocator_int__* this1795;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __retval1796;
  this1795 = v1793;
  struct std__vector_int__std__allocator_int__* t1797 = this1795;
  struct std___Vector_base_int__std__allocator_int__* base1798 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1797 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1799 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1798->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(&__retval1796, &base1799->_M_finish);
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t1800 = __retval1796;
  return t1800;
}

