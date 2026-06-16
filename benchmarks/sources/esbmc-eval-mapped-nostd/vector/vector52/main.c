extern void abort(void);
// Struct definitions (auto-parsed)
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_ { unsigned char __field0; };
struct std__allocator_int_ { unsigned char __field0; };
struct std__forward_iterator_tag { unsigned char __field0; };
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

int __const_main_myints[3] = {1776, 7, 4};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[16] = "Size of first: ";
char _str_1[18] = "first.size() != 7";
char _str_2[103] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/vector/vector52/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[17] = "Size of second: ";
char _str_4[19] = "second.size() != 5";
char _str_5[16] = "Size of third: ";
char _str_6[18] = "third.size() != 3";
char _str_7[49] = "cannot create std::vector larger than max_size()";
char _str_8[98] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_uninitialized.h";
char __PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_[140] = "_ForwardIterator std::__do_uninit_fill_n(_ForwardIterator, _Size _Tp &) [_ForwardIterator = int *, _Size = unsigned long, _Tp = int]";
char _str_9[9] = "__n >= 0";
void std__vector_int__std__allocator_int_____vector_2(struct std__vector_int__std__allocator_int__* p0);
unsigned long std__vector_int__std__allocator_int_____capacity___const(struct std__vector_int__std__allocator_int__* p0);
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* p0);
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, int* p2, struct std__allocator_int_* p3);
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* p0);
void std___Vector_base_int__std__allocator_int______Vector_impl_data___M_copy_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* p0, struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* p1);
void std___Vector_base_int__std__allocator_int______Vector_impl_data___M_swap_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* p0, struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* p1);
void void_std____fill_a1_int___int_(int* p0, int* p1, int* p2);
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
void void_std____fill_a1_int___std__vector_int__std__allocator_int_____int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2);
void void_std____fill_a___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2);
void void_std__fill___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2);
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
void void_std___Destroy_int___int_(int* p0, int* p1, struct std__allocator_int_* p2);
void std__vector_int__std__allocator_int______M_erase_at_end(struct std__vector_int__std__allocator_int__* p0, int* p1);
void void_std____fill_a_int___int_(int* p0, int* p1, int* p2);
int* int__std____fill_n_a_int___unsigned_long__int_(int* p0, unsigned long p1, int* p2, struct std__random_access_iterator_tag p3);
unsigned long std____size_to_integer(unsigned long p0);
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** p0);
int* int__std__fill_n_int___unsigned_long__int_(int* p0, unsigned long p1, int* p2);
void std__vector_int__std__allocator_int______M_fill_assign(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, int* p2);
void std__vector_int__std__allocator_int_____assign(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, int* p2);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, long p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
long std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________difference_type_std____distance___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct std__random_access_iterator_tag p2);
long std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________difference_type_std__distance___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1);
void std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* p0, int* p1, unsigned long p2, struct std___Vector_base_int__std__allocator_int__* p3);
int* std__vector_int__std__allocator_int______Guard_alloc___M_release(struct std__vector_int__std__allocator_int_____Guard_alloc* p0);
void std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* p0);
int* int__std__vector_int__std__allocator_int______M_allocate_and_copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p3);
int* int__std____niter_wrap_int__(int** p0, int* p1);
long std__iterator_traits_int____difference_type_std____distance_int__(int* p0, int* p1, struct std__random_access_iterator_tag p2);
long std__iterator_traits_int____difference_type_std__distance_int__(int* p0, int* p1);
extern void* memmove(void* p0, void* p1, unsigned long p2);
void void_std____assign_one_false__int___int__(int** p0, int** p1);
int* int__std____copy_move_a2_false__int___int___int__(int* p0, int* p1, int* p2);
int* int__std____copy_move_a1_false__int___int__(int* p0, int* p1, int* p2);
int* int__std____niter_base_int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0);
int* int__std____niter_base_int__(int* p0);
int* int__std____copy_move_a_false____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0);
int* int__std__copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___3(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, long p1);
void void_std____advance___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, long p1, struct std__random_access_iterator_tag p2);
void void_std__advance___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______unsigned_long_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, unsigned long p1);
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* p0, int* p1);
void void_std___Construct_int__int__(int* p0, int* p1);
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
int* int__std____do_uninit_copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2);
extern void* memcpy(void* p0, void* p1, unsigned long p2);
int* int__std__uninitialized_copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2);
int* int__std____uninitialized_copy_a___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2, struct std__allocator_int_* p3);
void void_std__vector_int__std__allocator_int______M_assign_aux___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct std__vector_int__std__allocator_int__* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2, struct std__forward_iterator_tag p3);
struct std__random_access_iterator_tag std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________iterator_category_std____iterator_category___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
void void_std__vector_int__std__allocator_int_____assign___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______void_(struct std__vector_int__std__allocator_int__* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, long p1);
int* int__std__vector_int__std__allocator_int______M_allocate_and_copy_int__(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, int* p2, int* p3);
int* int__std____copy_move_a_false__int___int__(int* p0, int* p1, int* p2);
int* int__std____miter_base_int__(int* p0);
int* int__std__copy_int___int__(int* p0, int* p1, int* p2);
void void_std____advance_int___long_(int** p0, long p1, struct std__random_access_iterator_tag p2);
void void_std__advance_int___unsigned_long_(int** p0, unsigned long p1);
int* int__std____do_uninit_copy_int___int___int__(int* p0, int* p1, int* p2);
int* int__std__uninitialized_copy_int___int__(int* p0, int* p1, int* p2);
int* int__std____uninitialized_copy_a_int___int___int___int_(int* p0, int* p1, int* p2, struct std__allocator_int_* p3);
void void_std__vector_int__std__allocator_int______M_assign_aux_int__(struct std__vector_int__std__allocator_int__* p0, int* p1, int* p2, struct std__forward_iterator_tag p3);
void void_std__vector_int__std__allocator_int_____assign_int___void_(struct std__vector_int__std__allocator_int__* p0, int* p1, int* p2);
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
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* p0);
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
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* p0);
int main();
void _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_int__std__allocator_int_____Vector_impl* p0);
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* p0);
void std___Vector_base_int__std__allocator_int______Vector_base_2(struct std___Vector_base_int__std__allocator_int__* p0);
_Bool std____is_constant_evaluated();
extern void *malloc(unsigned long);
extern void free(void*);
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* p0, int* p1, unsigned long p2);
void std__allocator_int___deallocate(struct std__allocator_int_* p0, int* p1, unsigned long p2);
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* p0, int* p1, unsigned long p2);
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* p0, int* p1, unsigned long p2);
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* p0);
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* p0);
void std__allocator_int___allocator_2(struct std__allocator_int_* p0);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* p0);
void std__allocator_int___allocator(struct std__allocator_int_* p0, struct std__allocator_int_* p1);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
extern void std____throw_length_error(char* p0);
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long p0, struct std__allocator_int_* p1);
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* p0, struct std__allocator_int_* p1);
extern void std____throw_bad_array_new_length();
void* operator_new(unsigned long p0) { return malloc(p0); }
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* p0);
extern void std____throw_bad_alloc();
void* operator_new_2(unsigned long p0, unsigned long p1) { return malloc(p0); }
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* p0, unsigned long p1, void* p2);
int* std__allocator_int___allocate(struct std__allocator_int_* p0, unsigned long p1);
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* p0, unsigned long p1);
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* p0, unsigned long p1);
void std___Vector_base_int__std__allocator_int______M_create_storage(struct std___Vector_base_int__std__allocator_int__* p0, unsigned long p1);
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* p0, unsigned long p1, struct std__allocator_int_* p2);
void std__vector_int__std__allocator_int______M_fill_initialize(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, int* p2);
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* p0, struct std____new_allocator_int_* p1);
void void_std__destroy_at_int_(int* p0);
void void_std___Destroy_int__(int* p0, int* p1);

// function: _ZNSt6vectorIiSaIiEEC2Ev
void std__vector_int__std__allocator_int_____vector_2(struct std__vector_int__std__allocator_int__* v0) {
bb1: ;
  struct std__vector_int__std__allocator_int__* this2;
  this2 = v0;
  struct std__vector_int__std__allocator_int__* t3 = this2;
  struct std___Vector_base_int__std__allocator_int__* base4 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t3 + 0);
  std___Vector_base_int__std__allocator_int______Vector_base_2(base4);
  return;
}

// function: _ZNKSt6vectorIiSaIiEE8capacityEv
unsigned long std__vector_int__std__allocator_int_____capacity___const(struct std__vector_int__std__allocator_int__* v5) {
bb6: ;
  struct std__vector_int__std__allocator_int__* this7;
  unsigned long __retval8;
  long __dif9;
  this7 = v5;
  struct std__vector_int__std__allocator_int__* t10 = this7;
  struct std___Vector_base_int__std__allocator_int__* base11 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t10 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base12 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base11->_M_impl) + 0);
  int* t13 = base12->_M_end_of_storage;
  struct std___Vector_base_int__std__allocator_int__* base14 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t10 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base15 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base14->_M_impl) + 0);
  int* t16 = base15->_M_start;
  long diff17 = t13 - t16;
  __dif9 = diff17;
    long t18 = __dif9;
    long c19 = 0;
    _Bool c20 = ((t18 < c19)) ? 1 : 0;
    if (c20) {
      __builtin_unreachable();
    }
  long t21 = __dif9;
  unsigned long cast22 = (unsigned long)t21;
  __retval8 = cast22;
  unsigned long t23 = __retval8;
  return t23;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v24) {
bb25: ;
  struct std___Vector_base_int__std__allocator_int__* this26;
  struct std__allocator_int_* __retval27;
  this26 = v24;
  struct std___Vector_base_int__std__allocator_int__* t28 = this26;
  struct std__allocator_int_* base29 = (struct std__allocator_int_*)((char *)&(t28->_M_impl) + 0);
  __retval27 = base29;
  struct std__allocator_int_* t30 = __retval27;
  return t30;
}

// function: _ZNSt6vectorIiSaIiEEC2EmRKiRKS0_
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* v31, unsigned long v32, int* v33, struct std__allocator_int_* v34) {
bb35: ;
  struct std__vector_int__std__allocator_int__* this36;
  unsigned long __n37;
  int* __value38;
  struct std__allocator_int_* __a39;
  this36 = v31;
  __n37 = v32;
  __value38 = v33;
  __a39 = v34;
  struct std__vector_int__std__allocator_int__* t40 = this36;
  struct std___Vector_base_int__std__allocator_int__* base41 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t40 + 0);
  unsigned long t42 = __n37;
  struct std__allocator_int_* t43 = __a39;
  unsigned long r44 = std__vector_int__std__allocator_int______S_check_init_len(t42, t43);
  struct std__allocator_int_* t45 = __a39;
  std___Vector_base_int__std__allocator_int______Vector_base(base41, r44, t45);
    unsigned long t46 = __n37;
    int* t47 = __value38;
    std__vector_int__std__allocator_int______M_fill_initialize(t40, t46, t47);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v48) {
bb49: ;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this50;
  this50 = v48;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t51 = this50;
  int* c52 = ((void*)0);
  t51->_M_start = c52;
  int* c53 = ((void*)0);
  t51->_M_finish = c53;
  int* c54 = ((void*)0);
  t51->_M_end_of_storage = c54;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_data12_M_copy_dataERKS2_
void std___Vector_base_int__std__allocator_int______Vector_impl_data___M_copy_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v55, struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v56) {
bb57: ;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this58;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* __x59;
  this58 = v55;
  __x59 = v56;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t60 = this58;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t61 = __x59;
  int* t62 = t61->_M_start;
  t60->_M_start = t62;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t63 = __x59;
  int* t64 = t63->_M_finish;
  t60->_M_finish = t64;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t65 = __x59;
  int* t66 = t65->_M_end_of_storage;
  t60->_M_end_of_storage = t66;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_data12_M_swap_dataERS2_
void std___Vector_base_int__std__allocator_int______Vector_impl_data___M_swap_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v67, struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v68) {
bb69: ;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this70;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* __x71;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __tmp72;
  this70 = v67;
  __x71 = v68;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t73 = this70;
  std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(&__tmp72);
  std___Vector_base_int__std__allocator_int______Vector_impl_data___M_copy_data(&__tmp72, t73);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t74 = __x71;
  std___Vector_base_int__std__allocator_int______Vector_impl_data___M_copy_data(t73, t74);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t75 = __x71;
  std___Vector_base_int__std__allocator_int______Vector_impl_data___M_copy_data(t75, &__tmp72);
  return;
}

// function: _ZSt9__fill_a1IPiiEvT_S1_RKT0_
void void_std____fill_a1_int___int_(int* v76, int* v77, int* v78) {
bb79: ;
  int* __first80;
  int* __last81;
  int* __value82;
  _Bool __load_outside_loop83;
  int __val84;
  __first80 = v76;
  __last81 = v77;
  __value82 = v78;
  _Bool c85 = 1;
  __load_outside_loop83 = c85;
  int* t86 = __value82;
  int t87 = *t86;
  __val84 = t87;
    while (1) {
      int* t89 = __first80;
      int* t90 = __last81;
      _Bool c91 = ((t89 != t90)) ? 1 : 0;
      if (!c91) break;
      int t92 = __val84;
      int* t93 = __first80;
      *t93 = t92;
    for_step88: ;
      int* t94 = __first80;
      int c95 = 1;
      int* ptr96 = &(t94)[c95];
      __first80 = ptr96;
    }
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v97) {
bb98: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this99;
  int** __retval100;
  this99 = v97;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t101 = this99;
  __retval100 = &t101->_M_current;
  int** t102 = __retval100;
  return t102;
}

// function: _ZSt9__fill_a1IPiSt6vectorIiSaIiEEiEvN9__gnu_cxx17__normal_iteratorIT_T0_EES8_RKT1_
void void_std____fill_a1_int___std__vector_int__std__allocator_int_____int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v103, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v104, int* v105) {
bb106: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first107;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last108;
  int* __value109;
  __first107 = v103;
  __last108 = v104;
  __value109 = v105;
  int** r110 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__first107);
  int* t111 = *r110;
  int** r112 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__last108);
  int* t113 = *r112;
  int* t114 = __value109;
  void_std____fill_a1_int___int_(t111, t113, t114);
  return;
}

// function: _ZSt8__fill_aIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEiEvT_S7_RKT0_
void void_std____fill_a___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v115, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v116, int* v117) {
bb118: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first119;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last120;
  int* __value121;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0122;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1123;
  __first119 = v115;
  __last120 = v116;
  __value121 = v117;
  agg_tmp0122 = __first119; // copy
  agg_tmp1123 = __last120; // copy
  int* t124 = __value121;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t125 = agg_tmp0122;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t126 = agg_tmp1123;
  void_std____fill_a1_int___std__vector_int__std__allocator_int_____int_(t125, t126, t124);
  return;
}

// function: _ZSt4fillIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEiEvT_S7_RKT0_
void void_std__fill___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v127, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v128, int* v129) {
bb130: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first131;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last132;
  int* __value133;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0134;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1135;
  __first131 = v127;
  __last132 = v128;
  __value133 = v129;
  agg_tmp0134 = __first131; // copy
  agg_tmp1135 = __last132; // copy
  int* t136 = __value133;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t137 = agg_tmp0134;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t138 = agg_tmp1135;
  void_std____fill_a___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(t137, t138, t136);
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb139: ;
  _Bool __retval140;
    _Bool c141 = 0;
    __retval140 = c141;
    _Bool t142 = __retval140;
    return t142;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v143, int** v144) {
bb145: ;
  struct std___UninitDestroyGuard_int____void_* this146;
  int** __first147;
  this146 = v143;
  __first147 = v144;
  struct std___UninitDestroyGuard_int____void_* t148 = this146;
  int** t149 = __first147;
  int* t150 = *t149;
  t148->_M_first = t150;
  int** t151 = __first147;
  t148->_M_cur = t151;
  return;
}

// function: _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* v152, int* v153) {
bb154: ;
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

// function: _ZSt10_ConstructIiJRKiEEvPT_DpOT0_
void void_std___Construct_int__int_const__(int* v166, int* v167) {
bb168: ;
  int* __p169;
  int* __args170;
  __p169 = v166;
  __args170 = v167;
    _Bool r171 = std____is_constant_evaluated();
    if (r171) {
      int* t172 = __p169;
      int* t173 = __args170;
      int* r174 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t172, t173);
      return;
    }
  int* t175 = __p169;
  void* cast176 = (void*)t175;
  int* cast177 = (int*)cast176;
  int* t178 = __args170;
  int t179 = *t178;
  *cast177 = t179;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v180) {
bb181: ;
  struct std___UninitDestroyGuard_int____void_* this182;
  this182 = v180;
  struct std___UninitDestroyGuard_int____void_* t183 = this182;
  int** c184 = ((void*)0);
  t183->_M_cur = c184;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v185) {
bb186: ;
  struct std___UninitDestroyGuard_int____void_* this187;
  this187 = v185;
  struct std___UninitDestroyGuard_int____void_* t188 = this187;
    int** t189 = t188->_M_cur;
    int** c190 = ((void*)0);
    _Bool c191 = ((t189 != c190)) ? 1 : 0;
    if (c191) {
      int* t192 = t188->_M_first;
      int** t193 = t188->_M_cur;
      int* t194 = *t193;
      void_std___Destroy_int__(t192, t194);
    }
  return;
}

// function: _ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_
int* int__std____do_uninit_fill_n_int___unsigned_long__int_(int* v195, unsigned long v196, int* v197) {
bb198: ;
  int* __first199;
  unsigned long __n200;
  int* __x201;
  int* __retval202;
  struct std___UninitDestroyGuard_int____void_ __guard203;
  __first199 = v195;
  __n200 = v196;
  __x201 = v197;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard203, &__first199);
        do {
              unsigned long t204 = __n200;
              unsigned long c205 = 0;
              _Bool c206 = ((t204 >= c205)) ? 1 : 0;
              _Bool u207 = !c206;
              if (u207) {
                char* cast208 = (char*)&(_str_8);
                int c209 = 463;
                char* cast210 = (char*)&(__PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_);
                char* cast211 = (char*)&(_str_9);
                std____glibcxx_assert_fail(cast208, c209, cast210, cast211);
              }
          _Bool c212 = 0;
          if (!c212) break;
        } while (1);
      while (1) {
        unsigned long t214 = __n200;
        unsigned long u215 = t214 - 1;
        __n200 = u215;
        _Bool cast216 = (_Bool)t214;
        if (!cast216) break;
        int* t217 = __first199;
        int* t218 = __x201;
        void_std___Construct_int__int_const__(t217, t218);
      for_step213: ;
        int* t219 = __first199;
        int c220 = 1;
        int* ptr221 = &(t219)[c220];
        __first199 = ptr221;
      }
    std___UninitDestroyGuard_int___void___release(&__guard203);
    int* t222 = __first199;
    __retval202 = t222;
    int* t223 = __retval202;
    int* ret_val224 = t223;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard203);
    }
    return ret_val224;
  abort();
}

// function: _ZSt20uninitialized_fill_nIPimiET_S1_T0_RKT1_
int* int__std__uninitialized_fill_n_int___unsigned_long__int_(int* v225, unsigned long v226, int* v227) {
bb228: ;
  int* __first229;
  unsigned long __n230;
  int* __x231;
  int* __retval232;
  __first229 = v225;
  __n230 = v226;
  __x231 = v227;
  int* t233 = __first229;
  unsigned long t234 = __n230;
  int* t235 = __x231;
  int* r236 = int__std____do_uninit_fill_n_int___unsigned_long__int_(t233, t234, t235);
  __retval232 = r236;
  int* t237 = __retval232;
  return t237;
}

// function: _ZSt24__uninitialized_fill_n_aIPimiiET_S1_T0_RKT1_RSaIT2_E
int* int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(int* v238, unsigned long v239, int* v240, struct std__allocator_int_* v241) {
bb242: ;
  int* __first243;
  unsigned long __n244;
  int* __x245;
  struct std__allocator_int_* unnamed246;
  int* __retval247;
  __first243 = v238;
  __n244 = v239;
  __x245 = v240;
  unnamed246 = v241;
    _Bool r248 = std__is_constant_evaluated();
    if (r248) {
      int* t249 = __first243;
      unsigned long t250 = __n244;
      int* t251 = __x245;
      int* r252 = int__std____do_uninit_fill_n_int___unsigned_long__int_(t249, t250, t251);
      __retval247 = r252;
      int* t253 = __retval247;
      return t253;
    }
  int* t254 = __first243;
  unsigned long t255 = __n244;
  int* t256 = __x245;
  int* r257 = int__std__uninitialized_fill_n_int___unsigned_long__int_(t254, t255, t256);
  __retval247 = r257;
  int* t258 = __retval247;
  return t258;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v259, int* v260, struct std__allocator_int_* v261) {
bb262: ;
  int* __first263;
  int* __last264;
  struct std__allocator_int_* unnamed265;
  __first263 = v259;
  __last264 = v260;
  unnamed265 = v261;
  int* t266 = __first263;
  int* t267 = __last264;
  void_std___Destroy_int__(t266, t267);
  return;
}

// function: _ZNSt6vectorIiSaIiEE15_M_erase_at_endEPi
void std__vector_int__std__allocator_int______M_erase_at_end(struct std__vector_int__std__allocator_int__* v268, int* v269) {
bb270: ;
  struct std__vector_int__std__allocator_int__* this271;
  int* __pos272;
  this271 = v268;
  __pos272 = v269;
  struct std__vector_int__std__allocator_int__* t273 = this271;
    unsigned long __n274;
    struct std___Vector_base_int__std__allocator_int__* base275 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t273 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base276 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base275->_M_impl) + 0);
    int* t277 = base276->_M_finish;
    int* t278 = __pos272;
    long diff279 = t277 - t278;
    unsigned long cast280 = (unsigned long)diff279;
    __n274 = cast280;
    unsigned long t281 = __n274;
    _Bool cast282 = (_Bool)t281;
    if (cast282) {
      int* t283 = __pos272;
      struct std___Vector_base_int__std__allocator_int__* base284 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t273 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base285 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base284->_M_impl) + 0);
      int* t286 = base285->_M_finish;
      struct std___Vector_base_int__std__allocator_int__* base287 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t273 + 0);
      struct std__allocator_int_* r288 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base287);
      void_std___Destroy_int___int_(t283, t286, r288);
      int* t289 = __pos272;
      struct std___Vector_base_int__std__allocator_int__* base290 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t273 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base291 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base290->_M_impl) + 0);
      base291->_M_finish = t289;
    }
  return;
}

// function: _ZSt8__fill_aIPiiEvT_S1_RKT0_
void void_std____fill_a_int___int_(int* v292, int* v293, int* v294) {
bb295: ;
  int* __first296;
  int* __last297;
  int* __value298;
  __first296 = v292;
  __last297 = v293;
  __value298 = v294;
  int* t299 = __first296;
  int* t300 = __last297;
  int* t301 = __value298;
  void_std____fill_a1_int___int_(t299, t300, t301);
  return;
}

// function: _ZSt10__fill_n_aIPimiET_S1_T0_RKT1_St26random_access_iterator_tag
int* int__std____fill_n_a_int___unsigned_long__int_(int* v302, unsigned long v303, int* v304, struct std__random_access_iterator_tag v305) {
bb306: ;
  int* __first307;
  unsigned long __n308;
  int* __value309;
  struct std__random_access_iterator_tag unnamed310;
  int* __retval311;
  __first307 = v302;
  __n308 = v303;
  __value309 = v304;
  unnamed310 = v305;
    unsigned long t312 = __n308;
    unsigned long c313 = 0;
    _Bool c314 = ((t312 <= c313)) ? 1 : 0;
    if (c314) {
      int* t315 = __first307;
      __retval311 = t315;
      int* t316 = __retval311;
      return t316;
    }
  int* t317 = __first307;
  int* t318 = __first307;
  unsigned long t319 = __n308;
  int* ptr320 = &(t318)[t319];
  int* t321 = __value309;
  void_std____fill_a_int___int_(t317, ptr320, t321);
  int* t322 = __first307;
  unsigned long t323 = __n308;
  int* ptr324 = &(t322)[t323];
  __retval311 = ptr324;
  int* t325 = __retval311;
  return t325;
}

// function: _ZSt17__size_to_integerm
unsigned long std____size_to_integer(unsigned long v326) {
bb327: ;
  unsigned long __n328;
  unsigned long __retval329;
  __n328 = v326;
  unsigned long t330 = __n328;
  __retval329 = t330;
  unsigned long t331 = __retval329;
  return t331;
}

// function: _ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** v332) {
bb333: ;
  int** unnamed334;
  struct std__random_access_iterator_tag __retval335;
  unnamed334 = v332;
  struct std__random_access_iterator_tag t336 = __retval335;
  return t336;
}

// function: _ZSt6fill_nIPimiET_S1_T0_RKT1_
int* int__std__fill_n_int___unsigned_long__int_(int* v337, unsigned long v338, int* v339) {
bb340: ;
  int* __first341;
  unsigned long __n342;
  int* __value343;
  int* __retval344;
  struct std__random_access_iterator_tag agg_tmp0345;
  __first341 = v337;
  __n342 = v338;
  __value343 = v339;
  int* t346 = __first341;
  unsigned long t347 = __n342;
  unsigned long r348 = std____size_to_integer(t347);
  int* t349 = __value343;
  struct std__random_access_iterator_tag r350 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first341);
  agg_tmp0345 = r350;
  struct std__random_access_iterator_tag t351 = agg_tmp0345;
  int* r352 = int__std____fill_n_a_int___unsigned_long__int_(t346, r348, t349, t351);
  __retval344 = r352;
  int* t353 = __retval344;
  return t353;
}

// function: _ZNSt6vectorIiSaIiEE14_M_fill_assignEmRKi
void std__vector_int__std__allocator_int______M_fill_assign(struct std__vector_int__std__allocator_int__* v354, unsigned long v355, int* v356) {
bb357: ;
  struct std__vector_int__std__allocator_int__* this358;
  unsigned long __n359;
  int* __val360;
  unsigned long __sz361;
  this358 = v354;
  __n359 = v355;
  __val360 = v356;
  struct std__vector_int__std__allocator_int__* t362 = this358;
  unsigned long r363 = std__vector_int__std__allocator_int_____size___const(t362);
  __sz361 = r363;
    unsigned long t364 = __n359;
    unsigned long r365 = std__vector_int__std__allocator_int_____capacity___const(t362);
    _Bool c366 = ((t364 > r365)) ? 1 : 0;
    if (c366) {
      struct std__vector_int__std__allocator_int__ __tmp367;
        unsigned long t368 = __n359;
        unsigned long t369 = __sz361;
        _Bool c370 = ((t368 <= t369)) ? 1 : 0;
        if (c370) {
          __builtin_unreachable();
        }
      unsigned long t371 = __n359;
      int* t372 = __val360;
      struct std___Vector_base_int__std__allocator_int__* base373 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t362 + 0);
      struct std__allocator_int_* r374 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base373);
      std__vector_int__std__allocator_int_____vector(&__tmp367, t371, t372, r374);
        struct std___Vector_base_int__std__allocator_int__* base375 = (struct std___Vector_base_int__std__allocator_int__*)((char *)&(__tmp367) + 0);
        struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base376 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base375->_M_impl) + 0);
        struct std___Vector_base_int__std__allocator_int__* base377 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t362 + 0);
        struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base378 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base377->_M_impl) + 0);
        std___Vector_base_int__std__allocator_int______Vector_impl_data___M_swap_data(base376, base378);
      {
        std__vector_int__std__allocator_int______vector(&__tmp367);
      }
    } else {
        unsigned long t379 = __n359;
        unsigned long t380 = __sz361;
        _Bool c381 = ((t379 > t380)) ? 1 : 0;
        if (c381) {
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0382;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1383;
          unsigned long __add384;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r385 = std__vector_int__std__allocator_int_____begin(t362);
          agg_tmp0382 = r385;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r386 = std__vector_int__std__allocator_int_____end(t362);
          agg_tmp1383 = r386;
          int* t387 = __val360;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t388 = agg_tmp0382;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t389 = agg_tmp1383;
          void_std__fill___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(t388, t389, t387);
          unsigned long t390 = __n359;
          unsigned long t391 = __sz361;
          unsigned long b392 = t390 - t391;
          __add384 = b392;
          struct std___Vector_base_int__std__allocator_int__* base393 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t362 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base394 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base393->_M_impl) + 0);
          int* t395 = base394->_M_finish;
          unsigned long t396 = __add384;
          int* t397 = __val360;
          struct std___Vector_base_int__std__allocator_int__* base398 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t362 + 0);
          struct std__allocator_int_* r399 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base398);
          int* r400 = int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(t395, t396, t397, r399);
          struct std___Vector_base_int__std__allocator_int__* base401 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t362 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base402 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base401->_M_impl) + 0);
          base402->_M_finish = r400;
        } else {
          struct std___Vector_base_int__std__allocator_int__* base403 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t362 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base404 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base403->_M_impl) + 0);
          int* t405 = base404->_M_start;
          unsigned long t406 = __n359;
          int* t407 = __val360;
          int* r408 = int__std__fill_n_int___unsigned_long__int_(t405, t406, t407);
          std__vector_int__std__allocator_int______M_erase_at_end(t362, r408);
        }
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE6assignEmRKi
void std__vector_int__std__allocator_int_____assign(struct std__vector_int__std__allocator_int__* v409, unsigned long v410, int* v411) {
bb412: ;
  struct std__vector_int__std__allocator_int__* this413;
  unsigned long __n414;
  int* __val415;
  this413 = v409;
  __n414 = v410;
  __val415 = v411;
  struct std__vector_int__std__allocator_int__* t416 = this413;
  unsigned long t417 = __n414;
  int* t418 = __val415;
  std__vector_int__std__allocator_int______M_fill_assign(t416, t417, t418);
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2Ev
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v419) {
bb420: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this421;
  this421 = v419;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t422 = this421;
  int* c423 = ((void*)0);
  t422->_M_current = c423;
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v424, int** v425) {
bb426: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this427;
  int** __i428;
  this427 = v424;
  __i428 = v425;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t429 = this427;
  int** t430 = __i428;
  int* t431 = *t430;
  t429->_M_current = t431;
  return;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v432) {
bb433: ;
  struct std__vector_int__std__allocator_int__* this434;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval435;
  this434 = v432;
  struct std__vector_int__std__allocator_int__* t436 = this434;
  struct std___Vector_base_int__std__allocator_int__* base437 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t436 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base438 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base437->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval435, &base438->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t439 = __retval435;
  return t439;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEplEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v440, long v441) {
bb442: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this443;
  long __n444;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval445;
  int* ref_tmp0446;
  this443 = v440;
  __n444 = v441;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t447 = this443;
  int* t448 = t447->_M_current;
  long t449 = __n444;
  int* ptr450 = &(t448)[t449];
  ref_tmp0446 = ptr450;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval445, &ref_tmp0446);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t451 = __retval445;
  return t451;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEaSEOS5_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v452, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v453) {
bb454: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this455;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed456;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval457;
  this455 = v452;
  unnamed456 = v453;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t458 = this455;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t459 = unnamed456;
  int* t460 = t459->_M_current;
  t458->_M_current = t460;
  __retval457 = t458;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t461 = __retval457;
  return t461;
}

// function: _ZN9__gnu_cxxmiIPiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v462, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v463) {
bb464: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs465;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs466;
  long __retval467;
  __lhs465 = v462;
  __rhs466 = v463;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t468 = __lhs465;
  int** r469 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t468);
  int* t470 = *r469;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t471 = __rhs466;
  int** r472 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t471);
  int* t473 = *r472;
  long diff474 = t470 - t473;
  __retval467 = diff474;
  long t475 = __retval467;
  return t475;
}

// function: _ZSt10__distanceIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEENSt15iterator_traitsIT_E15difference_typeES8_S8_St26random_access_iterator_tag
long std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________difference_type_std____distance___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v476, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v477, struct std__random_access_iterator_tag v478) {
bb479: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first480;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last481;
  struct std__random_access_iterator_tag unnamed482;
  long __retval483;
  __first480 = v476;
  __last481 = v477;
  unnamed482 = v478;
  long r484 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__last481, &__first480);
  __retval483 = r484;
  long t485 = __retval483;
  return t485;
}

// function: _ZSt8distanceIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEENSt15iterator_traitsIT_E15difference_typeES8_S8_
long std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________difference_type_std__distance___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v486, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v487) {
bb488: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first489;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last490;
  long __retval491;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0492;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1493;
  struct std__random_access_iterator_tag agg_tmp2494;
  __first489 = v486;
  __last490 = v487;
  agg_tmp0492 = __first489; // copy
  agg_tmp1493 = __last490; // copy
  struct std__random_access_iterator_tag r495 = std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________iterator_category_std____iterator_category___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(&__first489);
  agg_tmp2494 = r495;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t496 = agg_tmp0492;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t497 = agg_tmp1493;
  struct std__random_access_iterator_tag t498 = agg_tmp2494;
  long r499 = std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________difference_type_std____distance___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t496, t497, t498);
  __retval491 = r499;
  long t500 = __retval491;
  return t500;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocC2EPimRSt12_Vector_baseIiS0_E
void std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v501, int* v502, unsigned long v503, struct std___Vector_base_int__std__allocator_int__* v504) {
bb505: ;
  struct std__vector_int__std__allocator_int_____Guard_alloc* this506;
  int* __s507;
  unsigned long __l508;
  struct std___Vector_base_int__std__allocator_int__* __vect509;
  this506 = v501;
  __s507 = v502;
  __l508 = v503;
  __vect509 = v504;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t510 = this506;
  int* t511 = __s507;
  t510->_M_storage = t511;
  unsigned long t512 = __l508;
  t510->_M_len = t512;
  struct std___Vector_base_int__std__allocator_int__* t513 = __vect509;
  t510->_M_vect = t513;
  return;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_alloc10_M_releaseEv
int* std__vector_int__std__allocator_int______Guard_alloc___M_release(struct std__vector_int__std__allocator_int_____Guard_alloc* v514) {
bb515: ;
  struct std__vector_int__std__allocator_int_____Guard_alloc* this516;
  int* __retval517;
  int* __res518;
  this516 = v514;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t519 = this516;
  int* t520 = t519->_M_storage;
  __res518 = t520;
  int* c521 = ((void*)0);
  t519->_M_storage = c521;
  int* t522 = __res518;
  __retval517 = t522;
  int* t523 = __retval517;
  return t523;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocD2Ev
void std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v524) {
bb525: ;
  struct std__vector_int__std__allocator_int_____Guard_alloc* this526;
  this526 = v524;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t527 = this526;
    int* t528 = t527->_M_storage;
    _Bool cast529 = (_Bool)t528;
    if (cast529) {
      struct std___Vector_base_int__std__allocator_int__* t530 = t527->_M_vect;
      int* t531 = t527->_M_storage;
      unsigned long t532 = t527->_M_len;
      std___Vector_base_int__std__allocator_int______M_deallocate(t530, t531, t532);
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE20_M_allocate_and_copyIN9__gnu_cxx17__normal_iteratorIPiS1_EEEES5_mT_S7_
int* int__std__vector_int__std__allocator_int______M_allocate_and_copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct std__vector_int__std__allocator_int__* v533, unsigned long v534, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v535, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v536) {
bb537: ;
  struct std__vector_int__std__allocator_int__* this538;
  unsigned long __n539;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first540;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last541;
  int* __retval542;
  struct std__vector_int__std__allocator_int_____Guard_alloc __guard543;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0544;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1545;
  this538 = v533;
  __n539 = v534;
  __first540 = v535;
  __last541 = v536;
  struct std__vector_int__std__allocator_int__* t546 = this538;
  struct std___Vector_base_int__std__allocator_int__* base547 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t546 + 0);
  unsigned long t548 = __n539;
  int* r549 = std___Vector_base_int__std__allocator_int______M_allocate(base547, t548);
  unsigned long t550 = __n539;
  struct std___Vector_base_int__std__allocator_int__* base551 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t546 + 0);
  std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(&__guard543, r549, t550, base551);
    agg_tmp0544 = __first540; // copy
    agg_tmp1545 = __last541; // copy
    int* t552 = __guard543._M_storage;
    struct std___Vector_base_int__std__allocator_int__* base553 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t546 + 0);
    struct std__allocator_int_* r554 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base553);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t555 = agg_tmp0544;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t556 = agg_tmp1545;
    int* r557 = int__std____uninitialized_copy_a___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___int_(t555, t556, t552, r554);
    int* r558 = std__vector_int__std__allocator_int______Guard_alloc___M_release(&__guard543);
    __retval542 = r558;
    int* t559 = __retval542;
    int* ret_val560 = t559;
    {
      std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(&__guard543);
    }
    return ret_val560;
  abort();
}

// function: _ZSt12__niter_wrapIPiET_RKS1_S1_
int* int__std____niter_wrap_int__(int** v561, int* v562) {
bb563: ;
  int** unnamed564;
  int* __res565;
  int* __retval566;
  unnamed564 = v561;
  __res565 = v562;
  int* t567 = __res565;
  __retval566 = t567;
  int* t568 = __retval566;
  return t568;
}

// function: _ZSt10__distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_St26random_access_iterator_tag
long std__iterator_traits_int____difference_type_std____distance_int__(int* v569, int* v570, struct std__random_access_iterator_tag v571) {
bb572: ;
  int* __first573;
  int* __last574;
  struct std__random_access_iterator_tag unnamed575;
  long __retval576;
  __first573 = v569;
  __last574 = v570;
  unnamed575 = v571;
  int* t577 = __last574;
  int* t578 = __first573;
  long diff579 = t577 - t578;
  __retval576 = diff579;
  long t580 = __retval576;
  return t580;
}

// function: _ZSt8distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_
long std__iterator_traits_int____difference_type_std__distance_int__(int* v581, int* v582) {
bb583: ;
  int* __first584;
  int* __last585;
  long __retval586;
  struct std__random_access_iterator_tag agg_tmp0587;
  __first584 = v581;
  __last585 = v582;
  int* t588 = __first584;
  int* t589 = __last585;
  struct std__random_access_iterator_tag r590 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first584);
  agg_tmp0587 = r590;
  struct std__random_access_iterator_tag t591 = agg_tmp0587;
  long r592 = std__iterator_traits_int____difference_type_std____distance_int__(t588, t589, t591);
  __retval586 = r592;
  long t593 = __retval586;
  return t593;
}

// function: _ZSt12__assign_oneILb0EPiS0_EvRT0_RT1_
void void_std____assign_one_false__int___int__(int** v594, int** v595) {
bb596: ;
  int** __out597;
  int** __in598;
  __out597 = v594;
  __in598 = v595;
    int** t599 = __in598;
    int* t600 = *t599;
    int t601 = *t600;
    int** t602 = __out597;
    int* t603 = *t602;
    *t603 = t601;
  return;
}

// function: _ZSt14__copy_move_a2ILb0EPiS0_S0_ET2_T0_T1_S1_
int* int__std____copy_move_a2_false__int___int___int__(int* v604, int* v605, int* v606) {
bb607: ;
  int* __first608;
  int* __last609;
  int* __result610;
  int* __retval611;
  __first608 = v604;
  __last609 = v605;
  __result610 = v606;
      _Bool r612 = std____is_constant_evaluated();
      if (r612) {
      } else {
          long __n613;
          int* t614 = __first608;
          int* t615 = __last609;
          long r616 = std__iterator_traits_int____difference_type_std__distance_int__(t614, t615);
          __n613 = r616;
            long t617 = __n613;
            long c618 = 1;
            _Bool c619 = ((t617 > c618)) ? 1 : 0;
            if (c619) {
              int* t620 = __result610;
              void* cast621 = (void*)t620;
              int* t622 = __first608;
              void* cast623 = (void*)t622;
              long t624 = __n613;
              unsigned long cast625 = (unsigned long)t624;
              unsigned long c626 = 4;
              unsigned long b627 = cast625 * c626;
              void* r628 = memmove(cast621, cast623, b627);
              long t629 = __n613;
              int* t630 = __result610;
              int* ptr631 = &(t630)[t629];
              __result610 = ptr631;
            } else {
                long t632 = __n613;
                long c633 = 1;
                _Bool c634 = ((t632 == c633)) ? 1 : 0;
                if (c634) {
                  void_std____assign_one_false__int___int__(&__result610, &__first608);
                  int* t635 = __result610;
                  int c636 = 1;
                  int* ptr637 = &(t635)[c636];
                  __result610 = ptr637;
                }
            }
          int* t638 = __result610;
          __retval611 = t638;
          int* t639 = __retval611;
          return t639;
      }
    while (1) {
      int* t641 = __first608;
      int* t642 = __last609;
      _Bool c643 = ((t641 != t642)) ? 1 : 0;
      if (!c643) break;
      void_std____assign_one_false__int___int__(&__result610, &__first608);
    for_step640: ;
      int* t644 = __result610;
      int c645 = 1;
      int* ptr646 = &(t644)[c645];
      __result610 = ptr646;
      int* t647 = __first608;
      int c648 = 1;
      int* ptr649 = &(t647)[c648];
      __first608 = ptr649;
    }
  int* t650 = __result610;
  __retval611 = t650;
  int* t651 = __retval611;
  return t651;
}

// function: _ZSt14__copy_move_a1ILb0EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_a1_false__int___int__(int* v652, int* v653, int* v654) {
bb655: ;
  int* __first656;
  int* __last657;
  int* __result658;
  int* __retval659;
  __first656 = v652;
  __last657 = v653;
  __result658 = v654;
  int* t660 = __first656;
  int* t661 = __last657;
  int* t662 = __result658;
  int* r663 = int__std____copy_move_a2_false__int___int___int__(t660, t661, t662);
  __retval659 = r663;
  int* t664 = __retval659;
  return t664;
}

// function: _ZSt12__niter_baseIPiSt6vectorIiSaIiEEET_N9__gnu_cxx17__normal_iteratorIS4_T0_EE
int* int__std____niter_base_int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v665) {
bb666: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it667;
  int* __retval668;
  __it667 = v665;
  int** r669 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__it667);
  int* t670 = *r669;
  __retval668 = t670;
  int* t671 = __retval668;
  return t671;
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v672) {
bb673: ;
  int* __it674;
  int* __retval675;
  __it674 = v672;
  int* t676 = __it674;
  __retval675 = t676;
  int* t677 = __retval675;
  return t677;
}

// function: _ZSt13__copy_move_aILb0EN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES2_ET1_T0_S8_S7_
int* int__std____copy_move_a_false____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v678, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v679, int* v680) {
bb681: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first682;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last683;
  int* __result684;
  int* __retval685;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0686;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1687;
  __first682 = v678;
  __last683 = v679;
  __result684 = v680;
  agg_tmp0686 = __first682; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t688 = agg_tmp0686;
  int* r689 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t688);
  agg_tmp1687 = __last683; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t690 = agg_tmp1687;
  int* r691 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t690);
  int* t692 = __result684;
  int* r693 = int__std____niter_base_int__(t692);
  int* r694 = int__std____copy_move_a1_false__int___int__(r689, r691, r693);
  int* r695 = int__std____niter_wrap_int__(&__result684, r694);
  __retval685 = r695;
  int* t696 = __retval685;
  return t696;
}

// function: _ZSt12__miter_baseIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEET_S7_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v697) {
bb698: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it699;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval700;
  __it699 = v697;
  __retval700 = __it699; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t701 = __retval700;
  return t701;
}

// function: _ZSt4copyIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES2_ET0_T_S8_S7_
int* int__std__copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v702, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v703, int* v704) {
bb705: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first706;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last707;
  int* __result708;
  int* __retval709;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0710;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1711;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2712;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3713;
  __first706 = v702;
  __last707 = v703;
  __result708 = v704;
  agg_tmp1711 = __first706; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t714 = agg_tmp1711;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r715 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t714);
  agg_tmp0710 = r715;
  agg_tmp3713 = __last707; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t716 = agg_tmp3713;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r717 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t716);
  agg_tmp2712 = r717;
  int* t718 = __result708;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t719 = agg_tmp0710;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t720 = agg_tmp2712;
  int* r721 = int__std____copy_move_a_false____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(t719, t720, t718);
  __retval709 = r721;
  int* t722 = __retval709;
  return t722;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___3(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v723) {
bb724: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this725;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval726;
  this725 = v723;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t727 = this725;
  int* t728 = t727->_M_current;
  int c729 = 1;
  int* ptr730 = &(t728)[c729];
  t727->_M_current = ptr730;
  __retval726 = t727;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t731 = __retval726;
  return t731;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEmmEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v732) {
bb733: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this734;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval735;
  this734 = v732;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t736 = this734;
  int* t737 = t736->_M_current;
  int c738 = -1;
  int* ptr739 = &(t737)[c738];
  t736->_M_current = ptr739;
  __retval735 = t736;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t740 = __retval735;
  return t740;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEpLEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v741, long v742) {
bb743: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this744;
  long __n745;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval746;
  this744 = v741;
  __n745 = v742;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t747 = this744;
  long t748 = __n745;
  int* t749 = t747->_M_current;
  int* ptr750 = &(t749)[t748];
  t747->_M_current = ptr750;
  __retval746 = t747;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t751 = __retval746;
  return t751;
}

// function: _ZSt9__advanceIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEElEvRT_T0_St26random_access_iterator_tag
void void_std____advance___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v752, long v753, struct std__random_access_iterator_tag v754) {
bb755: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __i756;
  long __n757;
  struct std__random_access_iterator_tag unnamed758;
  __i756 = v752;
  __n757 = v753;
  unnamed758 = v754;
    long t759 = __n757;
    _Bool isconst760 = 0;
    _Bool ternary761;
    if (isconst760) {
      long t762 = __n757;
      long c763 = 1;
      _Bool c764 = ((t762 == c763)) ? 1 : 0;
      ternary761 = (_Bool)c764;
    } else {
      _Bool c765 = 0;
      ternary761 = (_Bool)c765;
    }
    if (ternary761) {
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t766 = __i756;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r767 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___3(t766);
    } else {
        long t768 = __n757;
        _Bool isconst769 = 0;
        _Bool ternary770;
        if (isconst769) {
          long t771 = __n757;
          long c772 = -1;
          _Bool c773 = ((t771 == c772)) ? 1 : 0;
          ternary770 = (_Bool)c773;
        } else {
          _Bool c774 = 0;
          ternary770 = (_Bool)c774;
        }
        if (ternary770) {
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t775 = __i756;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r776 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(t775);
        } else {
          long t777 = __n757;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t778 = __i756;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r779 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(t778, t777);
        }
    }
  return;
}

// function: _ZSt7advanceIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEmEvRT_T0_
void void_std__advance___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______unsigned_long_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v780, unsigned long v781) {
bb782: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __i783;
  unsigned long __n784;
  long __d785;
  struct std__random_access_iterator_tag agg_tmp0786;
  __i783 = v780;
  __n784 = v781;
  unsigned long t787 = __n784;
  long cast788 = (long)t787;
  __d785 = cast788;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t789 = __i783;
  long t790 = __d785;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t791 = __i783;
  struct std__random_access_iterator_tag r792 = std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________iterator_category_std____iterator_category___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t791);
  agg_tmp0786 = r792;
  struct std__random_access_iterator_tag t793 = agg_tmp0786;
  void_std____advance___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long_(t789, t790, t793);
  return;
}

// function: _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v794, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v795) {
bb796: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs797;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs798;
  _Bool __retval799;
  __lhs797 = v794;
  __rhs798 = v795;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t800 = __lhs797;
  int** r801 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t800);
  int* t802 = *r801;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t803 = __rhs798;
  int** r804 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t803);
  int* t805 = *r804;
  _Bool c806 = ((t802 == t805)) ? 1 : 0;
  __retval799 = c806;
  _Bool t807 = __retval799;
  return t807;
}

// function: _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* v808, int* v809) {
bb810: ;
  int* __location811;
  int* __args812;
  int* __retval813;
  void* __loc814;
  __location811 = v808;
  __args812 = v809;
  int* t815 = __location811;
  void* cast816 = (void*)t815;
  __loc814 = cast816;
    void* t817 = __loc814;
    int* cast818 = (int*)t817;
    int* t819 = __args812;
    int t820 = *t819;
    *cast818 = t820;
    __retval813 = cast818;
    int* t821 = __retval813;
    return t821;
  abort();
}

// function: _ZSt10_ConstructIiJRiEEvPT_DpOT0_
void void_std___Construct_int__int__(int* v822, int* v823) {
bb824: ;
  int* __p825;
  int* __args826;
  __p825 = v822;
  __args826 = v823;
    _Bool r827 = std____is_constant_evaluated();
    if (r827) {
      int* t828 = __p825;
      int* t829 = __args826;
      int* r830 = _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t828, t829);
      return;
    }
  int* t831 = __p825;
  void* cast832 = (void*)t831;
  int* cast833 = (int*)cast832;
  int* t834 = __args826;
  int t835 = *t834;
  *cast833 = t835;
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v836) {
bb837: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this838;
  int* __retval839;
  this838 = v836;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t840 = this838;
  int* t841 = t840->_M_current;
  __retval839 = t841;
  int* t842 = __retval839;
  return t842;
}

// function: _ZSt16__do_uninit_copyIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_S2_ET1_T_T0_S7_
int* int__std____do_uninit_copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v843, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v844, int* v845) {
bb846: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first847;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last848;
  int* __result849;
  int* __retval850;
  struct std___UninitDestroyGuard_int____void_ __guard851;
  __first847 = v843;
  __last848 = v844;
  __result849 = v845;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard851, &__result849);
      while (1) {
        _Bool r853 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first847, &__last848);
        _Bool u854 = !r853;
        if (!u854) break;
        int* t855 = __result849;
        int* r856 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__first847);
        void_std___Construct_int__int__(t855, r856);
      for_step852: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r857 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___3(&__first847);
        int* t858 = __result849;
        int c859 = 1;
        int* ptr860 = &(t858)[c859];
        __result849 = ptr860;
      }
    std___UninitDestroyGuard_int___void___release(&__guard851);
    int* t861 = __result849;
    __retval850 = t861;
    int* t862 = __retval850;
    int* ret_val863 = t862;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard851);
    }
    return ret_val863;
  abort();
}

// function: _ZSt18uninitialized_copyIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES2_ET0_T_S8_S7_
int* int__std__uninitialized_copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v864, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v865, int* v866) {
bb867: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first868;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last869;
  int* __result870;
  int* __retval871;
  __first868 = v864;
  __last869 = v865;
  __result870 = v866;
      long __n872;
      long r873 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__last869, &__first868);
      __n872 = r873;
        long t874 = __n872;
        long c875 = 0;
        _Bool c876 = ((t874 > c875)) ? 1 : 0;
        if (c876) {
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0877;
          int* t878 = __result870;
          int* r879 = int__std____niter_base_int__(t878);
          void* cast880 = (void*)r879;
          agg_tmp0877 = __first868; // copy
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t881 = agg_tmp0877;
          int* r882 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t881);
          void* cast883 = (void*)r882;
          long t884 = __n872;
          unsigned long cast885 = (unsigned long)t884;
          unsigned long c886 = 4;
          unsigned long b887 = cast885 * c886;
          void* r888 = memcpy(cast880, cast883, b887);
          long t889 = __n872;
          int* t890 = __result870;
          int* ptr891 = &(t890)[t889];
          __result870 = ptr891;
        }
      int* t892 = __result870;
      __retval871 = t892;
      int* t893 = __retval871;
      return t893;
  abort();
}

// function: _ZSt22__uninitialized_copy_aIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_S2_iET1_T_T0_S7_RSaIT2_E
int* int__std____uninitialized_copy_a___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v894, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v895, int* v896, struct std__allocator_int_* v897) {
bb898: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first899;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last900;
  int* __result901;
  struct std__allocator_int_* unnamed902;
  int* __retval903;
  __first899 = v894;
  __last900 = v895;
  __result901 = v896;
  unnamed902 = v897;
    _Bool r904 = std__is_constant_evaluated();
    if (r904) {
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0905;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1906;
      agg_tmp0905 = __first899; // copy
      agg_tmp1906 = __last900; // copy
      int* t907 = __result901;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t908 = agg_tmp0905;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t909 = agg_tmp1906;
      int* r910 = int__std____do_uninit_copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(t908, t909, t907);
      __retval903 = r910;
      int* t911 = __retval903;
      return t911;
    }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2912;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3913;
    agg_tmp2912 = __first899; // copy
    agg_tmp3913 = __last900; // copy
    int* t914 = __result901;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t915 = agg_tmp2912;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t916 = agg_tmp3913;
    int* r917 = int__std__uninitialized_copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(t915, t916, t914);
    __retval903 = r917;
    int* t918 = __retval903;
    return t918;
  abort();
}

// function: _ZNSt6vectorIiSaIiEE13_M_assign_auxIN9__gnu_cxx17__normal_iteratorIPiS1_EEEEvT_S7_St20forward_iterator_tag
void void_std__vector_int__std__allocator_int______M_assign_aux___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct std__vector_int__std__allocator_int__* v919, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v920, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v921, struct std__forward_iterator_tag v922) {
bb923: ;
  struct std__vector_int__std__allocator_int__* this924;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first925;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last926;
  struct std__forward_iterator_tag unnamed927;
  unsigned long __sz928;
  unsigned long __len929;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0930;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1931;
  this924 = v919;
  __first925 = v920;
  __last926 = v921;
  unnamed927 = v922;
  struct std__vector_int__std__allocator_int__* t932 = this924;
  unsigned long r933 = std__vector_int__std__allocator_int_____size___const(t932);
  __sz928 = r933;
  agg_tmp0930 = __first925; // copy
  agg_tmp1931 = __last926; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t934 = agg_tmp0930;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t935 = agg_tmp1931;
  long r936 = std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________difference_type_std__distance___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t934, t935);
  unsigned long cast937 = (unsigned long)r936;
  __len929 = cast937;
    unsigned long t938 = __len929;
    unsigned long r939 = std__vector_int__std__allocator_int_____capacity___const(t932);
    _Bool c940 = ((t938 > r939)) ? 1 : 0;
    if (c940) {
      int* __tmp941;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2942;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3943;
        unsigned long t944 = __len929;
        unsigned long t945 = __sz928;
        _Bool c946 = ((t944 <= t945)) ? 1 : 0;
        if (c946) {
          __builtin_unreachable();
        }
      unsigned long t947 = __len929;
      struct std___Vector_base_int__std__allocator_int__* base948 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t932 + 0);
      struct std__allocator_int_* r949 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base948);
      unsigned long r950 = std__vector_int__std__allocator_int______S_check_init_len(t947, r949);
      unsigned long t951 = __len929;
      agg_tmp2942 = __first925; // copy
      agg_tmp3943 = __last926; // copy
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t952 = agg_tmp2942;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t953 = agg_tmp3943;
      int* r954 = int__std__vector_int__std__allocator_int______M_allocate_and_copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t932, t951, t952, t953);
      __tmp941 = r954;
      struct std___Vector_base_int__std__allocator_int__* base955 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t932 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base956 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base955->_M_impl) + 0);
      int* t957 = base956->_M_start;
      struct std___Vector_base_int__std__allocator_int__* base958 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t932 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base959 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base958->_M_impl) + 0);
      int* t960 = base959->_M_finish;
      struct std___Vector_base_int__std__allocator_int__* base961 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t932 + 0);
      struct std__allocator_int_* r962 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base961);
      void_std___Destroy_int___int_(t957, t960, r962);
      struct std___Vector_base_int__std__allocator_int__* base963 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t932 + 0);
      struct std___Vector_base_int__std__allocator_int__* base964 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t932 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base965 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base964->_M_impl) + 0);
      int* t966 = base965->_M_start;
      struct std___Vector_base_int__std__allocator_int__* base967 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t932 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base968 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base967->_M_impl) + 0);
      int* t969 = base968->_M_end_of_storage;
      struct std___Vector_base_int__std__allocator_int__* base970 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t932 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base971 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base970->_M_impl) + 0);
      int* t972 = base971->_M_start;
      long diff973 = t969 - t972;
      unsigned long cast974 = (unsigned long)diff973;
      std___Vector_base_int__std__allocator_int______M_deallocate(base963, t966, cast974);
      int* t975 = __tmp941;
      struct std___Vector_base_int__std__allocator_int__* base976 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t932 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base977 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base976->_M_impl) + 0);
      base977->_M_start = t975;
      struct std___Vector_base_int__std__allocator_int__* base978 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t932 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base979 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base978->_M_impl) + 0);
      int* t980 = base979->_M_start;
      unsigned long t981 = __len929;
      int* ptr982 = &(t980)[t981];
      struct std___Vector_base_int__std__allocator_int__* base983 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t932 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base984 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base983->_M_impl) + 0);
      base984->_M_finish = ptr982;
      struct std___Vector_base_int__std__allocator_int__* base985 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t932 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base986 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base985->_M_impl) + 0);
      int* t987 = base986->_M_finish;
      struct std___Vector_base_int__std__allocator_int__* base988 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t932 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base989 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base988->_M_impl) + 0);
      base989->_M_end_of_storage = t987;
    } else {
        unsigned long t990 = __sz928;
        unsigned long t991 = __len929;
        _Bool c992 = ((t990 >= t991)) ? 1 : 0;
        if (c992) {
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp4993;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp5994;
          agg_tmp4993 = __first925; // copy
          agg_tmp5994 = __last926; // copy
          struct std___Vector_base_int__std__allocator_int__* base995 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t932 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base996 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base995->_M_impl) + 0);
          int* t997 = base996->_M_start;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t998 = agg_tmp4993;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t999 = agg_tmp5994;
          int* r1000 = int__std__copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(t998, t999, t997);
          std__vector_int__std__allocator_int______M_erase_at_end(t932, r1000);
        } else {
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __mid1001;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp61002;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp71003;
          unsigned long __n1004;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp81005;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp91006;
          __mid1001 = __first925; // copy
          unsigned long t1007 = __sz928;
          void_std__advance___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______unsigned_long_(&__mid1001, t1007);
          agg_tmp61002 = __first925; // copy
          agg_tmp71003 = __mid1001; // copy
          struct std___Vector_base_int__std__allocator_int__* base1008 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t932 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1009 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1008->_M_impl) + 0);
          int* t1010 = base1009->_M_start;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1011 = agg_tmp61002;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1012 = agg_tmp71003;
          int* r1013 = int__std__copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(t1011, t1012, t1010);
          unsigned long t1014 = __len929;
          unsigned long t1015 = __sz928;
          unsigned long b1016 = t1014 - t1015;
          __n1004 = b1016;
          agg_tmp81005 = __mid1001; // copy
          agg_tmp91006 = __last926; // copy
          struct std___Vector_base_int__std__allocator_int__* base1017 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t932 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1018 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1017->_M_impl) + 0);
          int* t1019 = base1018->_M_finish;
          struct std___Vector_base_int__std__allocator_int__* base1020 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t932 + 0);
          struct std__allocator_int_* r1021 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1020);
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1022 = agg_tmp81005;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1023 = agg_tmp91006;
          int* r1024 = int__std____uninitialized_copy_a___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___int_(t1022, t1023, t1019, r1021);
          struct std___Vector_base_int__std__allocator_int__* base1025 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t932 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1026 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1025->_M_impl) + 0);
          base1026->_M_finish = r1024;
        }
    }
  return;
}

// function: _ZSt19__iterator_categoryIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEENSt15iterator_traitsIT_E17iterator_categoryERKS8_
struct std__random_access_iterator_tag std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________iterator_category_std____iterator_category___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1027) {
bb1028: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed1029;
  struct std__random_access_iterator_tag __retval1030;
  unnamed1029 = v1027;
  struct std__random_access_iterator_tag t1031 = __retval1030;
  return t1031;
}

// function: _ZNSt6vectorIiSaIiEE6assignIN9__gnu_cxx17__normal_iteratorIPiS1_EEvEEvT_S7_
void void_std__vector_int__std__allocator_int_____assign___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______void_(struct std__vector_int__std__allocator_int__* v1032, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1033, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1034) {
bb1035: ;
  struct std__vector_int__std__allocator_int__* this1036;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first1037;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last1038;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01039;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11040;
  struct std__forward_iterator_tag agg_tmp21041;
  struct std__random_access_iterator_tag ref_tmp01042;
  this1036 = v1032;
  __first1037 = v1033;
  __last1038 = v1034;
  struct std__vector_int__std__allocator_int__* t1043 = this1036;
  agg_tmp01039 = __first1037; // copy
  agg_tmp11040 = __last1038; // copy
  struct std__random_access_iterator_tag r1044 = std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________iterator_category_std____iterator_category___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(&__first1037);
  ref_tmp01042 = r1044;
  struct std__forward_iterator_tag* base1045 = (struct std__forward_iterator_tag*)((char *)&(ref_tmp01042) + 0);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1046 = agg_tmp01039;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1047 = agg_tmp11040;
  struct std__forward_iterator_tag t1048 = agg_tmp21041;
  void_std__vector_int__std__allocator_int______M_assign_aux___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t1043, t1046, t1047, t1048);
  return;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v1049) {
bb1050: ;
  struct std__vector_int__std__allocator_int__* this1051;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval1052;
  this1051 = v1049;
  struct std__vector_int__std__allocator_int__* t1053 = this1051;
  struct std___Vector_base_int__std__allocator_int__* base1054 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1053 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1055 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1054->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval1052, &base1055->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1056 = __retval1052;
  return t1056;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEmiEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1057, long v1058) {
bb1059: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this1060;
  long __n1061;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval1062;
  int* ref_tmp01063;
  this1060 = v1057;
  __n1061 = v1058;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1064 = this1060;
  int* t1065 = t1064->_M_current;
  long t1066 = __n1061;
  long u1067 = -t1066;
  int* ptr1068 = &(t1065)[u1067];
  ref_tmp01063 = ptr1068;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval1062, &ref_tmp01063);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1069 = __retval1062;
  return t1069;
}

// function: _ZNSt6vectorIiSaIiEE20_M_allocate_and_copyIPiEES3_mT_S4_
int* int__std__vector_int__std__allocator_int______M_allocate_and_copy_int__(struct std__vector_int__std__allocator_int__* v1070, unsigned long v1071, int* v1072, int* v1073) {
bb1074: ;
  struct std__vector_int__std__allocator_int__* this1075;
  unsigned long __n1076;
  int* __first1077;
  int* __last1078;
  int* __retval1079;
  struct std__vector_int__std__allocator_int_____Guard_alloc __guard1080;
  this1075 = v1070;
  __n1076 = v1071;
  __first1077 = v1072;
  __last1078 = v1073;
  struct std__vector_int__std__allocator_int__* t1081 = this1075;
  struct std___Vector_base_int__std__allocator_int__* base1082 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1081 + 0);
  unsigned long t1083 = __n1076;
  int* r1084 = std___Vector_base_int__std__allocator_int______M_allocate(base1082, t1083);
  unsigned long t1085 = __n1076;
  struct std___Vector_base_int__std__allocator_int__* base1086 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1081 + 0);
  std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(&__guard1080, r1084, t1085, base1086);
    int* t1087 = __first1077;
    int* t1088 = __last1078;
    int* t1089 = __guard1080._M_storage;
    struct std___Vector_base_int__std__allocator_int__* base1090 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1081 + 0);
    struct std__allocator_int_* r1091 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1090);
    int* r1092 = int__std____uninitialized_copy_a_int___int___int___int_(t1087, t1088, t1089, r1091);
    int* r1093 = std__vector_int__std__allocator_int______Guard_alloc___M_release(&__guard1080);
    __retval1079 = r1093;
    int* t1094 = __retval1079;
    int* ret_val1095 = t1094;
    {
      std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(&__guard1080);
    }
    return ret_val1095;
  abort();
}

// function: _ZSt13__copy_move_aILb0EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_a_false__int___int__(int* v1096, int* v1097, int* v1098) {
bb1099: ;
  int* __first1100;
  int* __last1101;
  int* __result1102;
  int* __retval1103;
  __first1100 = v1096;
  __last1101 = v1097;
  __result1102 = v1098;
  int* t1104 = __first1100;
  int* r1105 = int__std____niter_base_int__(t1104);
  int* t1106 = __last1101;
  int* r1107 = int__std____niter_base_int__(t1106);
  int* t1108 = __result1102;
  int* r1109 = int__std____niter_base_int__(t1108);
  int* r1110 = int__std____copy_move_a1_false__int___int__(r1105, r1107, r1109);
  int* r1111 = int__std____niter_wrap_int__(&__result1102, r1110);
  __retval1103 = r1111;
  int* t1112 = __retval1103;
  return t1112;
}

// function: _ZSt12__miter_baseIPiET_S1_
int* int__std____miter_base_int__(int* v1113) {
bb1114: ;
  int* __it1115;
  int* __retval1116;
  __it1115 = v1113;
  int* t1117 = __it1115;
  __retval1116 = t1117;
  int* t1118 = __retval1116;
  return t1118;
}

// function: _ZSt4copyIPiS0_ET0_T_S2_S1_
int* int__std__copy_int___int__(int* v1119, int* v1120, int* v1121) {
bb1122: ;
  int* __first1123;
  int* __last1124;
  int* __result1125;
  int* __retval1126;
  __first1123 = v1119;
  __last1124 = v1120;
  __result1125 = v1121;
  int* t1127 = __first1123;
  int* r1128 = int__std____miter_base_int__(t1127);
  int* t1129 = __last1124;
  int* r1130 = int__std____miter_base_int__(t1129);
  int* t1131 = __result1125;
  int* r1132 = int__std____copy_move_a_false__int___int__(r1128, r1130, t1131);
  __retval1126 = r1132;
  int* t1133 = __retval1126;
  return t1133;
}

// function: _ZSt9__advanceIPilEvRT_T0_St26random_access_iterator_tag
void void_std____advance_int___long_(int** v1134, long v1135, struct std__random_access_iterator_tag v1136) {
bb1137: ;
  int** __i1138;
  long __n1139;
  struct std__random_access_iterator_tag unnamed1140;
  __i1138 = v1134;
  __n1139 = v1135;
  unnamed1140 = v1136;
    long t1141 = __n1139;
    _Bool isconst1142 = 0;
    _Bool ternary1143;
    if (isconst1142) {
      long t1144 = __n1139;
      long c1145 = 1;
      _Bool c1146 = ((t1144 == c1145)) ? 1 : 0;
      ternary1143 = (_Bool)c1146;
    } else {
      _Bool c1147 = 0;
      ternary1143 = (_Bool)c1147;
    }
    if (ternary1143) {
      int** t1148 = __i1138;
      int* t1149 = *t1148;
      int c1150 = 1;
      int* ptr1151 = &(t1149)[c1150];
      *t1148 = ptr1151;
    } else {
        long t1152 = __n1139;
        _Bool isconst1153 = 0;
        _Bool ternary1154;
        if (isconst1153) {
          long t1155 = __n1139;
          long c1156 = -1;
          _Bool c1157 = ((t1155 == c1156)) ? 1 : 0;
          ternary1154 = (_Bool)c1157;
        } else {
          _Bool c1158 = 0;
          ternary1154 = (_Bool)c1158;
        }
        if (ternary1154) {
          int** t1159 = __i1138;
          int* t1160 = *t1159;
          int c1161 = -1;
          int* ptr1162 = &(t1160)[c1161];
          *t1159 = ptr1162;
        } else {
          long t1163 = __n1139;
          int** t1164 = __i1138;
          int* t1165 = *t1164;
          int* ptr1166 = &(t1165)[t1163];
          *t1164 = ptr1166;
        }
    }
  return;
}

// function: _ZSt7advanceIPimEvRT_T0_
void void_std__advance_int___unsigned_long_(int** v1167, unsigned long v1168) {
bb1169: ;
  int** __i1170;
  unsigned long __n1171;
  long __d1172;
  struct std__random_access_iterator_tag agg_tmp01173;
  __i1170 = v1167;
  __n1171 = v1168;
  unsigned long t1174 = __n1171;
  long cast1175 = (long)t1174;
  __d1172 = cast1175;
  int** t1176 = __i1170;
  long t1177 = __d1172;
  int** t1178 = __i1170;
  struct std__random_access_iterator_tag r1179 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(t1178);
  agg_tmp01173 = r1179;
  struct std__random_access_iterator_tag t1180 = agg_tmp01173;
  void_std____advance_int___long_(t1176, t1177, t1180);
  return;
}

// function: _ZSt16__do_uninit_copyIPiS0_S0_ET1_T_T0_S1_
int* int__std____do_uninit_copy_int___int___int__(int* v1181, int* v1182, int* v1183) {
bb1184: ;
  int* __first1185;
  int* __last1186;
  int* __result1187;
  int* __retval1188;
  struct std___UninitDestroyGuard_int____void_ __guard1189;
  __first1185 = v1181;
  __last1186 = v1182;
  __result1187 = v1183;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard1189, &__result1187);
      while (1) {
        int* t1191 = __first1185;
        int* t1192 = __last1186;
        _Bool c1193 = ((t1191 != t1192)) ? 1 : 0;
        if (!c1193) break;
        int* t1194 = __result1187;
        int* t1195 = __first1185;
        void_std___Construct_int__int__(t1194, t1195);
      for_step1190: ;
        int* t1196 = __first1185;
        int c1197 = 1;
        int* ptr1198 = &(t1196)[c1197];
        __first1185 = ptr1198;
        int* t1199 = __result1187;
        int c1200 = 1;
        int* ptr1201 = &(t1199)[c1200];
        __result1187 = ptr1201;
      }
    std___UninitDestroyGuard_int___void___release(&__guard1189);
    int* t1202 = __result1187;
    __retval1188 = t1202;
    int* t1203 = __retval1188;
    int* ret_val1204 = t1203;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1189);
    }
    return ret_val1204;
  abort();
}

// function: _ZSt18uninitialized_copyIPiS0_ET0_T_S2_S1_
int* int__std__uninitialized_copy_int___int__(int* v1205, int* v1206, int* v1207) {
bb1208: ;
  int* __first1209;
  int* __last1210;
  int* __result1211;
  int* __retval1212;
  __first1209 = v1205;
  __last1210 = v1206;
  __result1211 = v1207;
      long __n1213;
      int* t1214 = __last1210;
      int* t1215 = __first1209;
      long diff1216 = t1214 - t1215;
      __n1213 = diff1216;
        long t1217 = __n1213;
        long c1218 = 0;
        _Bool c1219 = ((t1217 > c1218)) ? 1 : 0;
        if (c1219) {
          int* t1220 = __result1211;
          int* r1221 = int__std____niter_base_int__(t1220);
          void* cast1222 = (void*)r1221;
          int* t1223 = __first1209;
          int* r1224 = int__std____niter_base_int__(t1223);
          void* cast1225 = (void*)r1224;
          long t1226 = __n1213;
          unsigned long cast1227 = (unsigned long)t1226;
          unsigned long c1228 = 4;
          unsigned long b1229 = cast1227 * c1228;
          void* r1230 = memcpy(cast1222, cast1225, b1229);
          long t1231 = __n1213;
          int* t1232 = __result1211;
          int* ptr1233 = &(t1232)[t1231];
          __result1211 = ptr1233;
        }
      int* t1234 = __result1211;
      __retval1212 = t1234;
      int* t1235 = __retval1212;
      return t1235;
  abort();
}

// function: _ZSt22__uninitialized_copy_aIPiS0_S0_iET1_T_T0_S1_RSaIT2_E
int* int__std____uninitialized_copy_a_int___int___int___int_(int* v1236, int* v1237, int* v1238, struct std__allocator_int_* v1239) {
bb1240: ;
  int* __first1241;
  int* __last1242;
  int* __result1243;
  struct std__allocator_int_* unnamed1244;
  int* __retval1245;
  __first1241 = v1236;
  __last1242 = v1237;
  __result1243 = v1238;
  unnamed1244 = v1239;
    _Bool r1246 = std__is_constant_evaluated();
    if (r1246) {
      int* t1247 = __first1241;
      int* t1248 = __last1242;
      int* t1249 = __result1243;
      int* r1250 = int__std____do_uninit_copy_int___int___int__(t1247, t1248, t1249);
      __retval1245 = r1250;
      int* t1251 = __retval1245;
      return t1251;
    }
    int* t1252 = __first1241;
    int* t1253 = __last1242;
    int* t1254 = __result1243;
    int* r1255 = int__std__uninitialized_copy_int___int__(t1252, t1253, t1254);
    __retval1245 = r1255;
    int* t1256 = __retval1245;
    return t1256;
  abort();
}

// function: _ZNSt6vectorIiSaIiEE13_M_assign_auxIPiEEvT_S4_St20forward_iterator_tag
void void_std__vector_int__std__allocator_int______M_assign_aux_int__(struct std__vector_int__std__allocator_int__* v1257, int* v1258, int* v1259, struct std__forward_iterator_tag v1260) {
bb1261: ;
  struct std__vector_int__std__allocator_int__* this1262;
  int* __first1263;
  int* __last1264;
  struct std__forward_iterator_tag unnamed1265;
  unsigned long __sz1266;
  unsigned long __len1267;
  this1262 = v1257;
  __first1263 = v1258;
  __last1264 = v1259;
  unnamed1265 = v1260;
  struct std__vector_int__std__allocator_int__* t1268 = this1262;
  unsigned long r1269 = std__vector_int__std__allocator_int_____size___const(t1268);
  __sz1266 = r1269;
  int* t1270 = __first1263;
  int* t1271 = __last1264;
  long r1272 = std__iterator_traits_int____difference_type_std__distance_int__(t1270, t1271);
  unsigned long cast1273 = (unsigned long)r1272;
  __len1267 = cast1273;
    unsigned long t1274 = __len1267;
    unsigned long r1275 = std__vector_int__std__allocator_int_____capacity___const(t1268);
    _Bool c1276 = ((t1274 > r1275)) ? 1 : 0;
    if (c1276) {
      int* __tmp1277;
        unsigned long t1278 = __len1267;
        unsigned long t1279 = __sz1266;
        _Bool c1280 = ((t1278 <= t1279)) ? 1 : 0;
        if (c1280) {
          __builtin_unreachable();
        }
      unsigned long t1281 = __len1267;
      struct std___Vector_base_int__std__allocator_int__* base1282 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1268 + 0);
      struct std__allocator_int_* r1283 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1282);
      unsigned long r1284 = std__vector_int__std__allocator_int______S_check_init_len(t1281, r1283);
      unsigned long t1285 = __len1267;
      int* t1286 = __first1263;
      int* t1287 = __last1264;
      int* r1288 = int__std__vector_int__std__allocator_int______M_allocate_and_copy_int__(t1268, t1285, t1286, t1287);
      __tmp1277 = r1288;
      struct std___Vector_base_int__std__allocator_int__* base1289 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1268 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1290 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1289->_M_impl) + 0);
      int* t1291 = base1290->_M_start;
      struct std___Vector_base_int__std__allocator_int__* base1292 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1268 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1293 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1292->_M_impl) + 0);
      int* t1294 = base1293->_M_finish;
      struct std___Vector_base_int__std__allocator_int__* base1295 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1268 + 0);
      struct std__allocator_int_* r1296 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1295);
      void_std___Destroy_int___int_(t1291, t1294, r1296);
      struct std___Vector_base_int__std__allocator_int__* base1297 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1268 + 0);
      struct std___Vector_base_int__std__allocator_int__* base1298 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1268 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1299 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1298->_M_impl) + 0);
      int* t1300 = base1299->_M_start;
      struct std___Vector_base_int__std__allocator_int__* base1301 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1268 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1302 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1301->_M_impl) + 0);
      int* t1303 = base1302->_M_end_of_storage;
      struct std___Vector_base_int__std__allocator_int__* base1304 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1268 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1305 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1304->_M_impl) + 0);
      int* t1306 = base1305->_M_start;
      long diff1307 = t1303 - t1306;
      unsigned long cast1308 = (unsigned long)diff1307;
      std___Vector_base_int__std__allocator_int______M_deallocate(base1297, t1300, cast1308);
      int* t1309 = __tmp1277;
      struct std___Vector_base_int__std__allocator_int__* base1310 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1268 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1311 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1310->_M_impl) + 0);
      base1311->_M_start = t1309;
      struct std___Vector_base_int__std__allocator_int__* base1312 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1268 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1313 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1312->_M_impl) + 0);
      int* t1314 = base1313->_M_start;
      unsigned long t1315 = __len1267;
      int* ptr1316 = &(t1314)[t1315];
      struct std___Vector_base_int__std__allocator_int__* base1317 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1268 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1318 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1317->_M_impl) + 0);
      base1318->_M_finish = ptr1316;
      struct std___Vector_base_int__std__allocator_int__* base1319 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1268 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1320 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1319->_M_impl) + 0);
      int* t1321 = base1320->_M_finish;
      struct std___Vector_base_int__std__allocator_int__* base1322 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1268 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1323 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1322->_M_impl) + 0);
      base1323->_M_end_of_storage = t1321;
    } else {
        unsigned long t1324 = __sz1266;
        unsigned long t1325 = __len1267;
        _Bool c1326 = ((t1324 >= t1325)) ? 1 : 0;
        if (c1326) {
          int* t1327 = __first1263;
          int* t1328 = __last1264;
          struct std___Vector_base_int__std__allocator_int__* base1329 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1268 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1330 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1329->_M_impl) + 0);
          int* t1331 = base1330->_M_start;
          int* r1332 = int__std__copy_int___int__(t1327, t1328, t1331);
          std__vector_int__std__allocator_int______M_erase_at_end(t1268, r1332);
        } else {
          int* __mid1333;
          unsigned long __n1334;
          int* t1335 = __first1263;
          __mid1333 = t1335;
          unsigned long t1336 = __sz1266;
          void_std__advance_int___unsigned_long_(&__mid1333, t1336);
          int* t1337 = __first1263;
          int* t1338 = __mid1333;
          struct std___Vector_base_int__std__allocator_int__* base1339 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1268 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1340 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1339->_M_impl) + 0);
          int* t1341 = base1340->_M_start;
          int* r1342 = int__std__copy_int___int__(t1337, t1338, t1341);
          unsigned long t1343 = __len1267;
          unsigned long t1344 = __sz1266;
          unsigned long b1345 = t1343 - t1344;
          __n1334 = b1345;
          int* t1346 = __mid1333;
          int* t1347 = __last1264;
          struct std___Vector_base_int__std__allocator_int__* base1348 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1268 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1349 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1348->_M_impl) + 0);
          int* t1350 = base1349->_M_finish;
          struct std___Vector_base_int__std__allocator_int__* base1351 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1268 + 0);
          struct std__allocator_int_* r1352 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1351);
          int* r1353 = int__std____uninitialized_copy_a_int___int___int___int_(t1346, t1347, t1350, r1352);
          struct std___Vector_base_int__std__allocator_int__* base1354 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1268 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1355 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1354->_M_impl) + 0);
          base1355->_M_finish = r1353;
        }
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE6assignIPivEEvT_S4_
void void_std__vector_int__std__allocator_int_____assign_int___void_(struct std__vector_int__std__allocator_int__* v1356, int* v1357, int* v1358) {
bb1359: ;
  struct std__vector_int__std__allocator_int__* this1360;
  int* __first1361;
  int* __last1362;
  struct std__forward_iterator_tag agg_tmp01363;
  struct std__random_access_iterator_tag ref_tmp01364;
  this1360 = v1356;
  __first1361 = v1357;
  __last1362 = v1358;
  struct std__vector_int__std__allocator_int__* t1365 = this1360;
  int* t1366 = __first1361;
  int* t1367 = __last1362;
  struct std__random_access_iterator_tag r1368 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first1361);
  ref_tmp01364 = r1368;
  struct std__forward_iterator_tag* base1369 = (struct std__forward_iterator_tag*)((char *)&(ref_tmp01364) + 0);
  struct std__forward_iterator_tag t1370 = agg_tmp01363;
  void_std__vector_int__std__allocator_int______M_assign_aux_int__(t1365, t1366, t1367, t1370);
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v1371, int v1372) {
bb1373: ;
  int __a1374;
  int __b1375;
  int __retval1376;
  __a1374 = v1371;
  __b1375 = v1372;
  int t1377 = __a1374;
  int t1378 = __b1375;
  int b1379 = t1377 | t1378;
  __retval1376 = b1379;
  int t1380 = __retval1376;
  return t1380;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v1381) {
bb1382: ;
  struct std__basic_ios_char__std__char_traits_char__* this1383;
  int __retval1384;
  this1383 = v1381;
  struct std__basic_ios_char__std__char_traits_char__* t1385 = this1383;
  struct std__ios_base* base1386 = (struct std__ios_base*)((char *)t1385 + 0);
  int t1387 = base1386->_M_streambuf_state;
  __retval1384 = t1387;
  int t1388 = __retval1384;
  return t1388;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v1389, int v1390) {
bb1391: ;
  struct std__basic_ios_char__std__char_traits_char__* this1392;
  int __state1393;
  this1392 = v1389;
  __state1393 = v1390;
  struct std__basic_ios_char__std__char_traits_char__* t1394 = this1392;
  int r1395 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t1394);
  int t1396 = __state1393;
  int r1397 = std__operator_(r1395, t1396);
  std__basic_ios_char__std__char_traits_char_____clear(t1394, r1397);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v1398, char* v1399) {
bb1400: ;
  char* __c11401;
  char* __c21402;
  _Bool __retval1403;
  __c11401 = v1398;
  __c21402 = v1399;
  char* t1404 = __c11401;
  char t1405 = *t1404;
  int cast1406 = (int)t1405;
  char* t1407 = __c21402;
  char t1408 = *t1407;
  int cast1409 = (int)t1408;
  _Bool c1410 = ((cast1406 == cast1409)) ? 1 : 0;
  __retval1403 = c1410;
  _Bool t1411 = __retval1403;
  return t1411;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v1412) {
bb1413: ;
  char* __p1414;
  unsigned long __retval1415;
  unsigned long __i1416;
  __p1414 = v1412;
  unsigned long c1417 = 0;
  __i1416 = c1417;
    char ref_tmp01418;
    while (1) {
      unsigned long t1419 = __i1416;
      char* t1420 = __p1414;
      char* ptr1421 = &(t1420)[t1419];
      char c1422 = 0;
      ref_tmp01418 = c1422;
      _Bool r1423 = __gnu_cxx__char_traits_char___eq(ptr1421, &ref_tmp01418);
      _Bool u1424 = !r1423;
      if (!u1424) break;
      unsigned long t1425 = __i1416;
      unsigned long u1426 = t1425 + 1;
      __i1416 = u1426;
    }
  unsigned long t1427 = __i1416;
  __retval1415 = t1427;
  unsigned long t1428 = __retval1415;
  return t1428;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v1429) {
bb1430: ;
  char* __s1431;
  unsigned long __retval1432;
  __s1431 = v1429;
    _Bool r1433 = std____is_constant_evaluated();
    if (r1433) {
      char* t1434 = __s1431;
      unsigned long r1435 = __gnu_cxx__char_traits_char___length(t1434);
      __retval1432 = r1435;
      unsigned long t1436 = __retval1432;
      return t1436;
    }
  char* t1437 = __s1431;
  unsigned long r1438 = strlen(t1437);
  __retval1432 = r1438;
  unsigned long t1439 = __retval1432;
  return t1439;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1440, char* v1441) {
bb1442: ;
  struct std__basic_ostream_char__std__char_traits_char__* __out1443;
  char* __s1444;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1445;
  __out1443 = v1440;
  __s1444 = v1441;
    char* t1446 = __s1444;
    _Bool cast1447 = (_Bool)t1446;
    _Bool u1448 = !cast1447;
    if (u1448) {
      struct std__basic_ostream_char__std__char_traits_char__* t1449 = __out1443;
      void** v1450 = (void**)t1449;
      void* v1451 = *((void**)v1450);
      unsigned char* cast1452 = (unsigned char*)v1451;
      long c1453 = -24;
      unsigned char* ptr1454 = &(cast1452)[c1453];
      long* cast1455 = (long*)ptr1454;
      long t1456 = *cast1455;
      unsigned char* cast1457 = (unsigned char*)t1449;
      unsigned char* ptr1458 = &(cast1457)[t1456];
      struct std__basic_ostream_char__std__char_traits_char__* cast1459 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1458;
      struct std__basic_ios_char__std__char_traits_char__* cast1460 = (struct std__basic_ios_char__std__char_traits_char__*)cast1459;
      int t1461 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast1460, t1461);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t1462 = __out1443;
      char* t1463 = __s1444;
      char* t1464 = __s1444;
      unsigned long r1465 = std__char_traits_char___length(t1464);
      long cast1466 = (long)r1465;
      struct std__basic_ostream_char__std__char_traits_char__* r1467 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t1462, t1463, cast1466);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t1468 = __out1443;
  __retval1445 = t1468;
  struct std__basic_ostream_char__std__char_traits_char__* t1469 = __retval1445;
  return t1469;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v1470) {
bb1471: ;
  struct std__vector_int__std__allocator_int__* this1472;
  unsigned long __retval1473;
  long __dif1474;
  this1472 = v1470;
  struct std__vector_int__std__allocator_int__* t1475 = this1472;
  struct std___Vector_base_int__std__allocator_int__* base1476 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1475 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1477 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1476->_M_impl) + 0);
  int* t1478 = base1477->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base1479 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1475 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1480 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1479->_M_impl) + 0);
  int* t1481 = base1480->_M_start;
  long diff1482 = t1478 - t1481;
  __dif1474 = diff1482;
    long t1483 = __dif1474;
    long c1484 = 0;
    _Bool c1485 = ((t1483 < c1484)) ? 1 : 0;
    if (c1485) {
      __builtin_unreachable();
    }
  long t1486 = __dif1474;
  unsigned long cast1487 = (unsigned long)t1486;
  __retval1473 = cast1487;
  unsigned long t1488 = __retval1473;
  return t1488;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v1489, void* v1490) {
bb1491: ;
  struct std__basic_ostream_char__std__char_traits_char__* this1492;
  void* __pf1493;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1494;
  this1492 = v1489;
  __pf1493 = v1490;
  struct std__basic_ostream_char__std__char_traits_char__* t1495 = this1492;
  void* t1496 = __pf1493;
  struct std__basic_ostream_char__std__char_traits_char__* r1497 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t1496)(t1495);
  __retval1494 = r1497;
  struct std__basic_ostream_char__std__char_traits_char__* t1498 = __retval1494;
  return t1498;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1499) {
bb1500: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os1501;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1502;
  __os1501 = v1499;
  struct std__basic_ostream_char__std__char_traits_char__* t1503 = __os1501;
  struct std__basic_ostream_char__std__char_traits_char__* r1504 = std__ostream__flush(t1503);
  __retval1502 = r1504;
  struct std__basic_ostream_char__std__char_traits_char__* t1505 = __retval1502;
  return t1505;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v1506) {
bb1507: ;
  struct std__ctype_char_* __f1508;
  struct std__ctype_char_* __retval1509;
  __f1508 = v1506;
    struct std__ctype_char_* t1510 = __f1508;
    _Bool cast1511 = (_Bool)t1510;
    _Bool u1512 = !cast1511;
    if (u1512) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t1513 = __f1508;
  __retval1509 = t1513;
  struct std__ctype_char_* t1514 = __retval1509;
  return t1514;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v1515, char v1516) {
bb1517: ;
  struct std__ctype_char_* this1518;
  char __c1519;
  char __retval1520;
  this1518 = v1515;
  __c1519 = v1516;
  struct std__ctype_char_* t1521 = this1518;
    char t1522 = t1521->_M_widen_ok;
    _Bool cast1523 = (_Bool)t1522;
    if (cast1523) {
      char t1524 = __c1519;
      unsigned char cast1525 = (unsigned char)t1524;
      unsigned long cast1526 = (unsigned long)cast1525;
      char t1527 = t1521->_M_widen[cast1526];
      __retval1520 = t1527;
      char t1528 = __retval1520;
      return t1528;
    }
  std__ctype_char____M_widen_init___const(t1521);
  char t1529 = __c1519;
  void** v1530 = (void**)t1521;
  void* v1531 = *((void**)v1530);
  char vcall1534 = (char)__VERIFIER_virtual_call_char_char(t1521, 6, t1529);
  __retval1520 = vcall1534;
  char t1535 = __retval1520;
  return t1535;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v1536, char v1537) {
bb1538: ;
  struct std__basic_ios_char__std__char_traits_char__* this1539;
  char __c1540;
  char __retval1541;
  this1539 = v1536;
  __c1540 = v1537;
  struct std__basic_ios_char__std__char_traits_char__* t1542 = this1539;
  struct std__ctype_char_* t1543 = t1542->_M_ctype;
  struct std__ctype_char_* r1544 = std__ctype_char__const__std____check_facet_std__ctype_char___(t1543);
  char t1545 = __c1540;
  char r1546 = std__ctype_char___widen_char__const(r1544, t1545);
  __retval1541 = r1546;
  char t1547 = __retval1541;
  return t1547;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1548) {
bb1549: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os1550;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1551;
  __os1550 = v1548;
  struct std__basic_ostream_char__std__char_traits_char__* t1552 = __os1550;
  struct std__basic_ostream_char__std__char_traits_char__* t1553 = __os1550;
  void** v1554 = (void**)t1553;
  void* v1555 = *((void**)v1554);
  unsigned char* cast1556 = (unsigned char*)v1555;
  long c1557 = -24;
  unsigned char* ptr1558 = &(cast1556)[c1557];
  long* cast1559 = (long*)ptr1558;
  long t1560 = *cast1559;
  unsigned char* cast1561 = (unsigned char*)t1553;
  unsigned char* ptr1562 = &(cast1561)[t1560];
  struct std__basic_ostream_char__std__char_traits_char__* cast1563 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1562;
  struct std__basic_ios_char__std__char_traits_char__* cast1564 = (struct std__basic_ios_char__std__char_traits_char__*)cast1563;
  char c1565 = 10;
  char r1566 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast1564, c1565);
  struct std__basic_ostream_char__std__char_traits_char__* r1567 = std__ostream__put(t1552, r1566);
  struct std__basic_ostream_char__std__char_traits_char__* r1568 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r1567);
  __retval1551 = r1568;
  struct std__basic_ostream_char__std__char_traits_char__* t1569 = __retval1551;
  return t1569;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v1570) {
bb1571: ;
  struct std__vector_int__std__allocator_int__* this1572;
  this1572 = v1570;
  struct std__vector_int__std__allocator_int__* t1573 = this1572;
    struct std___Vector_base_int__std__allocator_int__* base1574 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1573 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1575 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1574->_M_impl) + 0);
    int* t1576 = base1575->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base1577 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1573 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1578 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1577->_M_impl) + 0);
    int* t1579 = base1578->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base1580 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1573 + 0);
    struct std__allocator_int_* r1581 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1580);
    void_std___Destroy_int___int_(t1576, t1579, r1581);
  {
    struct std___Vector_base_int__std__allocator_int__* base1582 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1573 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base1582);
  }
  return;
}

// function: main
int main() {
bb1583: ;
  int __retval1584;
  struct std__vector_int__std__allocator_int__ first1585;
  struct std__vector_int__std__allocator_int__ second1586;
  struct std__vector_int__std__allocator_int__ third1587;
  int ref_tmp01588;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it1589;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp11590;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp21591;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01592;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11593;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp31594;
  int myints1595[3];
  int c1596 = 0;
  __retval1584 = c1596;
  std__vector_int__std__allocator_int_____vector_2(&first1585);
    std__vector_int__std__allocator_int_____vector_2(&second1586);
      std__vector_int__std__allocator_int_____vector_2(&third1587);
        unsigned long c1597 = 7;
        int c1598 = 100;
        ref_tmp01588 = c1598;
        std__vector_int__std__allocator_int_____assign(&first1585, c1597, &ref_tmp01588);
        __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(&it1589);
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1599 = std__vector_int__std__allocator_int_____begin(&first1585);
        ref_tmp21591 = r1599;
        long c1600 = 1;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1601 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&ref_tmp21591, c1600);
        ref_tmp11590 = r1601;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1602 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&it1589, &ref_tmp11590);
        agg_tmp01592 = it1589; // copy
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1603 = std__vector_int__std__allocator_int_____end(&first1585);
        ref_tmp31594 = r1603;
        long c1604 = 1;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1605 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&ref_tmp31594, c1604);
        agg_tmp11593 = r1605;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1606 = agg_tmp01592;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1607 = agg_tmp11593;
        void_std__vector_int__std__allocator_int_____assign___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______void_(&second1586, t1606, t1607);
        // array copy
        __builtin_memcpy(myints1595, __const_main_myints, (unsigned long)3 * sizeof(__const_main_myints[0]));
        int* cast1608 = (int*)&(myints1595);
        int* cast1609 = (int*)&(myints1595);
        int c1610 = 3;
        int* ptr1611 = &(cast1609)[c1610];
        void_std__vector_int__std__allocator_int_____assign_int___void_(&third1587, cast1608, ptr1611);
        char* cast1612 = (char*)&(_str);
        struct std__basic_ostream_char__std__char_traits_char__* r1613 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1612);
        unsigned long r1614 = std__vector_int__std__allocator_int_____size___const(&first1585);
        int cast1615 = (int)r1614;
        struct std__basic_ostream_char__std__char_traits_char__* r1616 = std__ostream__operator__(r1613, cast1615);
        struct std__basic_ostream_char__std__char_traits_char__* r1617 = std__ostream__operator___std__ostream_____(r1616, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
        unsigned long r1618 = std__vector_int__std__allocator_int_____size___const(&first1585);
        unsigned long c1619 = 7;
        _Bool c1620 = ((r1618 != c1619)) ? 1 : 0;
        if (c1620) {
        } else {
          char* cast1621 = (char*)&(_str_1);
          char* c1622 = (char*)_str_2;
          unsigned int c1623 = 31;
          char* cast1624 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast1621, c1622, c1623, cast1624);
        }
        char* cast1625 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* r1626 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1625);
        unsigned long r1627 = std__vector_int__std__allocator_int_____size___const(&second1586);
        int cast1628 = (int)r1627;
        struct std__basic_ostream_char__std__char_traits_char__* r1629 = std__ostream__operator__(r1626, cast1628);
        struct std__basic_ostream_char__std__char_traits_char__* r1630 = std__ostream__operator___std__ostream_____(r1629, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
        unsigned long r1631 = std__vector_int__std__allocator_int_____size___const(&second1586);
        unsigned long c1632 = 5;
        _Bool c1633 = ((r1631 != c1632)) ? 1 : 0;
        if (c1633) {
        } else {
          char* cast1634 = (char*)&(_str_4);
          char* c1635 = (char*)_str_2;
          unsigned int c1636 = 33;
          char* cast1637 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast1634, c1635, c1636, cast1637);
        }
        char* cast1638 = (char*)&(_str_5);
        struct std__basic_ostream_char__std__char_traits_char__* r1639 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1638);
        unsigned long r1640 = std__vector_int__std__allocator_int_____size___const(&third1587);
        int cast1641 = (int)r1640;
        struct std__basic_ostream_char__std__char_traits_char__* r1642 = std__ostream__operator__(r1639, cast1641);
        struct std__basic_ostream_char__std__char_traits_char__* r1643 = std__ostream__operator___std__ostream_____(r1642, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
        unsigned long r1644 = std__vector_int__std__allocator_int_____size___const(&third1587);
        unsigned long c1645 = 3;
        _Bool c1646 = ((r1644 != c1645)) ? 1 : 0;
        if (c1646) {
        } else {
          char* cast1647 = (char*)&(_str_6);
          char* c1648 = (char*)_str_2;
          unsigned int c1649 = 35;
          char* cast1650 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast1647, c1648, c1649, cast1650);
        }
        int c1651 = 0;
        __retval1584 = c1651;
        int t1652 = __retval1584;
        int ret_val1653 = t1652;
        {
          std__vector_int__std__allocator_int______vector(&third1587);
        }
        {
          std__vector_int__std__allocator_int______vector(&second1586);
        }
        {
          std__vector_int__std__allocator_int______vector(&first1585);
        }
        return ret_val1653;
  int t1654 = __retval1584;
  return t1654;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE
void _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1655) {
bb1656: ;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1657;
  this1657 = v1655;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1658 = this1657;
  struct std__allocator_int_* base1659 = (struct std__allocator_int_*)((char *)t1658 + 0);
  std__allocator_int___allocator_2(base1659);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1660 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t1658 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base1660);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1661) {
bb1662: ;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1663;
  this1663 = v1661;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1664 = this1663;
  {
    struct std__allocator_int_* base1665 = (struct std__allocator_int_*)((char *)t1664 + 0);
    std__allocator_int____allocator(base1665);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2Ev
void std___Vector_base_int__std__allocator_int______Vector_base_2(struct std___Vector_base_int__std__allocator_int__* v1666) {
bb1667: ;
  struct std___Vector_base_int__std__allocator_int__* this1668;
  this1668 = v1666;
  struct std___Vector_base_int__std__allocator_int__* t1669 = this1668;
  _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(&t1669->_M_impl);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1670: ;
  _Bool __retval1671;
    _Bool c1672 = 0;
    __retval1671 = c1672;
    _Bool t1673 = __retval1671;
    return t1673;
  abort();
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v1674, int* v1675, unsigned long v1676) {
bb1677: ;
  struct std____new_allocator_int_* this1678;
  int* __p1679;
  unsigned long __n1680;
  this1678 = v1674;
  __p1679 = v1675;
  __n1680 = v1676;
  struct std____new_allocator_int_* t1681 = this1678;
    unsigned long c1682 = 4;
    unsigned long c1683 = 16;
    _Bool c1684 = ((c1682 > c1683)) ? 1 : 0;
    if (c1684) {
      int* t1685 = __p1679;
      void* cast1686 = (void*)t1685;
      unsigned long t1687 = __n1680;
      unsigned long c1688 = 4;
      unsigned long b1689 = t1687 * c1688;
      unsigned long c1690 = 4;
      operator_delete_3(cast1686, b1689, c1690);
      return;
    }
  int* t1691 = __p1679;
  void* cast1692 = (void*)t1691;
  unsigned long t1693 = __n1680;
  unsigned long c1694 = 4;
  unsigned long b1695 = t1693 * c1694;
  operator_delete_2(cast1692, b1695);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1696, int* v1697, unsigned long v1698) {
bb1699: ;
  struct std__allocator_int_* this1700;
  int* __p1701;
  unsigned long __n1702;
  this1700 = v1696;
  __p1701 = v1697;
  __n1702 = v1698;
  struct std__allocator_int_* t1703 = this1700;
    _Bool r1704 = std____is_constant_evaluated();
    if (r1704) {
      int* t1705 = __p1701;
      void* cast1706 = (void*)t1705;
      operator_delete(cast1706);
      return;
    }
  struct std____new_allocator_int_* base1707 = (struct std____new_allocator_int_*)((char *)t1703 + 0);
  int* t1708 = __p1701;
  unsigned long t1709 = __n1702;
  std____new_allocator_int___deallocate(base1707, t1708, t1709);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1710, int* v1711, unsigned long v1712) {
bb1713: ;
  struct std__allocator_int_* __a1714;
  int* __p1715;
  unsigned long __n1716;
  __a1714 = v1710;
  __p1715 = v1711;
  __n1716 = v1712;
  struct std__allocator_int_* t1717 = __a1714;
  int* t1718 = __p1715;
  unsigned long t1719 = __n1716;
  std__allocator_int___deallocate(t1717, t1718, t1719);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v1720, int* v1721, unsigned long v1722) {
bb1723: ;
  struct std___Vector_base_int__std__allocator_int__* this1724;
  int* __p1725;
  unsigned long __n1726;
  this1724 = v1720;
  __p1725 = v1721;
  __n1726 = v1722;
  struct std___Vector_base_int__std__allocator_int__* t1727 = this1724;
    int* t1728 = __p1725;
    _Bool cast1729 = (_Bool)t1728;
    if (cast1729) {
      struct std__allocator_int_* base1730 = (struct std__allocator_int_*)((char *)&(t1727->_M_impl) + 0);
      int* t1731 = __p1725;
      unsigned long t1732 = __n1726;
      std__allocator_traits_std__allocator_int_____deallocate(base1730, t1731, t1732);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1733) {
bb1734: ;
  struct std___Vector_base_int__std__allocator_int__* this1735;
  this1735 = v1733;
  struct std___Vector_base_int__std__allocator_int__* t1736 = this1735;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1737 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1736->_M_impl) + 0);
    int* t1738 = base1737->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1739 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1736->_M_impl) + 0);
    int* t1740 = base1739->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1741 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1736->_M_impl) + 0);
    int* t1742 = base1741->_M_start;
    long diff1743 = t1740 - t1742;
    unsigned long cast1744 = (unsigned long)diff1743;
    std___Vector_base_int__std__allocator_int______M_deallocate(t1736, t1738, cast1744);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t1736->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v1745) {
bb1746: ;
  struct std____new_allocator_int_* this1747;
  this1747 = v1745;
  struct std____new_allocator_int_* t1748 = this1747;
  return;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator_2(struct std__allocator_int_* v1749) {
bb1750: ;
  struct std__allocator_int_* this1751;
  this1751 = v1749;
  struct std__allocator_int_* t1752 = this1751;
  struct std____new_allocator_int_* base1753 = (struct std____new_allocator_int_*)((char *)t1752 + 0);
  std____new_allocator_int_____new_allocator_2(base1753);
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v1754, unsigned long* v1755) {
bb1756: ;
  unsigned long* __a1757;
  unsigned long* __b1758;
  unsigned long* __retval1759;
  __a1757 = v1754;
  __b1758 = v1755;
    unsigned long* t1760 = __b1758;
    unsigned long t1761 = *t1760;
    unsigned long* t1762 = __a1757;
    unsigned long t1763 = *t1762;
    _Bool c1764 = ((t1761 < t1763)) ? 1 : 0;
    if (c1764) {
      unsigned long* t1765 = __b1758;
      __retval1759 = t1765;
      unsigned long* t1766 = __retval1759;
      return t1766;
    }
  unsigned long* t1767 = __a1757;
  __retval1759 = t1767;
  unsigned long* t1768 = __retval1759;
  return t1768;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v1769) {
bb1770: ;
  struct std__allocator_int_* __a1771;
  unsigned long __retval1772;
  unsigned long __diffmax1773;
  unsigned long __allocmax1774;
  __a1771 = v1769;
  unsigned long c1775 = 2305843009213693951;
  __diffmax1773 = c1775;
  unsigned long c1776 = 4611686018427387903;
  __allocmax1774 = c1776;
  unsigned long* r1777 = unsigned_long_const__std__min_unsigned_long_(&__diffmax1773, &__allocmax1774);
  unsigned long t1778 = *r1777;
  __retval1772 = t1778;
  unsigned long t1779 = __retval1772;
  return t1779;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v1780, struct std__allocator_int_* v1781) {
bb1782: ;
  struct std__allocator_int_* this1783;
  struct std__allocator_int_* __a1784;
  this1783 = v1780;
  __a1784 = v1781;
  struct std__allocator_int_* t1785 = this1783;
  struct std____new_allocator_int_* base1786 = (struct std____new_allocator_int_*)((char *)t1785 + 0);
  struct std__allocator_int_* t1787 = __a1784;
  struct std____new_allocator_int_* base1788 = (struct std____new_allocator_int_*)((char *)t1787 + 0);
  std____new_allocator_int_____new_allocator(base1786, base1788);
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v1789) {
bb1790: ;
  struct std__allocator_int_* this1791;
  this1791 = v1789;
  struct std__allocator_int_* t1792 = this1791;
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long v1793, struct std__allocator_int_* v1794) {
bb1795: ;
  unsigned long __n1796;
  struct std__allocator_int_* __a1797;
  unsigned long __retval1798;
  __n1796 = v1793;
  __a1797 = v1794;
    struct std__allocator_int_ ref_tmp01799;
    _Bool tmp_exprcleanup1800;
    unsigned long t1801 = __n1796;
    struct std__allocator_int_* t1802 = __a1797;
    std__allocator_int___allocator(&ref_tmp01799, t1802);
      unsigned long r1803 = std__vector_int__std__allocator_int______S_max_size(&ref_tmp01799);
      _Bool c1804 = ((t1801 > r1803)) ? 1 : 0;
      tmp_exprcleanup1800 = c1804;
    {
      std__allocator_int____allocator(&ref_tmp01799);
    }
    _Bool t1805 = tmp_exprcleanup1800;
    if (t1805) {
      char* cast1806 = (char*)&(_str_7);
      std____throw_length_error(cast1806);
    }
  unsigned long t1807 = __n1796;
  __retval1798 = t1807;
  unsigned long t1808 = __retval1798;
  return t1808;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1809, struct std__allocator_int_* v1810) {
bb1811: ;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1812;
  struct std__allocator_int_* __a1813;
  this1812 = v1809;
  __a1813 = v1810;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1814 = this1812;
  struct std__allocator_int_* base1815 = (struct std__allocator_int_*)((char *)t1814 + 0);
  struct std__allocator_int_* t1816 = __a1813;
  std__allocator_int___allocator(base1815, t1816);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1817 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t1814 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base1817);
  return;
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v1818) {
bb1819: ;
  struct std____new_allocator_int_* this1820;
  unsigned long __retval1821;
  this1820 = v1818;
  struct std____new_allocator_int_* t1822 = this1820;
  unsigned long c1823 = 9223372036854775807;
  unsigned long c1824 = 4;
  unsigned long b1825 = c1823 / c1824;
  __retval1821 = b1825;
  unsigned long t1826 = __retval1821;
  return t1826;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v1827, unsigned long v1828, void* v1829) {
bb1830: ;
  struct std____new_allocator_int_* this1831;
  unsigned long __n1832;
  void* unnamed1833;
  int* __retval1834;
  this1831 = v1827;
  __n1832 = v1828;
  unnamed1833 = v1829;
  struct std____new_allocator_int_* t1835 = this1831;
    unsigned long t1836 = __n1832;
    unsigned long r1837 = std____new_allocator_int____M_max_size___const(t1835);
    _Bool c1838 = ((t1836 > r1837)) ? 1 : 0;
    if (c1838) {
        unsigned long t1839 = __n1832;
        unsigned long c1840 = -1;
        unsigned long c1841 = 4;
        unsigned long b1842 = c1840 / c1841;
        _Bool c1843 = ((t1839 > b1842)) ? 1 : 0;
        if (c1843) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c1844 = 4;
    unsigned long c1845 = 16;
    _Bool c1846 = ((c1844 > c1845)) ? 1 : 0;
    if (c1846) {
      unsigned long __al1847;
      unsigned long c1848 = 4;
      __al1847 = c1848;
      unsigned long t1849 = __n1832;
      unsigned long c1850 = 4;
      unsigned long b1851 = t1849 * c1850;
      unsigned long t1852 = __al1847;
      void* r1853 = operator_new_2(b1851, t1852);
      int* cast1854 = (int*)r1853;
      __retval1834 = cast1854;
      int* t1855 = __retval1834;
      return t1855;
    }
  unsigned long t1856 = __n1832;
  unsigned long c1857 = 4;
  unsigned long b1858 = t1856 * c1857;
  void* r1859 = operator_new(b1858);
  int* cast1860 = (int*)r1859;
  __retval1834 = cast1860;
  int* t1861 = __retval1834;
  return t1861;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v1862, unsigned long v1863) {
bb1864: ;
  struct std__allocator_int_* this1865;
  unsigned long __n1866;
  int* __retval1867;
  this1865 = v1862;
  __n1866 = v1863;
  struct std__allocator_int_* t1868 = this1865;
    _Bool r1869 = std____is_constant_evaluated();
    if (r1869) {
        unsigned long t1870 = __n1866;
        unsigned long c1871 = 4;
        unsigned long ovr1872;
        _Bool ovf1873 = __builtin_mul_overflow(t1870, c1871, &ovr1872);
        __n1866 = ovr1872;
        if (ovf1873) {
          std____throw_bad_array_new_length();
        }
      unsigned long t1874 = __n1866;
      void* r1875 = operator_new(t1874);
      int* cast1876 = (int*)r1875;
      __retval1867 = cast1876;
      int* t1877 = __retval1867;
      return t1877;
    }
  struct std____new_allocator_int_* base1878 = (struct std____new_allocator_int_*)((char *)t1868 + 0);
  unsigned long t1879 = __n1866;
  void* c1880 = ((void*)0);
  int* r1881 = std____new_allocator_int___allocate(base1878, t1879, c1880);
  __retval1867 = r1881;
  int* t1882 = __retval1867;
  return t1882;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v1883, unsigned long v1884) {
bb1885: ;
  struct std__allocator_int_* __a1886;
  unsigned long __n1887;
  int* __retval1888;
  __a1886 = v1883;
  __n1887 = v1884;
  struct std__allocator_int_* t1889 = __a1886;
  unsigned long t1890 = __n1887;
  int* r1891 = std__allocator_int___allocate(t1889, t1890);
  __retval1888 = r1891;
  int* t1892 = __retval1888;
  return t1892;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v1893, unsigned long v1894) {
bb1895: ;
  struct std___Vector_base_int__std__allocator_int__* this1896;
  unsigned long __n1897;
  int* __retval1898;
  this1896 = v1893;
  __n1897 = v1894;
  struct std___Vector_base_int__std__allocator_int__* t1899 = this1896;
  unsigned long t1900 = __n1897;
  unsigned long c1901 = 0;
  _Bool c1902 = ((t1900 != c1901)) ? 1 : 0;
  int* ternary1903;
  if (c1902) {
    struct std__allocator_int_* base1904 = (struct std__allocator_int_*)((char *)&(t1899->_M_impl) + 0);
    unsigned long t1905 = __n1897;
    int* r1906 = std__allocator_traits_std__allocator_int_____allocate(base1904, t1905);
    ternary1903 = (int*)r1906;
  } else {
    int* c1907 = ((void*)0);
    ternary1903 = (int*)c1907;
  }
  __retval1898 = ternary1903;
  int* t1908 = __retval1898;
  return t1908;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_M_create_storageEm
void std___Vector_base_int__std__allocator_int______M_create_storage(struct std___Vector_base_int__std__allocator_int__* v1909, unsigned long v1910) {
bb1911: ;
  struct std___Vector_base_int__std__allocator_int__* this1912;
  unsigned long __n1913;
  this1912 = v1909;
  __n1913 = v1910;
  struct std___Vector_base_int__std__allocator_int__* t1914 = this1912;
  unsigned long t1915 = __n1913;
  int* r1916 = std___Vector_base_int__std__allocator_int______M_allocate(t1914, t1915);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1917 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1914->_M_impl) + 0);
  base1917->_M_start = r1916;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1918 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1914->_M_impl) + 0);
  int* t1919 = base1918->_M_start;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1920 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1914->_M_impl) + 0);
  base1920->_M_finish = t1919;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1921 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1914->_M_impl) + 0);
  int* t1922 = base1921->_M_start;
  unsigned long t1923 = __n1913;
  int* ptr1924 = &(t1922)[t1923];
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1925 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1914->_M_impl) + 0);
  base1925->_M_end_of_storage = ptr1924;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2EmRKS0_
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1926, unsigned long v1927, struct std__allocator_int_* v1928) {
bb1929: ;
  struct std___Vector_base_int__std__allocator_int__* this1930;
  unsigned long __n1931;
  struct std__allocator_int_* __a1932;
  this1930 = v1926;
  __n1931 = v1927;
  __a1932 = v1928;
  struct std___Vector_base_int__std__allocator_int__* t1933 = this1930;
  struct std__allocator_int_* t1934 = __a1932;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t1933->_M_impl, t1934);
    unsigned long t1935 = __n1931;
    std___Vector_base_int__std__allocator_int______M_create_storage(t1933, t1935);
  return;
}

// function: _ZNSt6vectorIiSaIiEE18_M_fill_initializeEmRKi
void std__vector_int__std__allocator_int______M_fill_initialize(struct std__vector_int__std__allocator_int__* v1936, unsigned long v1937, int* v1938) {
bb1939: ;
  struct std__vector_int__std__allocator_int__* this1940;
  unsigned long __n1941;
  int* __value1942;
  this1940 = v1936;
  __n1941 = v1937;
  __value1942 = v1938;
  struct std__vector_int__std__allocator_int__* t1943 = this1940;
  struct std___Vector_base_int__std__allocator_int__* base1944 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1943 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1945 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1944->_M_impl) + 0);
  int* t1946 = base1945->_M_start;
  unsigned long t1947 = __n1941;
  int* t1948 = __value1942;
  struct std___Vector_base_int__std__allocator_int__* base1949 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1943 + 0);
  struct std__allocator_int_* r1950 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1949);
  int* r1951 = int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(t1946, t1947, t1948, r1950);
  struct std___Vector_base_int__std__allocator_int__* base1952 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1943 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1953 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1952->_M_impl) + 0);
  base1953->_M_finish = r1951;
  return;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1954, struct std____new_allocator_int_* v1955) {
bb1956: ;
  struct std____new_allocator_int_* this1957;
  struct std____new_allocator_int_* unnamed1958;
  this1957 = v1954;
  unnamed1958 = v1955;
  struct std____new_allocator_int_* t1959 = this1957;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v1960) {
bb1961: ;
  int* __location1962;
  __location1962 = v1960;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1963, int* v1964) {
bb1965: ;
  int* __first1966;
  int* __last1967;
  __first1966 = v1963;
  __last1967 = v1964;
      _Bool r1968 = std____is_constant_evaluated();
      if (r1968) {
          while (1) {
            int* t1970 = __first1966;
            int* t1971 = __last1967;
            _Bool c1972 = ((t1970 != t1971)) ? 1 : 0;
            if (!c1972) break;
            int* t1973 = __first1966;
            void_std__destroy_at_int_(t1973);
          for_step1969: ;
            int* t1974 = __first1966;
            int c1975 = 1;
            int* ptr1976 = &(t1974)[c1975];
            __first1966 = ptr1976;
          }
      }
  return;
}

