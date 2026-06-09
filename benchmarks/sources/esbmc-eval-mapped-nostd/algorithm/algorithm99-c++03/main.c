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
struct __gnu_cxx____ops___Iter_comp_iter_myclass_ { unsigned char __field0; };
struct __gnu_cxx____ops___Iter_comp_val_myclass_ { unsigned char __field0; };
struct __gnu_cxx____ops___Val_comp_iter_myclass_ { unsigned char __field0; };
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
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int __const_main_myints1[3] = {12, 32, 71};
int __const_main_myints[3] = {32, 71, 12};
struct std____cmp_cat____unspec __const__ZSt21__unguarded_partitionIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_comp_iterI7myclassEEET_SB_SB_SB_T0__agg_tmp5;
struct std____cmp_cat____unspec __const__ZSt13__heap_selectIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_comp_iterI7myclassEEEvT_SB_SB_T0__agg_tmp3;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
struct myclass myobject;
char _str[18] = "myvector[1] != 32";
char _str_1[115] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm99-c++03/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[19] = "myvector contains:";
char _str_3[2] = " ";
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
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, long p1);
void __gnu_cxx____ops___Iter_comp_val_myclass____Iter_comp_val(struct __gnu_cxx____ops___Iter_comp_val_myclass_* p0, struct __gnu_cxx____ops___Iter_comp_iter_myclass_* p1);
_Bool myclass__operator__(struct myclass* p0, int p1, int p2);
_Bool bool___gnu_cxx____ops___Iter_comp_val_myclass___operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(struct __gnu_cxx____ops___Iter_comp_val_myclass_* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2);
void void_std____push_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_comp_val_myclass___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, long p1, long p2, int p3, struct __gnu_cxx____ops___Iter_comp_val_myclass_* p4);
void void_std____adjust_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_comp_iter_myclass___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, long p1, long p2, int p3, struct __gnu_cxx____ops___Iter_comp_iter_myclass_ p4);
void void_std____make_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____ops___Iter_comp_iter_myclass_* p2);
_Bool std__operator_(struct std__strong_ordering p0, struct std____cmp_cat____unspec p1);
struct std__strong_ordering _ZNKSt8__detail10_Synth3wayclIPiS2_EEDaRKT_RKT0_QrqXltfp_fp0_RNS_18__boolean_testableEXltfp0_fp_RNS_18__boolean_testableEE(struct std____detail___Synth3way* p0, int** p1, int** p2);
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
struct std__strong_ordering decltype__std____detail____synth3way__std__declval_int_________std__declval_int___________gnu_cxx__operator____int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
_Bool bool___gnu_cxx____ops___Iter_comp_iter_myclass___operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____ops___Iter_comp_iter_myclass_* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
void void_std____pop_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2, struct __gnu_cxx____ops___Iter_comp_iter_myclass_* p3);
void void_std____heap_select___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2, struct __gnu_cxx____ops___Iter_comp_iter_myclass_ p3);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
void void_std____sort_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____ops___Iter_comp_iter_myclass_* p2);
void void_std____partial_sort___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2, struct __gnu_cxx____ops___Iter_comp_iter_myclass_ p3);
void std__enable_if___and__std____not__std____is_tuple_like_int_____std__is_move_constructible_int___std__is_move_assignable_int_____value__void___type_std__swap_int_(int* p0, int* p1);
void void_std__iter_swap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1);
void void_std____move_median_to_first___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p3, struct __gnu_cxx____ops___Iter_comp_iter_myclass_ p4);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, long p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____unguarded_partition___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2, struct __gnu_cxx____ops___Iter_comp_iter_myclass_ p3);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____unguarded_partition_pivot___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____ops___Iter_comp_iter_myclass_ p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
void void_std____introsort_loop___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long____gnu_cxx____ops___Iter_comp_iter_myclass___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, long p2, struct __gnu_cxx____ops___Iter_comp_iter_myclass_ p3);
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
_Bool bool___gnu_cxx____ops___Val_comp_iter_myclass___operator___int____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____ops___Val_comp_iter_myclass_* p0, int* p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
void void_std____unguarded_linear_insert___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Val_comp_iter_myclass___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____ops___Val_comp_iter_myclass_ p1);
void __gnu_cxx____ops___Val_comp_iter_myclass____Val_comp_iter(struct __gnu_cxx____ops___Val_comp_iter_myclass_* p0, struct __gnu_cxx____ops___Iter_comp_iter_myclass_* p1);
struct __gnu_cxx____ops___Val_comp_iter_myclass_ __gnu_cxx____ops___Val_comp_iter_myclass____gnu_cxx____ops____val_comp_iter_myclass_(struct __gnu_cxx____ops___Iter_comp_iter_myclass_ p0);
void void_std____insertion_sort___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____ops___Iter_comp_iter_myclass_ p2);
void void_std____unguarded_insertion_sort___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____ops___Iter_comp_iter_myclass_ p2);
void void_std____final_insertion_sort___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____ops___Iter_comp_iter_myclass_ p2);
void void_std____sort___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____ops___Iter_comp_iter_myclass_ p2);
void __gnu_cxx____ops___Iter_comp_iter_myclass____Iter_comp_iter(struct __gnu_cxx____ops___Iter_comp_iter_myclass_* p0, struct myclass p1);
struct __gnu_cxx____ops___Iter_comp_iter_myclass_ __gnu_cxx____ops___Iter_comp_iter_myclass____gnu_cxx____ops____iter_comp_iter_myclass_(struct myclass p0);
void void_std__sort___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______myclass_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct myclass p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* p0);
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* p0);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator__2(int p0, int p1);
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
bb2:
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
bb11:
  struct std__allocator_int_* this12;
  this12 = v10;
  struct std__allocator_int_* t13 = this12;
  struct std____new_allocator_int_* base14 = (struct std____new_allocator_int_*)((char *)t13 + 0);
  std____new_allocator_int_____new_allocator_2(base14);
  return;
}

// function: _ZNSt6vectorIiSaIiEEC2IPivEET_S4_RKS0_
void std__vector_int__std__allocator_int_____vector_int___void_(struct std__vector_int__std__allocator_int__* v15, int* v16, int* v17, struct std__allocator_int_* v18) {
bb19:
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
bb36:
  struct std__allocator_int_* this37;
  this37 = v35;
  struct std__allocator_int_* t38 = this37;
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2Ev
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v39) {
bb40:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this41;
  this41 = v39;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t42 = this41;
  int* c43 = ((void*)0);
  t42->_M_current = c43;
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v44, int** v45) {
bb46:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this47;
  int** __i48;
  this47 = v44;
  __i48 = v45;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t49 = this47;
  int** t50 = __i48;
  int* t51 = *t50;
  t49->_M_current = t51;
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEplEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v52, long v53) {
bb54:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this55;
  long __n56;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval57;
  int* ref_tmp058;
  this55 = v52;
  __n56 = v53;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t59 = this55;
  int* t60 = t59->_M_current;
  long t61 = __n56;
  int* ptr62 = &(t60)[t61];
  ref_tmp058 = ptr62;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval57, &ref_tmp058);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t63 = __retval57;
  return t63;
}

// function: _ZN9__gnu_cxx5__ops14_Iter_comp_valI7myclassEC2EONS0_15_Iter_comp_iterIS2_EE
void __gnu_cxx____ops___Iter_comp_val_myclass____Iter_comp_val(struct __gnu_cxx____ops___Iter_comp_val_myclass_* v64, struct __gnu_cxx____ops___Iter_comp_iter_myclass_* v65) {
bb66:
  struct __gnu_cxx____ops___Iter_comp_val_myclass_* this67;
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_* __comp68;
  this67 = v64;
  __comp68 = v65;
  return;
}

// function: _ZN7myclassclEii
_Bool myclass__operator__(struct myclass* v69, int v70, int v71) {
bb72:
  struct myclass* this73;
  int i74;
  int j75;
  _Bool __retval76;
  this73 = v69;
  i74 = v70;
  j75 = v71;
  struct myclass* t77 = this73;
  int t78 = i74;
  int t79 = j75;
  _Bool c80 = ((t78 < t79)) ? 1 : 0;
  __retval76 = c80;
  _Bool t81 = __retval76;
  return t81;
}

// function: _ZN9__gnu_cxx5__ops14_Iter_comp_valI7myclassEclINS_17__normal_iteratorIPiSt6vectorIiSaIiEEEEiEEbT_RT0_
_Bool bool___gnu_cxx____ops___Iter_comp_val_myclass___operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(struct __gnu_cxx____ops___Iter_comp_val_myclass_* v82, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v83, int* v84) {
bb85:
  struct __gnu_cxx____ops___Iter_comp_val_myclass_* this86;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it87;
  int* __val88;
  _Bool __retval89;
  this86 = v82;
  __it87 = v83;
  __val88 = v84;
  struct __gnu_cxx____ops___Iter_comp_val_myclass_* t90 = this86;
  struct myclass* cast91 = (struct myclass*)t90;
  int* r92 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it87);
  int t93 = *r92;
  int* t94 = __val88;
  int t95 = *t94;
  _Bool r96 = myclass__operator__(cast91, t93, t95);
  __retval89 = r96;
  _Bool t97 = __retval89;
  return t97;
}

// function: _ZSt11__push_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEliNS0_5__ops14_Iter_comp_valI7myclassEEEvT_T0_SC_T1_RT2_
void void_std____push_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_comp_val_myclass___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v98, long v99, long v100, int v101, struct __gnu_cxx____ops___Iter_comp_val_myclass_* v102) {
bb103:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first104;
  long __holeIndex105;
  long __topIndex106;
  int __value107;
  struct __gnu_cxx____ops___Iter_comp_val_myclass_* __comp108;
  long __parent109;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp2110;
  __first104 = v98;
  __holeIndex105 = v99;
  __topIndex106 = v100;
  __value107 = v101;
  __comp108 = v102;
  long t111 = __holeIndex105;
  long c112 = 1;
  long b113 = t111 - c112;
  long c114 = 2;
  long b115 = b113 / c114;
  __parent109 = b115;
    while (1) {
      long t116 = __holeIndex105;
      long t117 = __topIndex106;
      _Bool c118 = ((t116 > t117)) ? 1 : 0;
      _Bool ternary119;
      if (c118) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0120;
        struct __gnu_cxx____ops___Iter_comp_val_myclass_* t121 = __comp108;
        long t122 = __parent109;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r123 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first104, t122);
        agg_tmp0120 = r123;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t124 = agg_tmp0120;
        _Bool r125 = bool___gnu_cxx____ops___Iter_comp_val_myclass___operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(t121, t124, &__value107);
        ternary119 = (_Bool)r125;
      } else {
        _Bool c126 = 0;
        ternary119 = (_Bool)c126;
      }
      if (!ternary119) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0127;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1128;
        long t129 = __parent109;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r130 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first104, t129);
        ref_tmp0127 = r130;
        int* r131 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp0127);
        int t132 = *r131;
        long t133 = __holeIndex105;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r134 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first104, t133);
        ref_tmp1128 = r134;
        int* r135 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp1128);
        *r135 = t132;
        long t136 = __parent109;
        __holeIndex105 = t136;
        long t137 = __holeIndex105;
        long c138 = 1;
        long b139 = t137 - c138;
        long c140 = 2;
        long b141 = b139 / c140;
        __parent109 = b141;
    }
  int t142 = __value107;
  long t143 = __holeIndex105;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r144 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first104, t143);
  ref_tmp2110 = r144;
  int* r145 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp2110);
  *r145 = t142;
  return;
}

// function: _ZSt13__adjust_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEliNS0_5__ops15_Iter_comp_iterI7myclassEEEvT_T0_SC_T1_T2_
void void_std____adjust_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_comp_iter_myclass___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v146, long v147, long v148, int v149, struct __gnu_cxx____ops___Iter_comp_iter_myclass_ v150) {
bb151:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first152;
  long __holeIndex153;
  long __len154;
  int __value155;
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_ __comp156;
  long __topIndex157;
  long __secondChild158;
  struct __gnu_cxx____ops___Iter_comp_val_myclass_ __cmp159;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2160;
  __first152 = v146;
  __holeIndex153 = v147;
  __len154 = v148;
  __value155 = v149;
  __comp156 = v150;
  long t161 = __holeIndex153;
  __topIndex157 = t161;
  long t162 = __holeIndex153;
  __secondChild158 = t162;
    while (1) {
      long t163 = __secondChild158;
      long t164 = __len154;
      long c165 = 1;
      long b166 = t164 - c165;
      long c167 = 2;
      long b168 = b166 / c167;
      _Bool c169 = ((t163 < b168)) ? 1 : 0;
      if (!c169) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0170;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1171;
        long c172 = 2;
        long t173 = __secondChild158;
        long c174 = 1;
        long b175 = t173 + c174;
        long b176 = c172 * b175;
        __secondChild158 = b176;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0177;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1178;
          long t179 = __secondChild158;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r180 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first152, t179);
          agg_tmp0177 = r180;
          long t181 = __secondChild158;
          long c182 = 1;
          long b183 = t181 - c182;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r184 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first152, b183);
          agg_tmp1178 = r184;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t185 = agg_tmp0177;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t186 = agg_tmp1178;
          _Bool r187 = bool___gnu_cxx____ops___Iter_comp_iter_myclass___operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(&__comp156, t185, t186);
          if (r187) {
            long t188 = __secondChild158;
            long u189 = t188 - 1;
            __secondChild158 = u189;
          }
        long t190 = __secondChild158;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r191 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first152, t190);
        ref_tmp0170 = r191;
        int* r192 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp0170);
        int t193 = *r192;
        long t194 = __holeIndex153;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r195 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first152, t194);
        ref_tmp1171 = r195;
        int* r196 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp1171);
        *r196 = t193;
        long t197 = __secondChild158;
        __holeIndex153 = t197;
    }
    long t198 = __len154;
    long c199 = 1;
    long b200 = t198 & c199;
    long c201 = 0;
    _Bool c202 = ((b200 == c201)) ? 1 : 0;
    _Bool ternary203;
    if (c202) {
      long t204 = __secondChild158;
      long t205 = __len154;
      long c206 = 2;
      long b207 = t205 - c206;
      long c208 = 2;
      long b209 = b207 / c208;
      _Bool c210 = ((t204 == b209)) ? 1 : 0;
      ternary203 = (_Bool)c210;
    } else {
      _Bool c211 = 0;
      ternary203 = (_Bool)c211;
    }
    if (ternary203) {
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp2212;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp3213;
      long c214 = 2;
      long t215 = __secondChild158;
      long c216 = 1;
      long b217 = t215 + c216;
      long b218 = c214 * b217;
      __secondChild158 = b218;
      long t219 = __secondChild158;
      long c220 = 1;
      long b221 = t219 - c220;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r222 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first152, b221);
      ref_tmp2212 = r222;
      int* r223 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp2212);
      int t224 = *r223;
      long t225 = __holeIndex153;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r226 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first152, t225);
      ref_tmp3213 = r226;
      int* r227 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp3213);
      *r227 = t224;
      long t228 = __secondChild158;
      long c229 = 1;
      long b230 = t228 - c229;
      __holeIndex153 = b230;
    }
  __gnu_cxx____ops___Iter_comp_val_myclass____Iter_comp_val(&__cmp159, &__comp156);
  agg_tmp2160 = __first152; // copy
  long t231 = __holeIndex153;
  long t232 = __topIndex157;
  int t233 = __value155;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t234 = agg_tmp2160;
  void_std____push_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_comp_val_myclass___(t234, t231, t232, t233, &__cmp159);
  return;
}

// function: _ZSt11__make_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_comp_iterI7myclassEEEvT_SB_RT0_
void void_std____make_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v235, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v236, struct __gnu_cxx____ops___Iter_comp_iter_myclass_* v237) {
bb238:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first239;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last240;
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_* __comp241;
  long __len242;
  long __parent243;
  __first239 = v235;
  __last240 = v236;
  __comp241 = v237;
    long r244 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__last240, &__first239);
    long c245 = 2;
    _Bool c246 = ((r244 < c245)) ? 1 : 0;
    if (c246) {
      return;
    }
  long r247 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__last240, &__first239);
  __len242 = r247;
  long t248 = __len242;
  long c249 = 2;
  long b250 = t248 - c249;
  long c251 = 2;
  long b252 = b250 / c251;
  __parent243 = b252;
    while (1) {
      _Bool c253 = 1;
      if (!c253) break;
        int __value254;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0255;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0256;
        struct __gnu_cxx____ops___Iter_comp_iter_myclass_ agg_tmp1257;
        long t258 = __parent243;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r259 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first239, t258);
        ref_tmp0255 = r259;
        int* r260 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp0255);
        int t261 = *r260;
        __value254 = t261;
        agg_tmp0256 = __first239; // copy
        long t262 = __parent243;
        long t263 = __len242;
        int t264 = __value254;
        struct __gnu_cxx____ops___Iter_comp_iter_myclass_* t265 = __comp241;
        agg_tmp1257 = *t265; // copy
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t266 = agg_tmp0256;
        struct __gnu_cxx____ops___Iter_comp_iter_myclass_ t267 = agg_tmp1257;
        void_std____adjust_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_comp_iter_myclass___(t266, t262, t263, t264, t267);
          long t268 = __parent243;
          long c269 = 0;
          _Bool c270 = ((t268 == c269)) ? 1 : 0;
          if (c270) {
            return;
          }
        long t271 = __parent243;
        long u272 = t271 - 1;
        __parent243 = u272;
    }
  return;
}

// function: _ZStltSt15strong_orderingNSt9__cmp_cat8__unspecE
_Bool std__operator_(struct std__strong_ordering v273, struct std____cmp_cat____unspec v274) {
bb275:
  struct std__strong_ordering __v276;
  struct std____cmp_cat____unspec unnamed277;
  _Bool __retval278;
  __v276 = v273;
  unnamed277 = v274;
  char t279 = __v276._M_value;
  int cast280 = (int)t279;
  int c281 = 0;
  _Bool c282 = ((cast280 < c281)) ? 1 : 0;
  __retval278 = c282;
  _Bool t283 = __retval278;
  return t283;
}

// function: _ZNKSt8__detail10_Synth3wayclIPiS2_EEDaRKT_RKT0_QrqXltfp_fp0_RNS_18__boolean_testableEXltfp0_fp_RNS_18__boolean_testableEE
struct std__strong_ordering _ZNKSt8__detail10_Synth3wayclIPiS2_EEDaRKT_RKT0_QrqXltfp_fp0_RNS_18__boolean_testableEXltfp0_fp_RNS_18__boolean_testableEE(struct std____detail___Synth3way* v284, int** v285, int** v286) {
bb287:
  struct std____detail___Synth3way* this288;
  int** __t289;
  int** __u290;
  struct std__strong_ordering __retval291;
  this288 = v284;
  __t289 = v285;
  __u290 = v286;
  struct std____detail___Synth3way* t292 = this288;
    int** t293 = __t289;
    int* t294 = *t293;
    int** t295 = __u290;
    int* t296 = *t295;
    char c297 = -1;
    char c298 = 0;
    char c299 = 1;
    _Bool c300 = ((t294 < t296)) ? 1 : 0;
    char sel301 = c300 ? c297 : c299;
    _Bool c302 = ((t294 == t296)) ? 1 : 0;
    char sel303 = c302 ? c298 : sel301;
    __retval291._M_value = sel303;
    struct std__strong_ordering t304 = __retval291;
    return t304;
  abort();
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v305) {
bb306:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this307;
  int** __retval308;
  this307 = v305;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t309 = this307;
  __retval308 = &t309->_M_current;
  int** t310 = __retval308;
  return t310;
}

// function: _ZN9__gnu_cxxssIPiSt6vectorIiSaIiEEEEDTclL_ZNSt8__detail11__synth3wayEEclsr3stdE7declvalIRT_EEclsr3stdE7declvalIS7_EEEERKNS_17__normal_iteratorIS6_T0_EESD_
struct std__strong_ordering decltype__std____detail____synth3way__std__declval_int_________std__declval_int___________gnu_cxx__operator____int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v311, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v312) {
bb313:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs314;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs315;
  struct std__strong_ordering __retval316;
  __lhs314 = v311;
  __rhs315 = v312;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t317 = __lhs314;
  int** r318 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t317);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t319 = __rhs315;
  int** r320 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t319);
  struct std__strong_ordering r321 = _ZNKSt8__detail10_Synth3wayclIPiS2_EEDaRKT_RKT0_QrqXltfp_fp0_RNS_18__boolean_testableEXltfp0_fp_RNS_18__boolean_testableEE(&_ZNSt8__detail11__synth3wayE, r318, r320);
  __retval316 = r321;
  struct std__strong_ordering t322 = __retval316;
  return t322;
}

// function: _ZN9__gnu_cxx5__ops15_Iter_comp_iterI7myclassEclINS_17__normal_iteratorIPiSt6vectorIiSaIiEEEESA_EEbT_T0_
_Bool bool___gnu_cxx____ops___Iter_comp_iter_myclass___operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____ops___Iter_comp_iter_myclass_* v323, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v324, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v325) {
bb326:
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_* this327;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it1328;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it2329;
  _Bool __retval330;
  this327 = v323;
  __it1328 = v324;
  __it2329 = v325;
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_* t331 = this327;
  struct myclass* cast332 = (struct myclass*)t331;
  int* r333 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it1328);
  int t334 = *r333;
  int* r335 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it2329);
  int t336 = *r335;
  _Bool r337 = myclass__operator__(cast332, t334, t336);
  __retval330 = r337;
  _Bool t338 = __retval330;
  return t338;
}

// function: _ZSt10__pop_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_comp_iterI7myclassEEEvT_SB_SB_RT0_
void void_std____pop_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v339, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v340, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v341, struct __gnu_cxx____ops___Iter_comp_iter_myclass_* v342) {
bb343:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first344;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last345;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result346;
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_* __comp347;
  int __value348;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0349;
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_ agg_tmp1350;
  __first344 = v339;
  __last345 = v340;
  __result346 = v341;
  __comp347 = v342;
  int* r351 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__result346);
  int t352 = *r351;
  __value348 = t352;
  int* r353 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__first344);
  int t354 = *r353;
  int* r355 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__result346);
  *r355 = t354;
  agg_tmp0349 = __first344; // copy
  long c356 = 0;
  long r357 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__last345, &__first344);
  int t358 = __value348;
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_* t359 = __comp347;
  agg_tmp1350 = *t359; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t360 = agg_tmp0349;
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_ t361 = agg_tmp1350;
  void_std____adjust_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_comp_iter_myclass___(t360, c356, r357, t358, t361);
  return;
}

// function: _ZSt13__heap_selectIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_comp_iterI7myclassEEEvT_SB_SB_T0_
void void_std____heap_select___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v362, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v363, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v364, struct __gnu_cxx____ops___Iter_comp_iter_myclass_ v365) {
bb366:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first367;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __middle368;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last369;
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_ __comp370;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0371;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1372;
  __first367 = v362;
  __middle368 = v363;
  __last369 = v364;
  __comp370 = v365;
  agg_tmp0371 = __first367; // copy
  agg_tmp1372 = __middle368; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t373 = agg_tmp0371;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t374 = agg_tmp1372;
  void_std____make_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(t373, t374, &__comp370);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __i375;
    struct std__strong_ordering agg_tmp2376;
    struct std____cmp_cat____unspec agg_tmp3377;
    __i375 = __middle368; // copy
    while (1) {
      struct std__strong_ordering r379 = decltype__std____detail____synth3way__std__declval_int_________std__declval_int___________gnu_cxx__operator____int___std__vector_int__std__allocator_int_____(&__i375, &__last369);
      agg_tmp2376 = r379;
      agg_tmp3377 = *&__const__ZSt13__heap_selectIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_comp_iterI7myclassEEEvT_SB_SB_T0__agg_tmp3; // copy
      struct std__strong_ordering t380 = agg_tmp2376;
      struct std____cmp_cat____unspec t381 = agg_tmp3377;
      _Bool r382 = std__operator_(t380, t381);
      if (!r382) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp4383;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp5384;
        agg_tmp4383 = __i375; // copy
        agg_tmp5384 = __first367; // copy
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t385 = agg_tmp4383;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t386 = agg_tmp5384;
        _Bool r387 = bool___gnu_cxx____ops___Iter_comp_iter_myclass___operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(&__comp370, t385, t386);
        if (r387) {
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp6388;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp7389;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp8390;
          agg_tmp6388 = __first367; // copy
          agg_tmp7389 = __middle368; // copy
          agg_tmp8390 = __i375; // copy
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t391 = agg_tmp6388;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t392 = agg_tmp7389;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t393 = agg_tmp8390;
          void_std____pop_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(t391, t392, t393, &__comp370);
        }
    for_step378: ;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r394 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(&__i375);
    }
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEmmEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v395) {
bb396:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this397;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval398;
  this397 = v395;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t399 = this397;
  int* t400 = t399->_M_current;
  int c401 = -1;
  int* ptr402 = &(t400)[c401];
  t399->_M_current = ptr402;
  __retval398 = t399;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t403 = __retval398;
  return t403;
}

// function: _ZSt11__sort_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_comp_iterI7myclassEEEvT_SB_RT0_
void void_std____sort_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v404, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v405, struct __gnu_cxx____ops___Iter_comp_iter_myclass_* v406) {
bb407:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first408;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last409;
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_* __comp410;
  __first408 = v404;
  __last409 = v405;
  __comp410 = v406;
    while (1) {
      long r411 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__last409, &__first408);
      long c412 = 1;
      _Bool c413 = ((r411 > c412)) ? 1 : 0;
      if (!c413) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0414;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1415;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2416;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r417 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__last409);
        agg_tmp0414 = __first408; // copy
        agg_tmp1415 = __last409; // copy
        agg_tmp2416 = __last409; // copy
        struct __gnu_cxx____ops___Iter_comp_iter_myclass_* t418 = __comp410;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t419 = agg_tmp0414;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t420 = agg_tmp1415;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t421 = agg_tmp2416;
        void_std____pop_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(t419, t420, t421, t418);
    }
  return;
}

// function: _ZSt14__partial_sortIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_comp_iterI7myclassEEEvT_SB_SB_T0_
void void_std____partial_sort___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v422, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v423, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v424, struct __gnu_cxx____ops___Iter_comp_iter_myclass_ v425) {
bb426:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first427;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __middle428;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last429;
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_ __comp430;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0431;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1432;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2433;
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_ agg_tmp3434;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp4435;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp5436;
  __first427 = v422;
  __middle428 = v423;
  __last429 = v424;
  __comp430 = v425;
  agg_tmp0431 = __first427; // copy
  agg_tmp1432 = __middle428; // copy
  agg_tmp2433 = __last429; // copy
  agg_tmp3434 = __comp430; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t437 = agg_tmp0431;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t438 = agg_tmp1432;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t439 = agg_tmp2433;
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_ t440 = agg_tmp3434;
  void_std____heap_select___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(t437, t438, t439, t440);
  agg_tmp4435 = __first427; // copy
  agg_tmp5436 = __middle428; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t441 = agg_tmp4435;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t442 = agg_tmp5436;
  void_std____sort_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(t441, t442, &__comp430);
  return;
}

// function: _ZSt4swapIiENSt9enable_ifIXsr6__and_ISt6__not_ISt15__is_tuple_likeIT_EESt21is_move_constructibleIS3_ESt18is_move_assignableIS3_EEE5valueEvE4typeERS3_SC_
void std__enable_if___and__std____not__std____is_tuple_like_int_____std__is_move_constructible_int___std__is_move_assignable_int_____value__void___type_std__swap_int_(int* v443, int* v444) {
bb445:
  int* __a446;
  int* __b447;
  int __tmp448;
  __a446 = v443;
  __b447 = v444;
  int* t449 = __a446;
  int t450 = *t449;
  __tmp448 = t450;
  int* t451 = __b447;
  int t452 = *t451;
  int* t453 = __a446;
  *t453 = t452;
  int t454 = __tmp448;
  int* t455 = __b447;
  *t455 = t454;
  return;
}

// function: _ZSt9iter_swapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_EvT_T0_
void void_std__iter_swap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v456, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v457) {
bb458:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __a459;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __b460;
  __a459 = v456;
  __b460 = v457;
  int* r461 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__a459);
  int* r462 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__b460);
  std__enable_if___and__std____not__std____is_tuple_like_int_____std__is_move_constructible_int___std__is_move_assignable_int_____value__void___type_std__swap_int_(r461, r462);
  return;
}

// function: _ZSt22__move_median_to_firstIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_comp_iterI7myclassEEEvT_SB_SB_SB_T0_
void void_std____move_median_to_first___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v463, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v464, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v465, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v466, struct __gnu_cxx____ops___Iter_comp_iter_myclass_ v467) {
bb468:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result469;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __a470;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __b471;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __c472;
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_ __comp473;
  __result469 = v463;
  __a470 = v464;
  __b471 = v465;
  __c472 = v466;
  __comp473 = v467;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0474;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1475;
    agg_tmp0474 = __a470; // copy
    agg_tmp1475 = __b471; // copy
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t476 = agg_tmp0474;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t477 = agg_tmp1475;
    _Bool r478 = bool___gnu_cxx____ops___Iter_comp_iter_myclass___operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(&__comp473, t476, t477);
    if (r478) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2479;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3480;
        agg_tmp2479 = __b471; // copy
        agg_tmp3480 = __c472; // copy
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t481 = agg_tmp2479;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t482 = agg_tmp3480;
        _Bool r483 = bool___gnu_cxx____ops___Iter_comp_iter_myclass___operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(&__comp473, t481, t482);
        if (r483) {
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp4484;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp5485;
          agg_tmp4484 = __result469; // copy
          agg_tmp5485 = __b471; // copy
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t486 = agg_tmp4484;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t487 = agg_tmp5485;
          void_std__iter_swap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t486, t487);
        } else {
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp6488;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp7489;
            agg_tmp6488 = __a470; // copy
            agg_tmp7489 = __c472; // copy
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t490 = agg_tmp6488;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t491 = agg_tmp7489;
            _Bool r492 = bool___gnu_cxx____ops___Iter_comp_iter_myclass___operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(&__comp473, t490, t491);
            if (r492) {
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp8493;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp9494;
              agg_tmp8493 = __result469; // copy
              agg_tmp9494 = __c472; // copy
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t495 = agg_tmp8493;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t496 = agg_tmp9494;
              void_std__iter_swap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t495, t496);
            } else {
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp10497;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11498;
              agg_tmp10497 = __result469; // copy
              agg_tmp11498 = __a470; // copy
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t499 = agg_tmp10497;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t500 = agg_tmp11498;
              void_std__iter_swap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t499, t500);
            }
        }
    } else {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp12501;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp13502;
        agg_tmp12501 = __a470; // copy
        agg_tmp13502 = __c472; // copy
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t503 = agg_tmp12501;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t504 = agg_tmp13502;
        _Bool r505 = bool___gnu_cxx____ops___Iter_comp_iter_myclass___operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(&__comp473, t503, t504);
        if (r505) {
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp14506;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp15507;
          agg_tmp14506 = __result469; // copy
          agg_tmp15507 = __a470; // copy
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t508 = agg_tmp14506;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t509 = agg_tmp15507;
          void_std__iter_swap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t508, t509);
        } else {
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp16510;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp17511;
            agg_tmp16510 = __b471; // copy
            agg_tmp17511 = __c472; // copy
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t512 = agg_tmp16510;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t513 = agg_tmp17511;
            _Bool r514 = bool___gnu_cxx____ops___Iter_comp_iter_myclass___operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(&__comp473, t512, t513);
            if (r514) {
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp18515;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp19516;
              agg_tmp18515 = __result469; // copy
              agg_tmp19516 = __c472; // copy
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t517 = agg_tmp18515;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t518 = agg_tmp19516;
              void_std__iter_swap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t517, t518);
            } else {
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp20519;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp21520;
              agg_tmp20519 = __result469; // copy
              agg_tmp21520 = __b471; // copy
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t521 = agg_tmp20519;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t522 = agg_tmp21520;
              void_std__iter_swap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t521, t522);
            }
        }
    }
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEmiEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v523, long v524) {
bb525:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this526;
  long __n527;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval528;
  int* ref_tmp0529;
  this526 = v523;
  __n527 = v524;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t530 = this526;
  int* t531 = t530->_M_current;
  long t532 = __n527;
  long u533 = -t532;
  int* ptr534 = &(t531)[u533];
  ref_tmp0529 = ptr534;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval528, &ref_tmp0529);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t535 = __retval528;
  return t535;
}

// function: _ZSt21__unguarded_partitionIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_comp_iterI7myclassEEET_SB_SB_SB_T0_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____unguarded_partition___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v536, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v537, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v538, struct __gnu_cxx____ops___Iter_comp_iter_myclass_ v539) {
bb540:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first541;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last542;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __pivot543;
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_ __comp544;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval545;
  __first541 = v536;
  __last542 = v537;
  __pivot543 = v538;
  __comp544 = v539;
    while (1) {
      _Bool c546 = 1;
      if (!c546) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp6547;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp7548;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0549;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1550;
          while (1) {
            agg_tmp0549 = __first541; // copy
            agg_tmp1550 = __pivot543; // copy
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t551 = agg_tmp0549;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t552 = agg_tmp1550;
            _Bool r553 = bool___gnu_cxx____ops___Iter_comp_iter_myclass___operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(&__comp544, t551, t552);
            if (!r553) break;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r554 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(&__first541);
          }
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r555 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__last542);
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2556;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3557;
          while (1) {
            agg_tmp2556 = __pivot543; // copy
            agg_tmp3557 = __last542; // copy
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t558 = agg_tmp2556;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t559 = agg_tmp3557;
            _Bool r560 = bool___gnu_cxx____ops___Iter_comp_iter_myclass___operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(&__comp544, t558, t559);
            if (!r560) break;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r561 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__last542);
          }
          struct std__strong_ordering agg_tmp4562;
          struct std____cmp_cat____unspec agg_tmp5563;
          struct std__strong_ordering r564 = decltype__std____detail____synth3way__std__declval_int_________std__declval_int___________gnu_cxx__operator____int___std__vector_int__std__allocator_int_____(&__first541, &__last542);
          agg_tmp4562 = r564;
          agg_tmp5563 = *&__const__ZSt21__unguarded_partitionIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_comp_iterI7myclassEEET_SB_SB_SB_T0__agg_tmp5; // copy
          struct std__strong_ordering t565 = agg_tmp4562;
          struct std____cmp_cat____unspec t566 = agg_tmp5563;
          _Bool r567 = std__operator_(t565, t566);
          _Bool u568 = !r567;
          if (u568) {
            __retval545 = __first541; // copy
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t569 = __retval545;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ret_val570 = t569;
            return ret_val570;
          }
        agg_tmp6547 = __first541; // copy
        agg_tmp7548 = __last542; // copy
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t571 = agg_tmp6547;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t572 = agg_tmp7548;
        void_std__iter_swap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t571, t572);
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r573 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(&__first541);
    }
  abort();
}

// function: _ZSt27__unguarded_partition_pivotIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_comp_iterI7myclassEEET_SB_SB_T0_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____unguarded_partition_pivot___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v574, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v575, struct __gnu_cxx____ops___Iter_comp_iter_myclass_ v576) {
bb577:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first578;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last579;
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_ __comp580;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval581;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __mid582;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0583;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1584;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2585;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3586;
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_ agg_tmp4587;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp5588;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp6589;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp7590;
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_ agg_tmp8591;
  __first578 = v574;
  __last579 = v575;
  __comp580 = v576;
  long r592 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__last579, &__first578);
  long c593 = 2;
  long b594 = r592 / c593;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r595 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first578, b594);
  __mid582 = r595;
  agg_tmp0583 = __first578; // copy
  long c596 = 1;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r597 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first578, c596);
  agg_tmp1584 = r597;
  agg_tmp2585 = __mid582; // copy
  long c598 = 1;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r599 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__last579, c598);
  agg_tmp3586 = r599;
  agg_tmp4587 = __comp580; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t600 = agg_tmp0583;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t601 = agg_tmp1584;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t602 = agg_tmp2585;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t603 = agg_tmp3586;
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_ t604 = agg_tmp4587;
  void_std____move_median_to_first___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(t600, t601, t602, t603, t604);
  long c605 = 1;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r606 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first578, c605);
  agg_tmp5588 = r606;
  agg_tmp6589 = __last579; // copy
  agg_tmp7590 = __first578; // copy
  agg_tmp8591 = __comp580; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t607 = agg_tmp5588;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t608 = agg_tmp6589;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t609 = agg_tmp7590;
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_ t610 = agg_tmp8591;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r611 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____unguarded_partition___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(t607, t608, t609, t610);
  __retval581 = r611;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t612 = __retval581;
  return t612;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEaSERKS5_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v613, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v614) {
bb615:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this616;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed617;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval618;
  this616 = v613;
  unnamed617 = v614;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t619 = this616;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t620 = unnamed617;
  int* t621 = t620->_M_current;
  t619->_M_current = t621;
  __retval618 = t619;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t622 = __retval618;
  return t622;
}

// function: _ZSt16__introsort_loopIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEElNS0_5__ops15_Iter_comp_iterI7myclassEEEvT_SB_T0_T1_
void void_std____introsort_loop___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long____gnu_cxx____ops___Iter_comp_iter_myclass___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v623, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v624, long v625, struct __gnu_cxx____ops___Iter_comp_iter_myclass_ v626) {
bb627:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first628;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last629;
  long __depth_limit630;
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_ __comp631;
  __first628 = v623;
  __last629 = v624;
  __depth_limit630 = v625;
  __comp631 = v626;
    while (1) {
      long r632 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__last629, &__first628);
      long c633 = 16;
      _Bool c634 = ((r632 > c633)) ? 1 : 0;
      if (!c634) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __cut635;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp4636;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp5637;
        struct __gnu_cxx____ops___Iter_comp_iter_myclass_ agg_tmp6638;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp7639;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp8640;
        struct __gnu_cxx____ops___Iter_comp_iter_myclass_ agg_tmp9641;
          long t642 = __depth_limit630;
          long c643 = 0;
          _Bool c644 = ((t642 == c643)) ? 1 : 0;
          if (c644) {
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0645;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1646;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2647;
            struct __gnu_cxx____ops___Iter_comp_iter_myclass_ agg_tmp3648;
            agg_tmp0645 = __first628; // copy
            agg_tmp1646 = __last629; // copy
            agg_tmp2647 = __last629; // copy
            agg_tmp3648 = __comp631; // copy
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t649 = agg_tmp0645;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t650 = agg_tmp1646;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t651 = agg_tmp2647;
            struct __gnu_cxx____ops___Iter_comp_iter_myclass_ t652 = agg_tmp3648;
            void_std____partial_sort___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(t649, t650, t651, t652);
            return;
          }
        long t653 = __depth_limit630;
        long u654 = t653 - 1;
        __depth_limit630 = u654;
        agg_tmp4636 = __first628; // copy
        agg_tmp5637 = __last629; // copy
        agg_tmp6638 = __comp631; // copy
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t655 = agg_tmp4636;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t656 = agg_tmp5637;
        struct __gnu_cxx____ops___Iter_comp_iter_myclass_ t657 = agg_tmp6638;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r658 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____unguarded_partition_pivot___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(t655, t656, t657);
        __cut635 = r658;
        agg_tmp7639 = __cut635; // copy
        agg_tmp8640 = __last629; // copy
        long t659 = __depth_limit630;
        agg_tmp9641 = __comp631; // copy
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t660 = agg_tmp7639;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t661 = agg_tmp8640;
        struct __gnu_cxx____ops___Iter_comp_iter_myclass_ t662 = agg_tmp9641;
        void_std____introsort_loop___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long____gnu_cxx____ops___Iter_comp_iter_myclass___(t660, t661, t659, t662);
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r663 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__2(&__last629, &__cut635);
    }
  return;
}

// function: _ZSt13__countl_zeroImEiT_
int int_std____countl_zero_unsigned_long_(unsigned long v664) {
bb665:
  unsigned long __x666;
  int __retval667;
  int _Nd668;
  __x666 = v664;
  int c669 = 64;
  _Nd668 = c669;
  unsigned long t670 = __x666;
  unsigned long clz671 = (unsigned long)__builtin_clzll((unsigned long)t670);
  int cast672 = (int)clz671;
  unsigned long c673 = 0;
  _Bool c674 = ((t670 == c673)) ? 1 : 0;
  int t675 = _Nd668;
  int sel676 = c674 ? t675 : cast672;
  __retval667 = sel676;
  int t677 = __retval667;
  return t677;
}

// function: _ZSt11__bit_widthImEiT_
int int_std____bit_width_unsigned_long_(unsigned long v678) {
bb679:
  unsigned long __x680;
  int __retval681;
  int _Nd682;
  __x680 = v678;
  int c683 = 64;
  _Nd682 = c683;
  int t684 = _Nd682;
  unsigned long t685 = __x680;
  int r686 = int_std____countl_zero_unsigned_long_(t685);
  int b687 = t684 - r686;
  __retval681 = b687;
  int t688 = __retval681;
  return t688;
}

// function: _ZSt4__lgIlET_S0_
long long_std____lg_long_(long v689) {
bb690:
  long __n691;
  long __retval692;
  __n691 = v689;
  long t693 = __n691;
  unsigned long cast694 = (unsigned long)t693;
  int r695 = int_std____bit_width_unsigned_long_(cast694);
  int c696 = 1;
  int b697 = r695 - c696;
  long cast698 = (long)b697;
  __retval692 = cast698;
  long t699 = __retval692;
  return t699;
}

// function: _ZN9__gnu_cxxmiIPiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v700, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v701) {
bb702:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs703;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs704;
  long __retval705;
  __lhs703 = v700;
  __rhs704 = v701;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t706 = __lhs703;
  int** r707 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t706);
  int* t708 = *r707;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t709 = __rhs704;
  int** r710 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t709);
  int* t711 = *r710;
  long diff712 = t708 - t711;
  __retval705 = diff712;
  long t713 = __retval705;
  return t713;
}

// function: _ZSt12__niter_wrapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES2_ET_S7_T0_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____niter_wrap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v714, int* v715) {
bb716:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __from717;
  int* __res718;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval719;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0720;
  __from717 = v714;
  __res718 = v715;
  int* t721 = __res718;
  int* r722 = int__std____niter_base_int__(t721);
  agg_tmp0720 = __from717; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t723 = agg_tmp0720;
  int* r724 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t723);
  long diff725 = r722 - r724;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r726 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__from717, diff725);
  __retval719 = r726;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t727 = __retval719;
  return t727;
}

// function: _ZSt10__distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_St26random_access_iterator_tag
long std__iterator_traits_int____difference_type_std____distance_int__(int* v728, int* v729, struct std__random_access_iterator_tag v730) {
bb731:
  int* __first732;
  int* __last733;
  struct std__random_access_iterator_tag unnamed734;
  long __retval735;
  __first732 = v728;
  __last733 = v729;
  unnamed734 = v730;
  int* t736 = __last733;
  int* t737 = __first732;
  long diff738 = t736 - t737;
  __retval735 = diff738;
  long t739 = __retval735;
  return t739;
}

// function: _ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** v740) {
bb741:
  int** unnamed742;
  struct std__random_access_iterator_tag __retval743;
  unnamed742 = v740;
  struct std__random_access_iterator_tag t744 = __retval743;
  return t744;
}

// function: _ZSt8distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_
long std__iterator_traits_int____difference_type_std__distance_int__(int* v745, int* v746) {
bb747:
  int* __first748;
  int* __last749;
  long __retval750;
  struct std__random_access_iterator_tag agg_tmp0751;
  __first748 = v745;
  __last749 = v746;
  int* t752 = __first748;
  int* t753 = __last749;
  struct std__random_access_iterator_tag r754 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first748);
  agg_tmp0751 = r754;
  struct std__random_access_iterator_tag t755 = agg_tmp0751;
  long r756 = std__iterator_traits_int____difference_type_std____distance_int__(t752, t753, t755);
  __retval750 = r756;
  long t757 = __retval750;
  return t757;
}

// function: _ZSt9__advanceIPilEvRT_T0_St26random_access_iterator_tag
void void_std____advance_int___long_(int** v758, long v759, struct std__random_access_iterator_tag v760) {
bb761:
  int** __i762;
  long __n763;
  struct std__random_access_iterator_tag unnamed764;
  __i762 = v758;
  __n763 = v759;
  unnamed764 = v760;
    long t765 = __n763;
    _Bool isconst766 = 0;
    _Bool ternary767;
    if (isconst766) {
      long t768 = __n763;
      long c769 = 1;
      _Bool c770 = ((t768 == c769)) ? 1 : 0;
      ternary767 = (_Bool)c770;
    } else {
      _Bool c771 = 0;
      ternary767 = (_Bool)c771;
    }
    if (ternary767) {
      int** t772 = __i762;
      int* t773 = *t772;
      int c774 = 1;
      int* ptr775 = &(t773)[c774];
      *t772 = ptr775;
    } else {
        long t776 = __n763;
        _Bool isconst777 = 0;
        _Bool ternary778;
        if (isconst777) {
          long t779 = __n763;
          long c780 = -1;
          _Bool c781 = ((t779 == c780)) ? 1 : 0;
          ternary778 = (_Bool)c781;
        } else {
          _Bool c782 = 0;
          ternary778 = (_Bool)c782;
        }
        if (ternary778) {
          int** t783 = __i762;
          int* t784 = *t783;
          int c785 = -1;
          int* ptr786 = &(t784)[c785];
          *t783 = ptr786;
        } else {
          long t787 = __n763;
          int** t788 = __i762;
          int* t789 = *t788;
          int* ptr790 = &(t789)[t787];
          *t788 = ptr790;
        }
    }
  return;
}

// function: _ZSt7advanceIPilEvRT_T0_
void void_std__advance_int___long_(int** v791, long v792) {
bb793:
  int** __i794;
  long __n795;
  long __d796;
  struct std__random_access_iterator_tag agg_tmp0797;
  __i794 = v791;
  __n795 = v792;
  long t798 = __n795;
  __d796 = t798;
  int** t799 = __i794;
  long t800 = __d796;
  int** t801 = __i794;
  struct std__random_access_iterator_tag r802 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(t801);
  agg_tmp0797 = r802;
  struct std__random_access_iterator_tag t803 = agg_tmp0797;
  void_std____advance_int___long_(t799, t800, t803);
  return;
}

// function: _ZSt12__assign_oneILb1EPiS0_EvRT0_RT1_
void void_std____assign_one_true__int___int__(int** v804, int** v805) {
bb806:
  int** __out807;
  int** __in808;
  __out807 = v804;
  __in808 = v805;
    int** t809 = __in808;
    int* t810 = *t809;
    int t811 = *t810;
    int** t812 = __out807;
    int* t813 = *t812;
    *t813 = t811;
  return;
}

// function: _ZSt23__copy_move_backward_a2ILb1EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_backward_a2_true__int___int__(int* v814, int* v815, int* v816) {
bb817:
  int* __first818;
  int* __last819;
  int* __result820;
  int* __retval821;
  __first818 = v814;
  __last819 = v815;
  __result820 = v816;
      _Bool r822 = std__is_constant_evaluated();
      if (r822) {
      } else {
          long __n823;
          int* t824 = __first818;
          int* t825 = __last819;
          long r826 = std__iterator_traits_int____difference_type_std__distance_int__(t824, t825);
          __n823 = r826;
          long t827 = __n823;
          long u828 = -t827;
          void_std__advance_int___long_(&__result820, u828);
            long t829 = __n823;
            long c830 = 1;
            _Bool c831 = ((t829 > c830)) ? 1 : 0;
            if (c831) {
              int* t832 = __result820;
              void* cast833 = (void*)t832;
              int* t834 = __first818;
              void* cast835 = (void*)t834;
              long t836 = __n823;
              unsigned long cast837 = (unsigned long)t836;
              unsigned long c838 = 4;
              unsigned long b839 = cast837 * c838;
              void* r840 = memmove(cast833, cast835, b839);
            } else {
                long t841 = __n823;
                long c842 = 1;
                _Bool c843 = ((t841 == c842)) ? 1 : 0;
                if (c843) {
                  void_std____assign_one_true__int___int__(&__result820, &__first818);
                }
            }
          int* t844 = __result820;
          __retval821 = t844;
          int* t845 = __retval821;
          return t845;
      }
    while (1) {
      int* t846 = __first818;
      int* t847 = __last819;
      _Bool c848 = ((t846 != t847)) ? 1 : 0;
      if (!c848) break;
        int* t849 = __last819;
        int c850 = -1;
        int* ptr851 = &(t849)[c850];
        __last819 = ptr851;
        int* t852 = __result820;
        int c853 = -1;
        int* ptr854 = &(t852)[c853];
        __result820 = ptr854;
        void_std____assign_one_true__int___int__(&__result820, &__last819);
    }
  int* t855 = __result820;
  __retval821 = t855;
  int* t856 = __retval821;
  return t856;
}

// function: _ZSt23__copy_move_backward_a1ILb1EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_backward_a1_true__int___int__(int* v857, int* v858, int* v859) {
bb860:
  int* __first861;
  int* __last862;
  int* __result863;
  int* __retval864;
  __first861 = v857;
  __last862 = v858;
  __result863 = v859;
  int* t865 = __first861;
  int* t866 = __last862;
  int* t867 = __result863;
  int* r868 = int__std____copy_move_backward_a2_true__int___int__(t865, t866, t867);
  __retval864 = r868;
  int* t869 = __retval864;
  return t869;
}

// function: _ZSt12__niter_baseIPiSt6vectorIiSaIiEEET_N9__gnu_cxx17__normal_iteratorIS4_T0_EE
int* int__std____niter_base_int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v870) {
bb871:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it872;
  int* __retval873;
  __it872 = v870;
  int** r874 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__it872);
  int* t875 = *r874;
  __retval873 = t875;
  int* t876 = __retval873;
  return t876;
}

// function: _ZSt22__copy_move_backward_aILb1EN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_ET1_T0_S8_S7_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____copy_move_backward_a_true____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v877, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v878, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v879) {
bb880:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first881;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last882;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result883;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval884;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0885;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1886;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2887;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3888;
  __first881 = v877;
  __last882 = v878;
  __result883 = v879;
  agg_tmp0885 = __result883; // copy
  agg_tmp1886 = __first881; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t889 = agg_tmp1886;
  int* r890 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t889);
  agg_tmp2887 = __last882; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t891 = agg_tmp2887;
  int* r892 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t891);
  agg_tmp3888 = __result883; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t893 = agg_tmp3888;
  int* r894 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t893);
  int* r895 = int__std____copy_move_backward_a1_true__int___int__(r890, r892, r894);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t896 = agg_tmp0885;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r897 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____niter_wrap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(t896, r895);
  __retval884 = r897;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t898 = __retval884;
  return t898;
}

// function: _ZSt12__miter_baseIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEET_S7_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v899) {
bb900:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it901;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval902;
  __it901 = v899;
  __retval902 = __it901; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t903 = __retval902;
  return t903;
}

// function: _ZSt13move_backwardIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_ET0_T_S8_S7_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__move_backward___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v904, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v905, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v906) {
bb907:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first908;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last909;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result910;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval911;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0912;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1913;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2914;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3915;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp4916;
  __first908 = v904;
  __last909 = v905;
  __result910 = v906;
  agg_tmp1913 = __first908; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t917 = agg_tmp1913;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r918 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t917);
  agg_tmp0912 = r918;
  agg_tmp3915 = __last909; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t919 = agg_tmp3915;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r920 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t919);
  agg_tmp2914 = r920;
  agg_tmp4916 = __result910; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t921 = agg_tmp0912;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t922 = agg_tmp2914;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t923 = agg_tmp4916;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r924 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____copy_move_backward_a_true____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t921, t922, t923);
  __retval911 = r924;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t925 = __retval911;
  return t925;
}

// function: _ZN9__gnu_cxx5__ops14_Val_comp_iterI7myclassEclIiNS_17__normal_iteratorIPiSt6vectorIiSaIiEEEEEEbRT_T0_
_Bool bool___gnu_cxx____ops___Val_comp_iter_myclass___operator___int____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____ops___Val_comp_iter_myclass_* v926, int* v927, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v928) {
bb929:
  struct __gnu_cxx____ops___Val_comp_iter_myclass_* this930;
  int* __val931;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it932;
  _Bool __retval933;
  this930 = v926;
  __val931 = v927;
  __it932 = v928;
  struct __gnu_cxx____ops___Val_comp_iter_myclass_* t934 = this930;
  struct myclass* cast935 = (struct myclass*)t934;
  int* t936 = __val931;
  int t937 = *t936;
  int* r938 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it932);
  int t939 = *r938;
  _Bool r940 = myclass__operator__(cast935, t937, t939);
  __retval933 = r940;
  _Bool t941 = __retval933;
  return t941;
}

// function: _ZSt25__unguarded_linear_insertIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops14_Val_comp_iterI7myclassEEEvT_T0_
void void_std____unguarded_linear_insert___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Val_comp_iter_myclass___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v942, struct __gnu_cxx____ops___Val_comp_iter_myclass_ v943) {
bb944:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last945;
  struct __gnu_cxx____ops___Val_comp_iter_myclass_ __comp946;
  int __val947;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __next948;
  __last945 = v942;
  __comp946 = v943;
  int* r949 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__last945);
  int t950 = *r949;
  __val947 = t950;
  __next948 = __last945; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r951 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__next948);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0952;
    while (1) {
      agg_tmp0952 = __next948; // copy
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t953 = agg_tmp0952;
      _Bool r954 = bool___gnu_cxx____ops___Val_comp_iter_myclass___operator___int____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(&__comp946, &__val947, t953);
      if (!r954) break;
        int* r955 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__next948);
        int t956 = *r955;
        int* r957 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__last945);
        *r957 = t956;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r958 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__2(&__last945, &__next948);
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r959 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__next948);
    }
  int t960 = __val947;
  int* r961 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__last945);
  *r961 = t960;
  return;
}

// function: _ZN9__gnu_cxx5__ops14_Val_comp_iterI7myclassEC2EONS0_15_Iter_comp_iterIS2_EE
void __gnu_cxx____ops___Val_comp_iter_myclass____Val_comp_iter(struct __gnu_cxx____ops___Val_comp_iter_myclass_* v962, struct __gnu_cxx____ops___Iter_comp_iter_myclass_* v963) {
bb964:
  struct __gnu_cxx____ops___Val_comp_iter_myclass_* this965;
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_* __comp966;
  this965 = v962;
  __comp966 = v963;
  return;
}

// function: _ZN9__gnu_cxx5__ops15__val_comp_iterI7myclassEENS0_14_Val_comp_iterIT_EENS0_15_Iter_comp_iterIS4_EE
struct __gnu_cxx____ops___Val_comp_iter_myclass_ __gnu_cxx____ops___Val_comp_iter_myclass____gnu_cxx____ops____val_comp_iter_myclass_(struct __gnu_cxx____ops___Iter_comp_iter_myclass_ v967) {
bb968:
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_ __comp969;
  struct __gnu_cxx____ops___Val_comp_iter_myclass_ __retval970;
  __comp969 = v967;
  __gnu_cxx____ops___Val_comp_iter_myclass____Val_comp_iter(&__retval970, &__comp969);
  struct __gnu_cxx____ops___Val_comp_iter_myclass_ t971 = __retval970;
  return t971;
}

// function: _ZSt16__insertion_sortIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_comp_iterI7myclassEEEvT_SB_T0_
void void_std____insertion_sort___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v972, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v973, struct __gnu_cxx____ops___Iter_comp_iter_myclass_ v974) {
bb975:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first976;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last977;
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_ __comp978;
  __first976 = v972;
  __last977 = v973;
  __comp978 = v974;
    _Bool r979 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first976, &__last977);
    if (r979) {
      return;
    }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __i980;
    long c981 = 1;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r982 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first976, c981);
    __i980 = r982;
    while (1) {
      _Bool r984 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__i980, &__last977);
      _Bool u985 = !r984;
      if (!u985) break;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0986;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1987;
          agg_tmp0986 = __i980; // copy
          agg_tmp1987 = __first976; // copy
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t988 = agg_tmp0986;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t989 = agg_tmp1987;
          _Bool r990 = bool___gnu_cxx____ops___Iter_comp_iter_myclass___operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(&__comp978, t988, t989);
          if (r990) {
            int __val991;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2992;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3993;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp4994;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp5995;
            int* r996 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__i980);
            int t997 = *r996;
            __val991 = t997;
            agg_tmp2992 = __first976; // copy
            agg_tmp3993 = __i980; // copy
            long c998 = 1;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r999 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__i980, c998);
            agg_tmp4994 = r999;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1000 = agg_tmp2992;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1001 = agg_tmp3993;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1002 = agg_tmp4994;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1003 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__move_backward___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t1000, t1001, t1002);
            agg_tmp5995 = r1003;
            int t1004 = __val991;
            int* r1005 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__first976);
            *r1005 = t1004;
          } else {
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp61006;
            struct __gnu_cxx____ops___Val_comp_iter_myclass_ agg_tmp71007;
            struct __gnu_cxx____ops___Iter_comp_iter_myclass_ agg_tmp81008;
            agg_tmp61006 = __i980; // copy
            agg_tmp81008 = __comp978; // copy
            struct __gnu_cxx____ops___Iter_comp_iter_myclass_ t1009 = agg_tmp81008;
            struct __gnu_cxx____ops___Val_comp_iter_myclass_ r1010 = __gnu_cxx____ops___Val_comp_iter_myclass____gnu_cxx____ops____val_comp_iter_myclass_(t1009);
            agg_tmp71007 = r1010;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1011 = agg_tmp61006;
            struct __gnu_cxx____ops___Val_comp_iter_myclass_ t1012 = agg_tmp71007;
            void_std____unguarded_linear_insert___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Val_comp_iter_myclass___(t1011, t1012);
          }
    for_step983: ;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1013 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(&__i980);
    }
  return;
}

// function: _ZSt26__unguarded_insertion_sortIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_comp_iterI7myclassEEEvT_SB_T0_
void void_std____unguarded_insertion_sort___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1014, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1015, struct __gnu_cxx____ops___Iter_comp_iter_myclass_ v1016) {
bb1017:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first1018;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last1019;
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_ __comp1020;
  __first1018 = v1014;
  __last1019 = v1015;
  __comp1020 = v1016;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __i1021;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01022;
    struct __gnu_cxx____ops___Val_comp_iter_myclass_ agg_tmp11023;
    struct __gnu_cxx____ops___Iter_comp_iter_myclass_ agg_tmp21024;
    __i1021 = __first1018; // copy
    while (1) {
      _Bool r1026 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__i1021, &__last1019);
      _Bool u1027 = !r1026;
      if (!u1027) break;
      agg_tmp01022 = __i1021; // copy
      agg_tmp21024 = __comp1020; // copy
      struct __gnu_cxx____ops___Iter_comp_iter_myclass_ t1028 = agg_tmp21024;
      struct __gnu_cxx____ops___Val_comp_iter_myclass_ r1029 = __gnu_cxx____ops___Val_comp_iter_myclass____gnu_cxx____ops____val_comp_iter_myclass_(t1028);
      agg_tmp11023 = r1029;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1030 = agg_tmp01022;
      struct __gnu_cxx____ops___Val_comp_iter_myclass_ t1031 = agg_tmp11023;
      void_std____unguarded_linear_insert___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Val_comp_iter_myclass___(t1030, t1031);
    for_step1025: ;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1032 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(&__i1021);
    }
  return;
}

// function: _ZSt22__final_insertion_sortIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_comp_iterI7myclassEEEvT_SB_T0_
void void_std____final_insertion_sort___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1033, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1034, struct __gnu_cxx____ops___Iter_comp_iter_myclass_ v1035) {
bb1036:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first1037;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last1038;
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_ __comp1039;
  __first1037 = v1033;
  __last1038 = v1034;
  __comp1039 = v1035;
    long r1040 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__last1038, &__first1037);
    long c1041 = 16;
    _Bool c1042 = ((r1040 > c1041)) ? 1 : 0;
    if (c1042) {
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01043;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11044;
      struct __gnu_cxx____ops___Iter_comp_iter_myclass_ agg_tmp21045;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp31046;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp41047;
      struct __gnu_cxx____ops___Iter_comp_iter_myclass_ agg_tmp51048;
      agg_tmp01043 = __first1037; // copy
      long c1049 = 16;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1050 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first1037, c1049);
      agg_tmp11044 = r1050;
      agg_tmp21045 = __comp1039; // copy
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1051 = agg_tmp01043;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1052 = agg_tmp11044;
      struct __gnu_cxx____ops___Iter_comp_iter_myclass_ t1053 = agg_tmp21045;
      void_std____insertion_sort___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(t1051, t1052, t1053);
      long c1054 = 16;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1055 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first1037, c1054);
      agg_tmp31046 = r1055;
      agg_tmp41047 = __last1038; // copy
      agg_tmp51048 = __comp1039; // copy
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1056 = agg_tmp31046;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1057 = agg_tmp41047;
      struct __gnu_cxx____ops___Iter_comp_iter_myclass_ t1058 = agg_tmp51048;
      void_std____unguarded_insertion_sort___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(t1056, t1057, t1058);
    } else {
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp61059;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp71060;
      struct __gnu_cxx____ops___Iter_comp_iter_myclass_ agg_tmp81061;
      agg_tmp61059 = __first1037; // copy
      agg_tmp71060 = __last1038; // copy
      agg_tmp81061 = __comp1039; // copy
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1062 = agg_tmp61059;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1063 = agg_tmp71060;
      struct __gnu_cxx____ops___Iter_comp_iter_myclass_ t1064 = agg_tmp81061;
      void_std____insertion_sort___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(t1062, t1063, t1064);
    }
  return;
}

// function: _ZSt6__sortIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_comp_iterI7myclassEEEvT_SB_T0_
void void_std____sort___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1065, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1066, struct __gnu_cxx____ops___Iter_comp_iter_myclass_ v1067) {
bb1068:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first1069;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last1070;
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_ __comp1071;
  __first1069 = v1065;
  __last1070 = v1066;
  __comp1071 = v1067;
    _Bool r1072 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first1069, &__last1070);
    _Bool u1073 = !r1072;
    if (u1073) {
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01074;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11075;
      struct __gnu_cxx____ops___Iter_comp_iter_myclass_ agg_tmp21076;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp31077;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp41078;
      struct __gnu_cxx____ops___Iter_comp_iter_myclass_ agg_tmp51079;
      agg_tmp01074 = __first1069; // copy
      agg_tmp11075 = __last1070; // copy
      long r1080 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__last1070, &__first1069);
      long r1081 = long_std____lg_long_(r1080);
      long c1082 = 2;
      long b1083 = r1081 * c1082;
      agg_tmp21076 = __comp1071; // copy
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1084 = agg_tmp01074;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1085 = agg_tmp11075;
      struct __gnu_cxx____ops___Iter_comp_iter_myclass_ t1086 = agg_tmp21076;
      void_std____introsort_loop___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long____gnu_cxx____ops___Iter_comp_iter_myclass___(t1084, t1085, b1083, t1086);
      agg_tmp31077 = __first1069; // copy
      agg_tmp41078 = __last1070; // copy
      agg_tmp51079 = __comp1071; // copy
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1087 = agg_tmp31077;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1088 = agg_tmp41078;
      struct __gnu_cxx____ops___Iter_comp_iter_myclass_ t1089 = agg_tmp51079;
      void_std____final_insertion_sort___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(t1087, t1088, t1089);
    }
  return;
}

// function: _ZN9__gnu_cxx5__ops15_Iter_comp_iterI7myclassEC2ES2_
void __gnu_cxx____ops___Iter_comp_iter_myclass____Iter_comp_iter(struct __gnu_cxx____ops___Iter_comp_iter_myclass_* v1090, struct myclass v1091) {
bb1092:
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_* this1093;
  struct myclass __comp1094;
  this1093 = v1090;
  __comp1094 = v1091;
  return;
}

// function: _ZN9__gnu_cxx5__ops16__iter_comp_iterI7myclassEENS0_15_Iter_comp_iterIT_EES4_
struct __gnu_cxx____ops___Iter_comp_iter_myclass_ __gnu_cxx____ops___Iter_comp_iter_myclass____gnu_cxx____ops____iter_comp_iter_myclass_(struct myclass v1095) {
bb1096:
  struct myclass __comp1097;
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_ __retval1098;
  struct myclass agg_tmp01099;
  __comp1097 = v1095;
  struct myclass t1100 = agg_tmp01099;
  __gnu_cxx____ops___Iter_comp_iter_myclass____Iter_comp_iter(&__retval1098, t1100);
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_ t1101 = __retval1098;
  return t1101;
}

// function: _ZSt4sortIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEE7myclassEvT_S8_T0_
void void_std__sort___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______myclass_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1102, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1103, struct myclass v1104) {
bb1105:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first1106;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last1107;
  struct myclass __comp1108;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01109;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11110;
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_ agg_tmp21111;
  struct myclass agg_tmp31112;
  __first1106 = v1102;
  __last1107 = v1103;
  __comp1108 = v1104;
  agg_tmp01109 = __first1106; // copy
  agg_tmp11110 = __last1107; // copy
  struct myclass t1113 = agg_tmp31112;
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_ r1114 = __gnu_cxx____ops___Iter_comp_iter_myclass____gnu_cxx____ops____iter_comp_iter_myclass_(t1113);
  agg_tmp21111 = r1114;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1115 = agg_tmp01109;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1116 = agg_tmp11110;
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_ t1117 = agg_tmp21111;
  void_std____sort___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(t1115, t1116, t1117);
  return;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v1118) {
bb1119:
  struct std__vector_int__std__allocator_int__* this1120;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval1121;
  this1120 = v1118;
  struct std__vector_int__std__allocator_int__* t1122 = this1120;
  struct std___Vector_base_int__std__allocator_int__* base1123 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1122 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1124 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1123->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval1121, &base1124->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1125 = __retval1121;
  return t1125;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v1126) {
bb1127:
  struct std__vector_int__std__allocator_int__* this1128;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval1129;
  this1128 = v1126;
  struct std__vector_int__std__allocator_int__* t1130 = this1128;
  struct std___Vector_base_int__std__allocator_int__* base1131 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1130 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1132 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1131->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval1129, &base1132->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1133 = __retval1129;
  return t1133;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v1134) {
bb1135:
  struct std__vector_int__std__allocator_int__* this1136;
  unsigned long __retval1137;
  long __dif1138;
  this1136 = v1134;
  struct std__vector_int__std__allocator_int__* t1139 = this1136;
  struct std___Vector_base_int__std__allocator_int__* base1140 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1139 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1141 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1140->_M_impl) + 0);
  int* t1142 = base1141->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base1143 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1139 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1144 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1143->_M_impl) + 0);
  int* t1145 = base1144->_M_start;
  long diff1146 = t1142 - t1145;
  __dif1138 = diff1146;
    long t1147 = __dif1138;
    long c1148 = 0;
    _Bool c1149 = ((t1147 < c1148)) ? 1 : 0;
    if (c1149) {
      __builtin_unreachable();
    }
  long t1150 = __dif1138;
  unsigned long cast1151 = (unsigned long)t1150;
  __retval1137 = cast1151;
  unsigned long t1152 = __retval1137;
  return t1152;
}

// function: _ZNSt6vectorIiSaIiEEixEm
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* v1153, unsigned long v1154) {
bb1155:
  struct std__vector_int__std__allocator_int__* this1156;
  unsigned long __n1157;
  int* __retval1158;
  this1156 = v1153;
  __n1157 = v1154;
  struct std__vector_int__std__allocator_int__* t1159 = this1156;
    do {
          unsigned long t1160 = __n1157;
          unsigned long r1161 = std__vector_int__std__allocator_int_____size___const(t1159);
          _Bool c1162 = ((t1160 < r1161)) ? 1 : 0;
          _Bool u1163 = !c1162;
          if (u1163) {
            char* cast1164 = (char*)&(_str_5);
            int c1165 = 1263;
            char* cast1166 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm);
            char* cast1167 = (char*)&(_str_6);
            std____glibcxx_assert_fail(cast1164, c1165, cast1166, cast1167);
          }
      _Bool c1168 = 0;
      if (!c1168) break;
    } while (1);
  struct std___Vector_base_int__std__allocator_int__* base1169 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1159 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1170 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1169->_M_impl) + 0);
  int* t1171 = base1170->_M_start;
  unsigned long t1172 = __n1157;
  int* ptr1173 = &(t1171)[t1172];
  __retval1158 = ptr1173;
  int* t1174 = __retval1158;
  return t1174;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator__2(int v1175, int v1176) {
bb1177:
  int __a1178;
  int __b1179;
  int __retval1180;
  __a1178 = v1175;
  __b1179 = v1176;
  int t1181 = __a1178;
  int t1182 = __b1179;
  int b1183 = t1181 | t1182;
  __retval1180 = b1183;
  int t1184 = __retval1180;
  return t1184;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v1185) {
bb1186:
  struct std__basic_ios_char__std__char_traits_char__* this1187;
  int __retval1188;
  this1187 = v1185;
  struct std__basic_ios_char__std__char_traits_char__* t1189 = this1187;
  struct std__ios_base* base1190 = (struct std__ios_base*)((char *)t1189 + 0);
  int t1191 = base1190->_M_streambuf_state;
  __retval1188 = t1191;
  int t1192 = __retval1188;
  return t1192;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v1193, int v1194) {
bb1195:
  struct std__basic_ios_char__std__char_traits_char__* this1196;
  int __state1197;
  this1196 = v1193;
  __state1197 = v1194;
  struct std__basic_ios_char__std__char_traits_char__* t1198 = this1196;
  int r1199 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t1198);
  int t1200 = __state1197;
  int r1201 = std__operator__2(r1199, t1200);
  std__basic_ios_char__std__char_traits_char_____clear(t1198, r1201);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v1202, char* v1203) {
bb1204:
  char* __c11205;
  char* __c21206;
  _Bool __retval1207;
  __c11205 = v1202;
  __c21206 = v1203;
  char* t1208 = __c11205;
  char t1209 = *t1208;
  int cast1210 = (int)t1209;
  char* t1211 = __c21206;
  char t1212 = *t1211;
  int cast1213 = (int)t1212;
  _Bool c1214 = ((cast1210 == cast1213)) ? 1 : 0;
  __retval1207 = c1214;
  _Bool t1215 = __retval1207;
  return t1215;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v1216) {
bb1217:
  char* __p1218;
  unsigned long __retval1219;
  unsigned long __i1220;
  __p1218 = v1216;
  unsigned long c1221 = 0;
  __i1220 = c1221;
    char ref_tmp01222;
    while (1) {
      unsigned long t1223 = __i1220;
      char* t1224 = __p1218;
      char* ptr1225 = &(t1224)[t1223];
      char c1226 = 0;
      ref_tmp01222 = c1226;
      _Bool r1227 = __gnu_cxx__char_traits_char___eq(ptr1225, &ref_tmp01222);
      _Bool u1228 = !r1227;
      if (!u1228) break;
      unsigned long t1229 = __i1220;
      unsigned long u1230 = t1229 + 1;
      __i1220 = u1230;
    }
  unsigned long t1231 = __i1220;
  __retval1219 = t1231;
  unsigned long t1232 = __retval1219;
  return t1232;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v1233) {
bb1234:
  char* __s1235;
  unsigned long __retval1236;
  __s1235 = v1233;
    _Bool r1237 = std____is_constant_evaluated();
    if (r1237) {
      char* t1238 = __s1235;
      unsigned long r1239 = __gnu_cxx__char_traits_char___length(t1238);
      __retval1236 = r1239;
      unsigned long t1240 = __retval1236;
      return t1240;
    }
  char* t1241 = __s1235;
  unsigned long r1242 = strlen(t1241);
  __retval1236 = r1242;
  unsigned long t1243 = __retval1236;
  return t1243;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1244, char* v1245) {
bb1246:
  struct std__basic_ostream_char__std__char_traits_char__* __out1247;
  char* __s1248;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1249;
  __out1247 = v1244;
  __s1248 = v1245;
    char* t1250 = __s1248;
    _Bool cast1251 = (_Bool)t1250;
    _Bool u1252 = !cast1251;
    if (u1252) {
      struct std__basic_ostream_char__std__char_traits_char__* t1253 = __out1247;
      void** v1254 = (void**)t1253;
      void* v1255 = *((void**)v1254);
      unsigned char* cast1256 = (unsigned char*)v1255;
      long c1257 = -24;
      unsigned char* ptr1258 = &(cast1256)[c1257];
      long* cast1259 = (long*)ptr1258;
      long t1260 = *cast1259;
      unsigned char* cast1261 = (unsigned char*)t1253;
      unsigned char* ptr1262 = &(cast1261)[t1260];
      struct std__basic_ostream_char__std__char_traits_char__* cast1263 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1262;
      struct std__basic_ios_char__std__char_traits_char__* cast1264 = (struct std__basic_ios_char__std__char_traits_char__*)cast1263;
      int t1265 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast1264, t1265);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t1266 = __out1247;
      char* t1267 = __s1248;
      char* t1268 = __s1248;
      unsigned long r1269 = std__char_traits_char___length(t1268);
      long cast1270 = (long)r1269;
      struct std__basic_ostream_char__std__char_traits_char__* r1271 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t1266, t1267, cast1270);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t1272 = __out1247;
  __retval1249 = t1272;
  struct std__basic_ostream_char__std__char_traits_char__* t1273 = __retval1249;
  return t1273;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEaSEOS5_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1274, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1275) {
bb1276:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this1277;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed1278;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval1279;
  this1277 = v1274;
  unnamed1278 = v1275;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1280 = this1277;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1281 = unnamed1278;
  int* t1282 = t1281->_M_current;
  t1280->_M_current = t1282;
  __retval1279 = t1280;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1283 = __retval1279;
  return t1283;
}

// function: _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1284, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1285) {
bb1286:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs1287;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs1288;
  _Bool __retval1289;
  __lhs1287 = v1284;
  __rhs1288 = v1285;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1290 = __lhs1287;
  int** r1291 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t1290);
  int* t1292 = *r1291;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1293 = __rhs1288;
  int** r1294 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t1293);
  int* t1295 = *r1294;
  _Bool c1296 = ((t1292 == t1295)) ? 1 : 0;
  __retval1289 = c1296;
  _Bool t1297 = __retval1289;
  return t1297;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1298) {
bb1299:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this1300;
  int* __retval1301;
  this1300 = v1298;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1302 = this1300;
  int* t1303 = t1302->_M_current;
  __retval1301 = t1303;
  int* t1304 = __retval1301;
  return t1304;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1305) {
bb1306:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this1307;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval1308;
  this1307 = v1305;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1309 = this1307;
  int* t1310 = t1309->_M_current;
  int c1311 = 1;
  int* ptr1312 = &(t1310)[c1311];
  t1309->_M_current = ptr1312;
  __retval1308 = t1309;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1313 = __retval1308;
  return t1313;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v1314, void* v1315) {
bb1316:
  struct std__basic_ostream_char__std__char_traits_char__* this1317;
  void* __pf1318;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1319;
  this1317 = v1314;
  __pf1318 = v1315;
  struct std__basic_ostream_char__std__char_traits_char__* t1320 = this1317;
  void* t1321 = __pf1318;
  struct std__basic_ostream_char__std__char_traits_char__* r1322 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t1321)(t1320);
  __retval1319 = r1322;
  struct std__basic_ostream_char__std__char_traits_char__* t1323 = __retval1319;
  return t1323;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1324) {
bb1325:
  struct std__basic_ostream_char__std__char_traits_char__* __os1326;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1327;
  __os1326 = v1324;
  struct std__basic_ostream_char__std__char_traits_char__* t1328 = __os1326;
  struct std__basic_ostream_char__std__char_traits_char__* r1329 = std__ostream__flush(t1328);
  __retval1327 = r1329;
  struct std__basic_ostream_char__std__char_traits_char__* t1330 = __retval1327;
  return t1330;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v1331) {
bb1332:
  struct std__ctype_char_* __f1333;
  struct std__ctype_char_* __retval1334;
  __f1333 = v1331;
    struct std__ctype_char_* t1335 = __f1333;
    _Bool cast1336 = (_Bool)t1335;
    _Bool u1337 = !cast1336;
    if (u1337) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t1338 = __f1333;
  __retval1334 = t1338;
  struct std__ctype_char_* t1339 = __retval1334;
  return t1339;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v1340, char v1341) {
bb1342:
  struct std__ctype_char_* this1343;
  char __c1344;
  char __retval1345;
  this1343 = v1340;
  __c1344 = v1341;
  struct std__ctype_char_* t1346 = this1343;
    char t1347 = t1346->_M_widen_ok;
    _Bool cast1348 = (_Bool)t1347;
    if (cast1348) {
      char t1349 = __c1344;
      unsigned char cast1350 = (unsigned char)t1349;
      unsigned long cast1351 = (unsigned long)cast1350;
      char t1352 = t1346->_M_widen[cast1351];
      __retval1345 = t1352;
      char t1353 = __retval1345;
      return t1353;
    }
  std__ctype_char____M_widen_init___const(t1346);
  char t1354 = __c1344;
  void** v1355 = (void**)t1346;
  void* v1356 = *((void**)v1355);
  char vcall1359 = (char)__VERIFIER_virtual_call_char_char(t1346, 6, t1354);
  __retval1345 = vcall1359;
  char t1360 = __retval1345;
  return t1360;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v1361, char v1362) {
bb1363:
  struct std__basic_ios_char__std__char_traits_char__* this1364;
  char __c1365;
  char __retval1366;
  this1364 = v1361;
  __c1365 = v1362;
  struct std__basic_ios_char__std__char_traits_char__* t1367 = this1364;
  struct std__ctype_char_* t1368 = t1367->_M_ctype;
  struct std__ctype_char_* r1369 = std__ctype_char__const__std____check_facet_std__ctype_char___(t1368);
  char t1370 = __c1365;
  char r1371 = std__ctype_char___widen_char__const(r1369, t1370);
  __retval1366 = r1371;
  char t1372 = __retval1366;
  return t1372;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1373) {
bb1374:
  struct std__basic_ostream_char__std__char_traits_char__* __os1375;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1376;
  __os1375 = v1373;
  struct std__basic_ostream_char__std__char_traits_char__* t1377 = __os1375;
  struct std__basic_ostream_char__std__char_traits_char__* t1378 = __os1375;
  void** v1379 = (void**)t1378;
  void* v1380 = *((void**)v1379);
  unsigned char* cast1381 = (unsigned char*)v1380;
  long c1382 = -24;
  unsigned char* ptr1383 = &(cast1381)[c1382];
  long* cast1384 = (long*)ptr1383;
  long t1385 = *cast1384;
  unsigned char* cast1386 = (unsigned char*)t1378;
  unsigned char* ptr1387 = &(cast1386)[t1385];
  struct std__basic_ostream_char__std__char_traits_char__* cast1388 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1387;
  struct std__basic_ios_char__std__char_traits_char__* cast1389 = (struct std__basic_ios_char__std__char_traits_char__*)cast1388;
  char c1390 = 10;
  char r1391 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast1389, c1390);
  struct std__basic_ostream_char__std__char_traits_char__* r1392 = std__ostream__put(t1377, r1391);
  struct std__basic_ostream_char__std__char_traits_char__* r1393 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r1392);
  __retval1376 = r1393;
  struct std__basic_ostream_char__std__char_traits_char__* t1394 = __retval1376;
  return t1394;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v1395) {
bb1396:
  struct std__vector_int__std__allocator_int__* this1397;
  this1397 = v1395;
  struct std__vector_int__std__allocator_int__* t1398 = this1397;
    struct std___Vector_base_int__std__allocator_int__* base1399 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1398 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1400 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1399->_M_impl) + 0);
    int* t1401 = base1400->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base1402 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1398 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1403 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1402->_M_impl) + 0);
    int* t1404 = base1403->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base1405 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1398 + 0);
    struct std__allocator_int_* r1406 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1405);
    void_std___Destroy_int___int_(t1401, t1404, r1406);
  {
    struct std___Vector_base_int__std__allocator_int__* base1407 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1398 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base1407);
  }
  return;
}

// function: main
int main() {
bb1408:
  int __retval1409;
  int myints1410[3];
  int myints11411[3];
  struct std__vector_int__std__allocator_int__ myvector1412;
  struct std__allocator_int_ ref_tmp01413;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it1414;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01415;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11416;
  struct myclass agg_tmp21417;
  int c1418 = 0;
  __retval1409 = c1418;
  // array copy
  __builtin_memcpy(myints1410, __const_main_myints, (unsigned long)3 * sizeof(__const_main_myints[0]));
  // array copy
  __builtin_memcpy(myints11411, __const_main_myints1, (unsigned long)3 * sizeof(__const_main_myints1[0]));
  int* cast1419 = (int*)&(myints1410);
  int* cast1420 = (int*)&(myints1410);
  int c1421 = 3;
  int* ptr1422 = &(cast1420)[c1421];
  std__allocator_int___allocator_2(&ref_tmp01413);
    std__vector_int__std__allocator_int_____vector_int___void_(&myvector1412, cast1419, ptr1422, &ref_tmp01413);
  {
    std__allocator_int____allocator(&ref_tmp01413);
  }
    __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(&it1414);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1423 = std__vector_int__std__allocator_int_____begin(&myvector1412);
    agg_tmp01415 = r1423;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1424 = std__vector_int__std__allocator_int_____end(&myvector1412);
    agg_tmp11416 = r1424;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1425 = agg_tmp01415;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1426 = agg_tmp11416;
    struct myclass t1427 = agg_tmp21417;
    void_std__sort___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______myclass_(t1425, t1426, t1427);
    unsigned long c1428 = 1;
    int* r1429 = std__vector_int__std__allocator_int_____operator__(&myvector1412, c1428);
    int t1430 = *r1429;
    int c1431 = 32;
    _Bool c1432 = ((t1430 != c1431)) ? 1 : 0;
    if (c1432) {
    } else {
      char* cast1433 = (char*)&(_str);
      char* c1434 = _str_1;
      unsigned int c1435 = 29;
      char* cast1436 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1433, c1434, c1435, cast1436);
    }
    char* cast1437 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* r1438 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1437);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp11439;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp21440;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1441 = std__vector_int__std__allocator_int_____begin(&myvector1412);
      ref_tmp11439 = r1441;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1442 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&it1414, &ref_tmp11439);
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1444 = std__vector_int__std__allocator_int_____end(&myvector1412);
        ref_tmp21440 = r1444;
        _Bool r1445 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&it1414, &ref_tmp21440);
        _Bool u1446 = !r1445;
        if (!u1446) break;
        char* cast1447 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* r1448 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1447);
        int* r1449 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&it1414);
        int t1450 = *r1449;
        struct std__basic_ostream_char__std__char_traits_char__* r1451 = std__ostream__operator__(r1448, t1450);
      for_step1443: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1452 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(&it1414);
      }
    struct std__basic_ostream_char__std__char_traits_char__* r1453 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c1454 = 0;
    __retval1409 = c1454;
    int t1455 = __retval1409;
    int ret_val1456 = t1455;
    {
      std__vector_int__std__allocator_int______vector(&myvector1412);
    }
    return ret_val1456;
  int t1457 = __retval1409;
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

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1462, struct std__allocator_int_* v1463) {
bb1464:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1465;
  struct std__allocator_int_* __a1466;
  this1465 = v1462;
  __a1466 = v1463;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1467 = this1465;
  struct std__allocator_int_* base1468 = (struct std__allocator_int_*)((char *)t1467 + 0);
  struct std__allocator_int_* t1469 = __a1466;
  std__allocator_int___allocator(base1468, t1469);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1470 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t1467 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base1470);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1471) {
bb1472:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1473;
  this1473 = v1471;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1474 = this1473;
  {
    struct std__allocator_int_* base1475 = (struct std__allocator_int_*)((char *)t1474 + 0);
    std__allocator_int____allocator(base1475);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1476, struct std__allocator_int_* v1477) {
bb1478:
  struct std___Vector_base_int__std__allocator_int__* this1479;
  struct std__allocator_int_* __a1480;
  this1479 = v1476;
  __a1480 = v1477;
  struct std___Vector_base_int__std__allocator_int__* t1481 = this1479;
  struct std__allocator_int_* t1482 = __a1480;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t1481->_M_impl, t1482);
  return;
}

// function: _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_
long _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_(struct std__ranges____distance_fn* v1483, int** v1484, int* v1485) {
bb1486:
  struct std__ranges____distance_fn* this1487;
  int** __first1488;
  int* __last1489;
  long __retval1490;
  this1487 = v1483;
  __first1488 = v1484;
  __last1489 = v1485;
  struct std__ranges____distance_fn* t1491 = this1487;
  int* t1492 = __last1489;
  int** t1493 = __first1488;
  int* t1494 = *t1493;
  long diff1495 = t1492 - t1494;
  __retval1490 = diff1495;
  long t1496 = __retval1490;
  return t1496;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1497:
  _Bool __retval1498;
    _Bool c1499 = 0;
    __retval1498 = c1499;
    _Bool t1500 = __retval1498;
    return t1500;
  abort();
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v1501) {
bb1502:
  struct std____new_allocator_int_* this1503;
  unsigned long __retval1504;
  this1503 = v1501;
  struct std____new_allocator_int_* t1505 = this1503;
  unsigned long c1506 = 9223372036854775807;
  unsigned long c1507 = 4;
  unsigned long b1508 = c1506 / c1507;
  __retval1504 = b1508;
  unsigned long t1509 = __retval1504;
  return t1509;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v1510, unsigned long v1511, void* v1512) {
bb1513:
  struct std____new_allocator_int_* this1514;
  unsigned long __n1515;
  void* unnamed1516;
  int* __retval1517;
  this1514 = v1510;
  __n1515 = v1511;
  unnamed1516 = v1512;
  struct std____new_allocator_int_* t1518 = this1514;
    unsigned long t1519 = __n1515;
    unsigned long r1520 = std____new_allocator_int____M_max_size___const(t1518);
    _Bool c1521 = ((t1519 > r1520)) ? 1 : 0;
    if (c1521) {
        unsigned long t1522 = __n1515;
        unsigned long c1523 = -1;
        unsigned long c1524 = 4;
        unsigned long b1525 = c1523 / c1524;
        _Bool c1526 = ((t1522 > b1525)) ? 1 : 0;
        if (c1526) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c1527 = 4;
    unsigned long c1528 = 16;
    _Bool c1529 = ((c1527 > c1528)) ? 1 : 0;
    if (c1529) {
      unsigned long __al1530;
      unsigned long c1531 = 4;
      __al1530 = c1531;
      unsigned long t1532 = __n1515;
      unsigned long c1533 = 4;
      unsigned long b1534 = t1532 * c1533;
      unsigned long t1535 = __al1530;
      void* r1536 = operator_new_2(b1534, t1535);
      int* cast1537 = (int*)r1536;
      __retval1517 = cast1537;
      int* t1538 = __retval1517;
      return t1538;
    }
  unsigned long t1539 = __n1515;
  unsigned long c1540 = 4;
  unsigned long b1541 = t1539 * c1540;
  void* r1542 = operator_new(b1541);
  int* cast1543 = (int*)r1542;
  __retval1517 = cast1543;
  int* t1544 = __retval1517;
  return t1544;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v1545, unsigned long v1546) {
bb1547:
  struct std__allocator_int_* this1548;
  unsigned long __n1549;
  int* __retval1550;
  this1548 = v1545;
  __n1549 = v1546;
  struct std__allocator_int_* t1551 = this1548;
    _Bool r1552 = std____is_constant_evaluated();
    if (r1552) {
        unsigned long t1553 = __n1549;
        unsigned long c1554 = 4;
        unsigned long ovr1555;
        _Bool ovf1556 = __builtin_mul_overflow(t1553, c1554, &ovr1555);
        __n1549 = ovr1555;
        if (ovf1556) {
          std____throw_bad_array_new_length();
        }
      unsigned long t1557 = __n1549;
      void* r1558 = operator_new(t1557);
      int* cast1559 = (int*)r1558;
      __retval1550 = cast1559;
      int* t1560 = __retval1550;
      return t1560;
    }
  struct std____new_allocator_int_* base1561 = (struct std____new_allocator_int_*)((char *)t1551 + 0);
  unsigned long t1562 = __n1549;
  void* c1563 = ((void*)0);
  int* r1564 = std____new_allocator_int___allocate(base1561, t1562, c1563);
  __retval1550 = r1564;
  int* t1565 = __retval1550;
  return t1565;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v1566, unsigned long v1567) {
bb1568:
  struct std__allocator_int_* __a1569;
  unsigned long __n1570;
  int* __retval1571;
  __a1569 = v1566;
  __n1570 = v1567;
  struct std__allocator_int_* t1572 = __a1569;
  unsigned long t1573 = __n1570;
  int* r1574 = std__allocator_int___allocate(t1572, t1573);
  __retval1571 = r1574;
  int* t1575 = __retval1571;
  return t1575;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v1576, unsigned long v1577) {
bb1578:
  struct std___Vector_base_int__std__allocator_int__* this1579;
  unsigned long __n1580;
  int* __retval1581;
  this1579 = v1576;
  __n1580 = v1577;
  struct std___Vector_base_int__std__allocator_int__* t1582 = this1579;
  unsigned long t1583 = __n1580;
  unsigned long c1584 = 0;
  _Bool c1585 = ((t1583 != c1584)) ? 1 : 0;
  int* ternary1586;
  if (c1585) {
    struct std__allocator_int_* base1587 = (struct std__allocator_int_*)((char *)&(t1582->_M_impl) + 0);
    unsigned long t1588 = __n1580;
    int* r1589 = std__allocator_traits_std__allocator_int_____allocate(base1587, t1588);
    ternary1586 = (int*)r1589;
  } else {
    int* c1590 = ((void*)0);
    ternary1586 = (int*)c1590;
  }
  __retval1581 = ternary1586;
  int* t1591 = __retval1581;
  return t1591;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v1592, unsigned long* v1593) {
bb1594:
  unsigned long* __a1595;
  unsigned long* __b1596;
  unsigned long* __retval1597;
  __a1595 = v1592;
  __b1596 = v1593;
    unsigned long* t1598 = __b1596;
    unsigned long t1599 = *t1598;
    unsigned long* t1600 = __a1595;
    unsigned long t1601 = *t1600;
    _Bool c1602 = ((t1599 < t1601)) ? 1 : 0;
    if (c1602) {
      unsigned long* t1603 = __b1596;
      __retval1597 = t1603;
      unsigned long* t1604 = __retval1597;
      return t1604;
    }
  unsigned long* t1605 = __a1595;
  __retval1597 = t1605;
  unsigned long* t1606 = __retval1597;
  return t1606;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v1607) {
bb1608:
  struct std__allocator_int_* __a1609;
  unsigned long __retval1610;
  unsigned long __diffmax1611;
  unsigned long __allocmax1612;
  __a1609 = v1607;
  unsigned long c1613 = 2305843009213693951;
  __diffmax1611 = c1613;
  unsigned long c1614 = 4611686018427387903;
  __allocmax1612 = c1614;
  unsigned long* r1615 = unsigned_long_const__std__min_unsigned_long_(&__diffmax1611, &__allocmax1612);
  unsigned long t1616 = *r1615;
  __retval1610 = t1616;
  unsigned long t1617 = __retval1610;
  return t1617;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v1618, struct std__allocator_int_* v1619) {
bb1620:
  struct std__allocator_int_* this1621;
  struct std__allocator_int_* __a1622;
  this1621 = v1618;
  __a1622 = v1619;
  struct std__allocator_int_* t1623 = this1621;
  struct std____new_allocator_int_* base1624 = (struct std____new_allocator_int_*)((char *)t1623 + 0);
  struct std__allocator_int_* t1625 = __a1622;
  struct std____new_allocator_int_* base1626 = (struct std____new_allocator_int_*)((char *)t1625 + 0);
  std____new_allocator_int_____new_allocator(base1624, base1626);
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long v1627, struct std__allocator_int_* v1628) {
bb1629:
  unsigned long __n1630;
  struct std__allocator_int_* __a1631;
  unsigned long __retval1632;
  __n1630 = v1627;
  __a1631 = v1628;
    struct std__allocator_int_ ref_tmp01633;
    _Bool tmp_exprcleanup1634;
    unsigned long t1635 = __n1630;
    struct std__allocator_int_* t1636 = __a1631;
    std__allocator_int___allocator(&ref_tmp01633, t1636);
      unsigned long r1637 = std__vector_int__std__allocator_int______S_max_size(&ref_tmp01633);
      _Bool c1638 = ((t1635 > r1637)) ? 1 : 0;
      tmp_exprcleanup1634 = c1638;
    {
      std__allocator_int____allocator(&ref_tmp01633);
    }
    _Bool t1639 = tmp_exprcleanup1634;
    if (t1639) {
      char* cast1640 = (char*)&(_str_4);
      std____throw_length_error(cast1640);
    }
  unsigned long t1641 = __n1630;
  __retval1632 = t1641;
  unsigned long t1642 = __retval1632;
  return t1642;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v1643) {
bb1644:
  struct std___Vector_base_int__std__allocator_int__* this1645;
  struct std__allocator_int_* __retval1646;
  this1645 = v1643;
  struct std___Vector_base_int__std__allocator_int__* t1647 = this1645;
  struct std__allocator_int_* base1648 = (struct std__allocator_int_*)((char *)&(t1647->_M_impl) + 0);
  __retval1646 = base1648;
  struct std__allocator_int_* t1649 = __retval1646;
  return t1649;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1650:
  _Bool __retval1651;
    _Bool c1652 = 0;
    __retval1651 = c1652;
    _Bool t1653 = __retval1651;
    return t1653;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v1654, int** v1655) {
bb1656:
  struct std___UninitDestroyGuard_int____void_* this1657;
  int** __first1658;
  this1657 = v1654;
  __first1658 = v1655;
  struct std___UninitDestroyGuard_int____void_* t1659 = this1657;
  int** t1660 = __first1658;
  int* t1661 = *t1660;
  t1659->_M_first = t1661;
  int** t1662 = __first1658;
  t1659->_M_cur = t1662;
  return;
}

// function: _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* v1663, int* v1664) {
bb1665:
  int* __location1666;
  int* __args1667;
  int* __retval1668;
  void* __loc1669;
  __location1666 = v1663;
  __args1667 = v1664;
  int* t1670 = __location1666;
  void* cast1671 = (void*)t1670;
  __loc1669 = cast1671;
    void* t1672 = __loc1669;
    int* cast1673 = (int*)t1672;
    int* t1674 = __args1667;
    int t1675 = *t1674;
    *cast1673 = t1675;
    __retval1668 = cast1673;
    int* t1676 = __retval1668;
    return t1676;
  abort();
}

// function: _ZSt10_ConstructIiJRiEEvPT_DpOT0_
void void_std___Construct_int__int__(int* v1677, int* v1678) {
bb1679:
  int* __p1680;
  int* __args1681;
  __p1680 = v1677;
  __args1681 = v1678;
    _Bool r1682 = std____is_constant_evaluated();
    if (r1682) {
      int* t1683 = __p1680;
      int* t1684 = __args1681;
      int* r1685 = _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t1683, t1684);
      return;
    }
  int* t1686 = __p1680;
  void* cast1687 = (void*)t1686;
  int* cast1688 = (int*)cast1687;
  int* t1689 = __args1681;
  int t1690 = *t1689;
  *cast1688 = t1690;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v1691) {
bb1692:
  struct std___UninitDestroyGuard_int____void_* this1693;
  this1693 = v1691;
  struct std___UninitDestroyGuard_int____void_* t1694 = this1693;
  int** c1695 = ((void*)0);
  t1694->_M_cur = c1695;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v1696) {
bb1697:
  struct std___UninitDestroyGuard_int____void_* this1698;
  this1698 = v1696;
  struct std___UninitDestroyGuard_int____void_* t1699 = this1698;
    int** t1700 = t1699->_M_cur;
    int** c1701 = ((void*)0);
    _Bool c1702 = ((t1700 != c1701)) ? 1 : 0;
    if (c1702) {
      int* t1703 = t1699->_M_first;
      int** t1704 = t1699->_M_cur;
      int* t1705 = *t1704;
      void_std___Destroy_int__(t1703, t1705);
    }
  return;
}

// function: _ZSt16__do_uninit_copyIPiS0_S0_ET1_T_T0_S1_
int* int__std____do_uninit_copy_int___int___int__(int* v1706, int* v1707, int* v1708) {
bb1709:
  int* __first1710;
  int* __last1711;
  int* __result1712;
  int* __retval1713;
  struct std___UninitDestroyGuard_int____void_ __guard1714;
  __first1710 = v1706;
  __last1711 = v1707;
  __result1712 = v1708;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard1714, &__result1712);
      while (1) {
        int* t1716 = __first1710;
        int* t1717 = __last1711;
        _Bool c1718 = ((t1716 != t1717)) ? 1 : 0;
        if (!c1718) break;
        int* t1719 = __result1712;
        int* t1720 = __first1710;
        void_std___Construct_int__int__(t1719, t1720);
      for_step1715: ;
        int* t1721 = __first1710;
        int c1722 = 1;
        int* ptr1723 = &(t1721)[c1722];
        __first1710 = ptr1723;
        int* t1724 = __result1712;
        int c1725 = 1;
        int* ptr1726 = &(t1724)[c1725];
        __result1712 = ptr1726;
      }
    std___UninitDestroyGuard_int___void___release(&__guard1714);
    int* t1727 = __result1712;
    __retval1713 = t1727;
    int* t1728 = __retval1713;
    int* ret_val1729 = t1728;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1714);
    }
    return ret_val1729;
  abort();
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v1730) {
bb1731:
  int* __it1732;
  int* __retval1733;
  __it1732 = v1730;
  int* t1734 = __it1732;
  __retval1733 = t1734;
  int* t1735 = __retval1733;
  return t1735;
}

// function: _ZSt18uninitialized_copyIPiS0_ET0_T_S2_S1_
int* int__std__uninitialized_copy_int___int__(int* v1736, int* v1737, int* v1738) {
bb1739:
  int* __first1740;
  int* __last1741;
  int* __result1742;
  int* __retval1743;
  __first1740 = v1736;
  __last1741 = v1737;
  __result1742 = v1738;
      long __n1744;
      int* t1745 = __last1741;
      int* t1746 = __first1740;
      long diff1747 = t1745 - t1746;
      __n1744 = diff1747;
        long t1748 = __n1744;
        long c1749 = 0;
        _Bool c1750 = ((t1748 > c1749)) ? 1 : 0;
        if (c1750) {
          int* t1751 = __result1742;
          int* r1752 = int__std____niter_base_int__(t1751);
          void* cast1753 = (void*)r1752;
          int* t1754 = __first1740;
          int* r1755 = int__std____niter_base_int__(t1754);
          void* cast1756 = (void*)r1755;
          long t1757 = __n1744;
          unsigned long cast1758 = (unsigned long)t1757;
          unsigned long c1759 = 4;
          unsigned long b1760 = cast1758 * c1759;
          void* r1761 = memcpy(cast1753, cast1756, b1760);
          long t1762 = __n1744;
          int* t1763 = __result1742;
          int* ptr1764 = &(t1763)[t1762];
          __result1742 = ptr1764;
        }
      int* t1765 = __result1742;
      __retval1743 = t1765;
      int* t1766 = __retval1743;
      return t1766;
  abort();
}

// function: _ZSt22__uninitialized_copy_aIPiS0_S0_iET1_T_T0_S1_RSaIT2_E
int* int__std____uninitialized_copy_a_int___int___int___int_(int* v1767, int* v1768, int* v1769, struct std__allocator_int_* v1770) {
bb1771:
  int* __first1772;
  int* __last1773;
  int* __result1774;
  struct std__allocator_int_* unnamed1775;
  int* __retval1776;
  __first1772 = v1767;
  __last1773 = v1768;
  __result1774 = v1769;
  unnamed1775 = v1770;
    _Bool r1777 = std__is_constant_evaluated();
    if (r1777) {
      int* t1778 = __first1772;
      int* t1779 = __last1773;
      int* t1780 = __result1774;
      int* r1781 = int__std____do_uninit_copy_int___int___int__(t1778, t1779, t1780);
      __retval1776 = r1781;
      int* t1782 = __retval1776;
      return t1782;
    }
    int* t1783 = __first1772;
    int* t1784 = __last1773;
    int* t1785 = __result1774;
    int* r1786 = int__std__uninitialized_copy_int___int__(t1783, t1784, t1785);
    __retval1776 = r1786;
    int* t1787 = __retval1776;
    return t1787;
  abort();
}

// function: _ZNSt6vectorIiSaIiEE21_M_range_initialize_nIPiS3_EEvT_T0_m
void void_std__vector_int__std__allocator_int______M_range_initialize_n_int___int__(struct std__vector_int__std__allocator_int__* v1788, int* v1789, int* v1790, unsigned long v1791) {
bb1792:
  struct std__vector_int__std__allocator_int__* this1793;
  int* __first1794;
  int* __last1795;
  unsigned long __n1796;
  int* __start1797;
  this1793 = v1788;
  __first1794 = v1789;
  __last1795 = v1790;
  __n1796 = v1791;
  struct std__vector_int__std__allocator_int__* t1798 = this1793;
  struct std___Vector_base_int__std__allocator_int__* base1799 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1798 + 0);
  unsigned long t1800 = __n1796;
  struct std___Vector_base_int__std__allocator_int__* base1801 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1798 + 0);
  struct std__allocator_int_* r1802 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1801);
  unsigned long r1803 = std__vector_int__std__allocator_int______S_check_init_len(t1800, r1802);
  int* r1804 = std___Vector_base_int__std__allocator_int______M_allocate(base1799, r1803);
  __start1797 = r1804;
  int* t1805 = __start1797;
  struct std___Vector_base_int__std__allocator_int__* base1806 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1798 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1807 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1806->_M_impl) + 0);
  base1807->_M_finish = t1805;
  struct std___Vector_base_int__std__allocator_int__* base1808 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1798 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1809 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1808->_M_impl) + 0);
  base1809->_M_start = t1805;
  int* t1810 = __start1797;
  unsigned long t1811 = __n1796;
  int* ptr1812 = &(t1810)[t1811];
  struct std___Vector_base_int__std__allocator_int__* base1813 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1798 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1814 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1813->_M_impl) + 0);
  base1814->_M_end_of_storage = ptr1812;
  int* t1815 = __first1794;
  int* t1816 = __last1795;
  int* t1817 = __start1797;
  struct std___Vector_base_int__std__allocator_int__* base1818 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1798 + 0);
  struct std__allocator_int_* r1819 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1818);
  int* r1820 = int__std____uninitialized_copy_a_int___int___int___int_(t1815, t1816, t1817, r1819);
  struct std___Vector_base_int__std__allocator_int__* base1821 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1798 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1822 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1821->_M_impl) + 0);
  base1822->_M_finish = r1820;
  return;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v1823, int* v1824, unsigned long v1825) {
bb1826:
  struct std____new_allocator_int_* this1827;
  int* __p1828;
  unsigned long __n1829;
  this1827 = v1823;
  __p1828 = v1824;
  __n1829 = v1825;
  struct std____new_allocator_int_* t1830 = this1827;
    unsigned long c1831 = 4;
    unsigned long c1832 = 16;
    _Bool c1833 = ((c1831 > c1832)) ? 1 : 0;
    if (c1833) {
      int* t1834 = __p1828;
      void* cast1835 = (void*)t1834;
      unsigned long t1836 = __n1829;
      unsigned long c1837 = 4;
      unsigned long b1838 = t1836 * c1837;
      unsigned long c1839 = 4;
      operator_delete_3(cast1835, b1838, c1839);
      return;
    }
  int* t1840 = __p1828;
  void* cast1841 = (void*)t1840;
  unsigned long t1842 = __n1829;
  unsigned long c1843 = 4;
  unsigned long b1844 = t1842 * c1843;
  operator_delete_2(cast1841, b1844);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1845, int* v1846, unsigned long v1847) {
bb1848:
  struct std__allocator_int_* this1849;
  int* __p1850;
  unsigned long __n1851;
  this1849 = v1845;
  __p1850 = v1846;
  __n1851 = v1847;
  struct std__allocator_int_* t1852 = this1849;
    _Bool r1853 = std____is_constant_evaluated();
    if (r1853) {
      int* t1854 = __p1850;
      void* cast1855 = (void*)t1854;
      operator_delete(cast1855);
      return;
    }
  struct std____new_allocator_int_* base1856 = (struct std____new_allocator_int_*)((char *)t1852 + 0);
  int* t1857 = __p1850;
  unsigned long t1858 = __n1851;
  std____new_allocator_int___deallocate(base1856, t1857, t1858);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1859, int* v1860, unsigned long v1861) {
bb1862:
  struct std__allocator_int_* __a1863;
  int* __p1864;
  unsigned long __n1865;
  __a1863 = v1859;
  __p1864 = v1860;
  __n1865 = v1861;
  struct std__allocator_int_* t1866 = __a1863;
  int* t1867 = __p1864;
  unsigned long t1868 = __n1865;
  std__allocator_int___deallocate(t1866, t1867, t1868);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v1869, int* v1870, unsigned long v1871) {
bb1872:
  struct std___Vector_base_int__std__allocator_int__* this1873;
  int* __p1874;
  unsigned long __n1875;
  this1873 = v1869;
  __p1874 = v1870;
  __n1875 = v1871;
  struct std___Vector_base_int__std__allocator_int__* t1876 = this1873;
    int* t1877 = __p1874;
    _Bool cast1878 = (_Bool)t1877;
    if (cast1878) {
      struct std__allocator_int_* base1879 = (struct std__allocator_int_*)((char *)&(t1876->_M_impl) + 0);
      int* t1880 = __p1874;
      unsigned long t1881 = __n1875;
      std__allocator_traits_std__allocator_int_____deallocate(base1879, t1880, t1881);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1882) {
bb1883:
  struct std___Vector_base_int__std__allocator_int__* this1884;
  this1884 = v1882;
  struct std___Vector_base_int__std__allocator_int__* t1885 = this1884;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1886 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1885->_M_impl) + 0);
    int* t1887 = base1886->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1888 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1885->_M_impl) + 0);
    int* t1889 = base1888->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1890 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1885->_M_impl) + 0);
    int* t1891 = base1890->_M_start;
    long diff1892 = t1889 - t1891;
    unsigned long cast1893 = (unsigned long)diff1892;
    std___Vector_base_int__std__allocator_int______M_deallocate(t1885, t1887, cast1893);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t1885->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1894, struct std____new_allocator_int_* v1895) {
bb1896:
  struct std____new_allocator_int_* this1897;
  struct std____new_allocator_int_* unnamed1898;
  this1897 = v1894;
  unnamed1898 = v1895;
  struct std____new_allocator_int_* t1899 = this1897;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v1900) {
bb1901:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this1902;
  this1902 = v1900;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1903 = this1902;
  int* c1904 = ((void*)0);
  t1903->_M_start = c1904;
  int* c1905 = ((void*)0);
  t1903->_M_finish = c1905;
  int* c1906 = ((void*)0);
  t1903->_M_end_of_storage = c1906;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v1907) {
bb1908:
  int* __location1909;
  __location1909 = v1907;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1910, int* v1911) {
bb1912:
  int* __first1913;
  int* __last1914;
  __first1913 = v1910;
  __last1914 = v1911;
      _Bool r1915 = std____is_constant_evaluated();
      if (r1915) {
          while (1) {
            int* t1917 = __first1913;
            int* t1918 = __last1914;
            _Bool c1919 = ((t1917 != t1918)) ? 1 : 0;
            if (!c1919) break;
            int* t1920 = __first1913;
            void_std__destroy_at_int_(t1920);
          for_step1916: ;
            int* t1921 = __first1913;
            int c1922 = 1;
            int* ptr1923 = &(t1921)[c1922];
            __first1913 = ptr1923;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v1924, int* v1925, struct std__allocator_int_* v1926) {
bb1927:
  int* __first1928;
  int* __last1929;
  struct std__allocator_int_* unnamed1930;
  __first1928 = v1924;
  __last1929 = v1925;
  unnamed1930 = v1926;
  int* t1931 = __first1928;
  int* t1932 = __last1929;
  void_std___Destroy_int__(t1931, t1932);
  return;
}

