extern void abort(void);
// Struct definitions (auto-parsed)
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____ops___Iter_less_iter { unsigned char __field0; };
struct __gnu_cxx____ops___Iter_less_val { unsigned char __field0; };
struct __gnu_cxx____ops___Val_less_iter { unsigned char __field0; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct myclass { unsigned char __field0; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____cmp_cat____unspec { unsigned char __field0; };
struct std____detail___Synth3way { unsigned char __field0; };
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
struct std__ranges____distance_fn { unsigned char __field0; };
struct std__strong_ordering { char _M_value; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int __field5; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
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

int __const_main_myints1[3] = {12, 32, 71};
int __const_main_myints[3] = {32, 71, 12};
struct std____cmp_cat____unspec __const__ZSt21__unguarded_partitionIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_less_iterEET_S9_S9_S9_T0__agg_tmp5;
struct std____cmp_cat____unspec __const__ZSt13__heap_selectIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_less_iterEEvT_S9_S9_T0__agg_tmp3;
struct __gnu_cxx____ops___Iter_less_val __const__ZSt13__adjust_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEliNS0_5__ops15_Iter_less_iterEEvT_T0_SA_T1_T2____cmp;
struct myclass myobject;
char _str[18] = "myvector[0] == 12";
char _str_1[115] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm40-c++03/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[18] = "myvector[1] == 32";
char _str_3[18] = "myvector[2] == 71";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
struct std__ranges____distance_fn _ZNSt6ranges8distanceE;
char _str_4[49] = "cannot create std::vector larger than max_size()";
struct std____detail___Synth3way _ZNSt8__detail11__synth3wayE;
char _str_5[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_6[19] = "__n < this->size()";
_Bool myfunction(int p0, int p1);
void std__allocator_int___allocator_2(struct std__allocator_int_* p0);
void std__vector_int__std__allocator_int_____vector_int___void_(struct std__vector_int__std__allocator_int__* p0, int* p1, int* p2, struct std__allocator_int_* p3);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
_Bool bool___gnu_cxx____ops___Iter_less_val__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___const(struct __gnu_cxx____ops___Iter_less_val* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2);
void void_std____push_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_less_val_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, long p1, long p2, int p3, struct __gnu_cxx____ops___Iter_less_val* p4);
void void_std____adjust_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, long p1, long p2, int p3, struct __gnu_cxx____ops___Iter_less_iter p4);
void void_std____make_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____ops___Iter_less_iter* p2);
_Bool std__operator_(struct std__strong_ordering p0, struct std____cmp_cat____unspec p1);
struct std__strong_ordering _ZNKSt8__detail10_Synth3wayclIPiS2_EEDaRKT_RKT0_QrqXltfp_fp0_RNS_18__boolean_testableEXltfp0_fp_RNS_18__boolean_testableEE(struct std____detail___Synth3way* p0, int** p1, int** p2);
struct std__strong_ordering decltype__std____detail____synth3way__std__declval_int_________std__declval_int___________gnu_cxx__operator____int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
_Bool bool___gnu_cxx____ops___Iter_less_iter__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int__________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______const(struct __gnu_cxx____ops___Iter_less_iter* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
void void_std____pop_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2, struct __gnu_cxx____ops___Iter_less_iter* p3);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
void void_std____heap_select___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2, struct __gnu_cxx____ops___Iter_less_iter p3);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
void void_std____sort_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____ops___Iter_less_iter* p2);
void void_std____partial_sort___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2, struct __gnu_cxx____ops___Iter_less_iter p3);
void std__enable_if___and__std____not__std____is_tuple_like_int_____std__is_move_constructible_int___std__is_move_assignable_int_____value__void___type_std__swap_int_(int* p0, int* p1);
void void_std__iter_swap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1);
void void_std____move_median_to_first___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p3, struct __gnu_cxx____ops___Iter_less_iter p4);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, long p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____unguarded_partition___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2, struct __gnu_cxx____ops___Iter_less_iter p3);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____unguarded_partition_pivot___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____ops___Iter_less_iter p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
void void_std____introsort_loop___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long____gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, long p2, struct __gnu_cxx____ops___Iter_less_iter p3);
int int_std____countl_zero_unsigned_long_(unsigned long p0);
int int_std____bit_width_unsigned_long_(unsigned long p0);
long long_std____lg_long_(long p0);
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____niter_wrap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, int* p1);
long std__iterator_traits_int____difference_type_std____distance_int__(int* p0, int* p1, struct std__random_access_iterator_tag p2);
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** p0);
long std__iterator_traits_int____difference_type_std__distance_int__(int* p0, int* p1);
void void_std____advance_int___long_(int** p0, long p1, struct std__random_access_iterator_tag p2);
void void_std__advance_int___long_(int** p0, long p1);
extern void* memmove(void* p0, void* p1, unsigned long p2);
void void_std____assign_one_true__int___int__(int** p0, int** p1);
int* int__std____copy_move_backward_a2_true__int___int__(int* p0, int* p1, int* p2);
int* int__std____copy_move_backward_a1_true__int___int__(int* p0, int* p1, int* p2);
int* int__std____niter_base_int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____copy_move_backward_a_true____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__move_backward___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
_Bool bool___gnu_cxx____ops___Val_less_iter__operator___int____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int________int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______const(struct __gnu_cxx____ops___Val_less_iter* p0, int* p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
void void_std____unguarded_linear_insert___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Val_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____ops___Val_less_iter p1);
struct __gnu_cxx____ops___Val_less_iter __gnu_cxx____ops____val_comp_iter(struct __gnu_cxx____ops___Iter_less_iter p0);
void void_std____insertion_sort___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____ops___Iter_less_iter p2);
void void_std____unguarded_insertion_sort___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____ops___Iter_less_iter p2);
void void_std____final_insertion_sort___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____ops___Iter_less_iter p2);
void void_std____sort___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____ops___Iter_less_iter p2);
struct __gnu_cxx____ops___Iter_less_iter __gnu_cxx____ops____iter_less_iter();
void void_std__sort___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, long p1);
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* p0);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
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
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* p0, struct std__allocator_int_* p1);
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* p0);
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* p0, struct std__allocator_int_* p1);
long _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_(struct std__ranges____distance_fn* p0, int** p1, int* p2);
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
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* p0);
void std__allocator_int___allocator(struct std__allocator_int_* p0, struct std__allocator_int_* p1);
extern void std____throw_length_error(char* p0);
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long p0, struct std__allocator_int_* p1);
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* p0);
_Bool std__is_constant_evaluated();
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* p0, int** p1);
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* p0, int* p1);
void void_std___Construct_int__int__(int* p0, int* p1);
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* p0);
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* p0);
int* int__std____do_uninit_copy_int___int___int__(int* p0, int* p1, int* p2);
extern void* memcpy(void* p0, void* p1, unsigned long p2);
int* int__std____niter_base_int__(int* p0);
int* int__std__uninitialized_copy_int___int__(int* p0, int* p1, int* p2);
int* int__std____uninitialized_copy_a_int___int___int___int_(int* p0, int* p1, int* p2, struct std__allocator_int_* p3);
void void_std__vector_int__std__allocator_int______M_range_initialize_n_int___int__(struct std__vector_int__std__allocator_int__* p0, int* p1, int* p2, unsigned long p3);
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
  _Bool c8 = ((t6 < t7)) ? 1 : 0;
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

// function: _ZNSt6vectorIiSaIiEEC2IPivEET_S4_RKS0_
void std__vector_int__std__allocator_int_____vector_int___void_(struct std__vector_int__std__allocator_int__* v15, int* v16, int* v17, struct std__allocator_int_* v18) {
bb19: ;
  struct std__vector_int__std__allocator_int__* this20;
  int* __first21;
  int* __last22;
  struct std__allocator_int_* __a23;
  this20 = v15;
  __first21 = v16;
  __last22 = v17;
  __a23 = v18;
  struct std__vector_int__std__allocator_int__* t24 = this20;
  struct std___Vector_base_int__std__allocator_int__* base25 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t24 + 0);
  struct std__allocator_int_* t26 = __a23;
  std___Vector_base_int__std__allocator_int______Vector_base(base25, t26);
      unsigned long __n27;
      int* t28 = __last22;
      long r29 = _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_(&_ZNSt6ranges8distanceE, &__first21, t28);
      unsigned long cast30 = (unsigned long)r29;
      __n27 = cast30;
      int* t31 = __first21;
      int* t32 = __last22;
      unsigned long t33 = __n27;
      void_std__vector_int__std__allocator_int______M_range_initialize_n_int___int__(t24, t31, t32, t33);
      {
        struct std___Vector_base_int__std__allocator_int__* base34 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t24 + 0);
        std___Vector_base_int__std__allocator_int_______Vector_base(base34);
      }
      return;
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

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2Ev
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v39) {
bb40: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this41;
  this41 = v39;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t42 = this41;
  int* c43 = ((void*)0);
  t42->_M_current = c43;
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v44) {
bb45: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this46;
  int** __retval47;
  this46 = v44;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t48 = this46;
  __retval47 = &t48->_M_current;
  int** t49 = __retval47;
  return t49;
}

// function: _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v50, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v51) {
bb52: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs53;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs54;
  _Bool __retval55;
  __lhs53 = v50;
  __rhs54 = v51;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t56 = __lhs53;
  int** r57 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t56);
  int* t58 = *r57;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t59 = __rhs54;
  int** r60 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t59);
  int* t61 = *r60;
  _Bool c62 = ((t58 == t61)) ? 1 : 0;
  __retval55 = c62;
  _Bool t63 = __retval55;
  return t63;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v64) {
bb65: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this66;
  int* __retval67;
  this66 = v64;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t68 = this66;
  int* t69 = t68->_M_current;
  __retval67 = t69;
  int* t70 = __retval67;
  return t70;
}

// function: _ZNK9__gnu_cxx5__ops14_Iter_less_valclINS_17__normal_iteratorIPiSt6vectorIiSaIiEEEEiEEbT_RT0_
_Bool bool___gnu_cxx____ops___Iter_less_val__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___const(struct __gnu_cxx____ops___Iter_less_val* v71, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v72, int* v73) {
bb74: ;
  struct __gnu_cxx____ops___Iter_less_val* this75;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it76;
  int* __val77;
  _Bool __retval78;
  this75 = v71;
  __it76 = v72;
  __val77 = v73;
  struct __gnu_cxx____ops___Iter_less_val* t79 = this75;
  int* r80 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it76);
  int t81 = *r80;
  int* t82 = __val77;
  int t83 = *t82;
  _Bool c84 = ((t81 < t83)) ? 1 : 0;
  __retval78 = c84;
  _Bool t85 = __retval78;
  return t85;
}

// function: _ZSt11__push_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEliNS0_5__ops14_Iter_less_valEEvT_T0_SA_T1_RT2_
void void_std____push_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_less_val_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v86, long v87, long v88, int v89, struct __gnu_cxx____ops___Iter_less_val* v90) {
bb91: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first92;
  long __holeIndex93;
  long __topIndex94;
  int __value95;
  struct __gnu_cxx____ops___Iter_less_val* __comp96;
  long __parent97;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp298;
  __first92 = v86;
  __holeIndex93 = v87;
  __topIndex94 = v88;
  __value95 = v89;
  __comp96 = v90;
  long t99 = __holeIndex93;
  long c100 = 1;
  long b101 = t99 - c100;
  long c102 = 2;
  long b103 = b101 / c102;
  __parent97 = b103;
    while (1) {
      long t104 = __holeIndex93;
      long t105 = __topIndex94;
      _Bool c106 = ((t104 > t105)) ? 1 : 0;
      _Bool ternary107;
      if (c106) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0108;
        struct __gnu_cxx____ops___Iter_less_val* t109 = __comp96;
        long t110 = __parent97;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r111 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first92, t110);
        agg_tmp0108 = r111;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t112 = agg_tmp0108;
        _Bool r113 = bool___gnu_cxx____ops___Iter_less_val__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___const(t109, t112, &__value95);
        ternary107 = (_Bool)r113;
      } else {
        _Bool c114 = 0;
        ternary107 = (_Bool)c114;
      }
      if (!ternary107) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0115;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1116;
        long t117 = __parent97;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r118 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first92, t117);
        ref_tmp0115 = r118;
        int* r119 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp0115);
        int t120 = *r119;
        long t121 = __holeIndex93;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r122 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first92, t121);
        ref_tmp1116 = r122;
        int* r123 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp1116);
        *r123 = t120;
        long t124 = __parent97;
        __holeIndex93 = t124;
        long t125 = __holeIndex93;
        long c126 = 1;
        long b127 = t125 - c126;
        long c128 = 2;
        long b129 = b127 / c128;
        __parent97 = b129;
    }
  int t130 = __value95;
  long t131 = __holeIndex93;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r132 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first92, t131);
  ref_tmp298 = r132;
  int* r133 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp298);
  *r133 = t130;
  return;
}

// function: _ZSt13__adjust_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEliNS0_5__ops15_Iter_less_iterEEvT_T0_SA_T1_T2_
void void_std____adjust_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v134, long v135, long v136, int v137, struct __gnu_cxx____ops___Iter_less_iter v138) {
bb139: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first140;
  long __holeIndex141;
  long __len142;
  int __value143;
  struct __gnu_cxx____ops___Iter_less_iter __comp144;
  long __topIndex145;
  long __secondChild146;
  struct __gnu_cxx____ops___Iter_less_val __cmp147;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2148;
  __first140 = v134;
  __holeIndex141 = v135;
  __len142 = v136;
  __value143 = v137;
  __comp144 = v138;
  long t149 = __holeIndex141;
  __topIndex145 = t149;
  long t150 = __holeIndex141;
  __secondChild146 = t150;
    while (1) {
      long t151 = __secondChild146;
      long t152 = __len142;
      long c153 = 1;
      long b154 = t152 - c153;
      long c155 = 2;
      long b156 = b154 / c155;
      _Bool c157 = ((t151 < b156)) ? 1 : 0;
      if (!c157) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0158;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1159;
        long c160 = 2;
        long t161 = __secondChild146;
        long c162 = 1;
        long b163 = t161 + c162;
        long b164 = c160 * b163;
        __secondChild146 = b164;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0165;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1166;
          long t167 = __secondChild146;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r168 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first140, t167);
          agg_tmp0165 = r168;
          long t169 = __secondChild146;
          long c170 = 1;
          long b171 = t169 - c170;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r172 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first140, b171);
          agg_tmp1166 = r172;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t173 = agg_tmp0165;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t174 = agg_tmp1166;
          _Bool r175 = bool___gnu_cxx____ops___Iter_less_iter__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int__________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______const(&__comp144, t173, t174);
          if (r175) {
            long t176 = __secondChild146;
            long u177 = t176 - 1;
            __secondChild146 = u177;
          }
        long t178 = __secondChild146;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r179 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first140, t178);
        ref_tmp0158 = r179;
        int* r180 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp0158);
        int t181 = *r180;
        long t182 = __holeIndex141;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r183 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first140, t182);
        ref_tmp1159 = r183;
        int* r184 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp1159);
        *r184 = t181;
        long t185 = __secondChild146;
        __holeIndex141 = t185;
    }
    long t186 = __len142;
    long c187 = 1;
    long b188 = t186 & c187;
    long c189 = 0;
    _Bool c190 = ((b188 == c189)) ? 1 : 0;
    _Bool ternary191;
    if (c190) {
      long t192 = __secondChild146;
      long t193 = __len142;
      long c194 = 2;
      long b195 = t193 - c194;
      long c196 = 2;
      long b197 = b195 / c196;
      _Bool c198 = ((t192 == b197)) ? 1 : 0;
      ternary191 = (_Bool)c198;
    } else {
      _Bool c199 = 0;
      ternary191 = (_Bool)c199;
    }
    if (ternary191) {
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp2200;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp3201;
      long c202 = 2;
      long t203 = __secondChild146;
      long c204 = 1;
      long b205 = t203 + c204;
      long b206 = c202 * b205;
      __secondChild146 = b206;
      long t207 = __secondChild146;
      long c208 = 1;
      long b209 = t207 - c208;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r210 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first140, b209);
      ref_tmp2200 = r210;
      int* r211 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp2200);
      int t212 = *r211;
      long t213 = __holeIndex141;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r214 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first140, t213);
      ref_tmp3201 = r214;
      int* r215 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp3201);
      *r215 = t212;
      long t216 = __secondChild146;
      long c217 = 1;
      long b218 = t216 - c217;
      __holeIndex141 = b218;
    }
  __cmp147 = *&__const__ZSt13__adjust_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEliNS0_5__ops15_Iter_less_iterEEvT_T0_SA_T1_T2____cmp; // copy
  agg_tmp2148 = __first140; // copy
  long t219 = __holeIndex141;
  long t220 = __topIndex145;
  int t221 = __value143;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t222 = agg_tmp2148;
  void_std____push_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_less_val_(t222, t219, t220, t221, &__cmp147);
  return;
}

// function: _ZSt11__make_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_less_iterEEvT_S9_RT0_
void void_std____make_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v223, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v224, struct __gnu_cxx____ops___Iter_less_iter* v225) {
bb226: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first227;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last228;
  struct __gnu_cxx____ops___Iter_less_iter* __comp229;
  long __len230;
  long __parent231;
  __first227 = v223;
  __last228 = v224;
  __comp229 = v225;
    long r232 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__last228, &__first227);
    long c233 = 2;
    _Bool c234 = ((r232 < c233)) ? 1 : 0;
    if (c234) {
      return;
    }
  long r235 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__last228, &__first227);
  __len230 = r235;
  long t236 = __len230;
  long c237 = 2;
  long b238 = t236 - c237;
  long c239 = 2;
  long b240 = b238 / c239;
  __parent231 = b240;
    while (1) {
      _Bool c241 = 1;
      if (!c241) break;
        int __value242;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0243;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0244;
        struct __gnu_cxx____ops___Iter_less_iter agg_tmp1245;
        long t246 = __parent231;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r247 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first227, t246);
        ref_tmp0243 = r247;
        int* r248 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp0243);
        int t249 = *r248;
        __value242 = t249;
        agg_tmp0244 = __first227; // copy
        long t250 = __parent231;
        long t251 = __len230;
        int t252 = __value242;
        struct __gnu_cxx____ops___Iter_less_iter* t253 = __comp229;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t254 = agg_tmp0244;
        struct __gnu_cxx____ops___Iter_less_iter t255 = agg_tmp1245;
        void_std____adjust_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_less_iter_(t254, t250, t251, t252, t255);
          long t256 = __parent231;
          long c257 = 0;
          _Bool c258 = ((t256 == c257)) ? 1 : 0;
          if (c258) {
            return;
          }
        long t259 = __parent231;
        long u260 = t259 - 1;
        __parent231 = u260;
    }
  return;
}

// function: _ZStltSt15strong_orderingNSt9__cmp_cat8__unspecE
_Bool std__operator_(struct std__strong_ordering v261, struct std____cmp_cat____unspec v262) {
bb263: ;
  struct std__strong_ordering __v264;
  struct std____cmp_cat____unspec unnamed265;
  _Bool __retval266;
  __v264 = v261;
  unnamed265 = v262;
  char t267 = __v264._M_value;
  int cast268 = (int)t267;
  int c269 = 0;
  _Bool c270 = ((cast268 < c269)) ? 1 : 0;
  __retval266 = c270;
  _Bool t271 = __retval266;
  return t271;
}

// function: _ZNKSt8__detail10_Synth3wayclIPiS2_EEDaRKT_RKT0_QrqXltfp_fp0_RNS_18__boolean_testableEXltfp0_fp_RNS_18__boolean_testableEE
struct std__strong_ordering _ZNKSt8__detail10_Synth3wayclIPiS2_EEDaRKT_RKT0_QrqXltfp_fp0_RNS_18__boolean_testableEXltfp0_fp_RNS_18__boolean_testableEE(struct std____detail___Synth3way* v272, int** v273, int** v274) {
bb275: ;
  struct std____detail___Synth3way* this276;
  int** __t277;
  int** __u278;
  struct std__strong_ordering __retval279;
  this276 = v272;
  __t277 = v273;
  __u278 = v274;
  struct std____detail___Synth3way* t280 = this276;
    int** t281 = __t277;
    int* t282 = *t281;
    int** t283 = __u278;
    int* t284 = *t283;
    char c285 = -1;
    char c286 = 0;
    char c287 = 1;
    _Bool c288 = ((t282 < t284)) ? 1 : 0;
    char sel289 = c288 ? c285 : c287;
    _Bool c290 = ((t282 == t284)) ? 1 : 0;
    char sel291 = c290 ? c286 : sel289;
    __retval279._M_value = sel291;
    struct std__strong_ordering t292 = __retval279;
    return t292;
  abort();
}

// function: _ZN9__gnu_cxxssIPiSt6vectorIiSaIiEEEEDTclL_ZNSt8__detail11__synth3wayEEclsr3stdE7declvalIRT_EEclsr3stdE7declvalIS7_EEEERKNS_17__normal_iteratorIS6_T0_EESD_
struct std__strong_ordering decltype__std____detail____synth3way__std__declval_int_________std__declval_int___________gnu_cxx__operator____int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v293, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v294) {
bb295: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs296;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs297;
  struct std__strong_ordering __retval298;
  __lhs296 = v293;
  __rhs297 = v294;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t299 = __lhs296;
  int** r300 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t299);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t301 = __rhs297;
  int** r302 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t301);
  struct std__strong_ordering r303 = _ZNKSt8__detail10_Synth3wayclIPiS2_EEDaRKT_RKT0_QrqXltfp_fp0_RNS_18__boolean_testableEXltfp0_fp_RNS_18__boolean_testableEE(&_ZNSt8__detail11__synth3wayE, r300, r302);
  __retval298 = r303;
  struct std__strong_ordering t304 = __retval298;
  return t304;
}

// function: _ZNK9__gnu_cxx5__ops15_Iter_less_iterclINS_17__normal_iteratorIPiSt6vectorIiSaIiEEEES8_EEbT_T0_
_Bool bool___gnu_cxx____ops___Iter_less_iter__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int__________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______const(struct __gnu_cxx____ops___Iter_less_iter* v305, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v306, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v307) {
bb308: ;
  struct __gnu_cxx____ops___Iter_less_iter* this309;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it1310;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it2311;
  _Bool __retval312;
  this309 = v305;
  __it1310 = v306;
  __it2311 = v307;
  struct __gnu_cxx____ops___Iter_less_iter* t313 = this309;
  int* r314 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it1310);
  int t315 = *r314;
  int* r316 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it2311);
  int t317 = *r316;
  _Bool c318 = ((t315 < t317)) ? 1 : 0;
  __retval312 = c318;
  _Bool t319 = __retval312;
  return t319;
}

// function: _ZSt10__pop_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_less_iterEEvT_S9_S9_RT0_
void void_std____pop_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v320, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v321, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v322, struct __gnu_cxx____ops___Iter_less_iter* v323) {
bb324: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first325;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last326;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result327;
  struct __gnu_cxx____ops___Iter_less_iter* __comp328;
  int __value329;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0330;
  struct __gnu_cxx____ops___Iter_less_iter agg_tmp1331;
  __first325 = v320;
  __last326 = v321;
  __result327 = v322;
  __comp328 = v323;
  int* r332 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__result327);
  int t333 = *r332;
  __value329 = t333;
  int* r334 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__first325);
  int t335 = *r334;
  int* r336 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__result327);
  *r336 = t335;
  agg_tmp0330 = __first325; // copy
  long c337 = 0;
  long r338 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__last326, &__first325);
  int t339 = __value329;
  struct __gnu_cxx____ops___Iter_less_iter* t340 = __comp328;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t341 = agg_tmp0330;
  struct __gnu_cxx____ops___Iter_less_iter t342 = agg_tmp1331;
  void_std____adjust_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_less_iter_(t341, c337, r338, t339, t342);
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v343) {
bb344: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this345;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval346;
  this345 = v343;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t347 = this345;
  int* t348 = t347->_M_current;
  int c349 = 1;
  int* ptr350 = &(t348)[c349];
  t347->_M_current = ptr350;
  __retval346 = t347;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t351 = __retval346;
  return t351;
}

// function: _ZSt13__heap_selectIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_less_iterEEvT_S9_S9_T0_
void void_std____heap_select___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v352, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v353, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v354, struct __gnu_cxx____ops___Iter_less_iter v355) {
bb356: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first357;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __middle358;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last359;
  struct __gnu_cxx____ops___Iter_less_iter __comp360;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0361;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1362;
  __first357 = v352;
  __middle358 = v353;
  __last359 = v354;
  __comp360 = v355;
  agg_tmp0361 = __first357; // copy
  agg_tmp1362 = __middle358; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t363 = agg_tmp0361;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t364 = agg_tmp1362;
  void_std____make_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(t363, t364, &__comp360);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __i365;
    struct std__strong_ordering agg_tmp2366;
    struct std____cmp_cat____unspec agg_tmp3367;
    __i365 = __middle358; // copy
    while (1) {
      struct std__strong_ordering r369 = decltype__std____detail____synth3way__std__declval_int_________std__declval_int___________gnu_cxx__operator____int___std__vector_int__std__allocator_int_____(&__i365, &__last359);
      agg_tmp2366 = r369;
      agg_tmp3367 = *&__const__ZSt13__heap_selectIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_less_iterEEvT_S9_S9_T0__agg_tmp3; // copy
      struct std__strong_ordering t370 = agg_tmp2366;
      struct std____cmp_cat____unspec t371 = agg_tmp3367;
      _Bool r372 = std__operator_(t370, t371);
      if (!r372) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp4373;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp5374;
        agg_tmp4373 = __i365; // copy
        agg_tmp5374 = __first357; // copy
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t375 = agg_tmp4373;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t376 = agg_tmp5374;
        _Bool r377 = bool___gnu_cxx____ops___Iter_less_iter__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int__________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______const(&__comp360, t375, t376);
        if (r377) {
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp6378;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp7379;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp8380;
          agg_tmp6378 = __first357; // copy
          agg_tmp7379 = __middle358; // copy
          agg_tmp8380 = __i365; // copy
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t381 = agg_tmp6378;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t382 = agg_tmp7379;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t383 = agg_tmp8380;
          void_std____pop_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(t381, t382, t383, &__comp360);
        }
    for_step368: ;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r384 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(&__i365);
    }
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEmmEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v385) {
bb386: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this387;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval388;
  this387 = v385;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t389 = this387;
  int* t390 = t389->_M_current;
  int c391 = -1;
  int* ptr392 = &(t390)[c391];
  t389->_M_current = ptr392;
  __retval388 = t389;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t393 = __retval388;
  return t393;
}

// function: _ZSt11__sort_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_less_iterEEvT_S9_RT0_
void void_std____sort_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v394, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v395, struct __gnu_cxx____ops___Iter_less_iter* v396) {
bb397: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first398;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last399;
  struct __gnu_cxx____ops___Iter_less_iter* __comp400;
  __first398 = v394;
  __last399 = v395;
  __comp400 = v396;
    while (1) {
      long r401 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__last399, &__first398);
      long c402 = 1;
      _Bool c403 = ((r401 > c402)) ? 1 : 0;
      if (!c403) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0404;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1405;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2406;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r407 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__last399);
        agg_tmp0404 = __first398; // copy
        agg_tmp1405 = __last399; // copy
        agg_tmp2406 = __last399; // copy
        struct __gnu_cxx____ops___Iter_less_iter* t408 = __comp400;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t409 = agg_tmp0404;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t410 = agg_tmp1405;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t411 = agg_tmp2406;
        void_std____pop_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(t409, t410, t411, t408);
    }
  return;
}

// function: _ZSt14__partial_sortIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_less_iterEEvT_S9_S9_T0_
void void_std____partial_sort___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v412, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v413, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v414, struct __gnu_cxx____ops___Iter_less_iter v415) {
bb416: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first417;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __middle418;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last419;
  struct __gnu_cxx____ops___Iter_less_iter __comp420;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0421;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1422;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2423;
  struct __gnu_cxx____ops___Iter_less_iter agg_tmp3424;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp4425;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp5426;
  __first417 = v412;
  __middle418 = v413;
  __last419 = v414;
  __comp420 = v415;
  agg_tmp0421 = __first417; // copy
  agg_tmp1422 = __middle418; // copy
  agg_tmp2423 = __last419; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t427 = agg_tmp0421;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t428 = agg_tmp1422;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t429 = agg_tmp2423;
  struct __gnu_cxx____ops___Iter_less_iter t430 = agg_tmp3424;
  void_std____heap_select___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(t427, t428, t429, t430);
  agg_tmp4425 = __first417; // copy
  agg_tmp5426 = __middle418; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t431 = agg_tmp4425;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t432 = agg_tmp5426;
  void_std____sort_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(t431, t432, &__comp420);
  return;
}

// function: _ZSt4swapIiENSt9enable_ifIXsr6__and_ISt6__not_ISt15__is_tuple_likeIT_EESt21is_move_constructibleIS3_ESt18is_move_assignableIS3_EEE5valueEvE4typeERS3_SC_
void std__enable_if___and__std____not__std____is_tuple_like_int_____std__is_move_constructible_int___std__is_move_assignable_int_____value__void___type_std__swap_int_(int* v433, int* v434) {
bb435: ;
  int* __a436;
  int* __b437;
  int __tmp438;
  __a436 = v433;
  __b437 = v434;
  int* t439 = __a436;
  int t440 = *t439;
  __tmp438 = t440;
  int* t441 = __b437;
  int t442 = *t441;
  int* t443 = __a436;
  *t443 = t442;
  int t444 = __tmp438;
  int* t445 = __b437;
  *t445 = t444;
  return;
}

// function: _ZSt9iter_swapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_EvT_T0_
void void_std__iter_swap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v446, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v447) {
bb448: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __a449;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __b450;
  __a449 = v446;
  __b450 = v447;
  int* r451 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__a449);
  int* r452 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__b450);
  std__enable_if___and__std____not__std____is_tuple_like_int_____std__is_move_constructible_int___std__is_move_assignable_int_____value__void___type_std__swap_int_(r451, r452);
  return;
}

// function: _ZSt22__move_median_to_firstIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_less_iterEEvT_S9_S9_S9_T0_
void void_std____move_median_to_first___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v453, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v454, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v455, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v456, struct __gnu_cxx____ops___Iter_less_iter v457) {
bb458: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result459;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __a460;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __b461;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __c462;
  struct __gnu_cxx____ops___Iter_less_iter __comp463;
  __result459 = v453;
  __a460 = v454;
  __b461 = v455;
  __c462 = v456;
  __comp463 = v457;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0464;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1465;
    agg_tmp0464 = __a460; // copy
    agg_tmp1465 = __b461; // copy
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t466 = agg_tmp0464;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t467 = agg_tmp1465;
    _Bool r468 = bool___gnu_cxx____ops___Iter_less_iter__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int__________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______const(&__comp463, t466, t467);
    if (r468) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2469;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3470;
        agg_tmp2469 = __b461; // copy
        agg_tmp3470 = __c462; // copy
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t471 = agg_tmp2469;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t472 = agg_tmp3470;
        _Bool r473 = bool___gnu_cxx____ops___Iter_less_iter__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int__________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______const(&__comp463, t471, t472);
        if (r473) {
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp4474;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp5475;
          agg_tmp4474 = __result459; // copy
          agg_tmp5475 = __b461; // copy
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t476 = agg_tmp4474;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t477 = agg_tmp5475;
          void_std__iter_swap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t476, t477);
        } else {
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp6478;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp7479;
            agg_tmp6478 = __a460; // copy
            agg_tmp7479 = __c462; // copy
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t480 = agg_tmp6478;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t481 = agg_tmp7479;
            _Bool r482 = bool___gnu_cxx____ops___Iter_less_iter__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int__________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______const(&__comp463, t480, t481);
            if (r482) {
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp8483;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp9484;
              agg_tmp8483 = __result459; // copy
              agg_tmp9484 = __c462; // copy
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t485 = agg_tmp8483;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t486 = agg_tmp9484;
              void_std__iter_swap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t485, t486);
            } else {
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp10487;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11488;
              agg_tmp10487 = __result459; // copy
              agg_tmp11488 = __a460; // copy
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t489 = agg_tmp10487;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t490 = agg_tmp11488;
              void_std__iter_swap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t489, t490);
            }
        }
    } else {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp12491;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp13492;
        agg_tmp12491 = __a460; // copy
        agg_tmp13492 = __c462; // copy
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t493 = agg_tmp12491;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t494 = agg_tmp13492;
        _Bool r495 = bool___gnu_cxx____ops___Iter_less_iter__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int__________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______const(&__comp463, t493, t494);
        if (r495) {
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp14496;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp15497;
          agg_tmp14496 = __result459; // copy
          agg_tmp15497 = __a460; // copy
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t498 = agg_tmp14496;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t499 = agg_tmp15497;
          void_std__iter_swap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t498, t499);
        } else {
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp16500;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp17501;
            agg_tmp16500 = __b461; // copy
            agg_tmp17501 = __c462; // copy
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t502 = agg_tmp16500;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t503 = agg_tmp17501;
            _Bool r504 = bool___gnu_cxx____ops___Iter_less_iter__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int__________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______const(&__comp463, t502, t503);
            if (r504) {
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp18505;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp19506;
              agg_tmp18505 = __result459; // copy
              agg_tmp19506 = __c462; // copy
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t507 = agg_tmp18505;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t508 = agg_tmp19506;
              void_std__iter_swap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t507, t508);
            } else {
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp20509;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp21510;
              agg_tmp20509 = __result459; // copy
              agg_tmp21510 = __b461; // copy
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t511 = agg_tmp20509;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t512 = agg_tmp21510;
              void_std__iter_swap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t511, t512);
            }
        }
    }
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v513, int** v514) {
bb515: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this516;
  int** __i517;
  this516 = v513;
  __i517 = v514;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t518 = this516;
  int** t519 = __i517;
  int* t520 = *t519;
  t518->_M_current = t520;
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEmiEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v521, long v522) {
bb523: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this524;
  long __n525;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval526;
  int* ref_tmp0527;
  this524 = v521;
  __n525 = v522;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t528 = this524;
  int* t529 = t528->_M_current;
  long t530 = __n525;
  long u531 = -t530;
  int* ptr532 = &(t529)[u531];
  ref_tmp0527 = ptr532;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval526, &ref_tmp0527);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t533 = __retval526;
  return t533;
}

// function: _ZSt21__unguarded_partitionIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_less_iterEET_S9_S9_S9_T0_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____unguarded_partition___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v534, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v535, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v536, struct __gnu_cxx____ops___Iter_less_iter v537) {
bb538: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first539;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last540;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __pivot541;
  struct __gnu_cxx____ops___Iter_less_iter __comp542;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval543;
  __first539 = v534;
  __last540 = v535;
  __pivot541 = v536;
  __comp542 = v537;
    while (1) {
      _Bool c544 = 1;
      if (!c544) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp6545;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp7546;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0547;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1548;
          while (1) {
            agg_tmp0547 = __first539; // copy
            agg_tmp1548 = __pivot541; // copy
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t549 = agg_tmp0547;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t550 = agg_tmp1548;
            _Bool r551 = bool___gnu_cxx____ops___Iter_less_iter__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int__________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______const(&__comp542, t549, t550);
            if (!r551) break;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r552 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(&__first539);
          }
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r553 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__last540);
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2554;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3555;
          while (1) {
            agg_tmp2554 = __pivot541; // copy
            agg_tmp3555 = __last540; // copy
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t556 = agg_tmp2554;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t557 = agg_tmp3555;
            _Bool r558 = bool___gnu_cxx____ops___Iter_less_iter__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int__________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______const(&__comp542, t556, t557);
            if (!r558) break;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r559 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__last540);
          }
          struct std__strong_ordering agg_tmp4560;
          struct std____cmp_cat____unspec agg_tmp5561;
          struct std__strong_ordering r562 = decltype__std____detail____synth3way__std__declval_int_________std__declval_int___________gnu_cxx__operator____int___std__vector_int__std__allocator_int_____(&__first539, &__last540);
          agg_tmp4560 = r562;
          agg_tmp5561 = *&__const__ZSt21__unguarded_partitionIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_less_iterEET_S9_S9_S9_T0__agg_tmp5; // copy
          struct std__strong_ordering t563 = agg_tmp4560;
          struct std____cmp_cat____unspec t564 = agg_tmp5561;
          _Bool r565 = std__operator_(t563, t564);
          _Bool u566 = !r565;
          if (u566) {
            __retval543 = __first539; // copy
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t567 = __retval543;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ret_val568 = t567;
            return ret_val568;
          }
        agg_tmp6545 = __first539; // copy
        agg_tmp7546 = __last540; // copy
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t569 = agg_tmp6545;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t570 = agg_tmp7546;
        void_std__iter_swap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t569, t570);
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r571 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(&__first539);
    }
  abort();
}

// function: _ZSt27__unguarded_partition_pivotIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_less_iterEET_S9_S9_T0_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____unguarded_partition_pivot___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v572, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v573, struct __gnu_cxx____ops___Iter_less_iter v574) {
bb575: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first576;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last577;
  struct __gnu_cxx____ops___Iter_less_iter __comp578;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval579;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __mid580;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0581;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1582;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2583;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3584;
  struct __gnu_cxx____ops___Iter_less_iter agg_tmp4585;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp5586;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp6587;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp7588;
  struct __gnu_cxx____ops___Iter_less_iter agg_tmp8589;
  __first576 = v572;
  __last577 = v573;
  __comp578 = v574;
  long r590 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__last577, &__first576);
  long c591 = 2;
  long b592 = r590 / c591;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r593 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first576, b592);
  __mid580 = r593;
  agg_tmp0581 = __first576; // copy
  long c594 = 1;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r595 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first576, c594);
  agg_tmp1582 = r595;
  agg_tmp2583 = __mid580; // copy
  long c596 = 1;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r597 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__last577, c596);
  agg_tmp3584 = r597;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t598 = agg_tmp0581;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t599 = agg_tmp1582;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t600 = agg_tmp2583;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t601 = agg_tmp3584;
  struct __gnu_cxx____ops___Iter_less_iter t602 = agg_tmp4585;
  void_std____move_median_to_first___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(t598, t599, t600, t601, t602);
  long c603 = 1;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r604 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first576, c603);
  agg_tmp5586 = r604;
  agg_tmp6587 = __last577; // copy
  agg_tmp7588 = __first576; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t605 = agg_tmp5586;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t606 = agg_tmp6587;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t607 = agg_tmp7588;
  struct __gnu_cxx____ops___Iter_less_iter t608 = agg_tmp8589;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r609 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____unguarded_partition___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(t605, t606, t607, t608);
  __retval579 = r609;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t610 = __retval579;
  return t610;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEaSERKS5_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v611, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v612) {
bb613: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this614;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed615;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval616;
  this614 = v611;
  unnamed615 = v612;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t617 = this614;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t618 = unnamed615;
  int* t619 = t618->_M_current;
  t617->_M_current = t619;
  __retval616 = t617;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t620 = __retval616;
  return t620;
}

// function: _ZSt16__introsort_loopIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEElNS0_5__ops15_Iter_less_iterEEvT_S9_T0_T1_
void void_std____introsort_loop___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long____gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v621, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v622, long v623, struct __gnu_cxx____ops___Iter_less_iter v624) {
bb625: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first626;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last627;
  long __depth_limit628;
  struct __gnu_cxx____ops___Iter_less_iter __comp629;
  __first626 = v621;
  __last627 = v622;
  __depth_limit628 = v623;
  __comp629 = v624;
    while (1) {
      long r630 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__last627, &__first626);
      long c631 = 16;
      _Bool c632 = ((r630 > c631)) ? 1 : 0;
      if (!c632) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __cut633;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp4634;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp5635;
        struct __gnu_cxx____ops___Iter_less_iter agg_tmp6636;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp7637;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp8638;
        struct __gnu_cxx____ops___Iter_less_iter agg_tmp9639;
          long t640 = __depth_limit628;
          long c641 = 0;
          _Bool c642 = ((t640 == c641)) ? 1 : 0;
          if (c642) {
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0643;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1644;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2645;
            struct __gnu_cxx____ops___Iter_less_iter agg_tmp3646;
            agg_tmp0643 = __first626; // copy
            agg_tmp1644 = __last627; // copy
            agg_tmp2645 = __last627; // copy
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t647 = agg_tmp0643;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t648 = agg_tmp1644;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t649 = agg_tmp2645;
            struct __gnu_cxx____ops___Iter_less_iter t650 = agg_tmp3646;
            void_std____partial_sort___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(t647, t648, t649, t650);
            return;
          }
        long t651 = __depth_limit628;
        long u652 = t651 - 1;
        __depth_limit628 = u652;
        agg_tmp4634 = __first626; // copy
        agg_tmp5635 = __last627; // copy
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t653 = agg_tmp4634;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t654 = agg_tmp5635;
        struct __gnu_cxx____ops___Iter_less_iter t655 = agg_tmp6636;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r656 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____unguarded_partition_pivot___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(t653, t654, t655);
        __cut633 = r656;
        agg_tmp7637 = __cut633; // copy
        agg_tmp8638 = __last627; // copy
        long t657 = __depth_limit628;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t658 = agg_tmp7637;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t659 = agg_tmp8638;
        struct __gnu_cxx____ops___Iter_less_iter t660 = agg_tmp9639;
        void_std____introsort_loop___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long____gnu_cxx____ops___Iter_less_iter_(t658, t659, t657, t660);
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r661 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&__last627, &__cut633);
    }
  return;
}

// function: _ZSt13__countl_zeroImEiT_
int int_std____countl_zero_unsigned_long_(unsigned long v662) {
bb663: ;
  unsigned long __x664;
  int __retval665;
  int _Nd666;
  __x664 = v662;
  int c667 = 64;
  _Nd666 = c667;
  unsigned long t668 = __x664;
  unsigned long clz669 = (unsigned long)__builtin_clzll((unsigned long)t668);
  int cast670 = (int)clz669;
  unsigned long c671 = 0;
  _Bool c672 = ((t668 == c671)) ? 1 : 0;
  int t673 = _Nd666;
  int sel674 = c672 ? t673 : cast670;
  __retval665 = sel674;
  int t675 = __retval665;
  return t675;
}

// function: _ZSt11__bit_widthImEiT_
int int_std____bit_width_unsigned_long_(unsigned long v676) {
bb677: ;
  unsigned long __x678;
  int __retval679;
  int _Nd680;
  __x678 = v676;
  int c681 = 64;
  _Nd680 = c681;
  int t682 = _Nd680;
  unsigned long t683 = __x678;
  int r684 = int_std____countl_zero_unsigned_long_(t683);
  int b685 = t682 - r684;
  __retval679 = b685;
  int t686 = __retval679;
  return t686;
}

// function: _ZSt4__lgIlET_S0_
long long_std____lg_long_(long v687) {
bb688: ;
  long __n689;
  long __retval690;
  __n689 = v687;
  long t691 = __n689;
  unsigned long cast692 = (unsigned long)t691;
  int r693 = int_std____bit_width_unsigned_long_(cast692);
  int c694 = 1;
  int b695 = r693 - c694;
  long cast696 = (long)b695;
  __retval690 = cast696;
  long t697 = __retval690;
  return t697;
}

// function: _ZN9__gnu_cxxmiIPiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v698, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v699) {
bb700: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs701;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs702;
  long __retval703;
  __lhs701 = v698;
  __rhs702 = v699;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t704 = __lhs701;
  int** r705 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t704);
  int* t706 = *r705;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t707 = __rhs702;
  int** r708 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t707);
  int* t709 = *r708;
  long diff710 = t706 - t709;
  __retval703 = diff710;
  long t711 = __retval703;
  return t711;
}

// function: _ZSt12__niter_wrapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES2_ET_S7_T0_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____niter_wrap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v712, int* v713) {
bb714: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __from715;
  int* __res716;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval717;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0718;
  __from715 = v712;
  __res716 = v713;
  int* t719 = __res716;
  int* r720 = int__std____niter_base_int__(t719);
  agg_tmp0718 = __from715; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t721 = agg_tmp0718;
  int* r722 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t721);
  long diff723 = r720 - r722;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r724 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__from715, diff723);
  __retval717 = r724;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t725 = __retval717;
  return t725;
}

// function: _ZSt10__distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_St26random_access_iterator_tag
long std__iterator_traits_int____difference_type_std____distance_int__(int* v726, int* v727, struct std__random_access_iterator_tag v728) {
bb729: ;
  int* __first730;
  int* __last731;
  struct std__random_access_iterator_tag unnamed732;
  long __retval733;
  __first730 = v726;
  __last731 = v727;
  unnamed732 = v728;
  int* t734 = __last731;
  int* t735 = __first730;
  long diff736 = t734 - t735;
  __retval733 = diff736;
  long t737 = __retval733;
  return t737;
}

// function: _ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** v738) {
bb739: ;
  int** unnamed740;
  struct std__random_access_iterator_tag __retval741;
  unnamed740 = v738;
  struct std__random_access_iterator_tag t742 = __retval741;
  return t742;
}

// function: _ZSt8distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_
long std__iterator_traits_int____difference_type_std__distance_int__(int* v743, int* v744) {
bb745: ;
  int* __first746;
  int* __last747;
  long __retval748;
  struct std__random_access_iterator_tag agg_tmp0749;
  __first746 = v743;
  __last747 = v744;
  int* t750 = __first746;
  int* t751 = __last747;
  struct std__random_access_iterator_tag r752 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first746);
  agg_tmp0749 = r752;
  struct std__random_access_iterator_tag t753 = agg_tmp0749;
  long r754 = std__iterator_traits_int____difference_type_std____distance_int__(t750, t751, t753);
  __retval748 = r754;
  long t755 = __retval748;
  return t755;
}

// function: _ZSt9__advanceIPilEvRT_T0_St26random_access_iterator_tag
void void_std____advance_int___long_(int** v756, long v757, struct std__random_access_iterator_tag v758) {
bb759: ;
  int** __i760;
  long __n761;
  struct std__random_access_iterator_tag unnamed762;
  __i760 = v756;
  __n761 = v757;
  unnamed762 = v758;
    long t763 = __n761;
    _Bool isconst764 = 0;
    _Bool ternary765;
    if (isconst764) {
      long t766 = __n761;
      long c767 = 1;
      _Bool c768 = ((t766 == c767)) ? 1 : 0;
      ternary765 = (_Bool)c768;
    } else {
      _Bool c769 = 0;
      ternary765 = (_Bool)c769;
    }
    if (ternary765) {
      int** t770 = __i760;
      int* t771 = *t770;
      int c772 = 1;
      int* ptr773 = &(t771)[c772];
      *t770 = ptr773;
    } else {
        long t774 = __n761;
        _Bool isconst775 = 0;
        _Bool ternary776;
        if (isconst775) {
          long t777 = __n761;
          long c778 = -1;
          _Bool c779 = ((t777 == c778)) ? 1 : 0;
          ternary776 = (_Bool)c779;
        } else {
          _Bool c780 = 0;
          ternary776 = (_Bool)c780;
        }
        if (ternary776) {
          int** t781 = __i760;
          int* t782 = *t781;
          int c783 = -1;
          int* ptr784 = &(t782)[c783];
          *t781 = ptr784;
        } else {
          long t785 = __n761;
          int** t786 = __i760;
          int* t787 = *t786;
          int* ptr788 = &(t787)[t785];
          *t786 = ptr788;
        }
    }
  return;
}

// function: _ZSt7advanceIPilEvRT_T0_
void void_std__advance_int___long_(int** v789, long v790) {
bb791: ;
  int** __i792;
  long __n793;
  long __d794;
  struct std__random_access_iterator_tag agg_tmp0795;
  __i792 = v789;
  __n793 = v790;
  long t796 = __n793;
  __d794 = t796;
  int** t797 = __i792;
  long t798 = __d794;
  int** t799 = __i792;
  struct std__random_access_iterator_tag r800 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(t799);
  agg_tmp0795 = r800;
  struct std__random_access_iterator_tag t801 = agg_tmp0795;
  void_std____advance_int___long_(t797, t798, t801);
  return;
}

// function: _ZSt12__assign_oneILb1EPiS0_EvRT0_RT1_
void void_std____assign_one_true__int___int__(int** v802, int** v803) {
bb804: ;
  int** __out805;
  int** __in806;
  __out805 = v802;
  __in806 = v803;
    int** t807 = __in806;
    int* t808 = *t807;
    int t809 = *t808;
    int** t810 = __out805;
    int* t811 = *t810;
    *t811 = t809;
  return;
}

// function: _ZSt23__copy_move_backward_a2ILb1EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_backward_a2_true__int___int__(int* v812, int* v813, int* v814) {
bb815: ;
  int* __first816;
  int* __last817;
  int* __result818;
  int* __retval819;
  __first816 = v812;
  __last817 = v813;
  __result818 = v814;
      _Bool r820 = std__is_constant_evaluated();
      if (r820) {
      } else {
          long __n821;
          int* t822 = __first816;
          int* t823 = __last817;
          long r824 = std__iterator_traits_int____difference_type_std__distance_int__(t822, t823);
          __n821 = r824;
          long t825 = __n821;
          long u826 = -t825;
          void_std__advance_int___long_(&__result818, u826);
            long t827 = __n821;
            long c828 = 1;
            _Bool c829 = ((t827 > c828)) ? 1 : 0;
            if (c829) {
              int* t830 = __result818;
              void* cast831 = (void*)t830;
              int* t832 = __first816;
              void* cast833 = (void*)t832;
              long t834 = __n821;
              unsigned long cast835 = (unsigned long)t834;
              unsigned long c836 = 4;
              unsigned long b837 = cast835 * c836;
              void* r838 = memmove(cast831, cast833, b837);
            } else {
                long t839 = __n821;
                long c840 = 1;
                _Bool c841 = ((t839 == c840)) ? 1 : 0;
                if (c841) {
                  void_std____assign_one_true__int___int__(&__result818, &__first816);
                }
            }
          int* t842 = __result818;
          __retval819 = t842;
          int* t843 = __retval819;
          return t843;
      }
    while (1) {
      int* t844 = __first816;
      int* t845 = __last817;
      _Bool c846 = ((t844 != t845)) ? 1 : 0;
      if (!c846) break;
        int* t847 = __last817;
        int c848 = -1;
        int* ptr849 = &(t847)[c848];
        __last817 = ptr849;
        int* t850 = __result818;
        int c851 = -1;
        int* ptr852 = &(t850)[c851];
        __result818 = ptr852;
        void_std____assign_one_true__int___int__(&__result818, &__last817);
    }
  int* t853 = __result818;
  __retval819 = t853;
  int* t854 = __retval819;
  return t854;
}

// function: _ZSt23__copy_move_backward_a1ILb1EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_backward_a1_true__int___int__(int* v855, int* v856, int* v857) {
bb858: ;
  int* __first859;
  int* __last860;
  int* __result861;
  int* __retval862;
  __first859 = v855;
  __last860 = v856;
  __result861 = v857;
  int* t863 = __first859;
  int* t864 = __last860;
  int* t865 = __result861;
  int* r866 = int__std____copy_move_backward_a2_true__int___int__(t863, t864, t865);
  __retval862 = r866;
  int* t867 = __retval862;
  return t867;
}

// function: _ZSt12__niter_baseIPiSt6vectorIiSaIiEEET_N9__gnu_cxx17__normal_iteratorIS4_T0_EE
int* int__std____niter_base_int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v868) {
bb869: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it870;
  int* __retval871;
  __it870 = v868;
  int** r872 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__it870);
  int* t873 = *r872;
  __retval871 = t873;
  int* t874 = __retval871;
  return t874;
}

// function: _ZSt22__copy_move_backward_aILb1EN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_ET1_T0_S8_S7_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____copy_move_backward_a_true____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v875, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v876, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v877) {
bb878: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first879;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last880;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result881;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval882;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0883;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1884;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2885;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3886;
  __first879 = v875;
  __last880 = v876;
  __result881 = v877;
  agg_tmp0883 = __result881; // copy
  agg_tmp1884 = __first879; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t887 = agg_tmp1884;
  int* r888 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t887);
  agg_tmp2885 = __last880; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t889 = agg_tmp2885;
  int* r890 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t889);
  agg_tmp3886 = __result881; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t891 = agg_tmp3886;
  int* r892 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t891);
  int* r893 = int__std____copy_move_backward_a1_true__int___int__(r888, r890, r892);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t894 = agg_tmp0883;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r895 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____niter_wrap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(t894, r893);
  __retval882 = r895;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t896 = __retval882;
  return t896;
}

// function: _ZSt12__miter_baseIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEET_S7_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v897) {
bb898: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it899;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval900;
  __it899 = v897;
  __retval900 = __it899; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t901 = __retval900;
  return t901;
}

// function: _ZSt13move_backwardIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_ET0_T_S8_S7_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__move_backward___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v902, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v903, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v904) {
bb905: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first906;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last907;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result908;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval909;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0910;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1911;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2912;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3913;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp4914;
  __first906 = v902;
  __last907 = v903;
  __result908 = v904;
  agg_tmp1911 = __first906; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t915 = agg_tmp1911;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r916 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t915);
  agg_tmp0910 = r916;
  agg_tmp3913 = __last907; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t917 = agg_tmp3913;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r918 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t917);
  agg_tmp2912 = r918;
  agg_tmp4914 = __result908; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t919 = agg_tmp0910;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t920 = agg_tmp2912;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t921 = agg_tmp4914;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r922 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____copy_move_backward_a_true____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t919, t920, t921);
  __retval909 = r922;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t923 = __retval909;
  return t923;
}

// function: _ZNK9__gnu_cxx5__ops14_Val_less_iterclIiNS_17__normal_iteratorIPiSt6vectorIiSaIiEEEEEEbRT_T0_
_Bool bool___gnu_cxx____ops___Val_less_iter__operator___int____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int________int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______const(struct __gnu_cxx____ops___Val_less_iter* v924, int* v925, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v926) {
bb927: ;
  struct __gnu_cxx____ops___Val_less_iter* this928;
  int* __val929;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it930;
  _Bool __retval931;
  this928 = v924;
  __val929 = v925;
  __it930 = v926;
  struct __gnu_cxx____ops___Val_less_iter* t932 = this928;
  int* t933 = __val929;
  int t934 = *t933;
  int* r935 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it930);
  int t936 = *r935;
  _Bool c937 = ((t934 < t936)) ? 1 : 0;
  __retval931 = c937;
  _Bool t938 = __retval931;
  return t938;
}

// function: _ZSt25__unguarded_linear_insertIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops14_Val_less_iterEEvT_T0_
void void_std____unguarded_linear_insert___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Val_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v939, struct __gnu_cxx____ops___Val_less_iter v940) {
bb941: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last942;
  struct __gnu_cxx____ops___Val_less_iter __comp943;
  int __val944;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __next945;
  __last942 = v939;
  __comp943 = v940;
  int* r946 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__last942);
  int t947 = *r946;
  __val944 = t947;
  __next945 = __last942; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r948 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__next945);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0949;
    while (1) {
      agg_tmp0949 = __next945; // copy
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t950 = agg_tmp0949;
      _Bool r951 = bool___gnu_cxx____ops___Val_less_iter__operator___int____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int________int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______const(&__comp943, &__val944, t950);
      if (!r951) break;
        int* r952 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__next945);
        int t953 = *r952;
        int* r954 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__last942);
        *r954 = t953;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r955 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&__last942, &__next945);
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r956 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__next945);
    }
  int t957 = __val944;
  int* r958 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__last942);
  *r958 = t957;
  return;
}

// function: _ZN9__gnu_cxx5__ops15__val_comp_iterENS0_15_Iter_less_iterE
struct __gnu_cxx____ops___Val_less_iter __gnu_cxx____ops____val_comp_iter(struct __gnu_cxx____ops___Iter_less_iter v959) {
bb960: ;
  struct __gnu_cxx____ops___Iter_less_iter unnamed961;
  struct __gnu_cxx____ops___Val_less_iter __retval962;
  unnamed961 = v959;
  struct __gnu_cxx____ops___Val_less_iter t963 = __retval962;
  return t963;
}

// function: _ZSt16__insertion_sortIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_less_iterEEvT_S9_T0_
void void_std____insertion_sort___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v964, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v965, struct __gnu_cxx____ops___Iter_less_iter v966) {
bb967: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first968;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last969;
  struct __gnu_cxx____ops___Iter_less_iter __comp970;
  __first968 = v964;
  __last969 = v965;
  __comp970 = v966;
    _Bool r971 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first968, &__last969);
    if (r971) {
      return;
    }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __i972;
    long c973 = 1;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r974 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first968, c973);
    __i972 = r974;
    while (1) {
      _Bool r976 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__i972, &__last969);
      _Bool u977 = !r976;
      if (!u977) break;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0978;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1979;
          agg_tmp0978 = __i972; // copy
          agg_tmp1979 = __first968; // copy
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t980 = agg_tmp0978;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t981 = agg_tmp1979;
          _Bool r982 = bool___gnu_cxx____ops___Iter_less_iter__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int__________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______const(&__comp970, t980, t981);
          if (r982) {
            int __val983;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2984;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3985;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp4986;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp5987;
            int* r988 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__i972);
            int t989 = *r988;
            __val983 = t989;
            agg_tmp2984 = __first968; // copy
            agg_tmp3985 = __i972; // copy
            long c990 = 1;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r991 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__i972, c990);
            agg_tmp4986 = r991;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t992 = agg_tmp2984;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t993 = agg_tmp3985;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t994 = agg_tmp4986;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r995 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__move_backward___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t992, t993, t994);
            agg_tmp5987 = r995;
            int t996 = __val983;
            int* r997 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__first968);
            *r997 = t996;
          } else {
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp6998;
            struct __gnu_cxx____ops___Val_less_iter agg_tmp7999;
            struct __gnu_cxx____ops___Iter_less_iter agg_tmp81000;
            agg_tmp6998 = __i972; // copy
            struct __gnu_cxx____ops___Iter_less_iter t1001 = agg_tmp81000;
            struct __gnu_cxx____ops___Val_less_iter r1002 = __gnu_cxx____ops____val_comp_iter(t1001);
            agg_tmp7999 = r1002;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1003 = agg_tmp6998;
            struct __gnu_cxx____ops___Val_less_iter t1004 = agg_tmp7999;
            void_std____unguarded_linear_insert___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Val_less_iter_(t1003, t1004);
          }
    for_step975: ;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1005 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(&__i972);
    }
  return;
}

// function: _ZSt26__unguarded_insertion_sortIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_less_iterEEvT_S9_T0_
void void_std____unguarded_insertion_sort___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1006, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1007, struct __gnu_cxx____ops___Iter_less_iter v1008) {
bb1009: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first1010;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last1011;
  struct __gnu_cxx____ops___Iter_less_iter __comp1012;
  __first1010 = v1006;
  __last1011 = v1007;
  __comp1012 = v1008;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __i1013;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01014;
    struct __gnu_cxx____ops___Val_less_iter agg_tmp11015;
    struct __gnu_cxx____ops___Iter_less_iter agg_tmp21016;
    __i1013 = __first1010; // copy
    while (1) {
      _Bool r1018 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__i1013, &__last1011);
      _Bool u1019 = !r1018;
      if (!u1019) break;
      agg_tmp01014 = __i1013; // copy
      struct __gnu_cxx____ops___Iter_less_iter t1020 = agg_tmp21016;
      struct __gnu_cxx____ops___Val_less_iter r1021 = __gnu_cxx____ops____val_comp_iter(t1020);
      agg_tmp11015 = r1021;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1022 = agg_tmp01014;
      struct __gnu_cxx____ops___Val_less_iter t1023 = agg_tmp11015;
      void_std____unguarded_linear_insert___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Val_less_iter_(t1022, t1023);
    for_step1017: ;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1024 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(&__i1013);
    }
  return;
}

// function: _ZSt22__final_insertion_sortIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_less_iterEEvT_S9_T0_
void void_std____final_insertion_sort___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1025, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1026, struct __gnu_cxx____ops___Iter_less_iter v1027) {
bb1028: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first1029;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last1030;
  struct __gnu_cxx____ops___Iter_less_iter __comp1031;
  __first1029 = v1025;
  __last1030 = v1026;
  __comp1031 = v1027;
    long r1032 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__last1030, &__first1029);
    long c1033 = 16;
    _Bool c1034 = ((r1032 > c1033)) ? 1 : 0;
    if (c1034) {
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01035;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11036;
      struct __gnu_cxx____ops___Iter_less_iter agg_tmp21037;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp31038;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp41039;
      struct __gnu_cxx____ops___Iter_less_iter agg_tmp51040;
      agg_tmp01035 = __first1029; // copy
      long c1041 = 16;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1042 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first1029, c1041);
      agg_tmp11036 = r1042;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1043 = agg_tmp01035;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1044 = agg_tmp11036;
      struct __gnu_cxx____ops___Iter_less_iter t1045 = agg_tmp21037;
      void_std____insertion_sort___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(t1043, t1044, t1045);
      long c1046 = 16;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1047 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first1029, c1046);
      agg_tmp31038 = r1047;
      agg_tmp41039 = __last1030; // copy
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1048 = agg_tmp31038;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1049 = agg_tmp41039;
      struct __gnu_cxx____ops___Iter_less_iter t1050 = agg_tmp51040;
      void_std____unguarded_insertion_sort___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(t1048, t1049, t1050);
    } else {
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp61051;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp71052;
      struct __gnu_cxx____ops___Iter_less_iter agg_tmp81053;
      agg_tmp61051 = __first1029; // copy
      agg_tmp71052 = __last1030; // copy
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1054 = agg_tmp61051;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1055 = agg_tmp71052;
      struct __gnu_cxx____ops___Iter_less_iter t1056 = agg_tmp81053;
      void_std____insertion_sort___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(t1054, t1055, t1056);
    }
  return;
}

// function: _ZSt6__sortIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_less_iterEEvT_S9_T0_
void void_std____sort___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1057, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1058, struct __gnu_cxx____ops___Iter_less_iter v1059) {
bb1060: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first1061;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last1062;
  struct __gnu_cxx____ops___Iter_less_iter __comp1063;
  __first1061 = v1057;
  __last1062 = v1058;
  __comp1063 = v1059;
    _Bool r1064 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first1061, &__last1062);
    _Bool u1065 = !r1064;
    if (u1065) {
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01066;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11067;
      struct __gnu_cxx____ops___Iter_less_iter agg_tmp21068;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp31069;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp41070;
      struct __gnu_cxx____ops___Iter_less_iter agg_tmp51071;
      agg_tmp01066 = __first1061; // copy
      agg_tmp11067 = __last1062; // copy
      long r1072 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__last1062, &__first1061);
      long r1073 = long_std____lg_long_(r1072);
      long c1074 = 2;
      long b1075 = r1073 * c1074;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1076 = agg_tmp01066;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1077 = agg_tmp11067;
      struct __gnu_cxx____ops___Iter_less_iter t1078 = agg_tmp21068;
      void_std____introsort_loop___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long____gnu_cxx____ops___Iter_less_iter_(t1076, t1077, b1075, t1078);
      agg_tmp31069 = __first1061; // copy
      agg_tmp41070 = __last1062; // copy
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1079 = agg_tmp31069;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1080 = agg_tmp41070;
      struct __gnu_cxx____ops___Iter_less_iter t1081 = agg_tmp51071;
      void_std____final_insertion_sort___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(t1079, t1080, t1081);
    }
  return;
}

// function: _ZN9__gnu_cxx5__ops16__iter_less_iterEv
struct __gnu_cxx____ops___Iter_less_iter __gnu_cxx____ops____iter_less_iter() {
bb1082: ;
  struct __gnu_cxx____ops___Iter_less_iter __retval1083;
  struct __gnu_cxx____ops___Iter_less_iter t1084 = __retval1083;
  return t1084;
}

// function: _ZSt4sortIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEEvT_S7_
void void_std__sort___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1085, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1086) {
bb1087: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first1088;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last1089;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01090;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11091;
  struct __gnu_cxx____ops___Iter_less_iter agg_tmp21092;
  __first1088 = v1085;
  __last1089 = v1086;
  agg_tmp01090 = __first1088; // copy
  agg_tmp11091 = __last1089; // copy
  struct __gnu_cxx____ops___Iter_less_iter r1093 = __gnu_cxx____ops____iter_less_iter();
  agg_tmp21092 = r1093;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1094 = agg_tmp01090;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1095 = agg_tmp11091;
  struct __gnu_cxx____ops___Iter_less_iter t1096 = agg_tmp21092;
  void_std____sort___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(t1094, t1095, t1096);
  return;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v1097) {
bb1098: ;
  struct std__vector_int__std__allocator_int__* this1099;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval1100;
  this1099 = v1097;
  struct std__vector_int__std__allocator_int__* t1101 = this1099;
  struct std___Vector_base_int__std__allocator_int__* base1102 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1101 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1103 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1102->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval1100, &base1103->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1104 = __retval1100;
  return t1104;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEplEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1105, long v1106) {
bb1107: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this1108;
  long __n1109;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval1110;
  int* ref_tmp01111;
  this1108 = v1105;
  __n1109 = v1106;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1112 = this1108;
  int* t1113 = t1112->_M_current;
  long t1114 = __n1109;
  int* ptr1115 = &(t1113)[t1114];
  ref_tmp01111 = ptr1115;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval1110, &ref_tmp01111);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1116 = __retval1110;
  return t1116;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v1117) {
bb1118: ;
  struct std__vector_int__std__allocator_int__* this1119;
  unsigned long __retval1120;
  long __dif1121;
  this1119 = v1117;
  struct std__vector_int__std__allocator_int__* t1122 = this1119;
  struct std___Vector_base_int__std__allocator_int__* base1123 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1122 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1124 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1123->_M_impl) + 0);
  int* t1125 = base1124->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base1126 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1122 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1127 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1126->_M_impl) + 0);
  int* t1128 = base1127->_M_start;
  long diff1129 = t1125 - t1128;
  __dif1121 = diff1129;
    long t1130 = __dif1121;
    long c1131 = 0;
    _Bool c1132 = ((t1130 < c1131)) ? 1 : 0;
    if (c1132) {
      __builtin_unreachable();
    }
  long t1133 = __dif1121;
  unsigned long cast1134 = (unsigned long)t1133;
  __retval1120 = cast1134;
  unsigned long t1135 = __retval1120;
  return t1135;
}

// function: _ZNSt6vectorIiSaIiEEixEm
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* v1136, unsigned long v1137) {
bb1138: ;
  struct std__vector_int__std__allocator_int__* this1139;
  unsigned long __n1140;
  int* __retval1141;
  this1139 = v1136;
  __n1140 = v1137;
  struct std__vector_int__std__allocator_int__* t1142 = this1139;
    do {
          unsigned long t1143 = __n1140;
          unsigned long r1144 = std__vector_int__std__allocator_int_____size___const(t1142);
          _Bool c1145 = ((t1143 < r1144)) ? 1 : 0;
          _Bool u1146 = !c1145;
          if (u1146) {
            char* cast1147 = (char*)&(_str_5);
            int c1148 = 1263;
            char* cast1149 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm);
            char* cast1150 = (char*)&(_str_6);
            std____glibcxx_assert_fail(cast1147, c1148, cast1149, cast1150);
          }
      _Bool c1151 = 0;
      if (!c1151) break;
    } while (1);
  struct std___Vector_base_int__std__allocator_int__* base1152 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1142 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1153 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1152->_M_impl) + 0);
  int* t1154 = base1153->_M_start;
  unsigned long t1155 = __n1140;
  int* ptr1156 = &(t1154)[t1155];
  __retval1141 = ptr1156;
  int* t1157 = __retval1141;
  return t1157;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v1158, void* v1159) {
bb1160: ;
  struct std__basic_ostream_char__std__char_traits_char__* this1161;
  void* __pf1162;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1163;
  this1161 = v1158;
  __pf1162 = v1159;
  struct std__basic_ostream_char__std__char_traits_char__* t1164 = this1161;
  void* t1165 = __pf1162;
  struct std__basic_ostream_char__std__char_traits_char__* r1166 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t1165)(t1164);
  __retval1163 = r1166;
  struct std__basic_ostream_char__std__char_traits_char__* t1167 = __retval1163;
  return t1167;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1168) {
bb1169: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os1170;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1171;
  __os1170 = v1168;
  struct std__basic_ostream_char__std__char_traits_char__* t1172 = __os1170;
  struct std__basic_ostream_char__std__char_traits_char__* r1173 = std__ostream__flush(t1172);
  __retval1171 = r1173;
  struct std__basic_ostream_char__std__char_traits_char__* t1174 = __retval1171;
  return t1174;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v1175) {
bb1176: ;
  struct std__ctype_char_* __f1177;
  struct std__ctype_char_* __retval1178;
  __f1177 = v1175;
    struct std__ctype_char_* t1179 = __f1177;
    _Bool cast1180 = (_Bool)t1179;
    _Bool u1181 = !cast1180;
    if (u1181) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t1182 = __f1177;
  __retval1178 = t1182;
  struct std__ctype_char_* t1183 = __retval1178;
  return t1183;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v1184, char v1185) {
bb1186: ;
  struct std__ctype_char_* this1187;
  char __c1188;
  char __retval1189;
  this1187 = v1184;
  __c1188 = v1185;
  struct std__ctype_char_* t1190 = this1187;
    char t1191 = t1190->_M_widen_ok;
    _Bool cast1192 = (_Bool)t1191;
    if (cast1192) {
      char t1193 = __c1188;
      unsigned char cast1194 = (unsigned char)t1193;
      unsigned long cast1195 = (unsigned long)cast1194;
      char t1196 = t1190->_M_widen[cast1195];
      __retval1189 = t1196;
      char t1197 = __retval1189;
      return t1197;
    }
  std__ctype_char____M_widen_init___const(t1190);
  char t1198 = __c1188;
  void** v1199 = (void**)t1190;
  void* v1200 = *((void**)v1199);
  char vcall1203 = (char)__VERIFIER_virtual_call_char_char(t1190, 6, t1198);
  __retval1189 = vcall1203;
  char t1204 = __retval1189;
  return t1204;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v1205, char v1206) {
bb1207: ;
  struct std__basic_ios_char__std__char_traits_char__* this1208;
  char __c1209;
  char __retval1210;
  this1208 = v1205;
  __c1209 = v1206;
  struct std__basic_ios_char__std__char_traits_char__* t1211 = this1208;
  struct std__ctype_char_* t1212 = t1211->_M_ctype;
  struct std__ctype_char_* r1213 = std__ctype_char__const__std____check_facet_std__ctype_char___(t1212);
  char t1214 = __c1209;
  char r1215 = std__ctype_char___widen_char__const(r1213, t1214);
  __retval1210 = r1215;
  char t1216 = __retval1210;
  return t1216;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1217) {
bb1218: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os1219;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1220;
  __os1219 = v1217;
  struct std__basic_ostream_char__std__char_traits_char__* t1221 = __os1219;
  struct std__basic_ostream_char__std__char_traits_char__* t1222 = __os1219;
  void** v1223 = (void**)t1222;
  void* v1224 = *((void**)v1223);
  unsigned char* cast1225 = (unsigned char*)v1224;
  long c1226 = -24;
  unsigned char* ptr1227 = &(cast1225)[c1226];
  long* cast1228 = (long*)ptr1227;
  long t1229 = *cast1228;
  unsigned char* cast1230 = (unsigned char*)t1222;
  unsigned char* ptr1231 = &(cast1230)[t1229];
  struct std__basic_ostream_char__std__char_traits_char__* cast1232 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1231;
  struct std__basic_ios_char__std__char_traits_char__* cast1233 = (struct std__basic_ios_char__std__char_traits_char__*)cast1232;
  char c1234 = 10;
  char r1235 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast1233, c1234);
  struct std__basic_ostream_char__std__char_traits_char__* r1236 = std__ostream__put(t1221, r1235);
  struct std__basic_ostream_char__std__char_traits_char__* r1237 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r1236);
  __retval1220 = r1237;
  struct std__basic_ostream_char__std__char_traits_char__* t1238 = __retval1220;
  return t1238;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v1239) {
bb1240: ;
  struct std__vector_int__std__allocator_int__* this1241;
  this1241 = v1239;
  struct std__vector_int__std__allocator_int__* t1242 = this1241;
    struct std___Vector_base_int__std__allocator_int__* base1243 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1242 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1244 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1243->_M_impl) + 0);
    int* t1245 = base1244->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base1246 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1242 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1247 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1246->_M_impl) + 0);
    int* t1248 = base1247->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base1249 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1242 + 0);
    struct std__allocator_int_* r1250 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1249);
    void_std___Destroy_int___int_(t1245, t1248, r1250);
  {
    struct std___Vector_base_int__std__allocator_int__* base1251 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1242 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base1251);
  }
  return;
}

// function: main
int main() {
bb1252: ;
  int __retval1253;
  int myints1254[3];
  int myints11255[3];
  struct std__vector_int__std__allocator_int__ myvector1256;
  struct std__allocator_int_ ref_tmp01257;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it1258;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01259;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11260;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp11261;
  int c1262 = 0;
  __retval1253 = c1262;
  // array copy
  __builtin_memcpy(myints1254, __const_main_myints, (unsigned long)3 * sizeof(__const_main_myints[0]));
  // array copy
  __builtin_memcpy(myints11255, __const_main_myints1, (unsigned long)3 * sizeof(__const_main_myints1[0]));
  int* cast1263 = (int*)&(myints1254);
  int* cast1264 = (int*)&(myints1254);
  int c1265 = 3;
  int* ptr1266 = &(cast1264)[c1265];
  std__allocator_int___allocator_2(&ref_tmp01257);
    std__vector_int__std__allocator_int_____vector_int___void_(&myvector1256, cast1263, ptr1266, &ref_tmp01257);
  {
    std__allocator_int____allocator(&ref_tmp01257);
  }
    __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(&it1258);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1267 = std__vector_int__std__allocator_int_____begin(&myvector1256);
    agg_tmp01259 = r1267;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1268 = std__vector_int__std__allocator_int_____begin(&myvector1256);
    ref_tmp11261 = r1268;
    long c1269 = 3;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1270 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&ref_tmp11261, c1269);
    agg_tmp11260 = r1270;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1271 = agg_tmp01259;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1272 = agg_tmp11260;
    void_std__sort___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t1271, t1272);
    unsigned long c1273 = 0;
    int* r1274 = std__vector_int__std__allocator_int_____operator__(&myvector1256, c1273);
    int t1275 = *r1274;
    int c1276 = 12;
    _Bool c1277 = ((t1275 == c1276)) ? 1 : 0;
    if (c1277) {
    } else {
      char* cast1278 = (char*)&(_str);
      char* c1279 = (char*)_str_1;
      unsigned int c1280 = 30;
      char* cast1281 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1278, c1279, c1280, cast1281);
    }
    unsigned long c1282 = 1;
    int* r1283 = std__vector_int__std__allocator_int_____operator__(&myvector1256, c1282);
    int t1284 = *r1283;
    int c1285 = 32;
    _Bool c1286 = ((t1284 == c1285)) ? 1 : 0;
    if (c1286) {
    } else {
      char* cast1287 = (char*)&(_str_2);
      char* c1288 = (char*)_str_1;
      unsigned int c1289 = 31;
      char* cast1290 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1287, c1288, c1289, cast1290);
    }
    unsigned long c1291 = 2;
    int* r1292 = std__vector_int__std__allocator_int_____operator__(&myvector1256, c1291);
    int t1293 = *r1292;
    int c1294 = 71;
    _Bool c1295 = ((t1293 == c1294)) ? 1 : 0;
    if (c1295) {
    } else {
      char* cast1296 = (char*)&(_str_3);
      char* c1297 = (char*)_str_1;
      unsigned int c1298 = 32;
      char* cast1299 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1296, c1297, c1298, cast1299);
    }
    struct std__basic_ostream_char__std__char_traits_char__* r1300 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c1301 = 0;
    __retval1253 = c1301;
    int t1302 = __retval1253;
    int ret_val1303 = t1302;
    {
      std__vector_int__std__allocator_int______vector(&myvector1256);
    }
    return ret_val1303;
  int t1304 = __retval1253;
  return t1304;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v1305) {
bb1306: ;
  struct std____new_allocator_int_* this1307;
  this1307 = v1305;
  struct std____new_allocator_int_* t1308 = this1307;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1309, struct std__allocator_int_* v1310) {
bb1311: ;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1312;
  struct std__allocator_int_* __a1313;
  this1312 = v1309;
  __a1313 = v1310;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1314 = this1312;
  struct std__allocator_int_* base1315 = (struct std__allocator_int_*)((char *)t1314 + 0);
  struct std__allocator_int_* t1316 = __a1313;
  std__allocator_int___allocator(base1315, t1316);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1317 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t1314 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base1317);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1318) {
bb1319: ;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1320;
  this1320 = v1318;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1321 = this1320;
  {
    struct std__allocator_int_* base1322 = (struct std__allocator_int_*)((char *)t1321 + 0);
    std__allocator_int____allocator(base1322);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1323, struct std__allocator_int_* v1324) {
bb1325: ;
  struct std___Vector_base_int__std__allocator_int__* this1326;
  struct std__allocator_int_* __a1327;
  this1326 = v1323;
  __a1327 = v1324;
  struct std___Vector_base_int__std__allocator_int__* t1328 = this1326;
  struct std__allocator_int_* t1329 = __a1327;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t1328->_M_impl, t1329);
  return;
}

// function: _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_
long _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_(struct std__ranges____distance_fn* v1330, int** v1331, int* v1332) {
bb1333: ;
  struct std__ranges____distance_fn* this1334;
  int** __first1335;
  int* __last1336;
  long __retval1337;
  this1334 = v1330;
  __first1335 = v1331;
  __last1336 = v1332;
  struct std__ranges____distance_fn* t1338 = this1334;
  int* t1339 = __last1336;
  int** t1340 = __first1335;
  int* t1341 = *t1340;
  long diff1342 = t1339 - t1341;
  __retval1337 = diff1342;
  long t1343 = __retval1337;
  return t1343;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1344: ;
  _Bool __retval1345;
    _Bool c1346 = 0;
    __retval1345 = c1346;
    _Bool t1347 = __retval1345;
    return t1347;
  abort();
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v1348) {
bb1349: ;
  struct std____new_allocator_int_* this1350;
  unsigned long __retval1351;
  this1350 = v1348;
  struct std____new_allocator_int_* t1352 = this1350;
  unsigned long c1353 = 9223372036854775807;
  unsigned long c1354 = 4;
  unsigned long b1355 = c1353 / c1354;
  __retval1351 = b1355;
  unsigned long t1356 = __retval1351;
  return t1356;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v1357, unsigned long v1358, void* v1359) {
bb1360: ;
  struct std____new_allocator_int_* this1361;
  unsigned long __n1362;
  void* unnamed1363;
  int* __retval1364;
  this1361 = v1357;
  __n1362 = v1358;
  unnamed1363 = v1359;
  struct std____new_allocator_int_* t1365 = this1361;
    unsigned long t1366 = __n1362;
    unsigned long r1367 = std____new_allocator_int____M_max_size___const(t1365);
    _Bool c1368 = ((t1366 > r1367)) ? 1 : 0;
    if (c1368) {
        unsigned long t1369 = __n1362;
        unsigned long c1370 = -1;
        unsigned long c1371 = 4;
        unsigned long b1372 = c1370 / c1371;
        _Bool c1373 = ((t1369 > b1372)) ? 1 : 0;
        if (c1373) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c1374 = 4;
    unsigned long c1375 = 16;
    _Bool c1376 = ((c1374 > c1375)) ? 1 : 0;
    if (c1376) {
      unsigned long __al1377;
      unsigned long c1378 = 4;
      __al1377 = c1378;
      unsigned long t1379 = __n1362;
      unsigned long c1380 = 4;
      unsigned long b1381 = t1379 * c1380;
      unsigned long t1382 = __al1377;
      void* r1383 = operator_new_2(b1381, t1382);
      int* cast1384 = (int*)r1383;
      __retval1364 = cast1384;
      int* t1385 = __retval1364;
      return t1385;
    }
  unsigned long t1386 = __n1362;
  unsigned long c1387 = 4;
  unsigned long b1388 = t1386 * c1387;
  void* r1389 = operator_new(b1388);
  int* cast1390 = (int*)r1389;
  __retval1364 = cast1390;
  int* t1391 = __retval1364;
  return t1391;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v1392, unsigned long v1393) {
bb1394: ;
  struct std__allocator_int_* this1395;
  unsigned long __n1396;
  int* __retval1397;
  this1395 = v1392;
  __n1396 = v1393;
  struct std__allocator_int_* t1398 = this1395;
    _Bool r1399 = std____is_constant_evaluated();
    if (r1399) {
        unsigned long t1400 = __n1396;
        unsigned long c1401 = 4;
        unsigned long ovr1402;
        _Bool ovf1403 = __builtin_mul_overflow(t1400, c1401, &ovr1402);
        __n1396 = ovr1402;
        if (ovf1403) {
          std____throw_bad_array_new_length();
        }
      unsigned long t1404 = __n1396;
      void* r1405 = operator_new(t1404);
      int* cast1406 = (int*)r1405;
      __retval1397 = cast1406;
      int* t1407 = __retval1397;
      return t1407;
    }
  struct std____new_allocator_int_* base1408 = (struct std____new_allocator_int_*)((char *)t1398 + 0);
  unsigned long t1409 = __n1396;
  void* c1410 = ((void*)0);
  int* r1411 = std____new_allocator_int___allocate(base1408, t1409, c1410);
  __retval1397 = r1411;
  int* t1412 = __retval1397;
  return t1412;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v1413, unsigned long v1414) {
bb1415: ;
  struct std__allocator_int_* __a1416;
  unsigned long __n1417;
  int* __retval1418;
  __a1416 = v1413;
  __n1417 = v1414;
  struct std__allocator_int_* t1419 = __a1416;
  unsigned long t1420 = __n1417;
  int* r1421 = std__allocator_int___allocate(t1419, t1420);
  __retval1418 = r1421;
  int* t1422 = __retval1418;
  return t1422;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v1423, unsigned long v1424) {
bb1425: ;
  struct std___Vector_base_int__std__allocator_int__* this1426;
  unsigned long __n1427;
  int* __retval1428;
  this1426 = v1423;
  __n1427 = v1424;
  struct std___Vector_base_int__std__allocator_int__* t1429 = this1426;
  unsigned long t1430 = __n1427;
  unsigned long c1431 = 0;
  _Bool c1432 = ((t1430 != c1431)) ? 1 : 0;
  int* ternary1433;
  if (c1432) {
    struct std__allocator_int_* base1434 = (struct std__allocator_int_*)((char *)&(t1429->_M_impl) + 0);
    unsigned long t1435 = __n1427;
    int* r1436 = std__allocator_traits_std__allocator_int_____allocate(base1434, t1435);
    ternary1433 = (int*)r1436;
  } else {
    int* c1437 = ((void*)0);
    ternary1433 = (int*)c1437;
  }
  __retval1428 = ternary1433;
  int* t1438 = __retval1428;
  return t1438;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v1439, unsigned long* v1440) {
bb1441: ;
  unsigned long* __a1442;
  unsigned long* __b1443;
  unsigned long* __retval1444;
  __a1442 = v1439;
  __b1443 = v1440;
    unsigned long* t1445 = __b1443;
    unsigned long t1446 = *t1445;
    unsigned long* t1447 = __a1442;
    unsigned long t1448 = *t1447;
    _Bool c1449 = ((t1446 < t1448)) ? 1 : 0;
    if (c1449) {
      unsigned long* t1450 = __b1443;
      __retval1444 = t1450;
      unsigned long* t1451 = __retval1444;
      return t1451;
    }
  unsigned long* t1452 = __a1442;
  __retval1444 = t1452;
  unsigned long* t1453 = __retval1444;
  return t1453;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v1454) {
bb1455: ;
  struct std__allocator_int_* __a1456;
  unsigned long __retval1457;
  unsigned long __diffmax1458;
  unsigned long __allocmax1459;
  __a1456 = v1454;
  unsigned long c1460 = 2305843009213693951;
  __diffmax1458 = c1460;
  unsigned long c1461 = 4611686018427387903;
  __allocmax1459 = c1461;
  unsigned long* r1462 = unsigned_long_const__std__min_unsigned_long_(&__diffmax1458, &__allocmax1459);
  unsigned long t1463 = *r1462;
  __retval1457 = t1463;
  unsigned long t1464 = __retval1457;
  return t1464;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v1465, struct std__allocator_int_* v1466) {
bb1467: ;
  struct std__allocator_int_* this1468;
  struct std__allocator_int_* __a1469;
  this1468 = v1465;
  __a1469 = v1466;
  struct std__allocator_int_* t1470 = this1468;
  struct std____new_allocator_int_* base1471 = (struct std____new_allocator_int_*)((char *)t1470 + 0);
  struct std__allocator_int_* t1472 = __a1469;
  struct std____new_allocator_int_* base1473 = (struct std____new_allocator_int_*)((char *)t1472 + 0);
  std____new_allocator_int_____new_allocator(base1471, base1473);
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long v1474, struct std__allocator_int_* v1475) {
bb1476: ;
  unsigned long __n1477;
  struct std__allocator_int_* __a1478;
  unsigned long __retval1479;
  __n1477 = v1474;
  __a1478 = v1475;
    struct std__allocator_int_ ref_tmp01480;
    _Bool tmp_exprcleanup1481;
    unsigned long t1482 = __n1477;
    struct std__allocator_int_* t1483 = __a1478;
    std__allocator_int___allocator(&ref_tmp01480, t1483);
      unsigned long r1484 = std__vector_int__std__allocator_int______S_max_size(&ref_tmp01480);
      _Bool c1485 = ((t1482 > r1484)) ? 1 : 0;
      tmp_exprcleanup1481 = c1485;
    {
      std__allocator_int____allocator(&ref_tmp01480);
    }
    _Bool t1486 = tmp_exprcleanup1481;
    if (t1486) {
      char* cast1487 = (char*)&(_str_4);
      std____throw_length_error(cast1487);
    }
  unsigned long t1488 = __n1477;
  __retval1479 = t1488;
  unsigned long t1489 = __retval1479;
  return t1489;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v1490) {
bb1491: ;
  struct std___Vector_base_int__std__allocator_int__* this1492;
  struct std__allocator_int_* __retval1493;
  this1492 = v1490;
  struct std___Vector_base_int__std__allocator_int__* t1494 = this1492;
  struct std__allocator_int_* base1495 = (struct std__allocator_int_*)((char *)&(t1494->_M_impl) + 0);
  __retval1493 = base1495;
  struct std__allocator_int_* t1496 = __retval1493;
  return t1496;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1497: ;
  _Bool __retval1498;
    _Bool c1499 = 0;
    __retval1498 = c1499;
    _Bool t1500 = __retval1498;
    return t1500;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v1501, int** v1502) {
bb1503: ;
  struct std___UninitDestroyGuard_int____void_* this1504;
  int** __first1505;
  this1504 = v1501;
  __first1505 = v1502;
  struct std___UninitDestroyGuard_int____void_* t1506 = this1504;
  int** t1507 = __first1505;
  int* t1508 = *t1507;
  t1506->_M_first = t1508;
  int** t1509 = __first1505;
  t1506->_M_cur = t1509;
  return;
}

// function: _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* v1510, int* v1511) {
bb1512: ;
  int* __location1513;
  int* __args1514;
  int* __retval1515;
  void* __loc1516;
  __location1513 = v1510;
  __args1514 = v1511;
  int* t1517 = __location1513;
  void* cast1518 = (void*)t1517;
  __loc1516 = cast1518;
    void* t1519 = __loc1516;
    int* cast1520 = (int*)t1519;
    int* t1521 = __args1514;
    int t1522 = *t1521;
    *cast1520 = t1522;
    __retval1515 = cast1520;
    int* t1523 = __retval1515;
    return t1523;
  abort();
}

// function: _ZSt10_ConstructIiJRiEEvPT_DpOT0_
void void_std___Construct_int__int__(int* v1524, int* v1525) {
bb1526: ;
  int* __p1527;
  int* __args1528;
  __p1527 = v1524;
  __args1528 = v1525;
    _Bool r1529 = std____is_constant_evaluated();
    if (r1529) {
      int* t1530 = __p1527;
      int* t1531 = __args1528;
      int* r1532 = _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t1530, t1531);
      return;
    }
  int* t1533 = __p1527;
  void* cast1534 = (void*)t1533;
  int* cast1535 = (int*)cast1534;
  int* t1536 = __args1528;
  int t1537 = *t1536;
  *cast1535 = t1537;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v1538) {
bb1539: ;
  struct std___UninitDestroyGuard_int____void_* this1540;
  this1540 = v1538;
  struct std___UninitDestroyGuard_int____void_* t1541 = this1540;
  int** c1542 = ((void*)0);
  t1541->_M_cur = c1542;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v1543) {
bb1544: ;
  struct std___UninitDestroyGuard_int____void_* this1545;
  this1545 = v1543;
  struct std___UninitDestroyGuard_int____void_* t1546 = this1545;
    int** t1547 = t1546->_M_cur;
    int** c1548 = ((void*)0);
    _Bool c1549 = ((t1547 != c1548)) ? 1 : 0;
    if (c1549) {
      int* t1550 = t1546->_M_first;
      int** t1551 = t1546->_M_cur;
      int* t1552 = *t1551;
      void_std___Destroy_int__(t1550, t1552);
    }
  return;
}

// function: _ZSt16__do_uninit_copyIPiS0_S0_ET1_T_T0_S1_
int* int__std____do_uninit_copy_int___int___int__(int* v1553, int* v1554, int* v1555) {
bb1556: ;
  int* __first1557;
  int* __last1558;
  int* __result1559;
  int* __retval1560;
  struct std___UninitDestroyGuard_int____void_ __guard1561;
  __first1557 = v1553;
  __last1558 = v1554;
  __result1559 = v1555;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard1561, &__result1559);
      while (1) {
        int* t1563 = __first1557;
        int* t1564 = __last1558;
        _Bool c1565 = ((t1563 != t1564)) ? 1 : 0;
        if (!c1565) break;
        int* t1566 = __result1559;
        int* t1567 = __first1557;
        void_std___Construct_int__int__(t1566, t1567);
      for_step1562: ;
        int* t1568 = __first1557;
        int c1569 = 1;
        int* ptr1570 = &(t1568)[c1569];
        __first1557 = ptr1570;
        int* t1571 = __result1559;
        int c1572 = 1;
        int* ptr1573 = &(t1571)[c1572];
        __result1559 = ptr1573;
      }
    std___UninitDestroyGuard_int___void___release(&__guard1561);
    int* t1574 = __result1559;
    __retval1560 = t1574;
    int* t1575 = __retval1560;
    int* ret_val1576 = t1575;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1561);
    }
    return ret_val1576;
  abort();
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v1577) {
bb1578: ;
  int* __it1579;
  int* __retval1580;
  __it1579 = v1577;
  int* t1581 = __it1579;
  __retval1580 = t1581;
  int* t1582 = __retval1580;
  return t1582;
}

// function: _ZSt18uninitialized_copyIPiS0_ET0_T_S2_S1_
int* int__std__uninitialized_copy_int___int__(int* v1583, int* v1584, int* v1585) {
bb1586: ;
  int* __first1587;
  int* __last1588;
  int* __result1589;
  int* __retval1590;
  __first1587 = v1583;
  __last1588 = v1584;
  __result1589 = v1585;
      long __n1591;
      int* t1592 = __last1588;
      int* t1593 = __first1587;
      long diff1594 = t1592 - t1593;
      __n1591 = diff1594;
        long t1595 = __n1591;
        long c1596 = 0;
        _Bool c1597 = ((t1595 > c1596)) ? 1 : 0;
        if (c1597) {
          int* t1598 = __result1589;
          int* r1599 = int__std____niter_base_int__(t1598);
          void* cast1600 = (void*)r1599;
          int* t1601 = __first1587;
          int* r1602 = int__std____niter_base_int__(t1601);
          void* cast1603 = (void*)r1602;
          long t1604 = __n1591;
          unsigned long cast1605 = (unsigned long)t1604;
          unsigned long c1606 = 4;
          unsigned long b1607 = cast1605 * c1606;
          void* r1608 = memcpy(cast1600, cast1603, b1607);
          long t1609 = __n1591;
          int* t1610 = __result1589;
          int* ptr1611 = &(t1610)[t1609];
          __result1589 = ptr1611;
        }
      int* t1612 = __result1589;
      __retval1590 = t1612;
      int* t1613 = __retval1590;
      return t1613;
  abort();
}

// function: _ZSt22__uninitialized_copy_aIPiS0_S0_iET1_T_T0_S1_RSaIT2_E
int* int__std____uninitialized_copy_a_int___int___int___int_(int* v1614, int* v1615, int* v1616, struct std__allocator_int_* v1617) {
bb1618: ;
  int* __first1619;
  int* __last1620;
  int* __result1621;
  struct std__allocator_int_* unnamed1622;
  int* __retval1623;
  __first1619 = v1614;
  __last1620 = v1615;
  __result1621 = v1616;
  unnamed1622 = v1617;
    _Bool r1624 = std__is_constant_evaluated();
    if (r1624) {
      int* t1625 = __first1619;
      int* t1626 = __last1620;
      int* t1627 = __result1621;
      int* r1628 = int__std____do_uninit_copy_int___int___int__(t1625, t1626, t1627);
      __retval1623 = r1628;
      int* t1629 = __retval1623;
      return t1629;
    }
    int* t1630 = __first1619;
    int* t1631 = __last1620;
    int* t1632 = __result1621;
    int* r1633 = int__std__uninitialized_copy_int___int__(t1630, t1631, t1632);
    __retval1623 = r1633;
    int* t1634 = __retval1623;
    return t1634;
  abort();
}

// function: _ZNSt6vectorIiSaIiEE21_M_range_initialize_nIPiS3_EEvT_T0_m
void void_std__vector_int__std__allocator_int______M_range_initialize_n_int___int__(struct std__vector_int__std__allocator_int__* v1635, int* v1636, int* v1637, unsigned long v1638) {
bb1639: ;
  struct std__vector_int__std__allocator_int__* this1640;
  int* __first1641;
  int* __last1642;
  unsigned long __n1643;
  int* __start1644;
  this1640 = v1635;
  __first1641 = v1636;
  __last1642 = v1637;
  __n1643 = v1638;
  struct std__vector_int__std__allocator_int__* t1645 = this1640;
  struct std___Vector_base_int__std__allocator_int__* base1646 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1645 + 0);
  unsigned long t1647 = __n1643;
  struct std___Vector_base_int__std__allocator_int__* base1648 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1645 + 0);
  struct std__allocator_int_* r1649 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1648);
  unsigned long r1650 = std__vector_int__std__allocator_int______S_check_init_len(t1647, r1649);
  int* r1651 = std___Vector_base_int__std__allocator_int______M_allocate(base1646, r1650);
  __start1644 = r1651;
  int* t1652 = __start1644;
  struct std___Vector_base_int__std__allocator_int__* base1653 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1645 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1654 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1653->_M_impl) + 0);
  base1654->_M_finish = t1652;
  struct std___Vector_base_int__std__allocator_int__* base1655 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1645 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1656 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1655->_M_impl) + 0);
  base1656->_M_start = t1652;
  int* t1657 = __start1644;
  unsigned long t1658 = __n1643;
  int* ptr1659 = &(t1657)[t1658];
  struct std___Vector_base_int__std__allocator_int__* base1660 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1645 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1661 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1660->_M_impl) + 0);
  base1661->_M_end_of_storage = ptr1659;
  int* t1662 = __first1641;
  int* t1663 = __last1642;
  int* t1664 = __start1644;
  struct std___Vector_base_int__std__allocator_int__* base1665 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1645 + 0);
  struct std__allocator_int_* r1666 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1665);
  int* r1667 = int__std____uninitialized_copy_a_int___int___int___int_(t1662, t1663, t1664, r1666);
  struct std___Vector_base_int__std__allocator_int__* base1668 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1645 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1669 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1668->_M_impl) + 0);
  base1669->_M_finish = r1667;
  return;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v1670, int* v1671, unsigned long v1672) {
bb1673: ;
  struct std____new_allocator_int_* this1674;
  int* __p1675;
  unsigned long __n1676;
  this1674 = v1670;
  __p1675 = v1671;
  __n1676 = v1672;
  struct std____new_allocator_int_* t1677 = this1674;
    unsigned long c1678 = 4;
    unsigned long c1679 = 16;
    _Bool c1680 = ((c1678 > c1679)) ? 1 : 0;
    if (c1680) {
      int* t1681 = __p1675;
      void* cast1682 = (void*)t1681;
      unsigned long t1683 = __n1676;
      unsigned long c1684 = 4;
      unsigned long b1685 = t1683 * c1684;
      unsigned long c1686 = 4;
      operator_delete_3(cast1682, b1685, c1686);
      return;
    }
  int* t1687 = __p1675;
  void* cast1688 = (void*)t1687;
  unsigned long t1689 = __n1676;
  unsigned long c1690 = 4;
  unsigned long b1691 = t1689 * c1690;
  operator_delete_2(cast1688, b1691);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1692, int* v1693, unsigned long v1694) {
bb1695: ;
  struct std__allocator_int_* this1696;
  int* __p1697;
  unsigned long __n1698;
  this1696 = v1692;
  __p1697 = v1693;
  __n1698 = v1694;
  struct std__allocator_int_* t1699 = this1696;
    _Bool r1700 = std____is_constant_evaluated();
    if (r1700) {
      int* t1701 = __p1697;
      void* cast1702 = (void*)t1701;
      operator_delete(cast1702);
      return;
    }
  struct std____new_allocator_int_* base1703 = (struct std____new_allocator_int_*)((char *)t1699 + 0);
  int* t1704 = __p1697;
  unsigned long t1705 = __n1698;
  std____new_allocator_int___deallocate(base1703, t1704, t1705);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1706, int* v1707, unsigned long v1708) {
bb1709: ;
  struct std__allocator_int_* __a1710;
  int* __p1711;
  unsigned long __n1712;
  __a1710 = v1706;
  __p1711 = v1707;
  __n1712 = v1708;
  struct std__allocator_int_* t1713 = __a1710;
  int* t1714 = __p1711;
  unsigned long t1715 = __n1712;
  std__allocator_int___deallocate(t1713, t1714, t1715);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v1716, int* v1717, unsigned long v1718) {
bb1719: ;
  struct std___Vector_base_int__std__allocator_int__* this1720;
  int* __p1721;
  unsigned long __n1722;
  this1720 = v1716;
  __p1721 = v1717;
  __n1722 = v1718;
  struct std___Vector_base_int__std__allocator_int__* t1723 = this1720;
    int* t1724 = __p1721;
    _Bool cast1725 = (_Bool)t1724;
    if (cast1725) {
      struct std__allocator_int_* base1726 = (struct std__allocator_int_*)((char *)&(t1723->_M_impl) + 0);
      int* t1727 = __p1721;
      unsigned long t1728 = __n1722;
      std__allocator_traits_std__allocator_int_____deallocate(base1726, t1727, t1728);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1729) {
bb1730: ;
  struct std___Vector_base_int__std__allocator_int__* this1731;
  this1731 = v1729;
  struct std___Vector_base_int__std__allocator_int__* t1732 = this1731;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1733 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1732->_M_impl) + 0);
    int* t1734 = base1733->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1735 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1732->_M_impl) + 0);
    int* t1736 = base1735->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1737 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1732->_M_impl) + 0);
    int* t1738 = base1737->_M_start;
    long diff1739 = t1736 - t1738;
    unsigned long cast1740 = (unsigned long)diff1739;
    std___Vector_base_int__std__allocator_int______M_deallocate(t1732, t1734, cast1740);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t1732->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1741, struct std____new_allocator_int_* v1742) {
bb1743: ;
  struct std____new_allocator_int_* this1744;
  struct std____new_allocator_int_* unnamed1745;
  this1744 = v1741;
  unnamed1745 = v1742;
  struct std____new_allocator_int_* t1746 = this1744;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v1747) {
bb1748: ;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this1749;
  this1749 = v1747;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1750 = this1749;
  int* c1751 = ((void*)0);
  t1750->_M_start = c1751;
  int* c1752 = ((void*)0);
  t1750->_M_finish = c1752;
  int* c1753 = ((void*)0);
  t1750->_M_end_of_storage = c1753;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v1754) {
bb1755: ;
  int* __location1756;
  __location1756 = v1754;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1757, int* v1758) {
bb1759: ;
  int* __first1760;
  int* __last1761;
  __first1760 = v1757;
  __last1761 = v1758;
      _Bool r1762 = std____is_constant_evaluated();
      if (r1762) {
          while (1) {
            int* t1764 = __first1760;
            int* t1765 = __last1761;
            _Bool c1766 = ((t1764 != t1765)) ? 1 : 0;
            if (!c1766) break;
            int* t1767 = __first1760;
            void_std__destroy_at_int_(t1767);
          for_step1763: ;
            int* t1768 = __first1760;
            int c1769 = 1;
            int* ptr1770 = &(t1768)[c1769];
            __first1760 = ptr1770;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v1771, int* v1772, struct std__allocator_int_* v1773) {
bb1774: ;
  int* __first1775;
  int* __last1776;
  struct std__allocator_int_* unnamed1777;
  __first1775 = v1771;
  __last1776 = v1772;
  unnamed1777 = v1773;
  int* t1778 = __first1775;
  int* t1779 = __last1776;
  void_std___Destroy_int__(t1778, t1779);
  return;
}

