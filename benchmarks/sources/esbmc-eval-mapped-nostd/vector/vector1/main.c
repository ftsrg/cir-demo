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
struct std__ranges____distance_fn { unsigned char __field0; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int __const_main_myints[4] = {16, 2, 77, 29};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[27] = "The contents of fifth are:";
char _str_1[2] = " ";
char _str_2[49] = "cannot create std::vector larger than max_size()";
char _str_3[98] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_uninitialized.h";
char __PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_[140] = "_ForwardIterator std::__do_uninit_fill_n(_ForwardIterator, _Size _Tp &) [_ForwardIterator = int *, _Size = unsigned long, _Tp = int]";
char _str_4[9] = "__n >= 0";
struct std__ranges____distance_fn _ZNSt6ranges8distanceE;
char _str_5[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_6[19] = "__n < this->size()";
void std__vector_int__std__allocator_int_____vector_3(struct std__vector_int__std__allocator_int__* p0);
void std__allocator_int___allocator_2(struct std__allocator_int_* p0);
void std__vector_int__std__allocator_int_____vector_2(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, int* p2, struct std__allocator_int_* p3);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* p0);
void std__vector_int__std__allocator_int_____vector___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______void_(struct std__vector_int__std__allocator_int__* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2, struct std__allocator_int_* p3);
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0, struct std__vector_int__std__allocator_int__* p1);
void std__vector_int__std__allocator_int_____vector_int___void_(struct std__vector_int__std__allocator_int__* p0, int* p1, int* p2, struct std__allocator_int_* p3);
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
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
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
void std___Vector_base_int__std__allocator_int______Vector_base_3(struct std___Vector_base_int__std__allocator_int__* p0);
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
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* p0);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* p0);
void std__allocator_int___allocator(struct std__allocator_int_* p0, struct std__allocator_int_* p1);
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
void std___Vector_base_int__std__allocator_int______Vector_base_2(struct std___Vector_base_int__std__allocator_int__* p0, unsigned long p1, struct std__allocator_int_* p2);
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
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* p0, struct std____new_allocator_int_* p1);
void void_std__destroy_at_int_(int* p0);
void void_std___Destroy_int__(int* p0, int* p1);
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* p0, struct std__allocator_int_* p1);
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
long _ZNKSt6ranges13__distance_fnclIRN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEETkSt18sized_sentinel_forINSt5decayIT_E4typeEES8_EENSt8__detail18__iter_traits_implINSt12remove_cvrefISE_E4typeESt20incrementable_traitsISJ_EE4type15difference_typeEOSC_T0_(struct std__ranges____distance_fn* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* p0, int* p1);
void void_std___Construct_int__int__(int* p0, int* p1);
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
int* int__std____do_uninit_copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2);
extern void* memcpy(void* p0, void* p1, unsigned long p2);
int* int__std____niter_base_int__(int* p0);
int* int__std____niter_base_int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0);
int* int__std__uninitialized_copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2);
int* int__std____uninitialized_copy_a___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2, struct std__allocator_int_* p3);
void void_std__vector_int__std__allocator_int______M_range_initialize_n___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct std__vector_int__std__allocator_int__* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2, unsigned long p3);
struct std__allocator_int_ std__allocator_traits_std__allocator_int_____select_on_container_copy_construction(struct std__allocator_int_* p0);
struct std__allocator_int_ __gnu_cxx____alloc_traits_std__allocator_int___int____S_select_on_copy(struct std__allocator_int_* p0);
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Vector_base_int__std__allocator_int__* p0);
int** __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0);
_Bool _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p1);
int* __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0);
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0);
int* int__std____do_uninit_copy___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p1, int* p2);
long __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int_const___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p1);
int* int_const__std____niter_base_int_const___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p0);
int* int__std__uninitialized_copy___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p1, int* p2);
int* int__std____uninitialized_copy_a___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______int___int_(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p1, int* p2, struct std__allocator_int_* p3);
void __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin___const(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end___const(struct std__vector_int__std__allocator_int__* p0);
long _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_(struct std__ranges____distance_fn* p0, int** p1, int* p2);
int* int__std____do_uninit_copy_int___int___int__(int* p0, int* p1, int* p2);
int* int__std__uninitialized_copy_int___int__(int* p0, int* p1, int* p2);
int* int__std____uninitialized_copy_a_int___int___int___int_(int* p0, int* p1, int* p2, struct std__allocator_int_* p3);
void void_std__vector_int__std__allocator_int______M_range_initialize_n_int___int__(struct std__vector_int__std__allocator_int__* p0, int* p1, int* p2, unsigned long p3);
void void_std___Destroy_int___int_(int* p0, int* p1, struct std__allocator_int_* p2);

// function: _ZNSt6vectorIiSaIiEEC2Ev
void std__vector_int__std__allocator_int_____vector_3(struct std__vector_int__std__allocator_int__* v0) {
bb1:
  struct std__vector_int__std__allocator_int__* this2;
  this2 = v0;
  struct std__vector_int__std__allocator_int__* t3 = this2;
  struct std___Vector_base_int__std__allocator_int__* base4 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t3 + 0);
  std___Vector_base_int__std__allocator_int______Vector_base_3(base4);
  return;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator_2(struct std__allocator_int_* v5) {
bb6:
  struct std__allocator_int_* this7;
  this7 = v5;
  struct std__allocator_int_* t8 = this7;
  struct std____new_allocator_int_* base9 = (struct std____new_allocator_int_*)((char *)t8 + 0);
  std____new_allocator_int_____new_allocator_2(base9);
  return;
}

// function: _ZNSt6vectorIiSaIiEEC2EmRKiRKS0_
void std__vector_int__std__allocator_int_____vector_2(struct std__vector_int__std__allocator_int__* v10, unsigned long v11, int* v12, struct std__allocator_int_* v13) {
bb14:
  struct std__vector_int__std__allocator_int__* this15;
  unsigned long __n16;
  int* __value17;
  struct std__allocator_int_* __a18;
  this15 = v10;
  __n16 = v11;
  __value17 = v12;
  __a18 = v13;
  struct std__vector_int__std__allocator_int__* t19 = this15;
  struct std___Vector_base_int__std__allocator_int__* base20 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t19 + 0);
  unsigned long t21 = __n16;
  struct std__allocator_int_* t22 = __a18;
  unsigned long r23 = std__vector_int__std__allocator_int______S_check_init_len(t21, t22);
  struct std__allocator_int_* t24 = __a18;
  std___Vector_base_int__std__allocator_int______Vector_base_2(base20, r23, t24);
    unsigned long t25 = __n16;
    int* t26 = __value17;
    std__vector_int__std__allocator_int______M_fill_initialize(t19, t25, t26);
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v27) {
bb28:
  struct std__allocator_int_* this29;
  this29 = v27;
  struct std__allocator_int_* t30 = this29;
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v31, int** v32) {
bb33:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this34;
  int** __i35;
  this34 = v31;
  __i35 = v32;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t36 = this34;
  int** t37 = __i35;
  int* t38 = *t37;
  t36->_M_current = t38;
  return;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v39) {
bb40:
  struct std__vector_int__std__allocator_int__* this41;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval42;
  this41 = v39;
  struct std__vector_int__std__allocator_int__* t43 = this41;
  struct std___Vector_base_int__std__allocator_int__* base44 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t43 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base45 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base44->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval42, &base45->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t46 = __retval42;
  return t46;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v47) {
bb48:
  struct std__vector_int__std__allocator_int__* this49;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval50;
  this49 = v47;
  struct std__vector_int__std__allocator_int__* t51 = this49;
  struct std___Vector_base_int__std__allocator_int__* base52 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t51 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base53 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base52->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval50, &base53->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t54 = __retval50;
  return t54;
}

// function: _ZNSt6vectorIiSaIiEEC2IN9__gnu_cxx17__normal_iteratorIPiS1_EEvEET_S7_RKS0_
void std__vector_int__std__allocator_int_____vector___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______void_(struct std__vector_int__std__allocator_int__* v55, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v56, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v57, struct std__allocator_int_* v58) {
bb59:
  struct std__vector_int__std__allocator_int__* this60;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first61;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last62;
  struct std__allocator_int_* __a63;
  this60 = v55;
  __first61 = v56;
  __last62 = v57;
  __a63 = v58;
  struct std__vector_int__std__allocator_int__* t64 = this60;
  struct std___Vector_base_int__std__allocator_int__* base65 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t64 + 0);
  struct std__allocator_int_* t66 = __a63;
  std___Vector_base_int__std__allocator_int______Vector_base(base65, t66);
      unsigned long __n67;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp068;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp169;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp270;
      agg_tmp068 = __last62; // copy
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t71 = agg_tmp068;
      long r72 = _ZNKSt6ranges13__distance_fnclIRN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEETkSt18sized_sentinel_forINSt5decayIT_E4typeEES8_EENSt8__detail18__iter_traits_implINSt12remove_cvrefISE_E4typeESt20incrementable_traitsISJ_EE4type15difference_typeEOSC_T0_(&_ZNSt6ranges8distanceE, &__first61, t71);
      unsigned long cast73 = (unsigned long)r72;
      __n67 = cast73;
      agg_tmp169 = __first61; // copy
      agg_tmp270 = __last62; // copy
      unsigned long t74 = __n67;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t75 = agg_tmp169;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t76 = agg_tmp270;
      void_std__vector_int__std__allocator_int______M_range_initialize_n___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t64, t75, t76, t74);
      {
        struct std___Vector_base_int__std__allocator_int__* base77 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t64 + 0);
        std___Vector_base_int__std__allocator_int_______Vector_base(base77);
      }
      return;
  return;
}

// function: _ZNSt6vectorIiSaIiEEC2ERKS1_
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* v78, struct std__vector_int__std__allocator_int__* v79) {
bb80:
  struct std__vector_int__std__allocator_int__* this81;
  struct std__vector_int__std__allocator_int__* __x82;
  struct std__allocator_int_ ref_tmp083;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp084;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp185;
  this81 = v78;
  __x82 = v79;
  struct std__vector_int__std__allocator_int__* t86 = this81;
  struct std___Vector_base_int__std__allocator_int__* base87 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t86 + 0);
  struct std__vector_int__std__allocator_int__* t88 = __x82;
  unsigned long r89 = std__vector_int__std__allocator_int_____size___const(t88);
  struct std__vector_int__std__allocator_int__* t90 = __x82;
  struct std___Vector_base_int__std__allocator_int__* base91 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t90 + 0);
  struct std__allocator_int_* r92 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(base91);
  struct std__allocator_int_ r93 = __gnu_cxx____alloc_traits_std__allocator_int___int____S_select_on_copy(r92);
  ref_tmp083 = r93;
    std___Vector_base_int__std__allocator_int______Vector_base_2(base87, r89, &ref_tmp083);
  {
    std__allocator_int____allocator(&ref_tmp083);
  }
    struct std__vector_int__std__allocator_int__* t94 = __x82;
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r95 = std__vector_int__std__allocator_int_____begin___const(t94);
    agg_tmp084 = r95;
    struct std__vector_int__std__allocator_int__* t96 = __x82;
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r97 = std__vector_int__std__allocator_int_____end___const(t96);
    agg_tmp185 = r97;
    struct std___Vector_base_int__std__allocator_int__* base98 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t86 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base99 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base98->_M_impl) + 0);
    int* t100 = base99->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base101 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t86 + 0);
    struct std__allocator_int_* r102 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base101);
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t103 = agg_tmp084;
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t104 = agg_tmp185;
    int* r105 = int__std____uninitialized_copy_a___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______int___int_(t103, t104, t100, r102);
    struct std___Vector_base_int__std__allocator_int__* base106 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t86 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base107 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base106->_M_impl) + 0);
    base107->_M_finish = r105;
  return;
}

// function: _ZNSt6vectorIiSaIiEEC2IPivEET_S4_RKS0_
void std__vector_int__std__allocator_int_____vector_int___void_(struct std__vector_int__std__allocator_int__* v108, int* v109, int* v110, struct std__allocator_int_* v111) {
bb112:
  struct std__vector_int__std__allocator_int__* this113;
  int* __first114;
  int* __last115;
  struct std__allocator_int_* __a116;
  this113 = v108;
  __first114 = v109;
  __last115 = v110;
  __a116 = v111;
  struct std__vector_int__std__allocator_int__* t117 = this113;
  struct std___Vector_base_int__std__allocator_int__* base118 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t117 + 0);
  struct std__allocator_int_* t119 = __a116;
  std___Vector_base_int__std__allocator_int______Vector_base(base118, t119);
      unsigned long __n120;
      int* t121 = __last115;
      long r122 = _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_(&_ZNSt6ranges8distanceE, &__first114, t121);
      unsigned long cast123 = (unsigned long)r122;
      __n120 = cast123;
      int* t124 = __first114;
      int* t125 = __last115;
      unsigned long t126 = __n120;
      void_std__vector_int__std__allocator_int______M_range_initialize_n_int___int__(t117, t124, t125, t126);
      {
        struct std___Vector_base_int__std__allocator_int__* base127 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t117 + 0);
        std___Vector_base_int__std__allocator_int_______Vector_base(base127);
      }
      return;
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v128, int v129) {
bb130:
  int __a131;
  int __b132;
  int __retval133;
  __a131 = v128;
  __b132 = v129;
  int t134 = __a131;
  int t135 = __b132;
  int b136 = t134 | t135;
  __retval133 = b136;
  int t137 = __retval133;
  return t137;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v138) {
bb139:
  struct std__basic_ios_char__std__char_traits_char__* this140;
  int __retval141;
  this140 = v138;
  struct std__basic_ios_char__std__char_traits_char__* t142 = this140;
  struct std__ios_base* base143 = (struct std__ios_base*)((char *)t142 + 0);
  int t144 = base143->_M_streambuf_state;
  __retval141 = t144;
  int t145 = __retval141;
  return t145;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v146, int v147) {
bb148:
  struct std__basic_ios_char__std__char_traits_char__* this149;
  int __state150;
  this149 = v146;
  __state150 = v147;
  struct std__basic_ios_char__std__char_traits_char__* t151 = this149;
  int r152 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t151);
  int t153 = __state150;
  int r154 = std__operator_(r152, t153);
  std__basic_ios_char__std__char_traits_char_____clear(t151, r154);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v155, char* v156) {
bb157:
  char* __c1158;
  char* __c2159;
  _Bool __retval160;
  __c1158 = v155;
  __c2159 = v156;
  char* t161 = __c1158;
  char t162 = *t161;
  int cast163 = (int)t162;
  char* t164 = __c2159;
  char t165 = *t164;
  int cast166 = (int)t165;
  _Bool c167 = ((cast163 == cast166)) ? 1 : 0;
  __retval160 = c167;
  _Bool t168 = __retval160;
  return t168;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v169) {
bb170:
  char* __p171;
  unsigned long __retval172;
  unsigned long __i173;
  __p171 = v169;
  unsigned long c174 = 0;
  __i173 = c174;
    char ref_tmp0175;
    while (1) {
      unsigned long t176 = __i173;
      char* t177 = __p171;
      char* ptr178 = &(t177)[t176];
      char c179 = 0;
      ref_tmp0175 = c179;
      _Bool r180 = __gnu_cxx__char_traits_char___eq(ptr178, &ref_tmp0175);
      _Bool u181 = !r180;
      if (!u181) break;
      unsigned long t182 = __i173;
      unsigned long u183 = t182 + 1;
      __i173 = u183;
    }
  unsigned long t184 = __i173;
  __retval172 = t184;
  unsigned long t185 = __retval172;
  return t185;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v186) {
bb187:
  char* __s188;
  unsigned long __retval189;
  __s188 = v186;
    _Bool r190 = std____is_constant_evaluated();
    if (r190) {
      char* t191 = __s188;
      unsigned long r192 = __gnu_cxx__char_traits_char___length(t191);
      __retval189 = r192;
      unsigned long t193 = __retval189;
      return t193;
    }
  char* t194 = __s188;
  unsigned long r195 = strlen(t194);
  __retval189 = r195;
  unsigned long t196 = __retval189;
  return t196;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v197, char* v198) {
bb199:
  struct std__basic_ostream_char__std__char_traits_char__* __out200;
  char* __s201;
  struct std__basic_ostream_char__std__char_traits_char__* __retval202;
  __out200 = v197;
  __s201 = v198;
    char* t203 = __s201;
    _Bool cast204 = (_Bool)t203;
    _Bool u205 = !cast204;
    if (u205) {
      struct std__basic_ostream_char__std__char_traits_char__* t206 = __out200;
      void** v207 = (void**)t206;
      void* v208 = *((void**)v207);
      unsigned char* cast209 = (unsigned char*)v208;
      long c210 = -24;
      unsigned char* ptr211 = &(cast209)[c210];
      long* cast212 = (long*)ptr211;
      long t213 = *cast212;
      unsigned char* cast214 = (unsigned char*)t206;
      unsigned char* ptr215 = &(cast214)[t213];
      struct std__basic_ostream_char__std__char_traits_char__* cast216 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr215;
      struct std__basic_ios_char__std__char_traits_char__* cast217 = (struct std__basic_ios_char__std__char_traits_char__*)cast216;
      int t218 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast217, t218);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t219 = __out200;
      char* t220 = __s201;
      char* t221 = __s201;
      unsigned long r222 = std__char_traits_char___length(t221);
      long cast223 = (long)r222;
      struct std__basic_ostream_char__std__char_traits_char__* r224 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t219, t220, cast223);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t225 = __out200;
  __retval202 = t225;
  struct std__basic_ostream_char__std__char_traits_char__* t226 = __retval202;
  return t226;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v227) {
bb228:
  struct std__vector_int__std__allocator_int__* this229;
  unsigned long __retval230;
  long __dif231;
  this229 = v227;
  struct std__vector_int__std__allocator_int__* t232 = this229;
  struct std___Vector_base_int__std__allocator_int__* base233 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t232 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base234 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base233->_M_impl) + 0);
  int* t235 = base234->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base236 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t232 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base237 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base236->_M_impl) + 0);
  int* t238 = base237->_M_start;
  long diff239 = t235 - t238;
  __dif231 = diff239;
    long t240 = __dif231;
    long c241 = 0;
    _Bool c242 = ((t240 < c241)) ? 1 : 0;
    if (c242) {
      __builtin_unreachable();
    }
  long t243 = __dif231;
  unsigned long cast244 = (unsigned long)t243;
  __retval230 = cast244;
  unsigned long t245 = __retval230;
  return t245;
}

// function: _ZNSt6vectorIiSaIiEEixEm
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* v246, unsigned long v247) {
bb248:
  struct std__vector_int__std__allocator_int__* this249;
  unsigned long __n250;
  int* __retval251;
  this249 = v246;
  __n250 = v247;
  struct std__vector_int__std__allocator_int__* t252 = this249;
    do {
          unsigned long t253 = __n250;
          unsigned long r254 = std__vector_int__std__allocator_int_____size___const(t252);
          _Bool c255 = ((t253 < r254)) ? 1 : 0;
          _Bool u256 = !c255;
          if (u256) {
            char* cast257 = (char*)&(_str_5);
            int c258 = 1263;
            char* cast259 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm);
            char* cast260 = (char*)&(_str_6);
            std____glibcxx_assert_fail(cast257, c258, cast259, cast260);
          }
      _Bool c261 = 0;
      if (!c261) break;
    } while (1);
  struct std___Vector_base_int__std__allocator_int__* base262 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t252 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base263 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base262->_M_impl) + 0);
  int* t264 = base263->_M_start;
  unsigned long t265 = __n250;
  int* ptr266 = &(t264)[t265];
  __retval251 = ptr266;
  int* t267 = __retval251;
  return t267;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v268, void* v269) {
bb270:
  struct std__basic_ostream_char__std__char_traits_char__* this271;
  void* __pf272;
  struct std__basic_ostream_char__std__char_traits_char__* __retval273;
  this271 = v268;
  __pf272 = v269;
  struct std__basic_ostream_char__std__char_traits_char__* t274 = this271;
  void* t275 = __pf272;
  struct std__basic_ostream_char__std__char_traits_char__* r276 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t275)(t274);
  __retval273 = r276;
  struct std__basic_ostream_char__std__char_traits_char__* t277 = __retval273;
  return t277;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v278) {
bb279:
  struct std__basic_ostream_char__std__char_traits_char__* __os280;
  struct std__basic_ostream_char__std__char_traits_char__* __retval281;
  __os280 = v278;
  struct std__basic_ostream_char__std__char_traits_char__* t282 = __os280;
  struct std__basic_ostream_char__std__char_traits_char__* r283 = std__ostream__flush(t282);
  __retval281 = r283;
  struct std__basic_ostream_char__std__char_traits_char__* t284 = __retval281;
  return t284;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v285) {
bb286:
  struct std__ctype_char_* __f287;
  struct std__ctype_char_* __retval288;
  __f287 = v285;
    struct std__ctype_char_* t289 = __f287;
    _Bool cast290 = (_Bool)t289;
    _Bool u291 = !cast290;
    if (u291) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t292 = __f287;
  __retval288 = t292;
  struct std__ctype_char_* t293 = __retval288;
  return t293;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v294, char v295) {
bb296:
  struct std__ctype_char_* this297;
  char __c298;
  char __retval299;
  this297 = v294;
  __c298 = v295;
  struct std__ctype_char_* t300 = this297;
    char t301 = t300->_M_widen_ok;
    _Bool cast302 = (_Bool)t301;
    if (cast302) {
      char t303 = __c298;
      unsigned char cast304 = (unsigned char)t303;
      unsigned long cast305 = (unsigned long)cast304;
      char t306 = t300->_M_widen[cast305];
      __retval299 = t306;
      char t307 = __retval299;
      return t307;
    }
  std__ctype_char____M_widen_init___const(t300);
  char t308 = __c298;
  void** v309 = (void**)t300;
  void* v310 = *((void**)v309);
  char vcall313 = (char)__VERIFIER_virtual_call_char_char(t300, 6, t308);
  __retval299 = vcall313;
  char t314 = __retval299;
  return t314;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v315, char v316) {
bb317:
  struct std__basic_ios_char__std__char_traits_char__* this318;
  char __c319;
  char __retval320;
  this318 = v315;
  __c319 = v316;
  struct std__basic_ios_char__std__char_traits_char__* t321 = this318;
  struct std__ctype_char_* t322 = t321->_M_ctype;
  struct std__ctype_char_* r323 = std__ctype_char__const__std____check_facet_std__ctype_char___(t322);
  char t324 = __c319;
  char r325 = std__ctype_char___widen_char__const(r323, t324);
  __retval320 = r325;
  char t326 = __retval320;
  return t326;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v327) {
bb328:
  struct std__basic_ostream_char__std__char_traits_char__* __os329;
  struct std__basic_ostream_char__std__char_traits_char__* __retval330;
  __os329 = v327;
  struct std__basic_ostream_char__std__char_traits_char__* t331 = __os329;
  struct std__basic_ostream_char__std__char_traits_char__* t332 = __os329;
  void** v333 = (void**)t332;
  void* v334 = *((void**)v333);
  unsigned char* cast335 = (unsigned char*)v334;
  long c336 = -24;
  unsigned char* ptr337 = &(cast335)[c336];
  long* cast338 = (long*)ptr337;
  long t339 = *cast338;
  unsigned char* cast340 = (unsigned char*)t332;
  unsigned char* ptr341 = &(cast340)[t339];
  struct std__basic_ostream_char__std__char_traits_char__* cast342 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr341;
  struct std__basic_ios_char__std__char_traits_char__* cast343 = (struct std__basic_ios_char__std__char_traits_char__*)cast342;
  char c344 = 10;
  char r345 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast343, c344);
  struct std__basic_ostream_char__std__char_traits_char__* r346 = std__ostream__put(t331, r345);
  struct std__basic_ostream_char__std__char_traits_char__* r347 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r346);
  __retval330 = r347;
  struct std__basic_ostream_char__std__char_traits_char__* t348 = __retval330;
  return t348;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v349) {
bb350:
  struct std__vector_int__std__allocator_int__* this351;
  this351 = v349;
  struct std__vector_int__std__allocator_int__* t352 = this351;
    struct std___Vector_base_int__std__allocator_int__* base353 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t352 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base354 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base353->_M_impl) + 0);
    int* t355 = base354->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base356 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t352 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base357 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base356->_M_impl) + 0);
    int* t358 = base357->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base359 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t352 + 0);
    struct std__allocator_int_* r360 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base359);
    void_std___Destroy_int___int_(t355, t358, r360);
  {
    struct std___Vector_base_int__std__allocator_int__* base361 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t352 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base361);
  }
  return;
}

// function: main
int main() {
bb362:
  int __retval363;
  unsigned int i364;
  struct std__vector_int__std__allocator_int__ first365;
  struct std__vector_int__std__allocator_int__ second366;
  int ref_tmp0367;
  struct std__allocator_int_ ref_tmp1368;
  struct std__vector_int__std__allocator_int__ third369;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0370;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1371;
  struct std__allocator_int_ ref_tmp2372;
  struct std__vector_int__std__allocator_int__ fourth373;
  int myints374[4];
  struct std__vector_int__std__allocator_int__ fifth375;
  struct std__allocator_int_ ref_tmp3376;
  int c377 = 0;
  __retval363 = c377;
  std__vector_int__std__allocator_int_____vector_3(&first365);
    unsigned long c378 = 4;
    int c379 = 100;
    ref_tmp0367 = c379;
    std__allocator_int___allocator_2(&ref_tmp1368);
      std__vector_int__std__allocator_int_____vector_2(&second366, c378, &ref_tmp0367, &ref_tmp1368);
    {
      std__allocator_int____allocator(&ref_tmp1368);
    }
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r380 = std__vector_int__std__allocator_int_____begin(&second366);
      agg_tmp0370 = r380;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r381 = std__vector_int__std__allocator_int_____end(&second366);
      agg_tmp1371 = r381;
      std__allocator_int___allocator_2(&ref_tmp2372);
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t382 = agg_tmp0370;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t383 = agg_tmp1371;
        std__vector_int__std__allocator_int_____vector___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______void_(&third369, t382, t383, &ref_tmp2372);
      {
        std__allocator_int____allocator(&ref_tmp2372);
      }
        std__vector_int__std__allocator_int_____vector(&fourth373, &third369);
          // array copy
          __builtin_memcpy(myints374, __const_main_myints, (unsigned long)4 * sizeof(__const_main_myints[0]));
          int* cast384 = (int*)&(myints374);
          int* cast385 = (int*)&(myints374);
          unsigned long c386 = 16;
          unsigned long c387 = 4;
          unsigned long b388 = c386 / c387;
          int* ptr389 = &(cast385)[b388];
          std__allocator_int___allocator_2(&ref_tmp3376);
            std__vector_int__std__allocator_int_____vector_int___void_(&fifth375, cast384, ptr389, &ref_tmp3376);
          {
            std__allocator_int____allocator(&ref_tmp3376);
          }
            char* cast390 = (char*)&(_str);
            struct std__basic_ostream_char__std__char_traits_char__* r391 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast390);
              unsigned int c392 = 0;
              i364 = c392;
              while (1) {
                unsigned int t394 = i364;
                unsigned long cast395 = (unsigned long)t394;
                unsigned long r396 = std__vector_int__std__allocator_int_____size___const(&fifth375);
                _Bool c397 = ((cast395 < r396)) ? 1 : 0;
                if (!c397) break;
                char* cast398 = (char*)&(_str_1);
                struct std__basic_ostream_char__std__char_traits_char__* r399 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast398);
                unsigned int t400 = i364;
                unsigned long cast401 = (unsigned long)t400;
                int* r402 = std__vector_int__std__allocator_int_____operator__(&fifth375, cast401);
                int t403 = *r402;
                struct std__basic_ostream_char__std__char_traits_char__* r404 = std__ostream__operator__(r399, t403);
              for_step393: ;
                unsigned int t405 = i364;
                unsigned int u406 = t405 + 1;
                i364 = u406;
              }
            struct std__basic_ostream_char__std__char_traits_char__* r407 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
            int c408 = 0;
            __retval363 = c408;
            int t409 = __retval363;
            int ret_val410 = t409;
            {
              std__vector_int__std__allocator_int______vector(&fifth375);
            }
            {
              std__vector_int__std__allocator_int______vector(&fourth373);
            }
            {
              std__vector_int__std__allocator_int______vector(&third369);
            }
            {
              std__vector_int__std__allocator_int______vector(&second366);
            }
            {
              std__vector_int__std__allocator_int______vector(&first365);
            }
            return ret_val410;
  int t411 = __retval363;
  return t411;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE
void _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v412) {
bb413:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this414;
  this414 = v412;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t415 = this414;
  struct std__allocator_int_* base416 = (struct std__allocator_int_*)((char *)t415 + 0);
  std__allocator_int___allocator_2(base416);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base417 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t415 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base417);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v418) {
bb419:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this420;
  this420 = v418;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t421 = this420;
  {
    struct std__allocator_int_* base422 = (struct std__allocator_int_*)((char *)t421 + 0);
    std__allocator_int____allocator(base422);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2Ev
void std___Vector_base_int__std__allocator_int______Vector_base_3(struct std___Vector_base_int__std__allocator_int__* v423) {
bb424:
  struct std___Vector_base_int__std__allocator_int__* this425;
  this425 = v423;
  struct std___Vector_base_int__std__allocator_int__* t426 = this425;
  _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(&t426->_M_impl);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb427:
  _Bool __retval428;
    _Bool c429 = 0;
    __retval428 = c429;
    _Bool t430 = __retval428;
    return t430;
  abort();
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v431, int* v432, unsigned long v433) {
bb434:
  struct std____new_allocator_int_* this435;
  int* __p436;
  unsigned long __n437;
  this435 = v431;
  __p436 = v432;
  __n437 = v433;
  struct std____new_allocator_int_* t438 = this435;
    unsigned long c439 = 4;
    unsigned long c440 = 16;
    _Bool c441 = ((c439 > c440)) ? 1 : 0;
    if (c441) {
      int* t442 = __p436;
      void* cast443 = (void*)t442;
      unsigned long t444 = __n437;
      unsigned long c445 = 4;
      unsigned long b446 = t444 * c445;
      unsigned long c447 = 4;
      operator_delete_3(cast443, b446, c447);
      return;
    }
  int* t448 = __p436;
  void* cast449 = (void*)t448;
  unsigned long t450 = __n437;
  unsigned long c451 = 4;
  unsigned long b452 = t450 * c451;
  operator_delete_2(cast449, b452);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v453, int* v454, unsigned long v455) {
bb456:
  struct std__allocator_int_* this457;
  int* __p458;
  unsigned long __n459;
  this457 = v453;
  __p458 = v454;
  __n459 = v455;
  struct std__allocator_int_* t460 = this457;
    _Bool r461 = std____is_constant_evaluated();
    if (r461) {
      int* t462 = __p458;
      void* cast463 = (void*)t462;
      operator_delete(cast463);
      return;
    }
  struct std____new_allocator_int_* base464 = (struct std____new_allocator_int_*)((char *)t460 + 0);
  int* t465 = __p458;
  unsigned long t466 = __n459;
  std____new_allocator_int___deallocate(base464, t465, t466);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v467, int* v468, unsigned long v469) {
bb470:
  struct std__allocator_int_* __a471;
  int* __p472;
  unsigned long __n473;
  __a471 = v467;
  __p472 = v468;
  __n473 = v469;
  struct std__allocator_int_* t474 = __a471;
  int* t475 = __p472;
  unsigned long t476 = __n473;
  std__allocator_int___deallocate(t474, t475, t476);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v477, int* v478, unsigned long v479) {
bb480:
  struct std___Vector_base_int__std__allocator_int__* this481;
  int* __p482;
  unsigned long __n483;
  this481 = v477;
  __p482 = v478;
  __n483 = v479;
  struct std___Vector_base_int__std__allocator_int__* t484 = this481;
    int* t485 = __p482;
    _Bool cast486 = (_Bool)t485;
    if (cast486) {
      struct std__allocator_int_* base487 = (struct std__allocator_int_*)((char *)&(t484->_M_impl) + 0);
      int* t488 = __p482;
      unsigned long t489 = __n483;
      std__allocator_traits_std__allocator_int_____deallocate(base487, t488, t489);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v490) {
bb491:
  struct std___Vector_base_int__std__allocator_int__* this492;
  this492 = v490;
  struct std___Vector_base_int__std__allocator_int__* t493 = this492;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base494 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t493->_M_impl) + 0);
    int* t495 = base494->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base496 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t493->_M_impl) + 0);
    int* t497 = base496->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base498 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t493->_M_impl) + 0);
    int* t499 = base498->_M_start;
    long diff500 = t497 - t499;
    unsigned long cast501 = (unsigned long)diff500;
    std___Vector_base_int__std__allocator_int______M_deallocate(t493, t495, cast501);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t493->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v502) {
bb503:
  struct std____new_allocator_int_* this504;
  this504 = v502;
  struct std____new_allocator_int_* t505 = this504;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v506) {
bb507:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this508;
  this508 = v506;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t509 = this508;
  int* c510 = ((void*)0);
  t509->_M_start = c510;
  int* c511 = ((void*)0);
  t509->_M_finish = c511;
  int* c512 = ((void*)0);
  t509->_M_end_of_storage = c512;
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v513, unsigned long* v514) {
bb515:
  unsigned long* __a516;
  unsigned long* __b517;
  unsigned long* __retval518;
  __a516 = v513;
  __b517 = v514;
    unsigned long* t519 = __b517;
    unsigned long t520 = *t519;
    unsigned long* t521 = __a516;
    unsigned long t522 = *t521;
    _Bool c523 = ((t520 < t522)) ? 1 : 0;
    if (c523) {
      unsigned long* t524 = __b517;
      __retval518 = t524;
      unsigned long* t525 = __retval518;
      return t525;
    }
  unsigned long* t526 = __a516;
  __retval518 = t526;
  unsigned long* t527 = __retval518;
  return t527;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v528) {
bb529:
  struct std__allocator_int_* __a530;
  unsigned long __retval531;
  unsigned long __diffmax532;
  unsigned long __allocmax533;
  __a530 = v528;
  unsigned long c534 = 2305843009213693951;
  __diffmax532 = c534;
  unsigned long c535 = 4611686018427387903;
  __allocmax533 = c535;
  unsigned long* r536 = unsigned_long_const__std__min_unsigned_long_(&__diffmax532, &__allocmax533);
  unsigned long t537 = *r536;
  __retval531 = t537;
  unsigned long t538 = __retval531;
  return t538;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v539, struct std__allocator_int_* v540) {
bb541:
  struct std__allocator_int_* this542;
  struct std__allocator_int_* __a543;
  this542 = v539;
  __a543 = v540;
  struct std__allocator_int_* t544 = this542;
  struct std____new_allocator_int_* base545 = (struct std____new_allocator_int_*)((char *)t544 + 0);
  struct std__allocator_int_* t546 = __a543;
  struct std____new_allocator_int_* base547 = (struct std____new_allocator_int_*)((char *)t546 + 0);
  std____new_allocator_int_____new_allocator(base545, base547);
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long v548, struct std__allocator_int_* v549) {
bb550:
  unsigned long __n551;
  struct std__allocator_int_* __a552;
  unsigned long __retval553;
  __n551 = v548;
  __a552 = v549;
    struct std__allocator_int_ ref_tmp0554;
    _Bool tmp_exprcleanup555;
    unsigned long t556 = __n551;
    struct std__allocator_int_* t557 = __a552;
    std__allocator_int___allocator(&ref_tmp0554, t557);
      unsigned long r558 = std__vector_int__std__allocator_int______S_max_size(&ref_tmp0554);
      _Bool c559 = ((t556 > r558)) ? 1 : 0;
      tmp_exprcleanup555 = c559;
    {
      std__allocator_int____allocator(&ref_tmp0554);
    }
    _Bool t560 = tmp_exprcleanup555;
    if (t560) {
      char* cast561 = (char*)&(_str_2);
      std____throw_length_error(cast561);
    }
  unsigned long t562 = __n551;
  __retval553 = t562;
  unsigned long t563 = __retval553;
  return t563;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v564, struct std__allocator_int_* v565) {
bb566:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this567;
  struct std__allocator_int_* __a568;
  this567 = v564;
  __a568 = v565;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t569 = this567;
  struct std__allocator_int_* base570 = (struct std__allocator_int_*)((char *)t569 + 0);
  struct std__allocator_int_* t571 = __a568;
  std__allocator_int___allocator(base570, t571);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base572 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t569 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base572);
  return;
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v573) {
bb574:
  struct std____new_allocator_int_* this575;
  unsigned long __retval576;
  this575 = v573;
  struct std____new_allocator_int_* t577 = this575;
  unsigned long c578 = 9223372036854775807;
  unsigned long c579 = 4;
  unsigned long b580 = c578 / c579;
  __retval576 = b580;
  unsigned long t581 = __retval576;
  return t581;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v582, unsigned long v583, void* v584) {
bb585:
  struct std____new_allocator_int_* this586;
  unsigned long __n587;
  void* unnamed588;
  int* __retval589;
  this586 = v582;
  __n587 = v583;
  unnamed588 = v584;
  struct std____new_allocator_int_* t590 = this586;
    unsigned long t591 = __n587;
    unsigned long r592 = std____new_allocator_int____M_max_size___const(t590);
    _Bool c593 = ((t591 > r592)) ? 1 : 0;
    if (c593) {
        unsigned long t594 = __n587;
        unsigned long c595 = -1;
        unsigned long c596 = 4;
        unsigned long b597 = c595 / c596;
        _Bool c598 = ((t594 > b597)) ? 1 : 0;
        if (c598) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c599 = 4;
    unsigned long c600 = 16;
    _Bool c601 = ((c599 > c600)) ? 1 : 0;
    if (c601) {
      unsigned long __al602;
      unsigned long c603 = 4;
      __al602 = c603;
      unsigned long t604 = __n587;
      unsigned long c605 = 4;
      unsigned long b606 = t604 * c605;
      unsigned long t607 = __al602;
      void* r608 = operator_new_2(b606, t607);
      int* cast609 = (int*)r608;
      __retval589 = cast609;
      int* t610 = __retval589;
      return t610;
    }
  unsigned long t611 = __n587;
  unsigned long c612 = 4;
  unsigned long b613 = t611 * c612;
  void* r614 = operator_new(b613);
  int* cast615 = (int*)r614;
  __retval589 = cast615;
  int* t616 = __retval589;
  return t616;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v617, unsigned long v618) {
bb619:
  struct std__allocator_int_* this620;
  unsigned long __n621;
  int* __retval622;
  this620 = v617;
  __n621 = v618;
  struct std__allocator_int_* t623 = this620;
    _Bool r624 = std____is_constant_evaluated();
    if (r624) {
        unsigned long t625 = __n621;
        unsigned long c626 = 4;
        unsigned long ovr627;
        _Bool ovf628 = __builtin_mul_overflow(t625, c626, &ovr627);
        __n621 = ovr627;
        if (ovf628) {
          std____throw_bad_array_new_length();
        }
      unsigned long t629 = __n621;
      void* r630 = operator_new(t629);
      int* cast631 = (int*)r630;
      __retval622 = cast631;
      int* t632 = __retval622;
      return t632;
    }
  struct std____new_allocator_int_* base633 = (struct std____new_allocator_int_*)((char *)t623 + 0);
  unsigned long t634 = __n621;
  void* c635 = ((void*)0);
  int* r636 = std____new_allocator_int___allocate(base633, t634, c635);
  __retval622 = r636;
  int* t637 = __retval622;
  return t637;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v638, unsigned long v639) {
bb640:
  struct std__allocator_int_* __a641;
  unsigned long __n642;
  int* __retval643;
  __a641 = v638;
  __n642 = v639;
  struct std__allocator_int_* t644 = __a641;
  unsigned long t645 = __n642;
  int* r646 = std__allocator_int___allocate(t644, t645);
  __retval643 = r646;
  int* t647 = __retval643;
  return t647;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v648, unsigned long v649) {
bb650:
  struct std___Vector_base_int__std__allocator_int__* this651;
  unsigned long __n652;
  int* __retval653;
  this651 = v648;
  __n652 = v649;
  struct std___Vector_base_int__std__allocator_int__* t654 = this651;
  unsigned long t655 = __n652;
  unsigned long c656 = 0;
  _Bool c657 = ((t655 != c656)) ? 1 : 0;
  int* ternary658;
  if (c657) {
    struct std__allocator_int_* base659 = (struct std__allocator_int_*)((char *)&(t654->_M_impl) + 0);
    unsigned long t660 = __n652;
    int* r661 = std__allocator_traits_std__allocator_int_____allocate(base659, t660);
    ternary658 = (int*)r661;
  } else {
    int* c662 = ((void*)0);
    ternary658 = (int*)c662;
  }
  __retval653 = ternary658;
  int* t663 = __retval653;
  return t663;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_M_create_storageEm
void std___Vector_base_int__std__allocator_int______M_create_storage(struct std___Vector_base_int__std__allocator_int__* v664, unsigned long v665) {
bb666:
  struct std___Vector_base_int__std__allocator_int__* this667;
  unsigned long __n668;
  this667 = v664;
  __n668 = v665;
  struct std___Vector_base_int__std__allocator_int__* t669 = this667;
  unsigned long t670 = __n668;
  int* r671 = std___Vector_base_int__std__allocator_int______M_allocate(t669, t670);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base672 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t669->_M_impl) + 0);
  base672->_M_start = r671;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base673 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t669->_M_impl) + 0);
  int* t674 = base673->_M_start;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base675 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t669->_M_impl) + 0);
  base675->_M_finish = t674;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base676 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t669->_M_impl) + 0);
  int* t677 = base676->_M_start;
  unsigned long t678 = __n668;
  int* ptr679 = &(t677)[t678];
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base680 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t669->_M_impl) + 0);
  base680->_M_end_of_storage = ptr679;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2EmRKS0_
void std___Vector_base_int__std__allocator_int______Vector_base_2(struct std___Vector_base_int__std__allocator_int__* v681, unsigned long v682, struct std__allocator_int_* v683) {
bb684:
  struct std___Vector_base_int__std__allocator_int__* this685;
  unsigned long __n686;
  struct std__allocator_int_* __a687;
  this685 = v681;
  __n686 = v682;
  __a687 = v683;
  struct std___Vector_base_int__std__allocator_int__* t688 = this685;
  struct std__allocator_int_* t689 = __a687;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t688->_M_impl, t689);
    unsigned long t690 = __n686;
    std___Vector_base_int__std__allocator_int______M_create_storage(t688, t690);
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb691:
  _Bool __retval692;
    _Bool c693 = 0;
    __retval692 = c693;
    _Bool t694 = __retval692;
    return t694;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v695, int** v696) {
bb697:
  struct std___UninitDestroyGuard_int____void_* this698;
  int** __first699;
  this698 = v695;
  __first699 = v696;
  struct std___UninitDestroyGuard_int____void_* t700 = this698;
  int** t701 = __first699;
  int* t702 = *t701;
  t700->_M_first = t702;
  int** t703 = __first699;
  t700->_M_cur = t703;
  return;
}

// function: _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* v704, int* v705) {
bb706:
  int* __location707;
  int* __args708;
  int* __retval709;
  void* __loc710;
  __location707 = v704;
  __args708 = v705;
  int* t711 = __location707;
  void* cast712 = (void*)t711;
  __loc710 = cast712;
    void* t713 = __loc710;
    int* cast714 = (int*)t713;
    int* t715 = __args708;
    int t716 = *t715;
    *cast714 = t716;
    __retval709 = cast714;
    int* t717 = __retval709;
    return t717;
  abort();
}

// function: _ZSt10_ConstructIiJRKiEEvPT_DpOT0_
void void_std___Construct_int__int_const__(int* v718, int* v719) {
bb720:
  int* __p721;
  int* __args722;
  __p721 = v718;
  __args722 = v719;
    _Bool r723 = std____is_constant_evaluated();
    if (r723) {
      int* t724 = __p721;
      int* t725 = __args722;
      int* r726 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t724, t725);
      return;
    }
  int* t727 = __p721;
  void* cast728 = (void*)t727;
  int* cast729 = (int*)cast728;
  int* t730 = __args722;
  int t731 = *t730;
  *cast729 = t731;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v732) {
bb733:
  struct std___UninitDestroyGuard_int____void_* this734;
  this734 = v732;
  struct std___UninitDestroyGuard_int____void_* t735 = this734;
  int** c736 = ((void*)0);
  t735->_M_cur = c736;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v737) {
bb738:
  struct std___UninitDestroyGuard_int____void_* this739;
  this739 = v737;
  struct std___UninitDestroyGuard_int____void_* t740 = this739;
    int** t741 = t740->_M_cur;
    int** c742 = ((void*)0);
    _Bool c743 = ((t741 != c742)) ? 1 : 0;
    if (c743) {
      int* t744 = t740->_M_first;
      int** t745 = t740->_M_cur;
      int* t746 = *t745;
      void_std___Destroy_int__(t744, t746);
    }
  return;
}

// function: _ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_
int* int__std____do_uninit_fill_n_int___unsigned_long__int_(int* v747, unsigned long v748, int* v749) {
bb750:
  int* __first751;
  unsigned long __n752;
  int* __x753;
  int* __retval754;
  struct std___UninitDestroyGuard_int____void_ __guard755;
  __first751 = v747;
  __n752 = v748;
  __x753 = v749;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard755, &__first751);
        do {
              unsigned long t756 = __n752;
              unsigned long c757 = 0;
              _Bool c758 = ((t756 >= c757)) ? 1 : 0;
              _Bool u759 = !c758;
              if (u759) {
                char* cast760 = (char*)&(_str_3);
                int c761 = 463;
                char* cast762 = (char*)&(__PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_);
                char* cast763 = (char*)&(_str_4);
                std____glibcxx_assert_fail(cast760, c761, cast762, cast763);
              }
          _Bool c764 = 0;
          if (!c764) break;
        } while (1);
      while (1) {
        unsigned long t766 = __n752;
        unsigned long u767 = t766 - 1;
        __n752 = u767;
        _Bool cast768 = (_Bool)t766;
        if (!cast768) break;
        int* t769 = __first751;
        int* t770 = __x753;
        void_std___Construct_int__int_const__(t769, t770);
      for_step765: ;
        int* t771 = __first751;
        int c772 = 1;
        int* ptr773 = &(t771)[c772];
        __first751 = ptr773;
      }
    std___UninitDestroyGuard_int___void___release(&__guard755);
    int* t774 = __first751;
    __retval754 = t774;
    int* t775 = __retval754;
    int* ret_val776 = t775;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard755);
    }
    return ret_val776;
  abort();
}

// function: _ZSt20uninitialized_fill_nIPimiET_S1_T0_RKT1_
int* int__std__uninitialized_fill_n_int___unsigned_long__int_(int* v777, unsigned long v778, int* v779) {
bb780:
  int* __first781;
  unsigned long __n782;
  int* __x783;
  int* __retval784;
  __first781 = v777;
  __n782 = v778;
  __x783 = v779;
  int* t785 = __first781;
  unsigned long t786 = __n782;
  int* t787 = __x783;
  int* r788 = int__std____do_uninit_fill_n_int___unsigned_long__int_(t785, t786, t787);
  __retval784 = r788;
  int* t789 = __retval784;
  return t789;
}

// function: _ZSt24__uninitialized_fill_n_aIPimiiET_S1_T0_RKT1_RSaIT2_E
int* int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(int* v790, unsigned long v791, int* v792, struct std__allocator_int_* v793) {
bb794:
  int* __first795;
  unsigned long __n796;
  int* __x797;
  struct std__allocator_int_* unnamed798;
  int* __retval799;
  __first795 = v790;
  __n796 = v791;
  __x797 = v792;
  unnamed798 = v793;
    _Bool r800 = std__is_constant_evaluated();
    if (r800) {
      int* t801 = __first795;
      unsigned long t802 = __n796;
      int* t803 = __x797;
      int* r804 = int__std____do_uninit_fill_n_int___unsigned_long__int_(t801, t802, t803);
      __retval799 = r804;
      int* t805 = __retval799;
      return t805;
    }
  int* t806 = __first795;
  unsigned long t807 = __n796;
  int* t808 = __x797;
  int* r809 = int__std__uninitialized_fill_n_int___unsigned_long__int_(t806, t807, t808);
  __retval799 = r809;
  int* t810 = __retval799;
  return t810;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v811) {
bb812:
  struct std___Vector_base_int__std__allocator_int__* this813;
  struct std__allocator_int_* __retval814;
  this813 = v811;
  struct std___Vector_base_int__std__allocator_int__* t815 = this813;
  struct std__allocator_int_* base816 = (struct std__allocator_int_*)((char *)&(t815->_M_impl) + 0);
  __retval814 = base816;
  struct std__allocator_int_* t817 = __retval814;
  return t817;
}

// function: _ZNSt6vectorIiSaIiEE18_M_fill_initializeEmRKi
void std__vector_int__std__allocator_int______M_fill_initialize(struct std__vector_int__std__allocator_int__* v818, unsigned long v819, int* v820) {
bb821:
  struct std__vector_int__std__allocator_int__* this822;
  unsigned long __n823;
  int* __value824;
  this822 = v818;
  __n823 = v819;
  __value824 = v820;
  struct std__vector_int__std__allocator_int__* t825 = this822;
  struct std___Vector_base_int__std__allocator_int__* base826 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t825 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base827 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base826->_M_impl) + 0);
  int* t828 = base827->_M_start;
  unsigned long t829 = __n823;
  int* t830 = __value824;
  struct std___Vector_base_int__std__allocator_int__* base831 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t825 + 0);
  struct std__allocator_int_* r832 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base831);
  int* r833 = int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(t828, t829, t830, r832);
  struct std___Vector_base_int__std__allocator_int__* base834 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t825 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base835 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base834->_M_impl) + 0);
  base835->_M_finish = r833;
  return;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v836, struct std____new_allocator_int_* v837) {
bb838:
  struct std____new_allocator_int_* this839;
  struct std____new_allocator_int_* unnamed840;
  this839 = v836;
  unnamed840 = v837;
  struct std____new_allocator_int_* t841 = this839;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v842) {
bb843:
  int* __location844;
  __location844 = v842;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v845, int* v846) {
bb847:
  int* __first848;
  int* __last849;
  __first848 = v845;
  __last849 = v846;
      _Bool r850 = std____is_constant_evaluated();
      if (r850) {
          while (1) {
            int* t852 = __first848;
            int* t853 = __last849;
            _Bool c854 = ((t852 != t853)) ? 1 : 0;
            if (!c854) break;
            int* t855 = __first848;
            void_std__destroy_at_int_(t855);
          for_step851: ;
            int* t856 = __first848;
            int c857 = 1;
            int* ptr858 = &(t856)[c857];
            __first848 = ptr858;
          }
      }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v859, struct std__allocator_int_* v860) {
bb861:
  struct std___Vector_base_int__std__allocator_int__* this862;
  struct std__allocator_int_* __a863;
  this862 = v859;
  __a863 = v860;
  struct std___Vector_base_int__std__allocator_int__* t864 = this862;
  struct std__allocator_int_* t865 = __a863;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t864->_M_impl, t865);
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v866) {
bb867:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this868;
  int** __retval869;
  this868 = v866;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t870 = this868;
  __retval869 = &t870->_M_current;
  int** t871 = __retval869;
  return t871;
}

// function: _ZN9__gnu_cxxmiIPiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v872, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v873) {
bb874:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs875;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs876;
  long __retval877;
  __lhs875 = v872;
  __rhs876 = v873;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t878 = __lhs875;
  int** r879 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t878);
  int* t880 = *r879;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t881 = __rhs876;
  int** r882 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t881);
  int* t883 = *r882;
  long diff884 = t880 - t883;
  __retval877 = diff884;
  long t885 = __retval877;
  return t885;
}

// function: _ZNKSt6ranges13__distance_fnclIRN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEETkSt18sized_sentinel_forINSt5decayIT_E4typeEES8_EENSt8__detail18__iter_traits_implINSt12remove_cvrefISE_E4typeESt20incrementable_traitsISJ_EE4type15difference_typeEOSC_T0_
long _ZNKSt6ranges13__distance_fnclIRN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEETkSt18sized_sentinel_forINSt5decayIT_E4typeEES8_EENSt8__detail18__iter_traits_implINSt12remove_cvrefISE_E4typeESt20incrementable_traitsISJ_EE4type15difference_typeEOSC_T0_(struct std__ranges____distance_fn* v886, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v887, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v888) {
bb889:
  struct std__ranges____distance_fn* this890;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __first891;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last892;
  long __retval893;
  this890 = v886;
  __first891 = v887;
  __last892 = v888;
  struct std__ranges____distance_fn* t894 = this890;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t895 = __first891;
  long r896 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__last892, t895);
  __retval893 = r896;
  long t897 = __retval893;
  return t897;
}

// function: _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v898, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v899) {
bb900:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs901;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs902;
  _Bool __retval903;
  __lhs901 = v898;
  __rhs902 = v899;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t904 = __lhs901;
  int** r905 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t904);
  int* t906 = *r905;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t907 = __rhs902;
  int** r908 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t907);
  int* t909 = *r908;
  _Bool c910 = ((t906 == t909)) ? 1 : 0;
  __retval903 = c910;
  _Bool t911 = __retval903;
  return t911;
}

// function: _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* v912, int* v913) {
bb914:
  int* __location915;
  int* __args916;
  int* __retval917;
  void* __loc918;
  __location915 = v912;
  __args916 = v913;
  int* t919 = __location915;
  void* cast920 = (void*)t919;
  __loc918 = cast920;
    void* t921 = __loc918;
    int* cast922 = (int*)t921;
    int* t923 = __args916;
    int t924 = *t923;
    *cast922 = t924;
    __retval917 = cast922;
    int* t925 = __retval917;
    return t925;
  abort();
}

// function: _ZSt10_ConstructIiJRiEEvPT_DpOT0_
void void_std___Construct_int__int__(int* v926, int* v927) {
bb928:
  int* __p929;
  int* __args930;
  __p929 = v926;
  __args930 = v927;
    _Bool r931 = std____is_constant_evaluated();
    if (r931) {
      int* t932 = __p929;
      int* t933 = __args930;
      int* r934 = _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t932, t933);
      return;
    }
  int* t935 = __p929;
  void* cast936 = (void*)t935;
  int* cast937 = (int*)cast936;
  int* t938 = __args930;
  int t939 = *t938;
  *cast937 = t939;
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v940) {
bb941:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this942;
  int* __retval943;
  this942 = v940;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t944 = this942;
  int* t945 = t944->_M_current;
  __retval943 = t945;
  int* t946 = __retval943;
  return t946;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v947) {
bb948:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this949;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval950;
  this949 = v947;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t951 = this949;
  int* t952 = t951->_M_current;
  int c953 = 1;
  int* ptr954 = &(t952)[c953];
  t951->_M_current = ptr954;
  __retval950 = t951;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t955 = __retval950;
  return t955;
}

// function: _ZSt16__do_uninit_copyIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_S2_ET1_T_T0_S7_
int* int__std____do_uninit_copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v956, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v957, int* v958) {
bb959:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first960;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last961;
  int* __result962;
  int* __retval963;
  struct std___UninitDestroyGuard_int____void_ __guard964;
  __first960 = v956;
  __last961 = v957;
  __result962 = v958;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard964, &__result962);
      while (1) {
        _Bool r966 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first960, &__last961);
        _Bool u967 = !r966;
        if (!u967) break;
        int* t968 = __result962;
        int* r969 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__first960);
        void_std___Construct_int__int__(t968, r969);
      for_step965: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r970 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__first960);
        int* t971 = __result962;
        int c972 = 1;
        int* ptr973 = &(t971)[c972];
        __result962 = ptr973;
      }
    std___UninitDestroyGuard_int___void___release(&__guard964);
    int* t974 = __result962;
    __retval963 = t974;
    int* t975 = __retval963;
    int* ret_val976 = t975;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard964);
    }
    return ret_val976;
  abort();
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v977) {
bb978:
  int* __it979;
  int* __retval980;
  __it979 = v977;
  int* t981 = __it979;
  __retval980 = t981;
  int* t982 = __retval980;
  return t982;
}

// function: _ZSt12__niter_baseIPiSt6vectorIiSaIiEEET_N9__gnu_cxx17__normal_iteratorIS4_T0_EE
int* int__std____niter_base_int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v983) {
bb984:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it985;
  int* __retval986;
  __it985 = v983;
  int** r987 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__it985);
  int* t988 = *r987;
  __retval986 = t988;
  int* t989 = __retval986;
  return t989;
}

// function: _ZSt18uninitialized_copyIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES2_ET0_T_S8_S7_
int* int__std__uninitialized_copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v990, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v991, int* v992) {
bb993:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first994;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last995;
  int* __result996;
  int* __retval997;
  __first994 = v990;
  __last995 = v991;
  __result996 = v992;
      long __n998;
      long r999 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__last995, &__first994);
      __n998 = r999;
        long t1000 = __n998;
        long c1001 = 0;
        _Bool c1002 = ((t1000 > c1001)) ? 1 : 0;
        if (c1002) {
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01003;
          int* t1004 = __result996;
          int* r1005 = int__std____niter_base_int__(t1004);
          void* cast1006 = (void*)r1005;
          agg_tmp01003 = __first994; // copy
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1007 = agg_tmp01003;
          int* r1008 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t1007);
          void* cast1009 = (void*)r1008;
          long t1010 = __n998;
          unsigned long cast1011 = (unsigned long)t1010;
          unsigned long c1012 = 4;
          unsigned long b1013 = cast1011 * c1012;
          void* r1014 = memcpy(cast1006, cast1009, b1013);
          long t1015 = __n998;
          int* t1016 = __result996;
          int* ptr1017 = &(t1016)[t1015];
          __result996 = ptr1017;
        }
      int* t1018 = __result996;
      __retval997 = t1018;
      int* t1019 = __retval997;
      return t1019;
  abort();
}

// function: _ZSt22__uninitialized_copy_aIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_S2_iET1_T_T0_S7_RSaIT2_E
int* int__std____uninitialized_copy_a___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1020, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1021, int* v1022, struct std__allocator_int_* v1023) {
bb1024:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first1025;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last1026;
  int* __result1027;
  struct std__allocator_int_* unnamed1028;
  int* __retval1029;
  __first1025 = v1020;
  __last1026 = v1021;
  __result1027 = v1022;
  unnamed1028 = v1023;
    _Bool r1030 = std__is_constant_evaluated();
    if (r1030) {
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01031;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11032;
      agg_tmp01031 = __first1025; // copy
      agg_tmp11032 = __last1026; // copy
      int* t1033 = __result1027;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1034 = agg_tmp01031;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1035 = agg_tmp11032;
      int* r1036 = int__std____do_uninit_copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(t1034, t1035, t1033);
      __retval1029 = r1036;
      int* t1037 = __retval1029;
      return t1037;
    }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp21038;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp31039;
    agg_tmp21038 = __first1025; // copy
    agg_tmp31039 = __last1026; // copy
    int* t1040 = __result1027;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1041 = agg_tmp21038;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1042 = agg_tmp31039;
    int* r1043 = int__std__uninitialized_copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(t1041, t1042, t1040);
    __retval1029 = r1043;
    int* t1044 = __retval1029;
    return t1044;
  abort();
}

// function: _ZNSt6vectorIiSaIiEE21_M_range_initialize_nIN9__gnu_cxx17__normal_iteratorIPiS1_EES6_EEvT_T0_m
void void_std__vector_int__std__allocator_int______M_range_initialize_n___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct std__vector_int__std__allocator_int__* v1045, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1046, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1047, unsigned long v1048) {
bb1049:
  struct std__vector_int__std__allocator_int__* this1050;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first1051;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last1052;
  unsigned long __n1053;
  int* __start1054;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01055;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11056;
  this1050 = v1045;
  __first1051 = v1046;
  __last1052 = v1047;
  __n1053 = v1048;
  struct std__vector_int__std__allocator_int__* t1057 = this1050;
  struct std___Vector_base_int__std__allocator_int__* base1058 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1057 + 0);
  unsigned long t1059 = __n1053;
  struct std___Vector_base_int__std__allocator_int__* base1060 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1057 + 0);
  struct std__allocator_int_* r1061 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1060);
  unsigned long r1062 = std__vector_int__std__allocator_int______S_check_init_len(t1059, r1061);
  int* r1063 = std___Vector_base_int__std__allocator_int______M_allocate(base1058, r1062);
  __start1054 = r1063;
  int* t1064 = __start1054;
  struct std___Vector_base_int__std__allocator_int__* base1065 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1057 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1066 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1065->_M_impl) + 0);
  base1066->_M_finish = t1064;
  struct std___Vector_base_int__std__allocator_int__* base1067 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1057 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1068 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1067->_M_impl) + 0);
  base1068->_M_start = t1064;
  int* t1069 = __start1054;
  unsigned long t1070 = __n1053;
  int* ptr1071 = &(t1069)[t1070];
  struct std___Vector_base_int__std__allocator_int__* base1072 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1057 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1073 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1072->_M_impl) + 0);
  base1073->_M_end_of_storage = ptr1071;
  agg_tmp01055 = __first1051; // copy
  agg_tmp11056 = __last1052; // copy
  int* t1074 = __start1054;
  struct std___Vector_base_int__std__allocator_int__* base1075 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1057 + 0);
  struct std__allocator_int_* r1076 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1075);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1077 = agg_tmp01055;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1078 = agg_tmp11056;
  int* r1079 = int__std____uninitialized_copy_a___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___int_(t1077, t1078, t1074, r1076);
  struct std___Vector_base_int__std__allocator_int__* base1080 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1057 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1081 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1080->_M_impl) + 0);
  base1081->_M_finish = r1079;
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE37select_on_container_copy_constructionERKS0_
struct std__allocator_int_ std__allocator_traits_std__allocator_int_____select_on_container_copy_construction(struct std__allocator_int_* v1082) {
bb1083:
  struct std__allocator_int_* __rhs1084;
  struct std__allocator_int_ __retval1085;
  __rhs1084 = v1082;
  struct std__allocator_int_* t1086 = __rhs1084;
  std__allocator_int___allocator(&__retval1085, t1086);
  struct std__allocator_int_ t1087 = __retval1085;
  return t1087;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIiEiE17_S_select_on_copyERKS1_
struct std__allocator_int_ __gnu_cxx____alloc_traits_std__allocator_int___int____S_select_on_copy(struct std__allocator_int_* v1088) {
bb1089:
  struct std__allocator_int_* __a1090;
  struct std__allocator_int_ __retval1091;
  __a1090 = v1088;
  struct std__allocator_int_* t1092 = __a1090;
  struct std__allocator_int_ r1093 = std__allocator_traits_std__allocator_int_____select_on_container_copy_construction(t1092);
  __retval1091 = r1093;
  struct std__allocator_int_ t1094 = __retval1091;
  return t1094;
}

// function: _ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Vector_base_int__std__allocator_int__* v1095) {
bb1096:
  struct std___Vector_base_int__std__allocator_int__* this1097;
  struct std__allocator_int_* __retval1098;
  this1097 = v1095;
  struct std___Vector_base_int__std__allocator_int__* t1099 = this1097;
  struct std__allocator_int_* base1100 = (struct std__allocator_int_*)((char *)&(t1099->_M_impl) + 0);
  __retval1098 = base1100;
  struct std__allocator_int_* t1101 = __retval1098;
  return t1101;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v1102) {
bb1103:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this1104;
  int** __retval1105;
  this1104 = v1102;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t1106 = this1104;
  __retval1105 = &t1106->_M_current;
  int** t1107 = __retval1105;
  return t1107;
}

// function: _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v1108, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v1109) {
bb1110:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __lhs1111;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __rhs1112;
  _Bool __retval1113;
  __lhs1111 = v1108;
  __rhs1112 = v1109;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t1114 = __lhs1111;
  int** r1115 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t1114);
  int* t1116 = *r1115;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t1117 = __rhs1112;
  int** r1118 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t1117);
  int* t1119 = *r1118;
  _Bool c1120 = ((t1116 == t1119)) ? 1 : 0;
  __retval1113 = c1120;
  _Bool t1121 = __retval1113;
  return t1121;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v1122) {
bb1123:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this1124;
  int* __retval1125;
  this1124 = v1122;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t1126 = this1124;
  int* t1127 = t1126->_M_current;
  __retval1125 = t1127;
  int* t1128 = __retval1125;
  return t1128;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v1129) {
bb1130:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this1131;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __retval1132;
  this1131 = v1129;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t1133 = this1131;
  int* t1134 = t1133->_M_current;
  int c1135 = 1;
  int* ptr1136 = &(t1134)[c1135];
  t1133->_M_current = ptr1136;
  __retval1132 = t1133;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t1137 = __retval1132;
  return t1137;
}

// function: _ZSt16__do_uninit_copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEES7_PiET1_T_T0_S9_
int* int__std____do_uninit_copy___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v1138, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v1139, int* v1140) {
bb1141:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __first1142;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __last1143;
  int* __result1144;
  int* __retval1145;
  struct std___UninitDestroyGuard_int____void_ __guard1146;
  __first1142 = v1138;
  __last1143 = v1139;
  __result1144 = v1140;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard1146, &__result1144);
      while (1) {
        _Bool r1148 = _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first1142, &__last1143);
        _Bool u1149 = !r1148;
        if (!u1149) break;
        int* t1150 = __result1144;
        int* r1151 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______operator____const(&__first1142);
        void_std___Construct_int__int_const__(t1150, r1151);
      for_step1147: ;
        struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* r1152 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______operator__(&__first1142);
        int* t1153 = __result1144;
        int c1154 = 1;
        int* ptr1155 = &(t1153)[c1154];
        __result1144 = ptr1155;
      }
    std___UninitDestroyGuard_int___void___release(&__guard1146);
    int* t1156 = __result1144;
    __retval1145 = t1156;
    int* t1157 = __retval1145;
    int* ret_val1158 = t1157;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1146);
    }
    return ret_val1158;
  abort();
}

// function: _ZN9__gnu_cxxmiIPKiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS9_SC_
long __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int_const___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v1159, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v1160) {
bb1161:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __lhs1162;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __rhs1163;
  long __retval1164;
  __lhs1162 = v1159;
  __rhs1163 = v1160;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t1165 = __lhs1162;
  int** r1166 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t1165);
  int* t1167 = *r1166;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t1168 = __rhs1163;
  int** r1169 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t1168);
  int* t1170 = *r1169;
  long diff1171 = t1167 - t1170;
  __retval1164 = diff1171;
  long t1172 = __retval1164;
  return t1172;
}

// function: _ZSt12__niter_baseIPKiSt6vectorIiSaIiEEET_N9__gnu_cxx17__normal_iteratorIS5_T0_EE
int* int_const__std____niter_base_int_const___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v1173) {
bb1174:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __it1175;
  int* __retval1176;
  __it1175 = v1173;
  int** r1177 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(&__it1175);
  int* t1178 = *r1177;
  __retval1176 = t1178;
  int* t1179 = __retval1176;
  return t1179;
}

// function: _ZSt18uninitialized_copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiET0_T_SA_S9_
int* int__std__uninitialized_copy___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v1180, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v1181, int* v1182) {
bb1183:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __first1184;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __last1185;
  int* __result1186;
  int* __retval1187;
  __first1184 = v1180;
  __last1185 = v1181;
  __result1186 = v1182;
      long __n1188;
      long r1189 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int_const___std__vector_int__std__allocator_int_____(&__last1185, &__first1184);
      __n1188 = r1189;
        long t1190 = __n1188;
        long c1191 = 0;
        _Bool c1192 = ((t1190 > c1191)) ? 1 : 0;
        if (c1192) {
          struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp01193;
          int* t1194 = __result1186;
          int* r1195 = int__std____niter_base_int__(t1194);
          void* cast1196 = (void*)r1195;
          agg_tmp01193 = __first1184; // copy
          struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t1197 = agg_tmp01193;
          int* r1198 = int_const__std____niter_base_int_const___std__vector_int__std__allocator_int_____(t1197);
          void* cast1199 = (void*)r1198;
          long t1200 = __n1188;
          unsigned long cast1201 = (unsigned long)t1200;
          unsigned long c1202 = 4;
          unsigned long b1203 = cast1201 * c1202;
          void* r1204 = memcpy(cast1196, cast1199, b1203);
          long t1205 = __n1188;
          int* t1206 = __result1186;
          int* ptr1207 = &(t1206)[t1205];
          __result1186 = ptr1207;
        }
      int* t1208 = __result1186;
      __retval1187 = t1208;
      int* t1209 = __retval1187;
      return t1209;
  abort();
}

// function: _ZSt22__uninitialized_copy_aIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEES7_PiiET1_T_T0_S9_RSaIT2_E
int* int__std____uninitialized_copy_a___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______int___int_(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v1210, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v1211, int* v1212, struct std__allocator_int_* v1213) {
bb1214:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __first1215;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __last1216;
  int* __result1217;
  struct std__allocator_int_* unnamed1218;
  int* __retval1219;
  __first1215 = v1210;
  __last1216 = v1211;
  __result1217 = v1212;
  unnamed1218 = v1213;
    _Bool r1220 = std__is_constant_evaluated();
    if (r1220) {
      struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp01221;
      struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp11222;
      agg_tmp01221 = __first1215; // copy
      agg_tmp11222 = __last1216; // copy
      int* t1223 = __result1217;
      struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t1224 = agg_tmp01221;
      struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t1225 = agg_tmp11222;
      int* r1226 = int__std____do_uninit_copy___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______int__(t1224, t1225, t1223);
      __retval1219 = r1226;
      int* t1227 = __retval1219;
      return t1227;
    }
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp21228;
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp31229;
    agg_tmp21228 = __first1215; // copy
    agg_tmp31229 = __last1216; // copy
    int* t1230 = __result1217;
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t1231 = agg_tmp21228;
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t1232 = agg_tmp31229;
    int* r1233 = int__std__uninitialized_copy___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______int__(t1231, t1232, t1230);
    __retval1219 = r1233;
    int* t1234 = __retval1219;
    return t1234;
  abort();
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2ERKS2_
void __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v1235, int** v1236) {
bb1237:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this1238;
  int** __i1239;
  this1238 = v1235;
  __i1239 = v1236;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t1240 = this1238;
  int** t1241 = __i1239;
  int* t1242 = *t1241;
  t1240->_M_current = t1242;
  return;
}

// function: _ZNKSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin___const(struct std__vector_int__std__allocator_int__* v1243) {
bb1244:
  struct std__vector_int__std__allocator_int__* this1245;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __retval1246;
  this1245 = v1243;
  struct std__vector_int__std__allocator_int__* t1247 = this1245;
  struct std___Vector_base_int__std__allocator_int__* base1248 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1247 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1249 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1248->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(&__retval1246, &base1249->_M_start);
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t1250 = __retval1246;
  return t1250;
}

// function: _ZNKSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end___const(struct std__vector_int__std__allocator_int__* v1251) {
bb1252:
  struct std__vector_int__std__allocator_int__* this1253;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __retval1254;
  this1253 = v1251;
  struct std__vector_int__std__allocator_int__* t1255 = this1253;
  struct std___Vector_base_int__std__allocator_int__* base1256 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1255 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1257 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1256->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(&__retval1254, &base1257->_M_finish);
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t1258 = __retval1254;
  return t1258;
}

// function: _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_
long _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_(struct std__ranges____distance_fn* v1259, int** v1260, int* v1261) {
bb1262:
  struct std__ranges____distance_fn* this1263;
  int** __first1264;
  int* __last1265;
  long __retval1266;
  this1263 = v1259;
  __first1264 = v1260;
  __last1265 = v1261;
  struct std__ranges____distance_fn* t1267 = this1263;
  int* t1268 = __last1265;
  int** t1269 = __first1264;
  int* t1270 = *t1269;
  long diff1271 = t1268 - t1270;
  __retval1266 = diff1271;
  long t1272 = __retval1266;
  return t1272;
}

// function: _ZSt16__do_uninit_copyIPiS0_S0_ET1_T_T0_S1_
int* int__std____do_uninit_copy_int___int___int__(int* v1273, int* v1274, int* v1275) {
bb1276:
  int* __first1277;
  int* __last1278;
  int* __result1279;
  int* __retval1280;
  struct std___UninitDestroyGuard_int____void_ __guard1281;
  __first1277 = v1273;
  __last1278 = v1274;
  __result1279 = v1275;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard1281, &__result1279);
      while (1) {
        int* t1283 = __first1277;
        int* t1284 = __last1278;
        _Bool c1285 = ((t1283 != t1284)) ? 1 : 0;
        if (!c1285) break;
        int* t1286 = __result1279;
        int* t1287 = __first1277;
        void_std___Construct_int__int__(t1286, t1287);
      for_step1282: ;
        int* t1288 = __first1277;
        int c1289 = 1;
        int* ptr1290 = &(t1288)[c1289];
        __first1277 = ptr1290;
        int* t1291 = __result1279;
        int c1292 = 1;
        int* ptr1293 = &(t1291)[c1292];
        __result1279 = ptr1293;
      }
    std___UninitDestroyGuard_int___void___release(&__guard1281);
    int* t1294 = __result1279;
    __retval1280 = t1294;
    int* t1295 = __retval1280;
    int* ret_val1296 = t1295;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1281);
    }
    return ret_val1296;
  abort();
}

// function: _ZSt18uninitialized_copyIPiS0_ET0_T_S2_S1_
int* int__std__uninitialized_copy_int___int__(int* v1297, int* v1298, int* v1299) {
bb1300:
  int* __first1301;
  int* __last1302;
  int* __result1303;
  int* __retval1304;
  __first1301 = v1297;
  __last1302 = v1298;
  __result1303 = v1299;
      long __n1305;
      int* t1306 = __last1302;
      int* t1307 = __first1301;
      long diff1308 = t1306 - t1307;
      __n1305 = diff1308;
        long t1309 = __n1305;
        long c1310 = 0;
        _Bool c1311 = ((t1309 > c1310)) ? 1 : 0;
        if (c1311) {
          int* t1312 = __result1303;
          int* r1313 = int__std____niter_base_int__(t1312);
          void* cast1314 = (void*)r1313;
          int* t1315 = __first1301;
          int* r1316 = int__std____niter_base_int__(t1315);
          void* cast1317 = (void*)r1316;
          long t1318 = __n1305;
          unsigned long cast1319 = (unsigned long)t1318;
          unsigned long c1320 = 4;
          unsigned long b1321 = cast1319 * c1320;
          void* r1322 = memcpy(cast1314, cast1317, b1321);
          long t1323 = __n1305;
          int* t1324 = __result1303;
          int* ptr1325 = &(t1324)[t1323];
          __result1303 = ptr1325;
        }
      int* t1326 = __result1303;
      __retval1304 = t1326;
      int* t1327 = __retval1304;
      return t1327;
  abort();
}

// function: _ZSt22__uninitialized_copy_aIPiS0_S0_iET1_T_T0_S1_RSaIT2_E
int* int__std____uninitialized_copy_a_int___int___int___int_(int* v1328, int* v1329, int* v1330, struct std__allocator_int_* v1331) {
bb1332:
  int* __first1333;
  int* __last1334;
  int* __result1335;
  struct std__allocator_int_* unnamed1336;
  int* __retval1337;
  __first1333 = v1328;
  __last1334 = v1329;
  __result1335 = v1330;
  unnamed1336 = v1331;
    _Bool r1338 = std__is_constant_evaluated();
    if (r1338) {
      int* t1339 = __first1333;
      int* t1340 = __last1334;
      int* t1341 = __result1335;
      int* r1342 = int__std____do_uninit_copy_int___int___int__(t1339, t1340, t1341);
      __retval1337 = r1342;
      int* t1343 = __retval1337;
      return t1343;
    }
    int* t1344 = __first1333;
    int* t1345 = __last1334;
    int* t1346 = __result1335;
    int* r1347 = int__std__uninitialized_copy_int___int__(t1344, t1345, t1346);
    __retval1337 = r1347;
    int* t1348 = __retval1337;
    return t1348;
  abort();
}

// function: _ZNSt6vectorIiSaIiEE21_M_range_initialize_nIPiS3_EEvT_T0_m
void void_std__vector_int__std__allocator_int______M_range_initialize_n_int___int__(struct std__vector_int__std__allocator_int__* v1349, int* v1350, int* v1351, unsigned long v1352) {
bb1353:
  struct std__vector_int__std__allocator_int__* this1354;
  int* __first1355;
  int* __last1356;
  unsigned long __n1357;
  int* __start1358;
  this1354 = v1349;
  __first1355 = v1350;
  __last1356 = v1351;
  __n1357 = v1352;
  struct std__vector_int__std__allocator_int__* t1359 = this1354;
  struct std___Vector_base_int__std__allocator_int__* base1360 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1359 + 0);
  unsigned long t1361 = __n1357;
  struct std___Vector_base_int__std__allocator_int__* base1362 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1359 + 0);
  struct std__allocator_int_* r1363 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1362);
  unsigned long r1364 = std__vector_int__std__allocator_int______S_check_init_len(t1361, r1363);
  int* r1365 = std___Vector_base_int__std__allocator_int______M_allocate(base1360, r1364);
  __start1358 = r1365;
  int* t1366 = __start1358;
  struct std___Vector_base_int__std__allocator_int__* base1367 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1359 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1368 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1367->_M_impl) + 0);
  base1368->_M_finish = t1366;
  struct std___Vector_base_int__std__allocator_int__* base1369 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1359 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1370 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1369->_M_impl) + 0);
  base1370->_M_start = t1366;
  int* t1371 = __start1358;
  unsigned long t1372 = __n1357;
  int* ptr1373 = &(t1371)[t1372];
  struct std___Vector_base_int__std__allocator_int__* base1374 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1359 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1375 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1374->_M_impl) + 0);
  base1375->_M_end_of_storage = ptr1373;
  int* t1376 = __first1355;
  int* t1377 = __last1356;
  int* t1378 = __start1358;
  struct std___Vector_base_int__std__allocator_int__* base1379 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1359 + 0);
  struct std__allocator_int_* r1380 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1379);
  int* r1381 = int__std____uninitialized_copy_a_int___int___int___int_(t1376, t1377, t1378, r1380);
  struct std___Vector_base_int__std__allocator_int__* base1382 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1359 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1383 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1382->_M_impl) + 0);
  base1383->_M_finish = r1381;
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v1384, int* v1385, struct std__allocator_int_* v1386) {
bb1387:
  int* __first1388;
  int* __last1389;
  struct std__allocator_int_* unnamed1390;
  __first1388 = v1384;
  __last1389 = v1385;
  unnamed1390 = v1386;
  int* t1391 = __first1388;
  int* t1392 = __last1389;
  void_std___Destroy_int__(t1391, t1392);
  return;
}

