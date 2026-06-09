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
struct __gnu_cxx____ops___Iter_less_iter { unsigned char __field0; };
struct __gnu_cxx____ops___Iter_less_val { unsigned char __field0; };
struct __gnu_cxx____ops___Val_less_iter { unsigned char __field0; };
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
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int __const_main_second[3] = {50, 10, 30};
int __const_main_first[3] = {5, 20, 25};
struct __gnu_cxx____ops___Iter_less_val __const__ZSt13__adjust_heapIPiliN9__gnu_cxx5__ops15_Iter_less_iterEEvT_T0_S5_T1_T2____cmp;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[10] = "v[0] == 5";
char _str_1[116] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm108-c++03/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[11] = "v[5] != 50";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[31] = "The resulting vector contains:";
char _str_4[2] = " ";
char _str_5[49] = "cannot create std::vector larger than max_size()";
char _str_6[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_7[19] = "__n < this->size()";
void std__allocator_int___allocator_2(struct std__allocator_int_* p0);
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, struct std__allocator_int_* p2);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
_Bool bool___gnu_cxx____ops___Iter_less_val__operator___int___int__int___int___const(struct __gnu_cxx____ops___Iter_less_val* p0, int* p1, int* p2);
void void_std____push_heap_int___long__int____gnu_cxx____ops___Iter_less_val_(int* p0, long p1, long p2, int p3, struct __gnu_cxx____ops___Iter_less_val* p4);
void void_std____adjust_heap_int___long__int____gnu_cxx____ops___Iter_less_iter_(int* p0, long p1, long p2, int p3, struct __gnu_cxx____ops___Iter_less_iter p4);
void void_std____make_heap_int_____gnu_cxx____ops___Iter_less_iter_(int* p0, int* p1, struct __gnu_cxx____ops___Iter_less_iter* p2);
_Bool bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(struct __gnu_cxx____ops___Iter_less_iter* p0, int* p1, int* p2);
void void_std____pop_heap_int_____gnu_cxx____ops___Iter_less_iter_(int* p0, int* p1, int* p2, struct __gnu_cxx____ops___Iter_less_iter* p3);
void void_std____heap_select_int_____gnu_cxx____ops___Iter_less_iter_(int* p0, int* p1, int* p2, struct __gnu_cxx____ops___Iter_less_iter p3);
void void_std____sort_heap_int_____gnu_cxx____ops___Iter_less_iter_(int* p0, int* p1, struct __gnu_cxx____ops___Iter_less_iter* p2);
void void_std____partial_sort_int_____gnu_cxx____ops___Iter_less_iter_(int* p0, int* p1, int* p2, struct __gnu_cxx____ops___Iter_less_iter p3);
void std__enable_if___and__std____not__std____is_tuple_like_int_____std__is_move_constructible_int___std__is_move_assignable_int_____value__void___type_std__swap_int_(int* p0, int* p1);
void void_std__iter_swap_int___int__(int* p0, int* p1);
void void_std____move_median_to_first_int_____gnu_cxx____ops___Iter_less_iter_(int* p0, int* p1, int* p2, int* p3, struct __gnu_cxx____ops___Iter_less_iter p4);
int* int__std____unguarded_partition_int_____gnu_cxx____ops___Iter_less_iter_(int* p0, int* p1, int* p2, struct __gnu_cxx____ops___Iter_less_iter p3);
int* int__std____unguarded_partition_pivot_int_____gnu_cxx____ops___Iter_less_iter_(int* p0, int* p1, struct __gnu_cxx____ops___Iter_less_iter p2);
void void_std____introsort_loop_int___long____gnu_cxx____ops___Iter_less_iter_(int* p0, int* p1, long p2, struct __gnu_cxx____ops___Iter_less_iter p3);
int int_std____countl_zero_unsigned_long_(unsigned long p0);
int int_std____bit_width_unsigned_long_(unsigned long p0);
long long_std____lg_long_(long p0);
int* int__std____niter_wrap_int__(int** p0, int* p1);
long std__iterator_traits_int____difference_type_std____distance_int__(int* p0, int* p1, struct std__random_access_iterator_tag p2);
long std__iterator_traits_int____difference_type_std__distance_int__(int* p0, int* p1);
void void_std____advance_int___long_(int** p0, long p1, struct std__random_access_iterator_tag p2);
void void_std__advance_int___long_(int** p0, long p1);
extern void* memmove(void* p0, void* p1, unsigned long p2);
void void_std____assign_one_true__int___int__(int** p0, int** p1);
int* int__std____copy_move_backward_a2_true__int___int__(int* p0, int* p1, int* p2);
int* int__std____copy_move_backward_a1_true__int___int__(int* p0, int* p1, int* p2);
int* int__std____niter_base_int__(int* p0);
int* int__std____copy_move_backward_a_true__int___int__(int* p0, int* p1, int* p2);
int* int__std____miter_base_int__(int* p0);
int* int__std__move_backward_int___int__(int* p0, int* p1, int* p2);
_Bool bool___gnu_cxx____ops___Val_less_iter__operator___int__int___int___int___const(struct __gnu_cxx____ops___Val_less_iter* p0, int* p1, int* p2);
void void_std____unguarded_linear_insert_int_____gnu_cxx____ops___Val_less_iter_(int* p0, struct __gnu_cxx____ops___Val_less_iter p1);
struct __gnu_cxx____ops___Val_less_iter __gnu_cxx____ops____val_comp_iter(struct __gnu_cxx____ops___Iter_less_iter p0);
void void_std____insertion_sort_int_____gnu_cxx____ops___Iter_less_iter_(int* p0, int* p1, struct __gnu_cxx____ops___Iter_less_iter p2);
void void_std____unguarded_insertion_sort_int_____gnu_cxx____ops___Iter_less_iter_(int* p0, int* p1, struct __gnu_cxx____ops___Iter_less_iter p2);
void void_std____final_insertion_sort_int_____gnu_cxx____ops___Iter_less_iter_(int* p0, int* p1, struct __gnu_cxx____ops___Iter_less_iter p2);
void void_std____sort_int_____gnu_cxx____ops___Iter_less_iter_(int* p0, int* p1, struct __gnu_cxx____ops___Iter_less_iter p2);
struct __gnu_cxx____ops___Iter_less_iter __gnu_cxx____ops____iter_less_iter();
void void_std__sort_int__(int* p0, int* p1);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, long p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____niter_wrap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, int* p1);
void void_std____assign_one_false__int___int__(int** p0, int** p1);
int* int__std____copy_move_a2_false__int___int___int__(int* p0, int* p1, int* p2);
int* int__std____copy_move_a1_false__int___int__(int* p0, int* p1, int* p2);
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
int* int__std____niter_base_int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____copy_move_a_false__int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(int* p0, int* p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__copy_int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(int* p0, int* p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____merge_int___int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(int* p0, int* p1, int* p2, int* p3, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p4, struct __gnu_cxx____ops___Iter_less_iter p5);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__merge_int___int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(int* p0, int* p1, int* p2, int* p3, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p4);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* p0);
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* p0);
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
void void_std___Destroy_int___int_(int* p0, int* p1, struct std__allocator_int_* p2);

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator_2(struct std__allocator_int_* v0) {
bb1:
  struct std__allocator_int_* this2;
  this2 = v0;
  struct std__allocator_int_* t3 = this2;
  struct std____new_allocator_int_* base4 = (struct std____new_allocator_int_*)((char *)t3 + 0);
  std____new_allocator_int_____new_allocator_2(base4);
  return;
}

// function: _ZNSt6vectorIiSaIiEEC2EmRKS0_
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* v5, unsigned long v6, struct std__allocator_int_* v7) {
bb8:
  struct std__vector_int__std__allocator_int__* this9;
  unsigned long __n10;
  struct std__allocator_int_* __a11;
  this9 = v5;
  __n10 = v6;
  __a11 = v7;
  struct std__vector_int__std__allocator_int__* t12 = this9;
  struct std___Vector_base_int__std__allocator_int__* base13 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t12 + 0);
  unsigned long t14 = __n10;
  struct std__allocator_int_* t15 = __a11;
  unsigned long r16 = std__vector_int__std__allocator_int______S_check_init_len(t14, t15);
  struct std__allocator_int_* t17 = __a11;
  std___Vector_base_int__std__allocator_int______Vector_base(base13, r16, t17);
    unsigned long t18 = __n10;
    std__vector_int__std__allocator_int______M_default_initialize(t12, t18);
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v19) {
bb20:
  struct std__allocator_int_* this21;
  this21 = v19;
  struct std__allocator_int_* t22 = this21;
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2Ev
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v23) {
bb24:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this25;
  this25 = v23;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t26 = this25;
  int* c27 = ((void*)0);
  t26->_M_current = c27;
  return;
}

// function: _ZNK9__gnu_cxx5__ops14_Iter_less_valclIPiiEEbT_RT0_
_Bool bool___gnu_cxx____ops___Iter_less_val__operator___int___int__int___int___const(struct __gnu_cxx____ops___Iter_less_val* v28, int* v29, int* v30) {
bb31:
  struct __gnu_cxx____ops___Iter_less_val* this32;
  int* __it33;
  int* __val34;
  _Bool __retval35;
  this32 = v28;
  __it33 = v29;
  __val34 = v30;
  struct __gnu_cxx____ops___Iter_less_val* t36 = this32;
  int* t37 = __it33;
  int t38 = *t37;
  int* t39 = __val34;
  int t40 = *t39;
  _Bool c41 = ((t38 < t40)) ? 1 : 0;
  __retval35 = c41;
  _Bool t42 = __retval35;
  return t42;
}

// function: _ZSt11__push_heapIPiliN9__gnu_cxx5__ops14_Iter_less_valEEvT_T0_S5_T1_RT2_
void void_std____push_heap_int___long__int____gnu_cxx____ops___Iter_less_val_(int* v43, long v44, long v45, int v46, struct __gnu_cxx____ops___Iter_less_val* v47) {
bb48:
  int* __first49;
  long __holeIndex50;
  long __topIndex51;
  int __value52;
  struct __gnu_cxx____ops___Iter_less_val* __comp53;
  long __parent54;
  __first49 = v43;
  __holeIndex50 = v44;
  __topIndex51 = v45;
  __value52 = v46;
  __comp53 = v47;
  long t55 = __holeIndex50;
  long c56 = 1;
  long b57 = t55 - c56;
  long c58 = 2;
  long b59 = b57 / c58;
  __parent54 = b59;
    while (1) {
      long t60 = __holeIndex50;
      long t61 = __topIndex51;
      _Bool c62 = ((t60 > t61)) ? 1 : 0;
      _Bool ternary63;
      if (c62) {
        struct __gnu_cxx____ops___Iter_less_val* t64 = __comp53;
        int* t65 = __first49;
        long t66 = __parent54;
        int* ptr67 = &(t65)[t66];
        _Bool r68 = bool___gnu_cxx____ops___Iter_less_val__operator___int___int__int___int___const(t64, ptr67, &__value52);
        ternary63 = (_Bool)r68;
      } else {
        _Bool c69 = 0;
        ternary63 = (_Bool)c69;
      }
      if (!ternary63) break;
        int* t70 = __first49;
        long t71 = __parent54;
        int* ptr72 = &(t70)[t71];
        int t73 = *ptr72;
        int* t74 = __first49;
        long t75 = __holeIndex50;
        int* ptr76 = &(t74)[t75];
        *ptr76 = t73;
        long t77 = __parent54;
        __holeIndex50 = t77;
        long t78 = __holeIndex50;
        long c79 = 1;
        long b80 = t78 - c79;
        long c81 = 2;
        long b82 = b80 / c81;
        __parent54 = b82;
    }
  int t83 = __value52;
  int* t84 = __first49;
  long t85 = __holeIndex50;
  int* ptr86 = &(t84)[t85];
  *ptr86 = t83;
  return;
}

// function: _ZSt13__adjust_heapIPiliN9__gnu_cxx5__ops15_Iter_less_iterEEvT_T0_S5_T1_T2_
void void_std____adjust_heap_int___long__int____gnu_cxx____ops___Iter_less_iter_(int* v87, long v88, long v89, int v90, struct __gnu_cxx____ops___Iter_less_iter v91) {
bb92:
  int* __first93;
  long __holeIndex94;
  long __len95;
  int __value96;
  struct __gnu_cxx____ops___Iter_less_iter __comp97;
  long __topIndex98;
  long __secondChild99;
  struct __gnu_cxx____ops___Iter_less_val __cmp100;
  __first93 = v87;
  __holeIndex94 = v88;
  __len95 = v89;
  __value96 = v90;
  __comp97 = v91;
  long t101 = __holeIndex94;
  __topIndex98 = t101;
  long t102 = __holeIndex94;
  __secondChild99 = t102;
    while (1) {
      long t103 = __secondChild99;
      long t104 = __len95;
      long c105 = 1;
      long b106 = t104 - c105;
      long c107 = 2;
      long b108 = b106 / c107;
      _Bool c109 = ((t103 < b108)) ? 1 : 0;
      if (!c109) break;
        long c110 = 2;
        long t111 = __secondChild99;
        long c112 = 1;
        long b113 = t111 + c112;
        long b114 = c110 * b113;
        __secondChild99 = b114;
          int* t115 = __first93;
          long t116 = __secondChild99;
          int* ptr117 = &(t115)[t116];
          int* t118 = __first93;
          long t119 = __secondChild99;
          long c120 = 1;
          long b121 = t119 - c120;
          int* ptr122 = &(t118)[b121];
          _Bool r123 = bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(&__comp97, ptr117, ptr122);
          if (r123) {
            long t124 = __secondChild99;
            long u125 = t124 - 1;
            __secondChild99 = u125;
          }
        int* t126 = __first93;
        long t127 = __secondChild99;
        int* ptr128 = &(t126)[t127];
        int t129 = *ptr128;
        int* t130 = __first93;
        long t131 = __holeIndex94;
        int* ptr132 = &(t130)[t131];
        *ptr132 = t129;
        long t133 = __secondChild99;
        __holeIndex94 = t133;
    }
    long t134 = __len95;
    long c135 = 1;
    long b136 = t134 & c135;
    long c137 = 0;
    _Bool c138 = ((b136 == c137)) ? 1 : 0;
    _Bool ternary139;
    if (c138) {
      long t140 = __secondChild99;
      long t141 = __len95;
      long c142 = 2;
      long b143 = t141 - c142;
      long c144 = 2;
      long b145 = b143 / c144;
      _Bool c146 = ((t140 == b145)) ? 1 : 0;
      ternary139 = (_Bool)c146;
    } else {
      _Bool c147 = 0;
      ternary139 = (_Bool)c147;
    }
    if (ternary139) {
      long c148 = 2;
      long t149 = __secondChild99;
      long c150 = 1;
      long b151 = t149 + c150;
      long b152 = c148 * b151;
      __secondChild99 = b152;
      int* t153 = __first93;
      long t154 = __secondChild99;
      long c155 = 1;
      long b156 = t154 - c155;
      int* ptr157 = &(t153)[b156];
      int t158 = *ptr157;
      int* t159 = __first93;
      long t160 = __holeIndex94;
      int* ptr161 = &(t159)[t160];
      *ptr161 = t158;
      long t162 = __secondChild99;
      long c163 = 1;
      long b164 = t162 - c163;
      __holeIndex94 = b164;
    }
  __cmp100 = *&__const__ZSt13__adjust_heapIPiliN9__gnu_cxx5__ops15_Iter_less_iterEEvT_T0_S5_T1_T2____cmp; // copy
  int* t165 = __first93;
  long t166 = __holeIndex94;
  long t167 = __topIndex98;
  int t168 = __value96;
  void_std____push_heap_int___long__int____gnu_cxx____ops___Iter_less_val_(t165, t166, t167, t168, &__cmp100);
  return;
}

// function: _ZSt11__make_heapIPiN9__gnu_cxx5__ops15_Iter_less_iterEEvT_S4_RT0_
void void_std____make_heap_int_____gnu_cxx____ops___Iter_less_iter_(int* v169, int* v170, struct __gnu_cxx____ops___Iter_less_iter* v171) {
bb172:
  int* __first173;
  int* __last174;
  struct __gnu_cxx____ops___Iter_less_iter* __comp175;
  long __len176;
  long __parent177;
  __first173 = v169;
  __last174 = v170;
  __comp175 = v171;
    int* t178 = __last174;
    int* t179 = __first173;
    long diff180 = t178 - t179;
    long c181 = 2;
    _Bool c182 = ((diff180 < c181)) ? 1 : 0;
    if (c182) {
      return;
    }
  int* t183 = __last174;
  int* t184 = __first173;
  long diff185 = t183 - t184;
  __len176 = diff185;
  long t186 = __len176;
  long c187 = 2;
  long b188 = t186 - c187;
  long c189 = 2;
  long b190 = b188 / c189;
  __parent177 = b190;
    while (1) {
      _Bool c191 = 1;
      if (!c191) break;
        int __value192;
        struct __gnu_cxx____ops___Iter_less_iter agg_tmp0193;
        int* t194 = __first173;
        long t195 = __parent177;
        int* ptr196 = &(t194)[t195];
        int t197 = *ptr196;
        __value192 = t197;
        int* t198 = __first173;
        long t199 = __parent177;
        long t200 = __len176;
        int t201 = __value192;
        struct __gnu_cxx____ops___Iter_less_iter* t202 = __comp175;
        struct __gnu_cxx____ops___Iter_less_iter t203 = agg_tmp0193;
        void_std____adjust_heap_int___long__int____gnu_cxx____ops___Iter_less_iter_(t198, t199, t200, t201, t203);
          long t204 = __parent177;
          long c205 = 0;
          _Bool c206 = ((t204 == c205)) ? 1 : 0;
          if (c206) {
            return;
          }
        long t207 = __parent177;
        long u208 = t207 - 1;
        __parent177 = u208;
    }
  return;
}

// function: _ZNK9__gnu_cxx5__ops15_Iter_less_iterclIPiS3_EEbT_T0_
_Bool bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(struct __gnu_cxx____ops___Iter_less_iter* v209, int* v210, int* v211) {
bb212:
  struct __gnu_cxx____ops___Iter_less_iter* this213;
  int* __it1214;
  int* __it2215;
  _Bool __retval216;
  this213 = v209;
  __it1214 = v210;
  __it2215 = v211;
  struct __gnu_cxx____ops___Iter_less_iter* t217 = this213;
  int* t218 = __it1214;
  int t219 = *t218;
  int* t220 = __it2215;
  int t221 = *t220;
  _Bool c222 = ((t219 < t221)) ? 1 : 0;
  __retval216 = c222;
  _Bool t223 = __retval216;
  return t223;
}

// function: _ZSt10__pop_heapIPiN9__gnu_cxx5__ops15_Iter_less_iterEEvT_S4_S4_RT0_
void void_std____pop_heap_int_____gnu_cxx____ops___Iter_less_iter_(int* v224, int* v225, int* v226, struct __gnu_cxx____ops___Iter_less_iter* v227) {
bb228:
  int* __first229;
  int* __last230;
  int* __result231;
  struct __gnu_cxx____ops___Iter_less_iter* __comp232;
  int __value233;
  struct __gnu_cxx____ops___Iter_less_iter agg_tmp0234;
  __first229 = v224;
  __last230 = v225;
  __result231 = v226;
  __comp232 = v227;
  int* t235 = __result231;
  int t236 = *t235;
  __value233 = t236;
  int* t237 = __first229;
  int t238 = *t237;
  int* t239 = __result231;
  *t239 = t238;
  int* t240 = __first229;
  long c241 = 0;
  int* t242 = __last230;
  int* t243 = __first229;
  long diff244 = t242 - t243;
  int t245 = __value233;
  struct __gnu_cxx____ops___Iter_less_iter* t246 = __comp232;
  struct __gnu_cxx____ops___Iter_less_iter t247 = agg_tmp0234;
  void_std____adjust_heap_int___long__int____gnu_cxx____ops___Iter_less_iter_(t240, c241, diff244, t245, t247);
  return;
}

// function: _ZSt13__heap_selectIPiN9__gnu_cxx5__ops15_Iter_less_iterEEvT_S4_S4_T0_
void void_std____heap_select_int_____gnu_cxx____ops___Iter_less_iter_(int* v248, int* v249, int* v250, struct __gnu_cxx____ops___Iter_less_iter v251) {
bb252:
  int* __first253;
  int* __middle254;
  int* __last255;
  struct __gnu_cxx____ops___Iter_less_iter __comp256;
  __first253 = v248;
  __middle254 = v249;
  __last255 = v250;
  __comp256 = v251;
  int* t257 = __first253;
  int* t258 = __middle254;
  void_std____make_heap_int_____gnu_cxx____ops___Iter_less_iter_(t257, t258, &__comp256);
    int* __i259;
    int* t260 = __middle254;
    __i259 = t260;
    while (1) {
      int* t262 = __i259;
      int* t263 = __last255;
      _Bool c264 = ((t262 < t263)) ? 1 : 0;
      if (!c264) break;
        int* t265 = __i259;
        int* t266 = __first253;
        _Bool r267 = bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(&__comp256, t265, t266);
        if (r267) {
          int* t268 = __first253;
          int* t269 = __middle254;
          int* t270 = __i259;
          void_std____pop_heap_int_____gnu_cxx____ops___Iter_less_iter_(t268, t269, t270, &__comp256);
        }
    for_step261: ;
      int* t271 = __i259;
      int c272 = 1;
      int* ptr273 = &(t271)[c272];
      __i259 = ptr273;
    }
  return;
}

// function: _ZSt11__sort_heapIPiN9__gnu_cxx5__ops15_Iter_less_iterEEvT_S4_RT0_
void void_std____sort_heap_int_____gnu_cxx____ops___Iter_less_iter_(int* v274, int* v275, struct __gnu_cxx____ops___Iter_less_iter* v276) {
bb277:
  int* __first278;
  int* __last279;
  struct __gnu_cxx____ops___Iter_less_iter* __comp280;
  __first278 = v274;
  __last279 = v275;
  __comp280 = v276;
    while (1) {
      int* t281 = __last279;
      int* t282 = __first278;
      long diff283 = t281 - t282;
      long c284 = 1;
      _Bool c285 = ((diff283 > c284)) ? 1 : 0;
      if (!c285) break;
        int* t286 = __last279;
        int c287 = -1;
        int* ptr288 = &(t286)[c287];
        __last279 = ptr288;
        int* t289 = __first278;
        int* t290 = __last279;
        int* t291 = __last279;
        struct __gnu_cxx____ops___Iter_less_iter* t292 = __comp280;
        void_std____pop_heap_int_____gnu_cxx____ops___Iter_less_iter_(t289, t290, t291, t292);
    }
  return;
}

// function: _ZSt14__partial_sortIPiN9__gnu_cxx5__ops15_Iter_less_iterEEvT_S4_S4_T0_
void void_std____partial_sort_int_____gnu_cxx____ops___Iter_less_iter_(int* v293, int* v294, int* v295, struct __gnu_cxx____ops___Iter_less_iter v296) {
bb297:
  int* __first298;
  int* __middle299;
  int* __last300;
  struct __gnu_cxx____ops___Iter_less_iter __comp301;
  struct __gnu_cxx____ops___Iter_less_iter agg_tmp0302;
  __first298 = v293;
  __middle299 = v294;
  __last300 = v295;
  __comp301 = v296;
  int* t303 = __first298;
  int* t304 = __middle299;
  int* t305 = __last300;
  struct __gnu_cxx____ops___Iter_less_iter t306 = agg_tmp0302;
  void_std____heap_select_int_____gnu_cxx____ops___Iter_less_iter_(t303, t304, t305, t306);
  int* t307 = __first298;
  int* t308 = __middle299;
  void_std____sort_heap_int_____gnu_cxx____ops___Iter_less_iter_(t307, t308, &__comp301);
  return;
}

// function: _ZSt4swapIiENSt9enable_ifIXsr6__and_ISt6__not_ISt15__is_tuple_likeIT_EESt21is_move_constructibleIS3_ESt18is_move_assignableIS3_EEE5valueEvE4typeERS3_SC_
void std__enable_if___and__std____not__std____is_tuple_like_int_____std__is_move_constructible_int___std__is_move_assignable_int_____value__void___type_std__swap_int_(int* v309, int* v310) {
bb311:
  int* __a312;
  int* __b313;
  int __tmp314;
  __a312 = v309;
  __b313 = v310;
  int* t315 = __a312;
  int t316 = *t315;
  __tmp314 = t316;
  int* t317 = __b313;
  int t318 = *t317;
  int* t319 = __a312;
  *t319 = t318;
  int t320 = __tmp314;
  int* t321 = __b313;
  *t321 = t320;
  return;
}

// function: _ZSt9iter_swapIPiS0_EvT_T0_
void void_std__iter_swap_int___int__(int* v322, int* v323) {
bb324:
  int* __a325;
  int* __b326;
  __a325 = v322;
  __b326 = v323;
  int* t327 = __a325;
  int* t328 = __b326;
  std__enable_if___and__std____not__std____is_tuple_like_int_____std__is_move_constructible_int___std__is_move_assignable_int_____value__void___type_std__swap_int_(t327, t328);
  return;
}

// function: _ZSt22__move_median_to_firstIPiN9__gnu_cxx5__ops15_Iter_less_iterEEvT_S4_S4_S4_T0_
void void_std____move_median_to_first_int_____gnu_cxx____ops___Iter_less_iter_(int* v329, int* v330, int* v331, int* v332, struct __gnu_cxx____ops___Iter_less_iter v333) {
bb334:
  int* __result335;
  int* __a336;
  int* __b337;
  int* __c338;
  struct __gnu_cxx____ops___Iter_less_iter __comp339;
  __result335 = v329;
  __a336 = v330;
  __b337 = v331;
  __c338 = v332;
  __comp339 = v333;
    int* t340 = __a336;
    int* t341 = __b337;
    _Bool r342 = bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(&__comp339, t340, t341);
    if (r342) {
        int* t343 = __b337;
        int* t344 = __c338;
        _Bool r345 = bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(&__comp339, t343, t344);
        if (r345) {
          int* t346 = __result335;
          int* t347 = __b337;
          void_std__iter_swap_int___int__(t346, t347);
        } else {
            int* t348 = __a336;
            int* t349 = __c338;
            _Bool r350 = bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(&__comp339, t348, t349);
            if (r350) {
              int* t351 = __result335;
              int* t352 = __c338;
              void_std__iter_swap_int___int__(t351, t352);
            } else {
              int* t353 = __result335;
              int* t354 = __a336;
              void_std__iter_swap_int___int__(t353, t354);
            }
        }
    } else {
        int* t355 = __a336;
        int* t356 = __c338;
        _Bool r357 = bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(&__comp339, t355, t356);
        if (r357) {
          int* t358 = __result335;
          int* t359 = __a336;
          void_std__iter_swap_int___int__(t358, t359);
        } else {
            int* t360 = __b337;
            int* t361 = __c338;
            _Bool r362 = bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(&__comp339, t360, t361);
            if (r362) {
              int* t363 = __result335;
              int* t364 = __c338;
              void_std__iter_swap_int___int__(t363, t364);
            } else {
              int* t365 = __result335;
              int* t366 = __b337;
              void_std__iter_swap_int___int__(t365, t366);
            }
        }
    }
  return;
}

// function: _ZSt21__unguarded_partitionIPiN9__gnu_cxx5__ops15_Iter_less_iterEET_S4_S4_S4_T0_
int* int__std____unguarded_partition_int_____gnu_cxx____ops___Iter_less_iter_(int* v367, int* v368, int* v369, struct __gnu_cxx____ops___Iter_less_iter v370) {
bb371:
  int* __first372;
  int* __last373;
  int* __pivot374;
  struct __gnu_cxx____ops___Iter_less_iter __comp375;
  int* __retval376;
  __first372 = v367;
  __last373 = v368;
  __pivot374 = v369;
  __comp375 = v370;
    while (1) {
      _Bool c377 = 1;
      if (!c377) break;
          while (1) {
            int* t378 = __first372;
            int* t379 = __pivot374;
            _Bool r380 = bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(&__comp375, t378, t379);
            if (!r380) break;
            int* t381 = __first372;
            int c382 = 1;
            int* ptr383 = &(t381)[c382];
            __first372 = ptr383;
          }
        int* t384 = __last373;
        int c385 = -1;
        int* ptr386 = &(t384)[c385];
        __last373 = ptr386;
          while (1) {
            int* t387 = __pivot374;
            int* t388 = __last373;
            _Bool r389 = bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(&__comp375, t387, t388);
            if (!r389) break;
            int* t390 = __last373;
            int c391 = -1;
            int* ptr392 = &(t390)[c391];
            __last373 = ptr392;
          }
          int* t393 = __first372;
          int* t394 = __last373;
          _Bool c395 = ((t393 < t394)) ? 1 : 0;
          _Bool u396 = !c395;
          if (u396) {
            int* t397 = __first372;
            __retval376 = t397;
            int* t398 = __retval376;
            int* ret_val399 = t398;
            return ret_val399;
          }
        int* t400 = __first372;
        int* t401 = __last373;
        void_std__iter_swap_int___int__(t400, t401);
        int* t402 = __first372;
        int c403 = 1;
        int* ptr404 = &(t402)[c403];
        __first372 = ptr404;
    }
  abort();
}

// function: _ZSt27__unguarded_partition_pivotIPiN9__gnu_cxx5__ops15_Iter_less_iterEET_S4_S4_T0_
int* int__std____unguarded_partition_pivot_int_____gnu_cxx____ops___Iter_less_iter_(int* v405, int* v406, struct __gnu_cxx____ops___Iter_less_iter v407) {
bb408:
  int* __first409;
  int* __last410;
  struct __gnu_cxx____ops___Iter_less_iter __comp411;
  int* __retval412;
  int* __mid413;
  struct __gnu_cxx____ops___Iter_less_iter agg_tmp0414;
  struct __gnu_cxx____ops___Iter_less_iter agg_tmp1415;
  __first409 = v405;
  __last410 = v406;
  __comp411 = v407;
  int* t416 = __first409;
  int* t417 = __last410;
  int* t418 = __first409;
  long diff419 = t417 - t418;
  long c420 = 2;
  long b421 = diff419 / c420;
  int* ptr422 = &(t416)[b421];
  __mid413 = ptr422;
  int* t423 = __first409;
  int* t424 = __first409;
  int c425 = 1;
  int* ptr426 = &(t424)[c425];
  int* t427 = __mid413;
  int* t428 = __last410;
  int c429 = -1;
  int* ptr430 = &(t428)[c429];
  struct __gnu_cxx____ops___Iter_less_iter t431 = agg_tmp0414;
  void_std____move_median_to_first_int_____gnu_cxx____ops___Iter_less_iter_(t423, ptr426, t427, ptr430, t431);
  int* t432 = __first409;
  int c433 = 1;
  int* ptr434 = &(t432)[c433];
  int* t435 = __last410;
  int* t436 = __first409;
  struct __gnu_cxx____ops___Iter_less_iter t437 = agg_tmp1415;
  int* r438 = int__std____unguarded_partition_int_____gnu_cxx____ops___Iter_less_iter_(ptr434, t435, t436, t437);
  __retval412 = r438;
  int* t439 = __retval412;
  return t439;
}

// function: _ZSt16__introsort_loopIPilN9__gnu_cxx5__ops15_Iter_less_iterEEvT_S4_T0_T1_
void void_std____introsort_loop_int___long____gnu_cxx____ops___Iter_less_iter_(int* v440, int* v441, long v442, struct __gnu_cxx____ops___Iter_less_iter v443) {
bb444:
  int* __first445;
  int* __last446;
  long __depth_limit447;
  struct __gnu_cxx____ops___Iter_less_iter __comp448;
  __first445 = v440;
  __last446 = v441;
  __depth_limit447 = v442;
  __comp448 = v443;
    while (1) {
      int* t449 = __last446;
      int* t450 = __first445;
      long diff451 = t449 - t450;
      long c452 = 16;
      _Bool c453 = ((diff451 > c452)) ? 1 : 0;
      if (!c453) break;
        int* __cut454;
        struct __gnu_cxx____ops___Iter_less_iter agg_tmp1455;
        struct __gnu_cxx____ops___Iter_less_iter agg_tmp2456;
          long t457 = __depth_limit447;
          long c458 = 0;
          _Bool c459 = ((t457 == c458)) ? 1 : 0;
          if (c459) {
            struct __gnu_cxx____ops___Iter_less_iter agg_tmp0460;
            int* t461 = __first445;
            int* t462 = __last446;
            int* t463 = __last446;
            struct __gnu_cxx____ops___Iter_less_iter t464 = agg_tmp0460;
            void_std____partial_sort_int_____gnu_cxx____ops___Iter_less_iter_(t461, t462, t463, t464);
            return;
          }
        long t465 = __depth_limit447;
        long u466 = t465 - 1;
        __depth_limit447 = u466;
        int* t467 = __first445;
        int* t468 = __last446;
        struct __gnu_cxx____ops___Iter_less_iter t469 = agg_tmp1455;
        int* r470 = int__std____unguarded_partition_pivot_int_____gnu_cxx____ops___Iter_less_iter_(t467, t468, t469);
        __cut454 = r470;
        int* t471 = __cut454;
        int* t472 = __last446;
        long t473 = __depth_limit447;
        struct __gnu_cxx____ops___Iter_less_iter t474 = agg_tmp2456;
        void_std____introsort_loop_int___long____gnu_cxx____ops___Iter_less_iter_(t471, t472, t473, t474);
        int* t475 = __cut454;
        __last446 = t475;
    }
  return;
}

// function: _ZSt13__countl_zeroImEiT_
int int_std____countl_zero_unsigned_long_(unsigned long v476) {
bb477:
  unsigned long __x478;
  int __retval479;
  int _Nd480;
  __x478 = v476;
  int c481 = 64;
  _Nd480 = c481;
  unsigned long t482 = __x478;
  unsigned long clz483 = (unsigned long)__builtin_clzll((unsigned long)t482);
  int cast484 = (int)clz483;
  unsigned long c485 = 0;
  _Bool c486 = ((t482 == c485)) ? 1 : 0;
  int t487 = _Nd480;
  int sel488 = c486 ? t487 : cast484;
  __retval479 = sel488;
  int t489 = __retval479;
  return t489;
}

// function: _ZSt11__bit_widthImEiT_
int int_std____bit_width_unsigned_long_(unsigned long v490) {
bb491:
  unsigned long __x492;
  int __retval493;
  int _Nd494;
  __x492 = v490;
  int c495 = 64;
  _Nd494 = c495;
  int t496 = _Nd494;
  unsigned long t497 = __x492;
  int r498 = int_std____countl_zero_unsigned_long_(t497);
  int b499 = t496 - r498;
  __retval493 = b499;
  int t500 = __retval493;
  return t500;
}

// function: _ZSt4__lgIlET_S0_
long long_std____lg_long_(long v501) {
bb502:
  long __n503;
  long __retval504;
  __n503 = v501;
  long t505 = __n503;
  unsigned long cast506 = (unsigned long)t505;
  int r507 = int_std____bit_width_unsigned_long_(cast506);
  int c508 = 1;
  int b509 = r507 - c508;
  long cast510 = (long)b509;
  __retval504 = cast510;
  long t511 = __retval504;
  return t511;
}

// function: _ZSt12__niter_wrapIPiET_RKS1_S1_
int* int__std____niter_wrap_int__(int** v512, int* v513) {
bb514:
  int** unnamed515;
  int* __res516;
  int* __retval517;
  unnamed515 = v512;
  __res516 = v513;
  int* t518 = __res516;
  __retval517 = t518;
  int* t519 = __retval517;
  return t519;
}

// function: _ZSt10__distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_St26random_access_iterator_tag
long std__iterator_traits_int____difference_type_std____distance_int__(int* v520, int* v521, struct std__random_access_iterator_tag v522) {
bb523:
  int* __first524;
  int* __last525;
  struct std__random_access_iterator_tag unnamed526;
  long __retval527;
  __first524 = v520;
  __last525 = v521;
  unnamed526 = v522;
  int* t528 = __last525;
  int* t529 = __first524;
  long diff530 = t528 - t529;
  __retval527 = diff530;
  long t531 = __retval527;
  return t531;
}

// function: _ZSt8distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_
long std__iterator_traits_int____difference_type_std__distance_int__(int* v532, int* v533) {
bb534:
  int* __first535;
  int* __last536;
  long __retval537;
  struct std__random_access_iterator_tag agg_tmp0538;
  __first535 = v532;
  __last536 = v533;
  int* t539 = __first535;
  int* t540 = __last536;
  struct std__random_access_iterator_tag r541 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first535);
  agg_tmp0538 = r541;
  struct std__random_access_iterator_tag t542 = agg_tmp0538;
  long r543 = std__iterator_traits_int____difference_type_std____distance_int__(t539, t540, t542);
  __retval537 = r543;
  long t544 = __retval537;
  return t544;
}

// function: _ZSt9__advanceIPilEvRT_T0_St26random_access_iterator_tag
void void_std____advance_int___long_(int** v545, long v546, struct std__random_access_iterator_tag v547) {
bb548:
  int** __i549;
  long __n550;
  struct std__random_access_iterator_tag unnamed551;
  __i549 = v545;
  __n550 = v546;
  unnamed551 = v547;
    long t552 = __n550;
    _Bool isconst553 = 0;
    _Bool ternary554;
    if (isconst553) {
      long t555 = __n550;
      long c556 = 1;
      _Bool c557 = ((t555 == c556)) ? 1 : 0;
      ternary554 = (_Bool)c557;
    } else {
      _Bool c558 = 0;
      ternary554 = (_Bool)c558;
    }
    if (ternary554) {
      int** t559 = __i549;
      int* t560 = *t559;
      int c561 = 1;
      int* ptr562 = &(t560)[c561];
      *t559 = ptr562;
    } else {
        long t563 = __n550;
        _Bool isconst564 = 0;
        _Bool ternary565;
        if (isconst564) {
          long t566 = __n550;
          long c567 = -1;
          _Bool c568 = ((t566 == c567)) ? 1 : 0;
          ternary565 = (_Bool)c568;
        } else {
          _Bool c569 = 0;
          ternary565 = (_Bool)c569;
        }
        if (ternary565) {
          int** t570 = __i549;
          int* t571 = *t570;
          int c572 = -1;
          int* ptr573 = &(t571)[c572];
          *t570 = ptr573;
        } else {
          long t574 = __n550;
          int** t575 = __i549;
          int* t576 = *t575;
          int* ptr577 = &(t576)[t574];
          *t575 = ptr577;
        }
    }
  return;
}

// function: _ZSt7advanceIPilEvRT_T0_
void void_std__advance_int___long_(int** v578, long v579) {
bb580:
  int** __i581;
  long __n582;
  long __d583;
  struct std__random_access_iterator_tag agg_tmp0584;
  __i581 = v578;
  __n582 = v579;
  long t585 = __n582;
  __d583 = t585;
  int** t586 = __i581;
  long t587 = __d583;
  int** t588 = __i581;
  struct std__random_access_iterator_tag r589 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(t588);
  agg_tmp0584 = r589;
  struct std__random_access_iterator_tag t590 = agg_tmp0584;
  void_std____advance_int___long_(t586, t587, t590);
  return;
}

// function: _ZSt12__assign_oneILb1EPiS0_EvRT0_RT1_
void void_std____assign_one_true__int___int__(int** v591, int** v592) {
bb593:
  int** __out594;
  int** __in595;
  __out594 = v591;
  __in595 = v592;
    int** t596 = __in595;
    int* t597 = *t596;
    int t598 = *t597;
    int** t599 = __out594;
    int* t600 = *t599;
    *t600 = t598;
  return;
}

// function: _ZSt23__copy_move_backward_a2ILb1EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_backward_a2_true__int___int__(int* v601, int* v602, int* v603) {
bb604:
  int* __first605;
  int* __last606;
  int* __result607;
  int* __retval608;
  __first605 = v601;
  __last606 = v602;
  __result607 = v603;
      _Bool r609 = std__is_constant_evaluated();
      if (r609) {
      } else {
          long __n610;
          int* t611 = __first605;
          int* t612 = __last606;
          long r613 = std__iterator_traits_int____difference_type_std__distance_int__(t611, t612);
          __n610 = r613;
          long t614 = __n610;
          long u615 = -t614;
          void_std__advance_int___long_(&__result607, u615);
            long t616 = __n610;
            long c617 = 1;
            _Bool c618 = ((t616 > c617)) ? 1 : 0;
            if (c618) {
              int* t619 = __result607;
              void* cast620 = (void*)t619;
              int* t621 = __first605;
              void* cast622 = (void*)t621;
              long t623 = __n610;
              unsigned long cast624 = (unsigned long)t623;
              unsigned long c625 = 4;
              unsigned long b626 = cast624 * c625;
              void* r627 = memmove(cast620, cast622, b626);
            } else {
                long t628 = __n610;
                long c629 = 1;
                _Bool c630 = ((t628 == c629)) ? 1 : 0;
                if (c630) {
                  void_std____assign_one_true__int___int__(&__result607, &__first605);
                }
            }
          int* t631 = __result607;
          __retval608 = t631;
          int* t632 = __retval608;
          return t632;
      }
    while (1) {
      int* t633 = __first605;
      int* t634 = __last606;
      _Bool c635 = ((t633 != t634)) ? 1 : 0;
      if (!c635) break;
        int* t636 = __last606;
        int c637 = -1;
        int* ptr638 = &(t636)[c637];
        __last606 = ptr638;
        int* t639 = __result607;
        int c640 = -1;
        int* ptr641 = &(t639)[c640];
        __result607 = ptr641;
        void_std____assign_one_true__int___int__(&__result607, &__last606);
    }
  int* t642 = __result607;
  __retval608 = t642;
  int* t643 = __retval608;
  return t643;
}

// function: _ZSt23__copy_move_backward_a1ILb1EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_backward_a1_true__int___int__(int* v644, int* v645, int* v646) {
bb647:
  int* __first648;
  int* __last649;
  int* __result650;
  int* __retval651;
  __first648 = v644;
  __last649 = v645;
  __result650 = v646;
  int* t652 = __first648;
  int* t653 = __last649;
  int* t654 = __result650;
  int* r655 = int__std____copy_move_backward_a2_true__int___int__(t652, t653, t654);
  __retval651 = r655;
  int* t656 = __retval651;
  return t656;
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v657) {
bb658:
  int* __it659;
  int* __retval660;
  __it659 = v657;
  int* t661 = __it659;
  __retval660 = t661;
  int* t662 = __retval660;
  return t662;
}

// function: _ZSt22__copy_move_backward_aILb1EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_backward_a_true__int___int__(int* v663, int* v664, int* v665) {
bb666:
  int* __first667;
  int* __last668;
  int* __result669;
  int* __retval670;
  __first667 = v663;
  __last668 = v664;
  __result669 = v665;
  int* t671 = __first667;
  int* r672 = int__std____niter_base_int__(t671);
  int* t673 = __last668;
  int* r674 = int__std____niter_base_int__(t673);
  int* t675 = __result669;
  int* r676 = int__std____niter_base_int__(t675);
  int* r677 = int__std____copy_move_backward_a1_true__int___int__(r672, r674, r676);
  int* r678 = int__std____niter_wrap_int__(&__result669, r677);
  __retval670 = r678;
  int* t679 = __retval670;
  return t679;
}

// function: _ZSt12__miter_baseIPiET_S1_
int* int__std____miter_base_int__(int* v680) {
bb681:
  int* __it682;
  int* __retval683;
  __it682 = v680;
  int* t684 = __it682;
  __retval683 = t684;
  int* t685 = __retval683;
  return t685;
}

// function: _ZSt13move_backwardIPiS0_ET0_T_S2_S1_
int* int__std__move_backward_int___int__(int* v686, int* v687, int* v688) {
bb689:
  int* __first690;
  int* __last691;
  int* __result692;
  int* __retval693;
  __first690 = v686;
  __last691 = v687;
  __result692 = v688;
  int* t694 = __first690;
  int* r695 = int__std____miter_base_int__(t694);
  int* t696 = __last691;
  int* r697 = int__std____miter_base_int__(t696);
  int* t698 = __result692;
  int* r699 = int__std____copy_move_backward_a_true__int___int__(r695, r697, t698);
  __retval693 = r699;
  int* t700 = __retval693;
  return t700;
}

// function: _ZNK9__gnu_cxx5__ops14_Val_less_iterclIiPiEEbRT_T0_
_Bool bool___gnu_cxx____ops___Val_less_iter__operator___int__int___int___int___const(struct __gnu_cxx____ops___Val_less_iter* v701, int* v702, int* v703) {
bb704:
  struct __gnu_cxx____ops___Val_less_iter* this705;
  int* __val706;
  int* __it707;
  _Bool __retval708;
  this705 = v701;
  __val706 = v702;
  __it707 = v703;
  struct __gnu_cxx____ops___Val_less_iter* t709 = this705;
  int* t710 = __val706;
  int t711 = *t710;
  int* t712 = __it707;
  int t713 = *t712;
  _Bool c714 = ((t711 < t713)) ? 1 : 0;
  __retval708 = c714;
  _Bool t715 = __retval708;
  return t715;
}

// function: _ZSt25__unguarded_linear_insertIPiN9__gnu_cxx5__ops14_Val_less_iterEEvT_T0_
void void_std____unguarded_linear_insert_int_____gnu_cxx____ops___Val_less_iter_(int* v716, struct __gnu_cxx____ops___Val_less_iter v717) {
bb718:
  int* __last719;
  struct __gnu_cxx____ops___Val_less_iter __comp720;
  int __val721;
  int* __next722;
  __last719 = v716;
  __comp720 = v717;
  int* t723 = __last719;
  int t724 = *t723;
  __val721 = t724;
  int* t725 = __last719;
  __next722 = t725;
  int* t726 = __next722;
  int c727 = -1;
  int* ptr728 = &(t726)[c727];
  __next722 = ptr728;
    while (1) {
      int* t729 = __next722;
      _Bool r730 = bool___gnu_cxx____ops___Val_less_iter__operator___int__int___int___int___const(&__comp720, &__val721, t729);
      if (!r730) break;
        int* t731 = __next722;
        int t732 = *t731;
        int* t733 = __last719;
        *t733 = t732;
        int* t734 = __next722;
        __last719 = t734;
        int* t735 = __next722;
        int c736 = -1;
        int* ptr737 = &(t735)[c736];
        __next722 = ptr737;
    }
  int t738 = __val721;
  int* t739 = __last719;
  *t739 = t738;
  return;
}

// function: _ZN9__gnu_cxx5__ops15__val_comp_iterENS0_15_Iter_less_iterE
struct __gnu_cxx____ops___Val_less_iter __gnu_cxx____ops____val_comp_iter(struct __gnu_cxx____ops___Iter_less_iter v740) {
bb741:
  struct __gnu_cxx____ops___Iter_less_iter unnamed742;
  struct __gnu_cxx____ops___Val_less_iter __retval743;
  unnamed742 = v740;
  struct __gnu_cxx____ops___Val_less_iter t744 = __retval743;
  return t744;
}

// function: _ZSt16__insertion_sortIPiN9__gnu_cxx5__ops15_Iter_less_iterEEvT_S4_T0_
void void_std____insertion_sort_int_____gnu_cxx____ops___Iter_less_iter_(int* v745, int* v746, struct __gnu_cxx____ops___Iter_less_iter v747) {
bb748:
  int* __first749;
  int* __last750;
  struct __gnu_cxx____ops___Iter_less_iter __comp751;
  __first749 = v745;
  __last750 = v746;
  __comp751 = v747;
    int* t752 = __first749;
    int* t753 = __last750;
    _Bool c754 = ((t752 == t753)) ? 1 : 0;
    if (c754) {
      return;
    }
    int* __i755;
    int* t756 = __first749;
    int c757 = 1;
    int* ptr758 = &(t756)[c757];
    __i755 = ptr758;
    while (1) {
      int* t760 = __i755;
      int* t761 = __last750;
      _Bool c762 = ((t760 != t761)) ? 1 : 0;
      if (!c762) break;
          int* t763 = __i755;
          int* t764 = __first749;
          _Bool r765 = bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(&__comp751, t763, t764);
          if (r765) {
            int __val766;
            int* t767 = __i755;
            int t768 = *t767;
            __val766 = t768;
            int* t769 = __first749;
            int* t770 = __i755;
            int* t771 = __i755;
            int c772 = 1;
            int* ptr773 = &(t771)[c772];
            int* r774 = int__std__move_backward_int___int__(t769, t770, ptr773);
            int t775 = __val766;
            int* t776 = __first749;
            *t776 = t775;
          } else {
            struct __gnu_cxx____ops___Val_less_iter agg_tmp0777;
            struct __gnu_cxx____ops___Iter_less_iter agg_tmp1778;
            int* t779 = __i755;
            struct __gnu_cxx____ops___Iter_less_iter t780 = agg_tmp1778;
            struct __gnu_cxx____ops___Val_less_iter r781 = __gnu_cxx____ops____val_comp_iter(t780);
            agg_tmp0777 = r781;
            struct __gnu_cxx____ops___Val_less_iter t782 = agg_tmp0777;
            void_std____unguarded_linear_insert_int_____gnu_cxx____ops___Val_less_iter_(t779, t782);
          }
    for_step759: ;
      int* t783 = __i755;
      int c784 = 1;
      int* ptr785 = &(t783)[c784];
      __i755 = ptr785;
    }
  return;
}

// function: _ZSt26__unguarded_insertion_sortIPiN9__gnu_cxx5__ops15_Iter_less_iterEEvT_S4_T0_
void void_std____unguarded_insertion_sort_int_____gnu_cxx____ops___Iter_less_iter_(int* v786, int* v787, struct __gnu_cxx____ops___Iter_less_iter v788) {
bb789:
  int* __first790;
  int* __last791;
  struct __gnu_cxx____ops___Iter_less_iter __comp792;
  __first790 = v786;
  __last791 = v787;
  __comp792 = v788;
    int* __i793;
    struct __gnu_cxx____ops___Val_less_iter agg_tmp0794;
    struct __gnu_cxx____ops___Iter_less_iter agg_tmp1795;
    int* t796 = __first790;
    __i793 = t796;
    while (1) {
      int* t798 = __i793;
      int* t799 = __last791;
      _Bool c800 = ((t798 != t799)) ? 1 : 0;
      if (!c800) break;
      int* t801 = __i793;
      struct __gnu_cxx____ops___Iter_less_iter t802 = agg_tmp1795;
      struct __gnu_cxx____ops___Val_less_iter r803 = __gnu_cxx____ops____val_comp_iter(t802);
      agg_tmp0794 = r803;
      struct __gnu_cxx____ops___Val_less_iter t804 = agg_tmp0794;
      void_std____unguarded_linear_insert_int_____gnu_cxx____ops___Val_less_iter_(t801, t804);
    for_step797: ;
      int* t805 = __i793;
      int c806 = 1;
      int* ptr807 = &(t805)[c806];
      __i793 = ptr807;
    }
  return;
}

// function: _ZSt22__final_insertion_sortIPiN9__gnu_cxx5__ops15_Iter_less_iterEEvT_S4_T0_
void void_std____final_insertion_sort_int_____gnu_cxx____ops___Iter_less_iter_(int* v808, int* v809, struct __gnu_cxx____ops___Iter_less_iter v810) {
bb811:
  int* __first812;
  int* __last813;
  struct __gnu_cxx____ops___Iter_less_iter __comp814;
  __first812 = v808;
  __last813 = v809;
  __comp814 = v810;
    int* t815 = __last813;
    int* t816 = __first812;
    long diff817 = t815 - t816;
    long c818 = 16;
    _Bool c819 = ((diff817 > c818)) ? 1 : 0;
    if (c819) {
      struct __gnu_cxx____ops___Iter_less_iter agg_tmp0820;
      struct __gnu_cxx____ops___Iter_less_iter agg_tmp1821;
      int* t822 = __first812;
      int* t823 = __first812;
      int c824 = 16;
      int* ptr825 = &(t823)[c824];
      struct __gnu_cxx____ops___Iter_less_iter t826 = agg_tmp0820;
      void_std____insertion_sort_int_____gnu_cxx____ops___Iter_less_iter_(t822, ptr825, t826);
      int* t827 = __first812;
      int c828 = 16;
      int* ptr829 = &(t827)[c828];
      int* t830 = __last813;
      struct __gnu_cxx____ops___Iter_less_iter t831 = agg_tmp1821;
      void_std____unguarded_insertion_sort_int_____gnu_cxx____ops___Iter_less_iter_(ptr829, t830, t831);
    } else {
      struct __gnu_cxx____ops___Iter_less_iter agg_tmp2832;
      int* t833 = __first812;
      int* t834 = __last813;
      struct __gnu_cxx____ops___Iter_less_iter t835 = agg_tmp2832;
      void_std____insertion_sort_int_____gnu_cxx____ops___Iter_less_iter_(t833, t834, t835);
    }
  return;
}

// function: _ZSt6__sortIPiN9__gnu_cxx5__ops15_Iter_less_iterEEvT_S4_T0_
void void_std____sort_int_____gnu_cxx____ops___Iter_less_iter_(int* v836, int* v837, struct __gnu_cxx____ops___Iter_less_iter v838) {
bb839:
  int* __first840;
  int* __last841;
  struct __gnu_cxx____ops___Iter_less_iter __comp842;
  __first840 = v836;
  __last841 = v837;
  __comp842 = v838;
    int* t843 = __first840;
    int* t844 = __last841;
    _Bool c845 = ((t843 != t844)) ? 1 : 0;
    if (c845) {
      struct __gnu_cxx____ops___Iter_less_iter agg_tmp0846;
      struct __gnu_cxx____ops___Iter_less_iter agg_tmp1847;
      int* t848 = __first840;
      int* t849 = __last841;
      int* t850 = __last841;
      int* t851 = __first840;
      long diff852 = t850 - t851;
      long r853 = long_std____lg_long_(diff852);
      long c854 = 2;
      long b855 = r853 * c854;
      struct __gnu_cxx____ops___Iter_less_iter t856 = agg_tmp0846;
      void_std____introsort_loop_int___long____gnu_cxx____ops___Iter_less_iter_(t848, t849, b855, t856);
      int* t857 = __first840;
      int* t858 = __last841;
      struct __gnu_cxx____ops___Iter_less_iter t859 = agg_tmp1847;
      void_std____final_insertion_sort_int_____gnu_cxx____ops___Iter_less_iter_(t857, t858, t859);
    }
  return;
}

// function: _ZN9__gnu_cxx5__ops16__iter_less_iterEv
struct __gnu_cxx____ops___Iter_less_iter __gnu_cxx____ops____iter_less_iter() {
bb860:
  struct __gnu_cxx____ops___Iter_less_iter __retval861;
  struct __gnu_cxx____ops___Iter_less_iter t862 = __retval861;
  return t862;
}

// function: _ZSt4sortIPiEvT_S1_
void void_std__sort_int__(int* v863, int* v864) {
bb865:
  int* __first866;
  int* __last867;
  struct __gnu_cxx____ops___Iter_less_iter agg_tmp0868;
  __first866 = v863;
  __last867 = v864;
  int* t869 = __first866;
  int* t870 = __last867;
  struct __gnu_cxx____ops___Iter_less_iter r871 = __gnu_cxx____ops____iter_less_iter();
  agg_tmp0868 = r871;
  struct __gnu_cxx____ops___Iter_less_iter t872 = agg_tmp0868;
  void_std____sort_int_____gnu_cxx____ops___Iter_less_iter_(t869, t870, t872);
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v873, int** v874) {
bb875:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this876;
  int** __i877;
  this876 = v873;
  __i877 = v874;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t878 = this876;
  int** t879 = __i877;
  int* t880 = *t879;
  t878->_M_current = t880;
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEplEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v881, long v882) {
bb883:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this884;
  long __n885;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval886;
  int* ref_tmp0887;
  this884 = v881;
  __n885 = v882;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t888 = this884;
  int* t889 = t888->_M_current;
  long t890 = __n885;
  int* ptr891 = &(t889)[t890];
  ref_tmp0887 = ptr891;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval886, &ref_tmp0887);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t892 = __retval886;
  return t892;
}

// function: _ZSt12__niter_wrapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES2_ET_S7_T0_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____niter_wrap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v893, int* v894) {
bb895:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __from896;
  int* __res897;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval898;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0899;
  __from896 = v893;
  __res897 = v894;
  int* t900 = __res897;
  int* r901 = int__std____niter_base_int__(t900);
  agg_tmp0899 = __from896; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t902 = agg_tmp0899;
  int* r903 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t902);
  long diff904 = r901 - r903;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r905 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__from896, diff904);
  __retval898 = r905;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t906 = __retval898;
  return t906;
}

// function: _ZSt12__assign_oneILb0EPiS0_EvRT0_RT1_
void void_std____assign_one_false__int___int__(int** v907, int** v908) {
bb909:
  int** __out910;
  int** __in911;
  __out910 = v907;
  __in911 = v908;
    int** t912 = __in911;
    int* t913 = *t912;
    int t914 = *t913;
    int** t915 = __out910;
    int* t916 = *t915;
    *t916 = t914;
  return;
}

// function: _ZSt14__copy_move_a2ILb0EPiS0_S0_ET2_T0_T1_S1_
int* int__std____copy_move_a2_false__int___int___int__(int* v917, int* v918, int* v919) {
bb920:
  int* __first921;
  int* __last922;
  int* __result923;
  int* __retval924;
  __first921 = v917;
  __last922 = v918;
  __result923 = v919;
      _Bool r925 = std____is_constant_evaluated();
      if (r925) {
      } else {
          long __n926;
          int* t927 = __first921;
          int* t928 = __last922;
          long r929 = std__iterator_traits_int____difference_type_std__distance_int__(t927, t928);
          __n926 = r929;
            long t930 = __n926;
            long c931 = 1;
            _Bool c932 = ((t930 > c931)) ? 1 : 0;
            if (c932) {
              int* t933 = __result923;
              void* cast934 = (void*)t933;
              int* t935 = __first921;
              void* cast936 = (void*)t935;
              long t937 = __n926;
              unsigned long cast938 = (unsigned long)t937;
              unsigned long c939 = 4;
              unsigned long b940 = cast938 * c939;
              void* r941 = memmove(cast934, cast936, b940);
              long t942 = __n926;
              int* t943 = __result923;
              int* ptr944 = &(t943)[t942];
              __result923 = ptr944;
            } else {
                long t945 = __n926;
                long c946 = 1;
                _Bool c947 = ((t945 == c946)) ? 1 : 0;
                if (c947) {
                  void_std____assign_one_false__int___int__(&__result923, &__first921);
                  int* t948 = __result923;
                  int c949 = 1;
                  int* ptr950 = &(t948)[c949];
                  __result923 = ptr950;
                }
            }
          int* t951 = __result923;
          __retval924 = t951;
          int* t952 = __retval924;
          return t952;
      }
    while (1) {
      int* t954 = __first921;
      int* t955 = __last922;
      _Bool c956 = ((t954 != t955)) ? 1 : 0;
      if (!c956) break;
      void_std____assign_one_false__int___int__(&__result923, &__first921);
    for_step953: ;
      int* t957 = __result923;
      int c958 = 1;
      int* ptr959 = &(t957)[c958];
      __result923 = ptr959;
      int* t960 = __first921;
      int c961 = 1;
      int* ptr962 = &(t960)[c961];
      __first921 = ptr962;
    }
  int* t963 = __result923;
  __retval924 = t963;
  int* t964 = __retval924;
  return t964;
}

// function: _ZSt14__copy_move_a1ILb0EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_a1_false__int___int__(int* v965, int* v966, int* v967) {
bb968:
  int* __first969;
  int* __last970;
  int* __result971;
  int* __retval972;
  __first969 = v965;
  __last970 = v966;
  __result971 = v967;
  int* t973 = __first969;
  int* t974 = __last970;
  int* t975 = __result971;
  int* r976 = int__std____copy_move_a2_false__int___int___int__(t973, t974, t975);
  __retval972 = r976;
  int* t977 = __retval972;
  return t977;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v978) {
bb979:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this980;
  int** __retval981;
  this980 = v978;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t982 = this980;
  __retval981 = &t982->_M_current;
  int** t983 = __retval981;
  return t983;
}

// function: _ZSt12__niter_baseIPiSt6vectorIiSaIiEEET_N9__gnu_cxx17__normal_iteratorIS4_T0_EE
int* int__std____niter_base_int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v984) {
bb985:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it986;
  int* __retval987;
  __it986 = v984;
  int** r988 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__it986);
  int* t989 = *r988;
  __retval987 = t989;
  int* t990 = __retval987;
  return t990;
}

// function: _ZSt13__copy_move_aILb0EPiN9__gnu_cxx17__normal_iteratorIS0_St6vectorIiSaIiEEEEET1_T0_S8_S7_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____copy_move_a_false__int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(int* v991, int* v992, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v993) {
bb994:
  int* __first995;
  int* __last996;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result997;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval998;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0999;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11000;
  __first995 = v991;
  __last996 = v992;
  __result997 = v993;
  agg_tmp0999 = __result997; // copy
  int* t1001 = __first995;
  int* r1002 = int__std____niter_base_int__(t1001);
  int* t1003 = __last996;
  int* r1004 = int__std____niter_base_int__(t1003);
  agg_tmp11000 = __result997; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1005 = agg_tmp11000;
  int* r1006 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t1005);
  int* r1007 = int__std____copy_move_a1_false__int___int__(r1002, r1004, r1006);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1008 = agg_tmp0999;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1009 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____niter_wrap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(t1008, r1007);
  __retval998 = r1009;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1010 = __retval998;
  return t1010;
}

// function: _ZSt4copyIPiN9__gnu_cxx17__normal_iteratorIS0_St6vectorIiSaIiEEEEET0_T_S8_S7_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__copy_int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(int* v1011, int* v1012, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1013) {
bb1014:
  int* __first1015;
  int* __last1016;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result1017;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval1018;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01019;
  __first1015 = v1011;
  __last1016 = v1012;
  __result1017 = v1013;
  int* t1020 = __first1015;
  int* r1021 = int__std____miter_base_int__(t1020);
  int* t1022 = __last1016;
  int* r1023 = int__std____miter_base_int__(t1022);
  agg_tmp01019 = __result1017; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1024 = agg_tmp01019;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1025 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____copy_move_a_false__int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(r1021, r1023, t1024);
  __retval1018 = r1025;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1026 = __retval1018;
  return t1026;
}

// function: _ZSt7__mergeIPiS0_N9__gnu_cxx17__normal_iteratorIS0_St6vectorIiSaIiEEEENS1_5__ops15_Iter_less_iterEET1_T_SA_T0_SB_S9_T2_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____merge_int___int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(int* v1027, int* v1028, int* v1029, int* v1030, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1031, struct __gnu_cxx____ops___Iter_less_iter v1032) {
bb1033:
  int* __first11034;
  int* __last11035;
  int* __first21036;
  int* __last21037;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result1038;
  struct __gnu_cxx____ops___Iter_less_iter __comp1039;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval1040;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01041;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11042;
  __first11034 = v1027;
  __last11035 = v1028;
  __first21036 = v1029;
  __last21037 = v1030;
  __result1038 = v1031;
  __comp1039 = v1032;
    while (1) {
      int* t1043 = __first11034;
      int* t1044 = __last11035;
      _Bool c1045 = ((t1043 != t1044)) ? 1 : 0;
      _Bool ternary1046;
      if (c1045) {
        int* t1047 = __first21036;
        int* t1048 = __last21037;
        _Bool c1049 = ((t1047 != t1048)) ? 1 : 0;
        ternary1046 = (_Bool)c1049;
      } else {
        _Bool c1050 = 0;
        ternary1046 = (_Bool)c1050;
      }
      if (!ternary1046) break;
          int* t1051 = __first21036;
          int* t1052 = __first11034;
          _Bool r1053 = bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(&__comp1039, t1051, t1052);
          if (r1053) {
            int* t1054 = __first21036;
            int t1055 = *t1054;
            int* r1056 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__result1038);
            *r1056 = t1055;
            int* t1057 = __first21036;
            int c1058 = 1;
            int* ptr1059 = &(t1057)[c1058];
            __first21036 = ptr1059;
          } else {
            int* t1060 = __first11034;
            int t1061 = *t1060;
            int* r1062 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__result1038);
            *r1062 = t1061;
            int* t1063 = __first11034;
            int c1064 = 1;
            int* ptr1065 = &(t1063)[c1064];
            __first11034 = ptr1065;
          }
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1066 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__result1038);
    }
  int* t1067 = __first21036;
  int* t1068 = __last21037;
  int* t1069 = __first11034;
  int* t1070 = __last11035;
  agg_tmp11042 = __result1038; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1071 = agg_tmp11042;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1072 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__copy_int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t1069, t1070, t1071);
  agg_tmp01041 = r1072;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1073 = agg_tmp01041;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1074 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__copy_int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t1067, t1068, t1073);
  __retval1040 = r1074;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1075 = __retval1040;
  return t1075;
}

// function: _ZSt5mergeIPiS0_N9__gnu_cxx17__normal_iteratorIS0_St6vectorIiSaIiEEEEET1_T_S8_T0_S9_S7_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__merge_int___int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(int* v1076, int* v1077, int* v1078, int* v1079, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1080) {
bb1081:
  int* __first11082;
  int* __last11083;
  int* __first21084;
  int* __last21085;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result1086;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval1087;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01088;
  struct __gnu_cxx____ops___Iter_less_iter agg_tmp11089;
  __first11082 = v1076;
  __last11083 = v1077;
  __first21084 = v1078;
  __last21085 = v1079;
  __result1086 = v1080;
  int* t1090 = __first11082;
  int* t1091 = __last11083;
  int* t1092 = __first21084;
  int* t1093 = __last21085;
  agg_tmp01088 = __result1086; // copy
  struct __gnu_cxx____ops___Iter_less_iter r1094 = __gnu_cxx____ops____iter_less_iter();
  agg_tmp11089 = r1094;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1095 = agg_tmp01088;
  struct __gnu_cxx____ops___Iter_less_iter t1096 = agg_tmp11089;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1097 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____merge_int___int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(t1090, t1091, t1092, t1093, t1095, t1096);
  __retval1087 = r1097;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1098 = __retval1087;
  return t1098;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v1099) {
bb1100:
  struct std__vector_int__std__allocator_int__* this1101;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval1102;
  this1101 = v1099;
  struct std__vector_int__std__allocator_int__* t1103 = this1101;
  struct std___Vector_base_int__std__allocator_int__* base1104 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1103 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1105 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1104->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval1102, &base1105->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1106 = __retval1102;
  return t1106;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v1107) {
bb1108:
  struct std__vector_int__std__allocator_int__* this1109;
  unsigned long __retval1110;
  long __dif1111;
  this1109 = v1107;
  struct std__vector_int__std__allocator_int__* t1112 = this1109;
  struct std___Vector_base_int__std__allocator_int__* base1113 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1112 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1114 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1113->_M_impl) + 0);
  int* t1115 = base1114->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base1116 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1112 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1117 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1116->_M_impl) + 0);
  int* t1118 = base1117->_M_start;
  long diff1119 = t1115 - t1118;
  __dif1111 = diff1119;
    long t1120 = __dif1111;
    long c1121 = 0;
    _Bool c1122 = ((t1120 < c1121)) ? 1 : 0;
    if (c1122) {
      __builtin_unreachable();
    }
  long t1123 = __dif1111;
  unsigned long cast1124 = (unsigned long)t1123;
  __retval1110 = cast1124;
  unsigned long t1125 = __retval1110;
  return t1125;
}

// function: _ZNSt6vectorIiSaIiEEixEm
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* v1126, unsigned long v1127) {
bb1128:
  struct std__vector_int__std__allocator_int__* this1129;
  unsigned long __n1130;
  int* __retval1131;
  this1129 = v1126;
  __n1130 = v1127;
  struct std__vector_int__std__allocator_int__* t1132 = this1129;
    do {
          unsigned long t1133 = __n1130;
          unsigned long r1134 = std__vector_int__std__allocator_int_____size___const(t1132);
          _Bool c1135 = ((t1133 < r1134)) ? 1 : 0;
          _Bool u1136 = !c1135;
          if (u1136) {
            char* cast1137 = (char*)&(_str_6);
            int c1138 = 1263;
            char* cast1139 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm);
            char* cast1140 = (char*)&(_str_7);
            std____glibcxx_assert_fail(cast1137, c1138, cast1139, cast1140);
          }
      _Bool c1141 = 0;
      if (!c1141) break;
    } while (1);
  struct std___Vector_base_int__std__allocator_int__* base1142 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1132 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1143 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1142->_M_impl) + 0);
  int* t1144 = base1143->_M_start;
  unsigned long t1145 = __n1130;
  int* ptr1146 = &(t1144)[t1145];
  __retval1131 = ptr1146;
  int* t1147 = __retval1131;
  return t1147;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v1148, int v1149) {
bb1150:
  int __a1151;
  int __b1152;
  int __retval1153;
  __a1151 = v1148;
  __b1152 = v1149;
  int t1154 = __a1151;
  int t1155 = __b1152;
  int b1156 = t1154 | t1155;
  __retval1153 = b1156;
  int t1157 = __retval1153;
  return t1157;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v1158) {
bb1159:
  struct std__basic_ios_char__std__char_traits_char__* this1160;
  int __retval1161;
  this1160 = v1158;
  struct std__basic_ios_char__std__char_traits_char__* t1162 = this1160;
  struct std__ios_base* base1163 = (struct std__ios_base*)((char *)t1162 + 0);
  int t1164 = base1163->_M_streambuf_state;
  __retval1161 = t1164;
  int t1165 = __retval1161;
  return t1165;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v1166, int v1167) {
bb1168:
  struct std__basic_ios_char__std__char_traits_char__* this1169;
  int __state1170;
  this1169 = v1166;
  __state1170 = v1167;
  struct std__basic_ios_char__std__char_traits_char__* t1171 = this1169;
  int r1172 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t1171);
  int t1173 = __state1170;
  int r1174 = std__operator_(r1172, t1173);
  std__basic_ios_char__std__char_traits_char_____clear(t1171, r1174);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v1175, char* v1176) {
bb1177:
  char* __c11178;
  char* __c21179;
  _Bool __retval1180;
  __c11178 = v1175;
  __c21179 = v1176;
  char* t1181 = __c11178;
  char t1182 = *t1181;
  int cast1183 = (int)t1182;
  char* t1184 = __c21179;
  char t1185 = *t1184;
  int cast1186 = (int)t1185;
  _Bool c1187 = ((cast1183 == cast1186)) ? 1 : 0;
  __retval1180 = c1187;
  _Bool t1188 = __retval1180;
  return t1188;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v1189) {
bb1190:
  char* __p1191;
  unsigned long __retval1192;
  unsigned long __i1193;
  __p1191 = v1189;
  unsigned long c1194 = 0;
  __i1193 = c1194;
    char ref_tmp01195;
    while (1) {
      unsigned long t1196 = __i1193;
      char* t1197 = __p1191;
      char* ptr1198 = &(t1197)[t1196];
      char c1199 = 0;
      ref_tmp01195 = c1199;
      _Bool r1200 = __gnu_cxx__char_traits_char___eq(ptr1198, &ref_tmp01195);
      _Bool u1201 = !r1200;
      if (!u1201) break;
      unsigned long t1202 = __i1193;
      unsigned long u1203 = t1202 + 1;
      __i1193 = u1203;
    }
  unsigned long t1204 = __i1193;
  __retval1192 = t1204;
  unsigned long t1205 = __retval1192;
  return t1205;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v1206) {
bb1207:
  char* __s1208;
  unsigned long __retval1209;
  __s1208 = v1206;
    _Bool r1210 = std____is_constant_evaluated();
    if (r1210) {
      char* t1211 = __s1208;
      unsigned long r1212 = __gnu_cxx__char_traits_char___length(t1211);
      __retval1209 = r1212;
      unsigned long t1213 = __retval1209;
      return t1213;
    }
  char* t1214 = __s1208;
  unsigned long r1215 = strlen(t1214);
  __retval1209 = r1215;
  unsigned long t1216 = __retval1209;
  return t1216;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1217, char* v1218) {
bb1219:
  struct std__basic_ostream_char__std__char_traits_char__* __out1220;
  char* __s1221;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1222;
  __out1220 = v1217;
  __s1221 = v1218;
    char* t1223 = __s1221;
    _Bool cast1224 = (_Bool)t1223;
    _Bool u1225 = !cast1224;
    if (u1225) {
      struct std__basic_ostream_char__std__char_traits_char__* t1226 = __out1220;
      void** v1227 = (void**)t1226;
      void* v1228 = *((void**)v1227);
      unsigned char* cast1229 = (unsigned char*)v1228;
      long c1230 = -24;
      unsigned char* ptr1231 = &(cast1229)[c1230];
      long* cast1232 = (long*)ptr1231;
      long t1233 = *cast1232;
      unsigned char* cast1234 = (unsigned char*)t1226;
      unsigned char* ptr1235 = &(cast1234)[t1233];
      struct std__basic_ostream_char__std__char_traits_char__* cast1236 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1235;
      struct std__basic_ios_char__std__char_traits_char__* cast1237 = (struct std__basic_ios_char__std__char_traits_char__*)cast1236;
      int t1238 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast1237, t1238);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t1239 = __out1220;
      char* t1240 = __s1221;
      char* t1241 = __s1221;
      unsigned long r1242 = std__char_traits_char___length(t1241);
      long cast1243 = (long)r1242;
      struct std__basic_ostream_char__std__char_traits_char__* r1244 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t1239, t1240, cast1243);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t1245 = __out1220;
  __retval1222 = t1245;
  struct std__basic_ostream_char__std__char_traits_char__* t1246 = __retval1222;
  return t1246;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEaSEOS5_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1247, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1248) {
bb1249:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this1250;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed1251;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval1252;
  this1250 = v1247;
  unnamed1251 = v1248;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1253 = this1250;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1254 = unnamed1251;
  int* t1255 = t1254->_M_current;
  t1253->_M_current = t1255;
  __retval1252 = t1253;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1256 = __retval1252;
  return t1256;
}

// function: _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1257, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1258) {
bb1259:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs1260;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs1261;
  _Bool __retval1262;
  __lhs1260 = v1257;
  __rhs1261 = v1258;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1263 = __lhs1260;
  int** r1264 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t1263);
  int* t1265 = *r1264;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1266 = __rhs1261;
  int** r1267 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t1266);
  int* t1268 = *r1267;
  _Bool c1269 = ((t1265 == t1268)) ? 1 : 0;
  __retval1262 = c1269;
  _Bool t1270 = __retval1262;
  return t1270;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v1271) {
bb1272:
  struct std__vector_int__std__allocator_int__* this1273;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval1274;
  this1273 = v1271;
  struct std__vector_int__std__allocator_int__* t1275 = this1273;
  struct std___Vector_base_int__std__allocator_int__* base1276 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1275 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1277 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1276->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval1274, &base1277->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1278 = __retval1274;
  return t1278;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1279) {
bb1280:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this1281;
  int* __retval1282;
  this1281 = v1279;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1283 = this1281;
  int* t1284 = t1283->_M_current;
  __retval1282 = t1284;
  int* t1285 = __retval1282;
  return t1285;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1286) {
bb1287:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this1288;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval1289;
  this1288 = v1286;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1290 = this1288;
  int* t1291 = t1290->_M_current;
  int c1292 = 1;
  int* ptr1293 = &(t1291)[c1292];
  t1290->_M_current = ptr1293;
  __retval1289 = t1290;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1294 = __retval1289;
  return t1294;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v1295, void* v1296) {
bb1297:
  struct std__basic_ostream_char__std__char_traits_char__* this1298;
  void* __pf1299;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1300;
  this1298 = v1295;
  __pf1299 = v1296;
  struct std__basic_ostream_char__std__char_traits_char__* t1301 = this1298;
  void* t1302 = __pf1299;
  struct std__basic_ostream_char__std__char_traits_char__* r1303 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t1302)(t1301);
  __retval1300 = r1303;
  struct std__basic_ostream_char__std__char_traits_char__* t1304 = __retval1300;
  return t1304;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1305) {
bb1306:
  struct std__basic_ostream_char__std__char_traits_char__* __os1307;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1308;
  __os1307 = v1305;
  struct std__basic_ostream_char__std__char_traits_char__* t1309 = __os1307;
  struct std__basic_ostream_char__std__char_traits_char__* r1310 = std__ostream__flush(t1309);
  __retval1308 = r1310;
  struct std__basic_ostream_char__std__char_traits_char__* t1311 = __retval1308;
  return t1311;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v1312) {
bb1313:
  struct std__ctype_char_* __f1314;
  struct std__ctype_char_* __retval1315;
  __f1314 = v1312;
    struct std__ctype_char_* t1316 = __f1314;
    _Bool cast1317 = (_Bool)t1316;
    _Bool u1318 = !cast1317;
    if (u1318) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t1319 = __f1314;
  __retval1315 = t1319;
  struct std__ctype_char_* t1320 = __retval1315;
  return t1320;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v1321, char v1322) {
bb1323:
  struct std__ctype_char_* this1324;
  char __c1325;
  char __retval1326;
  this1324 = v1321;
  __c1325 = v1322;
  struct std__ctype_char_* t1327 = this1324;
    char t1328 = t1327->_M_widen_ok;
    _Bool cast1329 = (_Bool)t1328;
    if (cast1329) {
      char t1330 = __c1325;
      unsigned char cast1331 = (unsigned char)t1330;
      unsigned long cast1332 = (unsigned long)cast1331;
      char t1333 = t1327->_M_widen[cast1332];
      __retval1326 = t1333;
      char t1334 = __retval1326;
      return t1334;
    }
  std__ctype_char____M_widen_init___const(t1327);
  char t1335 = __c1325;
  void** v1336 = (void**)t1327;
  void* v1337 = *((void**)v1336);
  char vcall1340 = (char)__VERIFIER_virtual_call_char_char(t1327, 6, t1335);
  __retval1326 = vcall1340;
  char t1341 = __retval1326;
  return t1341;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v1342, char v1343) {
bb1344:
  struct std__basic_ios_char__std__char_traits_char__* this1345;
  char __c1346;
  char __retval1347;
  this1345 = v1342;
  __c1346 = v1343;
  struct std__basic_ios_char__std__char_traits_char__* t1348 = this1345;
  struct std__ctype_char_* t1349 = t1348->_M_ctype;
  struct std__ctype_char_* r1350 = std__ctype_char__const__std____check_facet_std__ctype_char___(t1349);
  char t1351 = __c1346;
  char r1352 = std__ctype_char___widen_char__const(r1350, t1351);
  __retval1347 = r1352;
  char t1353 = __retval1347;
  return t1353;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1354) {
bb1355:
  struct std__basic_ostream_char__std__char_traits_char__* __os1356;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1357;
  __os1356 = v1354;
  struct std__basic_ostream_char__std__char_traits_char__* t1358 = __os1356;
  struct std__basic_ostream_char__std__char_traits_char__* t1359 = __os1356;
  void** v1360 = (void**)t1359;
  void* v1361 = *((void**)v1360);
  unsigned char* cast1362 = (unsigned char*)v1361;
  long c1363 = -24;
  unsigned char* ptr1364 = &(cast1362)[c1363];
  long* cast1365 = (long*)ptr1364;
  long t1366 = *cast1365;
  unsigned char* cast1367 = (unsigned char*)t1359;
  unsigned char* ptr1368 = &(cast1367)[t1366];
  struct std__basic_ostream_char__std__char_traits_char__* cast1369 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1368;
  struct std__basic_ios_char__std__char_traits_char__* cast1370 = (struct std__basic_ios_char__std__char_traits_char__*)cast1369;
  char c1371 = 10;
  char r1372 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast1370, c1371);
  struct std__basic_ostream_char__std__char_traits_char__* r1373 = std__ostream__put(t1358, r1372);
  struct std__basic_ostream_char__std__char_traits_char__* r1374 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r1373);
  __retval1357 = r1374;
  struct std__basic_ostream_char__std__char_traits_char__* t1375 = __retval1357;
  return t1375;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v1376) {
bb1377:
  struct std__vector_int__std__allocator_int__* this1378;
  this1378 = v1376;
  struct std__vector_int__std__allocator_int__* t1379 = this1378;
    struct std___Vector_base_int__std__allocator_int__* base1380 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1379 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1381 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1380->_M_impl) + 0);
    int* t1382 = base1381->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base1383 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1379 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1384 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1383->_M_impl) + 0);
    int* t1385 = base1384->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base1386 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1379 + 0);
    struct std__allocator_int_* r1387 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1386);
    void_std___Destroy_int___int_(t1382, t1385, r1387);
  {
    struct std___Vector_base_int__std__allocator_int__* base1388 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1379 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base1388);
  }
  return;
}

// function: main
int main() {
bb1389:
  int __retval1390;
  int first1391[3];
  int second1392[3];
  struct std__vector_int__std__allocator_int__ v1393;
  struct std__allocator_int_ ref_tmp01394;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it1395;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01396;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11397;
  int c1398 = 0;
  __retval1390 = c1398;
  // array copy
  __builtin_memcpy(first1391, __const_main_first, (unsigned long)3 * sizeof(__const_main_first[0]));
  // array copy
  __builtin_memcpy(second1392, __const_main_second, (unsigned long)3 * sizeof(__const_main_second[0]));
  unsigned long c1399 = 6;
  std__allocator_int___allocator_2(&ref_tmp01394);
    std__vector_int__std__allocator_int_____vector(&v1393, c1399, &ref_tmp01394);
  {
    std__allocator_int____allocator(&ref_tmp01394);
  }
    __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(&it1395);
    int* cast1400 = (int*)&(first1391);
    int* cast1401 = (int*)&(first1391);
    int c1402 = 3;
    int* ptr1403 = &(cast1401)[c1402];
    void_std__sort_int__(cast1400, ptr1403);
    int* cast1404 = (int*)&(second1392);
    int* cast1405 = (int*)&(second1392);
    int c1406 = 3;
    int* ptr1407 = &(cast1405)[c1406];
    void_std__sort_int__(cast1404, ptr1407);
    int* cast1408 = (int*)&(first1391);
    int* cast1409 = (int*)&(first1391);
    int c1410 = 3;
    int* ptr1411 = &(cast1409)[c1410];
    int* cast1412 = (int*)&(second1392);
    int* cast1413 = (int*)&(second1392);
    int c1414 = 3;
    int* ptr1415 = &(cast1413)[c1414];
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1416 = std__vector_int__std__allocator_int_____begin(&v1393);
    agg_tmp01396 = r1416;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1417 = agg_tmp01396;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1418 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__merge_int___int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(cast1408, ptr1411, cast1412, ptr1415, t1417);
    agg_tmp11397 = r1418;
    unsigned long c1419 = 0;
    int* r1420 = std__vector_int__std__allocator_int_____operator__(&v1393, c1419);
    int t1421 = *r1420;
    int c1422 = 5;
    _Bool c1423 = ((t1421 == c1422)) ? 1 : 0;
    if (c1423) {
    } else {
      char* cast1424 = (char*)&(_str);
      char* c1425 = _str_1;
      unsigned int c1426 = 24;
      char* cast1427 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1424, c1425, c1426, cast1427);
    }
    unsigned long c1428 = 5;
    int* r1429 = std__vector_int__std__allocator_int_____operator__(&v1393, c1428);
    int t1430 = *r1429;
    int c1431 = 50;
    _Bool c1432 = ((t1430 != c1431)) ? 1 : 0;
    if (c1432) {
    } else {
      char* cast1433 = (char*)&(_str_2);
      char* c1434 = _str_1;
      unsigned int c1435 = 25;
      char* cast1436 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1433, c1434, c1435, cast1436);
    }
    char* cast1437 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* r1438 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1437);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp11439;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp21440;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1441 = std__vector_int__std__allocator_int_____begin(&v1393);
      ref_tmp11439 = r1441;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1442 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&it1395, &ref_tmp11439);
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1444 = std__vector_int__std__allocator_int_____end(&v1393);
        ref_tmp21440 = r1444;
        _Bool r1445 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&it1395, &ref_tmp21440);
        _Bool u1446 = !r1445;
        if (!u1446) break;
        char* cast1447 = (char*)&(_str_4);
        struct std__basic_ostream_char__std__char_traits_char__* r1448 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1447);
        int* r1449 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&it1395);
        int t1450 = *r1449;
        struct std__basic_ostream_char__std__char_traits_char__* r1451 = std__ostream__operator__(r1448, t1450);
      for_step1443: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1452 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&it1395);
      }
    struct std__basic_ostream_char__std__char_traits_char__* r1453 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c1454 = 0;
    __retval1390 = c1454;
    int t1455 = __retval1390;
    int ret_val1456 = t1455;
    {
      std__vector_int__std__allocator_int______vector(&v1393);
    }
    return ret_val1456;
  int t1457 = __retval1390;
  return t1457;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v1458) {
bb1459:
  struct std____new_allocator_int_* this1460;
  this1460 = v1458;
  struct std____new_allocator_int_* t1461 = this1460;
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v1462, unsigned long* v1463) {
bb1464:
  unsigned long* __a1465;
  unsigned long* __b1466;
  unsigned long* __retval1467;
  __a1465 = v1462;
  __b1466 = v1463;
    unsigned long* t1468 = __b1466;
    unsigned long t1469 = *t1468;
    unsigned long* t1470 = __a1465;
    unsigned long t1471 = *t1470;
    _Bool c1472 = ((t1469 < t1471)) ? 1 : 0;
    if (c1472) {
      unsigned long* t1473 = __b1466;
      __retval1467 = t1473;
      unsigned long* t1474 = __retval1467;
      return t1474;
    }
  unsigned long* t1475 = __a1465;
  __retval1467 = t1475;
  unsigned long* t1476 = __retval1467;
  return t1476;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v1477) {
bb1478:
  struct std__allocator_int_* __a1479;
  unsigned long __retval1480;
  unsigned long __diffmax1481;
  unsigned long __allocmax1482;
  __a1479 = v1477;
  unsigned long c1483 = 2305843009213693951;
  __diffmax1481 = c1483;
  unsigned long c1484 = 4611686018427387903;
  __allocmax1482 = c1484;
  unsigned long* r1485 = unsigned_long_const__std__min_unsigned_long_(&__diffmax1481, &__allocmax1482);
  unsigned long t1486 = *r1485;
  __retval1480 = t1486;
  unsigned long t1487 = __retval1480;
  return t1487;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v1488, struct std__allocator_int_* v1489) {
bb1490:
  struct std__allocator_int_* this1491;
  struct std__allocator_int_* __a1492;
  this1491 = v1488;
  __a1492 = v1489;
  struct std__allocator_int_* t1493 = this1491;
  struct std____new_allocator_int_* base1494 = (struct std____new_allocator_int_*)((char *)t1493 + 0);
  struct std__allocator_int_* t1495 = __a1492;
  struct std____new_allocator_int_* base1496 = (struct std____new_allocator_int_*)((char *)t1495 + 0);
  std____new_allocator_int_____new_allocator(base1494, base1496);
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long v1497, struct std__allocator_int_* v1498) {
bb1499:
  unsigned long __n1500;
  struct std__allocator_int_* __a1501;
  unsigned long __retval1502;
  __n1500 = v1497;
  __a1501 = v1498;
    struct std__allocator_int_ ref_tmp01503;
    _Bool tmp_exprcleanup1504;
    unsigned long t1505 = __n1500;
    struct std__allocator_int_* t1506 = __a1501;
    std__allocator_int___allocator(&ref_tmp01503, t1506);
      unsigned long r1507 = std__vector_int__std__allocator_int______S_max_size(&ref_tmp01503);
      _Bool c1508 = ((t1505 > r1507)) ? 1 : 0;
      tmp_exprcleanup1504 = c1508;
    {
      std__allocator_int____allocator(&ref_tmp01503);
    }
    _Bool t1509 = tmp_exprcleanup1504;
    if (t1509) {
      char* cast1510 = (char*)&(_str_5);
      std____throw_length_error(cast1510);
    }
  unsigned long t1511 = __n1500;
  __retval1502 = t1511;
  unsigned long t1512 = __retval1502;
  return t1512;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1513, struct std__allocator_int_* v1514) {
bb1515:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1516;
  struct std__allocator_int_* __a1517;
  this1516 = v1513;
  __a1517 = v1514;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1518 = this1516;
  struct std__allocator_int_* base1519 = (struct std__allocator_int_*)((char *)t1518 + 0);
  struct std__allocator_int_* t1520 = __a1517;
  std__allocator_int___allocator(base1519, t1520);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1521 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t1518 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base1521);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1522:
  _Bool __retval1523;
    _Bool c1524 = 0;
    __retval1523 = c1524;
    _Bool t1525 = __retval1523;
    return t1525;
  abort();
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v1526) {
bb1527:
  struct std____new_allocator_int_* this1528;
  unsigned long __retval1529;
  this1528 = v1526;
  struct std____new_allocator_int_* t1530 = this1528;
  unsigned long c1531 = 9223372036854775807;
  unsigned long c1532 = 4;
  unsigned long b1533 = c1531 / c1532;
  __retval1529 = b1533;
  unsigned long t1534 = __retval1529;
  return t1534;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v1535, unsigned long v1536, void* v1537) {
bb1538:
  struct std____new_allocator_int_* this1539;
  unsigned long __n1540;
  void* unnamed1541;
  int* __retval1542;
  this1539 = v1535;
  __n1540 = v1536;
  unnamed1541 = v1537;
  struct std____new_allocator_int_* t1543 = this1539;
    unsigned long t1544 = __n1540;
    unsigned long r1545 = std____new_allocator_int____M_max_size___const(t1543);
    _Bool c1546 = ((t1544 > r1545)) ? 1 : 0;
    if (c1546) {
        unsigned long t1547 = __n1540;
        unsigned long c1548 = -1;
        unsigned long c1549 = 4;
        unsigned long b1550 = c1548 / c1549;
        _Bool c1551 = ((t1547 > b1550)) ? 1 : 0;
        if (c1551) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c1552 = 4;
    unsigned long c1553 = 16;
    _Bool c1554 = ((c1552 > c1553)) ? 1 : 0;
    if (c1554) {
      unsigned long __al1555;
      unsigned long c1556 = 4;
      __al1555 = c1556;
      unsigned long t1557 = __n1540;
      unsigned long c1558 = 4;
      unsigned long b1559 = t1557 * c1558;
      unsigned long t1560 = __al1555;
      void* r1561 = operator_new_2(b1559, t1560);
      int* cast1562 = (int*)r1561;
      __retval1542 = cast1562;
      int* t1563 = __retval1542;
      return t1563;
    }
  unsigned long t1564 = __n1540;
  unsigned long c1565 = 4;
  unsigned long b1566 = t1564 * c1565;
  void* r1567 = operator_new(b1566);
  int* cast1568 = (int*)r1567;
  __retval1542 = cast1568;
  int* t1569 = __retval1542;
  return t1569;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v1570, unsigned long v1571) {
bb1572:
  struct std__allocator_int_* this1573;
  unsigned long __n1574;
  int* __retval1575;
  this1573 = v1570;
  __n1574 = v1571;
  struct std__allocator_int_* t1576 = this1573;
    _Bool r1577 = std____is_constant_evaluated();
    if (r1577) {
        unsigned long t1578 = __n1574;
        unsigned long c1579 = 4;
        unsigned long ovr1580;
        _Bool ovf1581 = __builtin_mul_overflow(t1578, c1579, &ovr1580);
        __n1574 = ovr1580;
        if (ovf1581) {
          std____throw_bad_array_new_length();
        }
      unsigned long t1582 = __n1574;
      void* r1583 = operator_new(t1582);
      int* cast1584 = (int*)r1583;
      __retval1575 = cast1584;
      int* t1585 = __retval1575;
      return t1585;
    }
  struct std____new_allocator_int_* base1586 = (struct std____new_allocator_int_*)((char *)t1576 + 0);
  unsigned long t1587 = __n1574;
  void* c1588 = ((void*)0);
  int* r1589 = std____new_allocator_int___allocate(base1586, t1587, c1588);
  __retval1575 = r1589;
  int* t1590 = __retval1575;
  return t1590;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v1591, unsigned long v1592) {
bb1593:
  struct std__allocator_int_* __a1594;
  unsigned long __n1595;
  int* __retval1596;
  __a1594 = v1591;
  __n1595 = v1592;
  struct std__allocator_int_* t1597 = __a1594;
  unsigned long t1598 = __n1595;
  int* r1599 = std__allocator_int___allocate(t1597, t1598);
  __retval1596 = r1599;
  int* t1600 = __retval1596;
  return t1600;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v1601, unsigned long v1602) {
bb1603:
  struct std___Vector_base_int__std__allocator_int__* this1604;
  unsigned long __n1605;
  int* __retval1606;
  this1604 = v1601;
  __n1605 = v1602;
  struct std___Vector_base_int__std__allocator_int__* t1607 = this1604;
  unsigned long t1608 = __n1605;
  unsigned long c1609 = 0;
  _Bool c1610 = ((t1608 != c1609)) ? 1 : 0;
  int* ternary1611;
  if (c1610) {
    struct std__allocator_int_* base1612 = (struct std__allocator_int_*)((char *)&(t1607->_M_impl) + 0);
    unsigned long t1613 = __n1605;
    int* r1614 = std__allocator_traits_std__allocator_int_____allocate(base1612, t1613);
    ternary1611 = (int*)r1614;
  } else {
    int* c1615 = ((void*)0);
    ternary1611 = (int*)c1615;
  }
  __retval1606 = ternary1611;
  int* t1616 = __retval1606;
  return t1616;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_M_create_storageEm
void std___Vector_base_int__std__allocator_int______M_create_storage(struct std___Vector_base_int__std__allocator_int__* v1617, unsigned long v1618) {
bb1619:
  struct std___Vector_base_int__std__allocator_int__* this1620;
  unsigned long __n1621;
  this1620 = v1617;
  __n1621 = v1618;
  struct std___Vector_base_int__std__allocator_int__* t1622 = this1620;
  unsigned long t1623 = __n1621;
  int* r1624 = std___Vector_base_int__std__allocator_int______M_allocate(t1622, t1623);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1625 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1622->_M_impl) + 0);
  base1625->_M_start = r1624;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1626 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1622->_M_impl) + 0);
  int* t1627 = base1626->_M_start;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1628 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1622->_M_impl) + 0);
  base1628->_M_finish = t1627;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1629 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1622->_M_impl) + 0);
  int* t1630 = base1629->_M_start;
  unsigned long t1631 = __n1621;
  int* ptr1632 = &(t1630)[t1631];
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1633 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1622->_M_impl) + 0);
  base1633->_M_end_of_storage = ptr1632;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1634) {
bb1635:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1636;
  this1636 = v1634;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1637 = this1636;
  {
    struct std__allocator_int_* base1638 = (struct std__allocator_int_*)((char *)t1637 + 0);
    std__allocator_int____allocator(base1638);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2EmRKS0_
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1639, unsigned long v1640, struct std__allocator_int_* v1641) {
bb1642:
  struct std___Vector_base_int__std__allocator_int__* this1643;
  unsigned long __n1644;
  struct std__allocator_int_* __a1645;
  this1643 = v1639;
  __n1644 = v1640;
  __a1645 = v1641;
  struct std___Vector_base_int__std__allocator_int__* t1646 = this1643;
  struct std__allocator_int_* t1647 = __a1645;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t1646->_M_impl, t1647);
    unsigned long t1648 = __n1644;
    std___Vector_base_int__std__allocator_int______M_create_storage(t1646, t1648);
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1649:
  _Bool __retval1650;
    _Bool c1651 = 0;
    __retval1650 = c1651;
    _Bool t1652 = __retval1650;
    return t1652;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v1653, int** v1654) {
bb1655:
  struct std___UninitDestroyGuard_int____void_* this1656;
  int** __first1657;
  this1656 = v1653;
  __first1657 = v1654;
  struct std___UninitDestroyGuard_int____void_* t1658 = this1656;
  int** t1659 = __first1657;
  int* t1660 = *t1659;
  t1658->_M_first = t1660;
  int** t1661 = __first1657;
  t1658->_M_cur = t1661;
  return;
}

// function: _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v1662) {
bb1663:
  int* __location1664;
  int* __retval1665;
  void* __loc1666;
  __location1664 = v1662;
  int* t1667 = __location1664;
  void* cast1668 = (void*)t1667;
  __loc1666 = cast1668;
    void* t1669 = __loc1666;
    int* cast1670 = (int*)t1669;
    int c1671 = 0;
    *cast1670 = c1671;
    __retval1665 = cast1670;
    int* t1672 = __retval1665;
    return t1672;
  abort();
}

// function: _ZSt10_ConstructIiJEEvPT_DpOT0_
void void_std___Construct_int_(int* v1673) {
bb1674:
  int* __p1675;
  __p1675 = v1673;
    _Bool r1676 = std____is_constant_evaluated();
    if (r1676) {
      int* t1677 = __p1675;
      int* r1678 = _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t1677);
      return;
    }
  int* t1679 = __p1675;
  void* cast1680 = (void*)t1679;
  int* cast1681 = (int*)cast1680;
  int c1682 = 0;
  *cast1681 = c1682;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v1683) {
bb1684:
  struct std___UninitDestroyGuard_int____void_* this1685;
  this1685 = v1683;
  struct std___UninitDestroyGuard_int____void_* t1686 = this1685;
  int** c1687 = ((void*)0);
  t1686->_M_cur = c1687;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v1688) {
bb1689:
  struct std___UninitDestroyGuard_int____void_* this1690;
  this1690 = v1688;
  struct std___UninitDestroyGuard_int____void_* t1691 = this1690;
    int** t1692 = t1691->_M_cur;
    int** c1693 = ((void*)0);
    _Bool c1694 = ((t1692 != c1693)) ? 1 : 0;
    if (c1694) {
      int* t1695 = t1691->_M_first;
      int** t1696 = t1691->_M_cur;
      int* t1697 = *t1696;
      void_std___Destroy_int__(t1695, t1697);
    }
  return;
}

// function: _ZNSt27__uninitialized_default_n_1ILb0EE18__uninit_default_nIPimEET_S3_T0_
int* int__std____uninitialized_default_n_1_false_____uninit_default_n_int___unsigned_long_(int* v1698, unsigned long v1699) {
bb1700:
  int* __first1701;
  unsigned long __n1702;
  int* __retval1703;
  struct std___UninitDestroyGuard_int____void_ __guard1704;
  __first1701 = v1698;
  __n1702 = v1699;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard1704, &__first1701);
      while (1) {
        unsigned long t1706 = __n1702;
        unsigned long c1707 = 0;
        _Bool c1708 = ((t1706 > c1707)) ? 1 : 0;
        if (!c1708) break;
        int* t1709 = __first1701;
        void_std___Construct_int_(t1709);
      for_step1705: ;
        unsigned long t1710 = __n1702;
        unsigned long u1711 = t1710 - 1;
        __n1702 = u1711;
        int* t1712 = __first1701;
        int c1713 = 1;
        int* ptr1714 = &(t1712)[c1713];
        __first1701 = ptr1714;
      }
    std___UninitDestroyGuard_int___void___release(&__guard1704);
    int* t1715 = __first1701;
    __retval1703 = t1715;
    int* t1716 = __retval1703;
    int* ret_val1717 = t1716;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1704);
    }
    return ret_val1717;
  abort();
}

// function: _ZSt9__fill_a1IPiiEvT_S1_RKT0_
void void_std____fill_a1_int___int_(int* v1718, int* v1719, int* v1720) {
bb1721:
  int* __first1722;
  int* __last1723;
  int* __value1724;
  _Bool __load_outside_loop1725;
  int __val1726;
  __first1722 = v1718;
  __last1723 = v1719;
  __value1724 = v1720;
  _Bool c1727 = 1;
  __load_outside_loop1725 = c1727;
  int* t1728 = __value1724;
  int t1729 = *t1728;
  __val1726 = t1729;
    while (1) {
      int* t1731 = __first1722;
      int* t1732 = __last1723;
      _Bool c1733 = ((t1731 != t1732)) ? 1 : 0;
      if (!c1733) break;
      int t1734 = __val1726;
      int* t1735 = __first1722;
      *t1735 = t1734;
    for_step1730: ;
      int* t1736 = __first1722;
      int c1737 = 1;
      int* ptr1738 = &(t1736)[c1737];
      __first1722 = ptr1738;
    }
  return;
}

// function: _ZSt8__fill_aIPiiEvT_S1_RKT0_
void void_std____fill_a_int___int_(int* v1739, int* v1740, int* v1741) {
bb1742:
  int* __first1743;
  int* __last1744;
  int* __value1745;
  __first1743 = v1739;
  __last1744 = v1740;
  __value1745 = v1741;
  int* t1746 = __first1743;
  int* t1747 = __last1744;
  int* t1748 = __value1745;
  void_std____fill_a1_int___int_(t1746, t1747, t1748);
  return;
}

// function: _ZSt10__fill_n_aIPimiET_S1_T0_RKT1_St26random_access_iterator_tag
int* int__std____fill_n_a_int___unsigned_long__int_(int* v1749, unsigned long v1750, int* v1751, struct std__random_access_iterator_tag v1752) {
bb1753:
  int* __first1754;
  unsigned long __n1755;
  int* __value1756;
  struct std__random_access_iterator_tag unnamed1757;
  int* __retval1758;
  __first1754 = v1749;
  __n1755 = v1750;
  __value1756 = v1751;
  unnamed1757 = v1752;
    unsigned long t1759 = __n1755;
    unsigned long c1760 = 0;
    _Bool c1761 = ((t1759 <= c1760)) ? 1 : 0;
    if (c1761) {
      int* t1762 = __first1754;
      __retval1758 = t1762;
      int* t1763 = __retval1758;
      return t1763;
    }
  int* t1764 = __first1754;
  int* t1765 = __first1754;
  unsigned long t1766 = __n1755;
  int* ptr1767 = &(t1765)[t1766];
  int* t1768 = __value1756;
  void_std____fill_a_int___int_(t1764, ptr1767, t1768);
  int* t1769 = __first1754;
  unsigned long t1770 = __n1755;
  int* ptr1771 = &(t1769)[t1770];
  __retval1758 = ptr1771;
  int* t1772 = __retval1758;
  return t1772;
}

// function: _ZSt17__size_to_integerm
unsigned long std____size_to_integer(unsigned long v1773) {
bb1774:
  unsigned long __n1775;
  unsigned long __retval1776;
  __n1775 = v1773;
  unsigned long t1777 = __n1775;
  __retval1776 = t1777;
  unsigned long t1778 = __retval1776;
  return t1778;
}

// function: _ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** v1779) {
bb1780:
  int** unnamed1781;
  struct std__random_access_iterator_tag __retval1782;
  unnamed1781 = v1779;
  struct std__random_access_iterator_tag t1783 = __retval1782;
  return t1783;
}

// function: _ZSt6fill_nIPimiET_S1_T0_RKT1_
int* int__std__fill_n_int___unsigned_long__int_(int* v1784, unsigned long v1785, int* v1786) {
bb1787:
  int* __first1788;
  unsigned long __n1789;
  int* __value1790;
  int* __retval1791;
  struct std__random_access_iterator_tag agg_tmp01792;
  __first1788 = v1784;
  __n1789 = v1785;
  __value1790 = v1786;
  int* t1793 = __first1788;
  unsigned long t1794 = __n1789;
  unsigned long r1795 = std____size_to_integer(t1794);
  int* t1796 = __value1790;
  struct std__random_access_iterator_tag r1797 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first1788);
  agg_tmp01792 = r1797;
  struct std__random_access_iterator_tag t1798 = agg_tmp01792;
  int* r1799 = int__std____fill_n_a_int___unsigned_long__int_(t1793, r1795, t1796, t1798);
  __retval1791 = r1799;
  int* t1800 = __retval1791;
  return t1800;
}

// function: _ZNSt27__uninitialized_default_n_1ILb1EE18__uninit_default_nIPimEET_S3_T0_
int* int__std____uninitialized_default_n_1_true_____uninit_default_n_int___unsigned_long_(int* v1801, unsigned long v1802) {
bb1803:
  int* __first1804;
  unsigned long __n1805;
  int* __retval1806;
  __first1804 = v1801;
  __n1805 = v1802;
    unsigned long t1807 = __n1805;
    unsigned long c1808 = 0;
    _Bool c1809 = ((t1807 > c1808)) ? 1 : 0;
    if (c1809) {
      int* __val1810;
      int* t1811 = __first1804;
      __val1810 = t1811;
      int* t1812 = __val1810;
      void_std___Construct_int_(t1812);
      int* t1813 = __first1804;
      int c1814 = 1;
      int* ptr1815 = &(t1813)[c1814];
      __first1804 = ptr1815;
      int* t1816 = __first1804;
      unsigned long t1817 = __n1805;
      unsigned long c1818 = 1;
      unsigned long b1819 = t1817 - c1818;
      int* t1820 = __val1810;
      int* r1821 = int__std__fill_n_int___unsigned_long__int_(t1816, b1819, t1820);
      __first1804 = r1821;
    }
  int* t1822 = __first1804;
  __retval1806 = t1822;
  int* t1823 = __retval1806;
  return t1823;
}

// function: _ZSt25__uninitialized_default_nIPimET_S1_T0_
int* int__std____uninitialized_default_n_int___unsigned_long_(int* v1824, unsigned long v1825) {
bb1826:
  int* __first1827;
  unsigned long __n1828;
  int* __retval1829;
  _Bool __can_fill1830;
  __first1827 = v1824;
  __n1828 = v1825;
    _Bool r1831 = std__is_constant_evaluated();
    if (r1831) {
      int* t1832 = __first1827;
      unsigned long t1833 = __n1828;
      int* r1834 = int__std____uninitialized_default_n_1_false_____uninit_default_n_int___unsigned_long_(t1832, t1833);
      __retval1829 = r1834;
      int* t1835 = __retval1829;
      return t1835;
    }
  _Bool c1836 = 1;
  __can_fill1830 = c1836;
  int* t1837 = __first1827;
  unsigned long t1838 = __n1828;
  int* r1839 = int__std____uninitialized_default_n_1_true_____uninit_default_n_int___unsigned_long_(t1837, t1838);
  __retval1829 = r1839;
  int* t1840 = __retval1829;
  return t1840;
}

// function: _ZSt27__uninitialized_default_n_aIPimiET_S1_T0_RSaIT1_E
int* int__std____uninitialized_default_n_a_int___unsigned_long__int_(int* v1841, unsigned long v1842, struct std__allocator_int_* v1843) {
bb1844:
  int* __first1845;
  unsigned long __n1846;
  struct std__allocator_int_* unnamed1847;
  int* __retval1848;
  __first1845 = v1841;
  __n1846 = v1842;
  unnamed1847 = v1843;
  int* t1849 = __first1845;
  unsigned long t1850 = __n1846;
  int* r1851 = int__std____uninitialized_default_n_int___unsigned_long_(t1849, t1850);
  __retval1848 = r1851;
  int* t1852 = __retval1848;
  return t1852;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v1853) {
bb1854:
  struct std___Vector_base_int__std__allocator_int__* this1855;
  struct std__allocator_int_* __retval1856;
  this1855 = v1853;
  struct std___Vector_base_int__std__allocator_int__* t1857 = this1855;
  struct std__allocator_int_* base1858 = (struct std__allocator_int_*)((char *)&(t1857->_M_impl) + 0);
  __retval1856 = base1858;
  struct std__allocator_int_* t1859 = __retval1856;
  return t1859;
}

// function: _ZNSt6vectorIiSaIiEE21_M_default_initializeEm
void std__vector_int__std__allocator_int______M_default_initialize(struct std__vector_int__std__allocator_int__* v1860, unsigned long v1861) {
bb1862:
  struct std__vector_int__std__allocator_int__* this1863;
  unsigned long __n1864;
  this1863 = v1860;
  __n1864 = v1861;
  struct std__vector_int__std__allocator_int__* t1865 = this1863;
  struct std___Vector_base_int__std__allocator_int__* base1866 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1865 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1867 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1866->_M_impl) + 0);
  int* t1868 = base1867->_M_start;
  unsigned long t1869 = __n1864;
  struct std___Vector_base_int__std__allocator_int__* base1870 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1865 + 0);
  struct std__allocator_int_* r1871 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1870);
  int* r1872 = int__std____uninitialized_default_n_a_int___unsigned_long__int_(t1868, t1869, r1871);
  struct std___Vector_base_int__std__allocator_int__* base1873 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1865 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1874 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1873->_M_impl) + 0);
  base1874->_M_finish = r1872;
  return;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v1875, int* v1876, unsigned long v1877) {
bb1878:
  struct std____new_allocator_int_* this1879;
  int* __p1880;
  unsigned long __n1881;
  this1879 = v1875;
  __p1880 = v1876;
  __n1881 = v1877;
  struct std____new_allocator_int_* t1882 = this1879;
    unsigned long c1883 = 4;
    unsigned long c1884 = 16;
    _Bool c1885 = ((c1883 > c1884)) ? 1 : 0;
    if (c1885) {
      int* t1886 = __p1880;
      void* cast1887 = (void*)t1886;
      unsigned long t1888 = __n1881;
      unsigned long c1889 = 4;
      unsigned long b1890 = t1888 * c1889;
      unsigned long c1891 = 4;
      operator_delete_3(cast1887, b1890, c1891);
      return;
    }
  int* t1892 = __p1880;
  void* cast1893 = (void*)t1892;
  unsigned long t1894 = __n1881;
  unsigned long c1895 = 4;
  unsigned long b1896 = t1894 * c1895;
  operator_delete_2(cast1893, b1896);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1897, int* v1898, unsigned long v1899) {
bb1900:
  struct std__allocator_int_* this1901;
  int* __p1902;
  unsigned long __n1903;
  this1901 = v1897;
  __p1902 = v1898;
  __n1903 = v1899;
  struct std__allocator_int_* t1904 = this1901;
    _Bool r1905 = std____is_constant_evaluated();
    if (r1905) {
      int* t1906 = __p1902;
      void* cast1907 = (void*)t1906;
      operator_delete(cast1907);
      return;
    }
  struct std____new_allocator_int_* base1908 = (struct std____new_allocator_int_*)((char *)t1904 + 0);
  int* t1909 = __p1902;
  unsigned long t1910 = __n1903;
  std____new_allocator_int___deallocate(base1908, t1909, t1910);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1911, int* v1912, unsigned long v1913) {
bb1914:
  struct std__allocator_int_* __a1915;
  int* __p1916;
  unsigned long __n1917;
  __a1915 = v1911;
  __p1916 = v1912;
  __n1917 = v1913;
  struct std__allocator_int_* t1918 = __a1915;
  int* t1919 = __p1916;
  unsigned long t1920 = __n1917;
  std__allocator_int___deallocate(t1918, t1919, t1920);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v1921, int* v1922, unsigned long v1923) {
bb1924:
  struct std___Vector_base_int__std__allocator_int__* this1925;
  int* __p1926;
  unsigned long __n1927;
  this1925 = v1921;
  __p1926 = v1922;
  __n1927 = v1923;
  struct std___Vector_base_int__std__allocator_int__* t1928 = this1925;
    int* t1929 = __p1926;
    _Bool cast1930 = (_Bool)t1929;
    if (cast1930) {
      struct std__allocator_int_* base1931 = (struct std__allocator_int_*)((char *)&(t1928->_M_impl) + 0);
      int* t1932 = __p1926;
      unsigned long t1933 = __n1927;
      std__allocator_traits_std__allocator_int_____deallocate(base1931, t1932, t1933);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1934) {
bb1935:
  struct std___Vector_base_int__std__allocator_int__* this1936;
  this1936 = v1934;
  struct std___Vector_base_int__std__allocator_int__* t1937 = this1936;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1938 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1937->_M_impl) + 0);
    int* t1939 = base1938->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1940 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1937->_M_impl) + 0);
    int* t1941 = base1940->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1942 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1937->_M_impl) + 0);
    int* t1943 = base1942->_M_start;
    long diff1944 = t1941 - t1943;
    unsigned long cast1945 = (unsigned long)diff1944;
    std___Vector_base_int__std__allocator_int______M_deallocate(t1937, t1939, cast1945);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t1937->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1946, struct std____new_allocator_int_* v1947) {
bb1948:
  struct std____new_allocator_int_* this1949;
  struct std____new_allocator_int_* unnamed1950;
  this1949 = v1946;
  unnamed1950 = v1947;
  struct std____new_allocator_int_* t1951 = this1949;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v1952) {
bb1953:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this1954;
  this1954 = v1952;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1955 = this1954;
  int* c1956 = ((void*)0);
  t1955->_M_start = c1956;
  int* c1957 = ((void*)0);
  t1955->_M_finish = c1957;
  int* c1958 = ((void*)0);
  t1955->_M_end_of_storage = c1958;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v1959) {
bb1960:
  int* __location1961;
  __location1961 = v1959;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1962, int* v1963) {
bb1964:
  int* __first1965;
  int* __last1966;
  __first1965 = v1962;
  __last1966 = v1963;
      _Bool r1967 = std____is_constant_evaluated();
      if (r1967) {
          while (1) {
            int* t1969 = __first1965;
            int* t1970 = __last1966;
            _Bool c1971 = ((t1969 != t1970)) ? 1 : 0;
            if (!c1971) break;
            int* t1972 = __first1965;
            void_std__destroy_at_int_(t1972);
          for_step1968: ;
            int* t1973 = __first1965;
            int c1974 = 1;
            int* ptr1975 = &(t1973)[c1974];
            __first1965 = ptr1975;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v1976, int* v1977, struct std__allocator_int_* v1978) {
bb1979:
  int* __first1980;
  int* __last1981;
  struct std__allocator_int_* unnamed1982;
  __first1980 = v1976;
  __last1981 = v1977;
  unnamed1982 = v1978;
  int* t1983 = __first1980;
  int* t1984 = __last1981;
  void_std___Destroy_int__(t1983, t1984);
  return;
}

