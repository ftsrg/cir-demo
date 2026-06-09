extern void abort(void);
// Exception handling state (modelled in plain C)
static void *__cir_exc_ptr;
static const void *__cir_exc_type;
static unsigned long __cir_exc_type_id;
static int __cir_exc_active;
static void *__cir_exc_dtor;

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
struct __gnu_cxx____normal_iterator_int____void_ { int* _M_current; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____detail____move_iter_cat_int___ { unsigned char __field0; };
struct std____new_allocator_int_ { unsigned char __field0; };
struct std__allocator_int_ { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__move_iterator_int___ { int* _M_current; };
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__ranges____imove___IterMove { unsigned char __field0; };
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
union std__vector_int__std__allocator_int_____Temporary_value___Storage { unsigned char _M_byte; int _M_val; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__vector_int__std__allocator_int_____Temporary_value { struct std__vector_int__std__allocator_int__* _M_this; union std__vector_int__std__allocator_int_____Temporary_value___Storage _M_storage; unsigned char __field2[4]; } __attribute__((packed));
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[10] = "0. size: ";
char _str_1[19] = "myints.size() == 0";
char _str_2[103] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/vector/vector47/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[10] = "1. size: ";
char _str_4[20] = "myints.size() == 10";
char _str_5[10] = "2. size: ";
char _str_6[20] = "myints.size() == 20";
char _str_7[10] = "3. size: ";
char _str_8[20] = "myints.size() != 19";
char _str_9[26] = "vector::_M_realloc_append";
char _str_10[23] = "vector::_M_fill_insert";
char _str_11[23] = "vector::_M_fill_append";
struct std__ranges____imove___IterMove _ZNSt6ranges4_Cpo9iter_moveE;
char _str_12[98] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_uninitialized.h";
char __PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_[140] = "_ForwardIterator std::__do_uninit_fill_n(_ForwardIterator, _Size _Tp &) [_ForwardIterator = int *, _Size = unsigned long, _Tp = int]";
char _str_13[9] = "__n >= 0";
char _str_14[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE8pop_backEv[76] = "void std::vector<int>::pop_back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_15[15] = "!this->empty()";
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0);
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
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(struct std__allocator_int_* p0, int* p1, int* p2);
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
int** __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0);
long __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int_const___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p1);
void __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____cbegin___const(struct std__vector_int__std__allocator_int__* p0);
void std__vector_int__std__allocator_int______M_fill_append(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, int* p2);
void std__vector_int__std__allocator_int______Temporary_value___Temporary_value_int_const__(struct std__vector_int__std__allocator_int_____Temporary_value* p0, struct std__vector_int__std__allocator_int__* p1, int* p2);
int* std__vector_int__std__allocator_int______Temporary_value___M_val(struct std__vector_int__std__allocator_int_____Temporary_value* p0);
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* p0, int** p1);
int** std__move_iterator_int____base___const__(struct std__move_iterator_int___* p0);
_Bool bool_std__operator___int__(struct std__move_iterator_int___* p0, struct std__move_iterator_int___* p1);
void void_std___Construct_int__int_(int* p0, int* p1);
int* _ZNKSt6ranges7__imove9_IterMoveclIRKPiQoo11__adl_imoveIT_ErqTDTdeclsr3stdE7declvalIS6_EEEEEENS1_8__resultIS6_E4typeEOS6_(struct std__ranges____imove___IterMove* p0, int** p1);
int* std__move_iterator_int____operator____const(struct std__move_iterator_int___* p0);
struct std__move_iterator_int___* std__move_iterator_int____operator__(struct std__move_iterator_int___* p0);
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* p0);
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* p0);
int* int__std____do_uninit_copy_std__move_iterator_int____std__move_iterator_int____int__(struct std__move_iterator_int___ p0, struct std__move_iterator_int___ p1, int* p2);
int* int__std__uninitialized_copy_std__move_iterator_int____int__(struct std__move_iterator_int___ p0, struct std__move_iterator_int___ p1, int* p2);
int* int__std____uninitialized_copy_a_std__move_iterator_int____std__move_iterator_int____int___int_(struct std__move_iterator_int___ p0, struct std__move_iterator_int___ p1, int* p2, struct std__allocator_int_* p3);
void std__move_iterator_int____move_iterator(struct std__move_iterator_int___* p0, int* p1);
struct std__move_iterator_int___ std__move_iterator_int___std__make_move_iterator_int__(int* p0);
int* int__std____uninitialized_move_a_int___int___std__allocator_int___(int* p0, int* p1, int* p2, struct std__allocator_int_* p3);
int* int__std____niter_wrap_int__(int** p0, int* p1);
long std__iterator_traits_int____difference_type_std____distance_int__(int* p0, int* p1, struct std__random_access_iterator_tag p2);
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** p0);
long std__iterator_traits_int____difference_type_std__distance_int__(int* p0, int* p1);
void void_std____advance_int___long_(int** p0, long p1, struct std__random_access_iterator_tag p2);
void void_std__advance_int___long_(int** p0, long p1);
extern void* memmove(void* p0, void* p1, unsigned long p2);
void void_std____assign_one_true__int___int__(int** p0, int** p1);
int* int__std____copy_move_backward_a2_true__int___int__(int* p0, int* p1, int* p2);
int* int__std____copy_move_backward_a1_true__int___int__(int* p0, int* p1, int* p2);
int* int__std____copy_move_backward_a_true__int___int__(int* p0, int* p1, int* p2);
int* int__std____miter_base_int__(int* p0);
int* int__std__move_backward_int___int__(int* p0, int* p1, int* p2);
void void_std____fill_a1_int___int_(int* p0, int* p1, int* p2);
void void_std____fill_a_int___int_(int* p0, int* p1, int* p2);
void void_std__fill_int___int_(int* p0, int* p1, int* p2);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
void void_std___Construct_int__int_const__(int* p0, int* p1);
int* int__std____do_uninit_fill_n_int___unsigned_long__int_(int* p0, unsigned long p1, int* p2);
int* int__std__uninitialized_fill_n_int___unsigned_long__int_(int* p0, unsigned long p1, int* p2);
int* int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(int* p0, unsigned long p1, int* p2, struct std__allocator_int_* p3);
void std__vector_int__std__allocator_int______Temporary_value____Temporary_value(struct std__vector_int__std__allocator_int_____Temporary_value* p0);
extern int __gxx_personality_v0();
struct std__move_iterator_int___ std__move_iterator_int___std____make_move_if_noexcept_iterator_int__std__move_iterator_int____(int* p0);
int* int__std____uninitialized_move_if_noexcept_a_int___int___std__allocator_int___(int* p0, int* p1, int* p2, struct std__allocator_int_* p3);
void void_std___Destroy_int___int_(int* p0, int* p1, struct std__allocator_int_* p2);
void std__vector_int__std__allocator_int______M_fill_insert(struct std__vector_int__std__allocator_int__* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, unsigned long p2, int* p3);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, long p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____insert(struct std__vector_int__std__allocator_int__* p0, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p1, unsigned long p2, int* p3);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* p0);
void _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2IPiQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISA_S5_EE(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
_Bool _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p1);
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin___const(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end___const(struct std__vector_int__std__allocator_int__* p0);
_Bool std__vector_int__std__allocator_int_____empty___const(struct std__vector_int__std__allocator_int__* p0);
void std__vector_int__std__allocator_int_____pop_back(struct std__vector_int__std__allocator_int__* p0);
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
void std__vector_int__std__allocator_int______Temporary_value___Storage___Storage(union std__vector_int__std__allocator_int_____Temporary_value___Storage* p0);
int* std__vector_int__std__allocator_int______Temporary_value___M_ptr(struct std__vector_int__std__allocator_int_____Temporary_value* p0);
void std__vector_int__std__allocator_int______Temporary_value___Storage____Storage(union std__vector_int__std__allocator_int_____Temporary_value___Storage* p0);
void void_std___Destroy_int__(int* p0, int* p1);

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

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v5, int v6) {
bb7:
  int __a8;
  int __b9;
  int __retval10;
  __a8 = v5;
  __b9 = v6;
  int t11 = __a8;
  int t12 = __b9;
  int b13 = t11 | t12;
  __retval10 = b13;
  int t14 = __retval10;
  return t14;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v15) {
bb16:
  struct std__basic_ios_char__std__char_traits_char__* this17;
  int __retval18;
  this17 = v15;
  struct std__basic_ios_char__std__char_traits_char__* t19 = this17;
  struct std__ios_base* base20 = (struct std__ios_base*)((char *)t19 + 0);
  int t21 = base20->_M_streambuf_state;
  __retval18 = t21;
  int t22 = __retval18;
  return t22;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v23, int v24) {
bb25:
  struct std__basic_ios_char__std__char_traits_char__* this26;
  int __state27;
  this26 = v23;
  __state27 = v24;
  struct std__basic_ios_char__std__char_traits_char__* t28 = this26;
  int r29 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t28);
  if (__cir_exc_active) {
    return;
  }
  int t30 = __state27;
  int r31 = std__operator_(r29, t30);
  std__basic_ios_char__std__char_traits_char_____clear(t28, r31);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v32, char* v33) {
bb34:
  char* __c135;
  char* __c236;
  _Bool __retval37;
  __c135 = v32;
  __c236 = v33;
  char* t38 = __c135;
  char t39 = *t38;
  int cast40 = (int)t39;
  char* t41 = __c236;
  char t42 = *t41;
  int cast43 = (int)t42;
  _Bool c44 = ((cast40 == cast43)) ? 1 : 0;
  __retval37 = c44;
  _Bool t45 = __retval37;
  return t45;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v46) {
bb47:
  char* __p48;
  unsigned long __retval49;
  unsigned long __i50;
  __p48 = v46;
  unsigned long c51 = 0;
  __i50 = c51;
    char ref_tmp052;
    while (1) {
      unsigned long t53 = __i50;
      char* t54 = __p48;
      char* ptr55 = &(t54)[t53];
      char c56 = 0;
      ref_tmp052 = c56;
      _Bool r57 = __gnu_cxx__char_traits_char___eq(ptr55, &ref_tmp052);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u58 = !r57;
      if (!u58) break;
      unsigned long t59 = __i50;
      unsigned long u60 = t59 + 1;
      __i50 = u60;
    }
  unsigned long t61 = __i50;
  __retval49 = t61;
  unsigned long t62 = __retval49;
  return t62;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v63) {
bb64:
  char* __s65;
  unsigned long __retval66;
  __s65 = v63;
    _Bool r67 = std____is_constant_evaluated();
    if (r67) {
      char* t68 = __s65;
      unsigned long r69 = __gnu_cxx__char_traits_char___length(t68);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval66 = r69;
      unsigned long t70 = __retval66;
      return t70;
    }
  char* t71 = __s65;
  unsigned long r72 = strlen(t71);
  __retval66 = r72;
  unsigned long t73 = __retval66;
  return t73;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v74, char* v75) {
bb76:
  struct std__basic_ostream_char__std__char_traits_char__* __out77;
  char* __s78;
  struct std__basic_ostream_char__std__char_traits_char__* __retval79;
  __out77 = v74;
  __s78 = v75;
    char* t80 = __s78;
    _Bool cast81 = (_Bool)t80;
    _Bool u82 = !cast81;
    if (u82) {
      struct std__basic_ostream_char__std__char_traits_char__* t83 = __out77;
      void** v84 = (void**)t83;
      void* v85 = *((void**)v84);
      unsigned char* cast86 = (unsigned char*)v85;
      long c87 = -24;
      unsigned char* ptr88 = &(cast86)[c87];
      long* cast89 = (long*)ptr88;
      long t90 = *cast89;
      unsigned char* cast91 = (unsigned char*)t83;
      unsigned char* ptr92 = &(cast91)[t90];
      struct std__basic_ostream_char__std__char_traits_char__* cast93 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr92;
      struct std__basic_ios_char__std__char_traits_char__* cast94 = (struct std__basic_ios_char__std__char_traits_char__*)cast93;
      int t95 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast94, t95);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t96 = __out77;
      char* t97 = __s78;
      char* t98 = __s78;
      unsigned long r99 = std__char_traits_char___length(t98);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast100 = (long)r99;
      struct std__basic_ostream_char__std__char_traits_char__* r101 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t96, t97, cast100);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t102 = __out77;
  __retval79 = t102;
  struct std__basic_ostream_char__std__char_traits_char__* t103 = __retval79;
  return t103;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v104) {
bb105:
  struct std__vector_int__std__allocator_int__* this106;
  unsigned long __retval107;
  long __dif108;
  this106 = v104;
  struct std__vector_int__std__allocator_int__* t109 = this106;
  struct std___Vector_base_int__std__allocator_int__* base110 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t109 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base111 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base110->_M_impl) + 0);
  int* t112 = base111->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base113 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t109 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base114 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base113->_M_impl) + 0);
  int* t115 = base114->_M_start;
  long diff116 = t112 - t115;
  __dif108 = diff116;
    long t117 = __dif108;
    long c118 = 0;
    _Bool c119 = ((t117 < c118)) ? 1 : 0;
    if (c119) {
      __builtin_unreachable();
    }
  long t120 = __dif108;
  unsigned long cast121 = (unsigned long)t120;
  __retval107 = cast121;
  unsigned long t122 = __retval107;
  return t122;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v123, void* v124) {
bb125:
  struct std__basic_ostream_char__std__char_traits_char__* this126;
  void* __pf127;
  struct std__basic_ostream_char__std__char_traits_char__* __retval128;
  this126 = v123;
  __pf127 = v124;
  struct std__basic_ostream_char__std__char_traits_char__* t129 = this126;
  void* t130 = __pf127;
  struct std__basic_ostream_char__std__char_traits_char__* r131 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t130)(t129);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval128 = r131;
  struct std__basic_ostream_char__std__char_traits_char__* t132 = __retval128;
  return t132;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v133) {
bb134:
  struct std__basic_ostream_char__std__char_traits_char__* __os135;
  struct std__basic_ostream_char__std__char_traits_char__* __retval136;
  __os135 = v133;
  struct std__basic_ostream_char__std__char_traits_char__* t137 = __os135;
  struct std__basic_ostream_char__std__char_traits_char__* r138 = std__ostream__flush(t137);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval136 = r138;
  struct std__basic_ostream_char__std__char_traits_char__* t139 = __retval136;
  return t139;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v140) {
bb141:
  struct std__ctype_char_* __f142;
  struct std__ctype_char_* __retval143;
  __f142 = v140;
    struct std__ctype_char_* t144 = __f142;
    _Bool cast145 = (_Bool)t144;
    _Bool u146 = !cast145;
    if (u146) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t147 = __f142;
  __retval143 = t147;
  struct std__ctype_char_* t148 = __retval143;
  return t148;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v149, char v150) {
bb151:
  struct std__ctype_char_* this152;
  char __c153;
  char __retval154;
  this152 = v149;
  __c153 = v150;
  struct std__ctype_char_* t155 = this152;
    char t156 = t155->_M_widen_ok;
    _Bool cast157 = (_Bool)t156;
    if (cast157) {
      char t158 = __c153;
      unsigned char cast159 = (unsigned char)t158;
      unsigned long cast160 = (unsigned long)cast159;
      char t161 = t155->_M_widen[cast160];
      __retval154 = t161;
      char t162 = __retval154;
      return t162;
    }
  std__ctype_char____M_widen_init___const(t155);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t163 = __c153;
  void** v164 = (void**)t155;
  void* v165 = *((void**)v164);
  char vcall168 = (char)__VERIFIER_virtual_call_char_char(t155, 6, t163);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval154 = vcall168;
  char t169 = __retval154;
  return t169;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v170, char v171) {
bb172:
  struct std__basic_ios_char__std__char_traits_char__* this173;
  char __c174;
  char __retval175;
  this173 = v170;
  __c174 = v171;
  struct std__basic_ios_char__std__char_traits_char__* t176 = this173;
  struct std__ctype_char_* t177 = t176->_M_ctype;
  struct std__ctype_char_* r178 = std__ctype_char__const__std____check_facet_std__ctype_char___(t177);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t179 = __c174;
  char r180 = std__ctype_char___widen_char__const(r178, t179);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval175 = r180;
  char t181 = __retval175;
  return t181;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v182) {
bb183:
  struct std__basic_ostream_char__std__char_traits_char__* __os184;
  struct std__basic_ostream_char__std__char_traits_char__* __retval185;
  __os184 = v182;
  struct std__basic_ostream_char__std__char_traits_char__* t186 = __os184;
  struct std__basic_ostream_char__std__char_traits_char__* t187 = __os184;
  void** v188 = (void**)t187;
  void* v189 = *((void**)v188);
  unsigned char* cast190 = (unsigned char*)v189;
  long c191 = -24;
  unsigned char* ptr192 = &(cast190)[c191];
  long* cast193 = (long*)ptr192;
  long t194 = *cast193;
  unsigned char* cast195 = (unsigned char*)t187;
  unsigned char* ptr196 = &(cast195)[t194];
  struct std__basic_ostream_char__std__char_traits_char__* cast197 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr196;
  struct std__basic_ios_char__std__char_traits_char__* cast198 = (struct std__basic_ios_char__std__char_traits_char__*)cast197;
  char c199 = 10;
  char r200 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast198, c199);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r201 = std__ostream__put(t186, r200);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r202 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r201);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval185 = r202;
  struct std__basic_ostream_char__std__char_traits_char__* t203 = __retval185;
  return t203;
}

// function: _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* v204, int* v205) {
bb206:
  int* __location207;
  int* __args208;
  int* __retval209;
  void* __loc210;
  __location207 = v204;
  __args208 = v205;
  int* t211 = __location207;
  void* cast212 = (void*)t211;
  __loc210 = cast212;
    void* t213 = __loc210;
    int* cast214 = (int*)t213;
    int* t215 = __args208;
    int t216 = *t215;
    *cast214 = t216;
    __retval209 = cast214;
    int* t217 = __retval209;
    return t217;
  abort();
}

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJRKiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(struct std__allocator_int_* v218, int* v219, int* v220) {
bb221:
  struct std__allocator_int_* __a222;
  int* __p223;
  int* __args224;
  __a222 = v218;
  __p223 = v219;
  __args224 = v220;
  int* t225 = __p223;
  int* t226 = __args224;
  int* r227 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t225, t226);
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v228, unsigned long* v229) {
bb230:
  unsigned long* __a231;
  unsigned long* __b232;
  unsigned long* __retval233;
  __a231 = v228;
  __b232 = v229;
    unsigned long* t234 = __b232;
    unsigned long t235 = *t234;
    unsigned long* t236 = __a231;
    unsigned long t237 = *t236;
    _Bool c238 = ((t235 < t237)) ? 1 : 0;
    if (c238) {
      unsigned long* t239 = __b232;
      __retval233 = t239;
      unsigned long* t240 = __retval233;
      return t240;
    }
  unsigned long* t241 = __a231;
  __retval233 = t241;
  unsigned long* t242 = __retval233;
  return t242;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v243) {
bb244:
  struct std__allocator_int_* __a245;
  unsigned long __retval246;
  unsigned long __diffmax247;
  unsigned long __allocmax248;
  __a245 = v243;
  unsigned long c249 = 2305843009213693951;
  __diffmax247 = c249;
  unsigned long c250 = 4611686018427387903;
  __allocmax248 = c250;
  unsigned long* r251 = unsigned_long_const__std__min_unsigned_long_(&__diffmax247, &__allocmax248);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  unsigned long t252 = *r251;
  __retval246 = t252;
  unsigned long t253 = __retval246;
  return t253;
}

// function: _ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Vector_base_int__std__allocator_int__* v254) {
bb255:
  struct std___Vector_base_int__std__allocator_int__* this256;
  struct std__allocator_int_* __retval257;
  this256 = v254;
  struct std___Vector_base_int__std__allocator_int__* t258 = this256;
  struct std__allocator_int_* base259 = (struct std__allocator_int_*)((char *)&(t258->_M_impl) + 0);
  __retval257 = base259;
  struct std__allocator_int_* t260 = __retval257;
  return t260;
}

// function: _ZNKSt6vectorIiSaIiEE8max_sizeEv
unsigned long std__vector_int__std__allocator_int_____max_size___const(struct std__vector_int__std__allocator_int__* v261) {
bb262:
  struct std__vector_int__std__allocator_int__* this263;
  unsigned long __retval264;
  this263 = v261;
  struct std__vector_int__std__allocator_int__* t265 = this263;
  struct std___Vector_base_int__std__allocator_int__* base266 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t265 + 0);
  struct std__allocator_int_* r267 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(base266);
  unsigned long r268 = std__vector_int__std__allocator_int______S_max_size(r267);
  __retval264 = r268;
  unsigned long t269 = __retval264;
  return t269;
}

// function: _ZSt3maxImERKT_S2_S2_
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* v270, unsigned long* v271) {
bb272:
  unsigned long* __a273;
  unsigned long* __b274;
  unsigned long* __retval275;
  __a273 = v270;
  __b274 = v271;
    unsigned long* t276 = __a273;
    unsigned long t277 = *t276;
    unsigned long* t278 = __b274;
    unsigned long t279 = *t278;
    _Bool c280 = ((t277 < t279)) ? 1 : 0;
    if (c280) {
      unsigned long* t281 = __b274;
      __retval275 = t281;
      unsigned long* t282 = __retval275;
      return t282;
    }
  unsigned long* t283 = __a273;
  __retval275 = t283;
  unsigned long* t284 = __retval275;
  return t284;
}

// function: _ZNKSt6vectorIiSaIiEE12_M_check_lenEmPKc
unsigned long std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(struct std__vector_int__std__allocator_int__* v285, unsigned long v286, char* v287) {
bb288:
  struct std__vector_int__std__allocator_int__* this289;
  unsigned long __n290;
  char* __s291;
  unsigned long __retval292;
  unsigned long __len293;
  unsigned long ref_tmp0294;
  this289 = v285;
  __n290 = v286;
  __s291 = v287;
  struct std__vector_int__std__allocator_int__* t295 = this289;
    unsigned long r296 = std__vector_int__std__allocator_int_____max_size___const(t295);
    unsigned long r297 = std__vector_int__std__allocator_int_____size___const(t295);
    unsigned long b298 = r296 - r297;
    unsigned long t299 = __n290;
    _Bool c300 = ((b298 < t299)) ? 1 : 0;
    if (c300) {
      char* t301 = __s291;
      std____throw_length_error(t301);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
    }
  unsigned long r302 = std__vector_int__std__allocator_int_____size___const(t295);
  unsigned long r303 = std__vector_int__std__allocator_int_____size___const(t295);
  ref_tmp0294 = r303;
  unsigned long* r304 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp0294, &__n290);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  unsigned long t305 = *r304;
  unsigned long b306 = r302 + t305;
  __len293 = b306;
  unsigned long t307 = __len293;
  unsigned long r308 = std__vector_int__std__allocator_int_____size___const(t295);
  _Bool c309 = ((t307 < r308)) ? 1 : 0;
  _Bool ternary310;
  if (c309) {
    _Bool c311 = 1;
    ternary310 = (_Bool)c311;
  } else {
    unsigned long t312 = __len293;
    unsigned long r313 = std__vector_int__std__allocator_int_____max_size___const(t295);
    _Bool c314 = ((t312 > r313)) ? 1 : 0;
    ternary310 = (_Bool)c314;
  }
  unsigned long ternary315;
  if (ternary310) {
    unsigned long r316 = std__vector_int__std__allocator_int_____max_size___const(t295);
    ternary315 = (unsigned long)r316;
  } else {
    unsigned long t317 = __len293;
    ternary315 = (unsigned long)t317;
  }
  __retval292 = ternary315;
  unsigned long t318 = __retval292;
  return t318;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v319) {
bb320:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this321;
  int** __retval322;
  this321 = v319;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t323 = this321;
  __retval322 = &t323->_M_current;
  int** t324 = __retval322;
  return t324;
}

// function: _ZN9__gnu_cxxmiIPiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v325, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v326) {
bb327:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs328;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs329;
  long __retval330;
  __lhs328 = v325;
  __rhs329 = v326;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t331 = __lhs328;
  int** r332 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t331);
  int* t333 = *r332;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t334 = __rhs329;
  int** r335 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t334);
  int* t336 = *r335;
  long diff337 = t333 - t336;
  __retval330 = diff337;
  long t338 = __retval330;
  return t338;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v339, int** v340) {
bb341:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this342;
  int** __i343;
  this342 = v339;
  __i343 = v340;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t344 = this342;
  int** t345 = __i343;
  int* t346 = *t345;
  t344->_M_current = t346;
  return;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v347) {
bb348:
  struct std__vector_int__std__allocator_int__* this349;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval350;
  this349 = v347;
  struct std__vector_int__std__allocator_int__* t351 = this349;
  struct std___Vector_base_int__std__allocator_int__* base352 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t351 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base353 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base352->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval350, &base353->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t354 = __retval350;
  return t354;
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v355) {
bb356:
  struct std____new_allocator_int_* this357;
  unsigned long __retval358;
  this357 = v355;
  struct std____new_allocator_int_* t359 = this357;
  unsigned long c360 = 9223372036854775807;
  unsigned long c361 = 4;
  unsigned long b362 = c360 / c361;
  __retval358 = b362;
  unsigned long t363 = __retval358;
  return t363;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v364, unsigned long v365, void* v366) {
bb367:
  struct std____new_allocator_int_* this368;
  unsigned long __n369;
  void* unnamed370;
  int* __retval371;
  this368 = v364;
  __n369 = v365;
  unnamed370 = v366;
  struct std____new_allocator_int_* t372 = this368;
    unsigned long t373 = __n369;
    unsigned long r374 = std____new_allocator_int____M_max_size___const(t372);
    _Bool c375 = ((t373 > r374)) ? 1 : 0;
    if (c375) {
        unsigned long t376 = __n369;
        unsigned long c377 = -1;
        unsigned long c378 = 4;
        unsigned long b379 = c377 / c378;
        _Bool c380 = ((t376 > b379)) ? 1 : 0;
        if (c380) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
        }
      std____throw_bad_alloc();
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
    }
    unsigned long c381 = 4;
    unsigned long c382 = 16;
    _Bool c383 = ((c381 > c382)) ? 1 : 0;
    if (c383) {
      unsigned long __al384;
      unsigned long c385 = 4;
      __al384 = c385;
      unsigned long t386 = __n369;
      unsigned long c387 = 4;
      unsigned long b388 = t386 * c387;
      unsigned long t389 = __al384;
      void* r390 = operator_new_2(b388, t389);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast391 = (int*)r390;
      __retval371 = cast391;
      int* t392 = __retval371;
      return t392;
    }
  unsigned long t393 = __n369;
  unsigned long c394 = 4;
  unsigned long b395 = t393 * c394;
  void* r396 = operator_new(b395);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* cast397 = (int*)r396;
  __retval371 = cast397;
  int* t398 = __retval371;
  return t398;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v399, unsigned long v400) {
bb401:
  struct std__allocator_int_* this402;
  unsigned long __n403;
  int* __retval404;
  this402 = v399;
  __n403 = v400;
  struct std__allocator_int_* t405 = this402;
    _Bool r406 = std____is_constant_evaluated();
    if (r406) {
        unsigned long t407 = __n403;
        unsigned long c408 = 4;
        unsigned long ovr409;
        _Bool ovf410 = __builtin_mul_overflow(t407, c408, &ovr409);
        __n403 = ovr409;
        if (ovf410) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t411 = __n403;
      void* r412 = operator_new(t411);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast413 = (int*)r412;
      __retval404 = cast413;
      int* t414 = __retval404;
      return t414;
    }
  struct std____new_allocator_int_* base415 = (struct std____new_allocator_int_*)((char *)t405 + 0);
  unsigned long t416 = __n403;
  void* c417 = ((void*)0);
  int* r418 = std____new_allocator_int___allocate(base415, t416, c417);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval404 = r418;
  int* t419 = __retval404;
  return t419;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v420, unsigned long v421) {
bb422:
  struct std__allocator_int_* __a423;
  unsigned long __n424;
  int* __retval425;
  __a423 = v420;
  __n424 = v421;
  struct std__allocator_int_* t426 = __a423;
  unsigned long t427 = __n424;
  int* r428 = std__allocator_int___allocate(t426, t427);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval425 = r428;
  int* t429 = __retval425;
  return t429;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v430, unsigned long v431) {
bb432:
  struct std___Vector_base_int__std__allocator_int__* this433;
  unsigned long __n434;
  int* __retval435;
  this433 = v430;
  __n434 = v431;
  struct std___Vector_base_int__std__allocator_int__* t436 = this433;
  unsigned long t437 = __n434;
  unsigned long c438 = 0;
  _Bool c439 = ((t437 != c438)) ? 1 : 0;
  int* ternary440;
  if (c439) {
    struct std__allocator_int_* base441 = (struct std__allocator_int_*)((char *)&(t436->_M_impl) + 0);
    unsigned long t442 = __n434;
    int* r443 = std__allocator_traits_std__allocator_int_____allocate(base441, t442);
    if (__cir_exc_active) {
      int* __cir_eh_ret = (int*)0;
      return __cir_eh_ret;
    }
    ternary440 = (int*)r443;
  } else {
    int* c444 = ((void*)0);
    ternary440 = (int*)c444;
  }
  __retval435 = ternary440;
  int* t445 = __retval435;
  return t445;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocC2EPimRSt12_Vector_baseIiS0_E
void std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v446, int* v447, unsigned long v448, struct std___Vector_base_int__std__allocator_int__* v449) {
bb450:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this451;
  int* __s452;
  unsigned long __l453;
  struct std___Vector_base_int__std__allocator_int__* __vect454;
  this451 = v446;
  __s452 = v447;
  __l453 = v448;
  __vect454 = v449;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t455 = this451;
  int* t456 = __s452;
  t455->_M_storage = t456;
  unsigned long t457 = __l453;
  t455->_M_len = t457;
  struct std___Vector_base_int__std__allocator_int__* t458 = __vect454;
  t455->_M_vect = t458;
  return;
}

// function: _ZSt10to_addressIiEPT_S1_
int* int__std__to_address_int_(int* v459) {
bb460:
  int* __ptr461;
  int* __retval462;
  __ptr461 = v459;
  int* t463 = __ptr461;
  __retval462 = t463;
  int* t464 = __retval462;
  return t464;
}

// function: _ZSt12__to_addressIPiEDaRKT_
int* auto_std____to_address_int__(int** v465) {
bb466:
  int** __ptr467;
  int* __retval468;
  __ptr467 = v465;
  int** t469 = __ptr467;
  int* t470 = *t469;
  int* r471 = int__std__to_address_int_(t470);
  __retval468 = r471;
  int* t472 = __retval468;
  return t472;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb473:
  _Bool __retval474;
    _Bool c475 = 0;
    __retval474 = c475;
    _Bool t476 = __retval474;
    return t476;
  abort();
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEC2ERKS1_
void __gnu_cxx____normal_iterator_int___void_____normal_iterator(struct __gnu_cxx____normal_iterator_int____void_* v477, int** v478) {
bb479:
  struct __gnu_cxx____normal_iterator_int____void_* this480;
  int** __i481;
  this480 = v477;
  __i481 = v478;
  struct __gnu_cxx____normal_iterator_int____void_* t482 = this480;
  int** t483 = __i481;
  int* t484 = *t483;
  t482->_M_current = t484;
  return;
}

// function: _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v485, int* v486) {
bb487:
  int* __location488;
  int* __args489;
  int* __retval490;
  void* __loc491;
  __location488 = v485;
  __args489 = v486;
  int* t492 = __location488;
  void* cast493 = (void*)t492;
  __loc491 = cast493;
    void* t494 = __loc491;
    int* cast495 = (int*)t494;
    int* t496 = __args489;
    int t497 = *t496;
    *cast495 = t497;
    __retval490 = cast495;
    int* t498 = __retval490;
    return t498;
  abort();
}

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std__allocator_int_* v499, int* v500, int* v501) {
bb502:
  struct std__allocator_int_* __a503;
  int* __p504;
  int* __args505;
  __a503 = v499;
  __p504 = v500;
  __args505 = v501;
  int* t506 = __p504;
  int* t507 = __args505;
  int* r508 = _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t506, t507);
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v509) {
bb510:
  int* __location511;
  __location511 = v509;
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE7destroyIiEEvRS0_PT_
void void_std__allocator_traits_std__allocator_int_____destroy_int_(struct std__allocator_int_* v512, int* v513) {
bb514:
  struct std__allocator_int_* __a515;
  int* __p516;
  __a515 = v512;
  __p516 = v513;
  int* t517 = __p516;
  void_std__destroy_at_int_(t517);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt19__relocate_object_aIiiSaIiEEvPT_PT0_RT1_
void void_std____relocate_object_a_int__int__std__allocator_int___(int* v518, int* v519, struct std__allocator_int_* v520) {
bb521:
  int* __dest522;
  int* __orig523;
  struct std__allocator_int_* __alloc524;
  __dest522 = v518;
  __orig523 = v519;
  __alloc524 = v520;
  struct std__allocator_int_* t525 = __alloc524;
  int* t526 = __dest522;
  int* t527 = __orig523;
  void_std__allocator_traits_std__allocator_int_____construct_int__int_(t525, t526, t527);
  struct std__allocator_int_* t528 = __alloc524;
  int* t529 = __orig523;
  void_std__allocator_traits_std__allocator_int_____destroy_int_(t528, t529);
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivEdeEv
int* __gnu_cxx____normal_iterator_int___void___operator____const(struct __gnu_cxx____normal_iterator_int____void_* v530) {
bb531:
  struct __gnu_cxx____normal_iterator_int____void_* this532;
  int* __retval533;
  this532 = v530;
  struct __gnu_cxx____normal_iterator_int____void_* t534 = this532;
  int* t535 = t534->_M_current;
  __retval533 = t535;
  int* t536 = __retval533;
  return t536;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEppEv
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator__(struct __gnu_cxx____normal_iterator_int____void_* v537) {
bb538:
  struct __gnu_cxx____normal_iterator_int____void_* this539;
  struct __gnu_cxx____normal_iterator_int____void_* __retval540;
  this539 = v537;
  struct __gnu_cxx____normal_iterator_int____void_* t541 = this539;
  int* t542 = t541->_M_current;
  int c543 = 1;
  int* ptr544 = &(t542)[c543];
  t541->_M_current = ptr544;
  __retval540 = t541;
  struct __gnu_cxx____normal_iterator_int____void_* t545 = __retval540;
  return t545;
}

// function: _ZSt14__relocate_a_1IPiN9__gnu_cxx17__normal_iteratorIS0_vEESaIiEET0_T_S6_S5_RT1_
struct __gnu_cxx____normal_iterator_int____void_ __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(int* v546, int* v547, struct __gnu_cxx____normal_iterator_int____void_ v548, struct std__allocator_int_* v549) {
bb550:
  int* __first551;
  int* __last552;
  struct __gnu_cxx____normal_iterator_int____void_ __result553;
  struct std__allocator_int_* __alloc554;
  struct __gnu_cxx____normal_iterator_int____void_ __retval555;
  __first551 = v546;
  __last552 = v547;
  __result553 = v548;
  __alloc554 = v549;
  __retval555 = __result553; // copy
    while (1) {
      int* t557 = __first551;
      int* t558 = __last552;
      _Bool c559 = ((t557 != t558)) ? 1 : 0;
      if (!c559) break;
      int* r560 = __gnu_cxx____normal_iterator_int___void___operator____const(&__retval555);
      int* t561 = __first551;
      struct std__allocator_int_* t562 = __alloc554;
      void_std____relocate_object_a_int__int__std__allocator_int___(r560, t561, t562);
    for_step556: ;
      int* t563 = __first551;
      int c564 = 1;
      int* ptr565 = &(t563)[c564];
      __first551 = ptr565;
      struct __gnu_cxx____normal_iterator_int____void_* r566 = __gnu_cxx____normal_iterator_int___void___operator__(&__retval555);
    }
  struct __gnu_cxx____normal_iterator_int____void_ t567 = __retval555;
  return t567;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEaSEOS2_
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator_(struct __gnu_cxx____normal_iterator_int____void_* v568, struct __gnu_cxx____normal_iterator_int____void_* v569) {
bb570:
  struct __gnu_cxx____normal_iterator_int____void_* this571;
  struct __gnu_cxx____normal_iterator_int____void_* unnamed572;
  struct __gnu_cxx____normal_iterator_int____void_* __retval573;
  this571 = v568;
  unnamed572 = v569;
  struct __gnu_cxx____normal_iterator_int____void_* t574 = this571;
  struct __gnu_cxx____normal_iterator_int____void_* t575 = unnamed572;
  int* t576 = t575->_M_current;
  t574->_M_current = t576;
  __retval573 = t574;
  struct __gnu_cxx____normal_iterator_int____void_* t577 = __retval573;
  return t577;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivE4baseEv
int** __gnu_cxx____normal_iterator_int___void___base___const(struct __gnu_cxx____normal_iterator_int____void_* v578) {
bb579:
  struct __gnu_cxx____normal_iterator_int____void_* this580;
  int** __retval581;
  this580 = v578;
  struct __gnu_cxx____normal_iterator_int____void_* t582 = this580;
  __retval581 = &t582->_M_current;
  int** t583 = __retval581;
  return t583;
}

// function: _ZSt14__relocate_a_1IiiENSt9enable_ifIXsr3std24__is_bitwise_relocatableIT_EE5valueEPS1_E4typeES2_S2_S2_RSaIT0_E
int* std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(int* v584, int* v585, int* v586, struct std__allocator_int_* v587) {
bb588:
  int* __first589;
  int* __last590;
  int* __result591;
  struct std__allocator_int_* __alloc592;
  int* __retval593;
  long __count594;
  __first589 = v584;
  __last590 = v585;
  __result591 = v586;
  __alloc592 = v587;
  int* t595 = __last590;
  int* t596 = __first589;
  long diff597 = t595 - t596;
  __count594 = diff597;
    long t598 = __count594;
    long c599 = 0;
    _Bool c600 = ((t598 > c599)) ? 1 : 0;
    if (c600) {
        _Bool r601 = std__is_constant_evaluated();
        if (r601) {
          struct __gnu_cxx____normal_iterator_int____void_ __out602;
          struct __gnu_cxx____normal_iterator_int____void_ ref_tmp0603;
          struct __gnu_cxx____normal_iterator_int____void_ agg_tmp0604;
          __gnu_cxx____normal_iterator_int___void_____normal_iterator(&__out602, &__result591);
          int* t605 = __first589;
          int* t606 = __last590;
          agg_tmp0604 = __out602; // copy
          struct std__allocator_int_* t607 = __alloc592;
          struct __gnu_cxx____normal_iterator_int____void_ t608 = agg_tmp0604;
          struct __gnu_cxx____normal_iterator_int____void_ r609 = __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(t605, t606, t608, t607);
          ref_tmp0603 = r609;
          struct __gnu_cxx____normal_iterator_int____void_* r610 = __gnu_cxx____normal_iterator_int___void___operator_(&__out602, &ref_tmp0603);
          int** r611 = __gnu_cxx____normal_iterator_int___void___base___const(&__out602);
          int* t612 = *r611;
          __retval593 = t612;
          int* t613 = __retval593;
          return t613;
        }
      int* t614 = __result591;
      void* cast615 = (void*)t614;
      int* t616 = __first589;
      void* cast617 = (void*)t616;
      long t618 = __count594;
      unsigned long cast619 = (unsigned long)t618;
      unsigned long c620 = 4;
      unsigned long b621 = cast619 * c620;
      void* r622 = memcpy(cast615, cast617, b621);
    }
  int* t623 = __result591;
  long t624 = __count594;
  int* ptr625 = &(t623)[t624];
  __retval593 = ptr625;
  int* t626 = __retval593;
  return t626;
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v627) {
bb628:
  int* __it629;
  int* __retval630;
  __it629 = v627;
  int* t631 = __it629;
  __retval630 = t631;
  int* t632 = __retval630;
  return t632;
}

// function: _ZSt12__relocate_aIPiS0_SaIiEET0_T_S3_S2_RT1_
int* int__std____relocate_a_int___int___std__allocator_int___(int* v633, int* v634, int* v635, struct std__allocator_int_* v636) {
bb637:
  int* __first638;
  int* __last639;
  int* __result640;
  struct std__allocator_int_* __alloc641;
  int* __retval642;
  __first638 = v633;
  __last639 = v634;
  __result640 = v635;
  __alloc641 = v636;
  int* t643 = __first638;
  int* r644 = int__std____niter_base_int__(t643);
  int* t645 = __last639;
  int* r646 = int__std____niter_base_int__(t645);
  int* t647 = __result640;
  int* r648 = int__std____niter_base_int__(t647);
  struct std__allocator_int_* t649 = __alloc641;
  int* r650 = std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(r644, r646, r648, t649);
  __retval642 = r650;
  int* t651 = __retval642;
  return t651;
}

// function: _ZNSt6vectorIiSaIiEE11_S_relocateEPiS2_S2_RS0_
int* std__vector_int__std__allocator_int______S_relocate(int* v652, int* v653, int* v654, struct std__allocator_int_* v655) {
bb656:
  int* __first657;
  int* __last658;
  int* __result659;
  struct std__allocator_int_* __alloc660;
  int* __retval661;
  __first657 = v652;
  __last658 = v653;
  __result659 = v654;
  __alloc660 = v655;
  int* t662 = __first657;
  int* t663 = __last658;
  int* t664 = __result659;
  struct std__allocator_int_* t665 = __alloc660;
  int* r666 = int__std____relocate_a_int___int___std__allocator_int___(t662, t663, t664, t665);
  __retval661 = r666;
  int* t667 = __retval661;
  return t667;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v668) {
bb669:
  struct std___Vector_base_int__std__allocator_int__* this670;
  struct std__allocator_int_* __retval671;
  this670 = v668;
  struct std___Vector_base_int__std__allocator_int__* t672 = this670;
  struct std__allocator_int_* base673 = (struct std__allocator_int_*)((char *)&(t672->_M_impl) + 0);
  __retval671 = base673;
  struct std__allocator_int_* t674 = __retval671;
  return t674;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocD2Ev
void std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v675) {
bb676:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this677;
  this677 = v675;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t678 = this677;
    int* t679 = t678->_M_storage;
    _Bool cast680 = (_Bool)t679;
    if (cast680) {
      struct std___Vector_base_int__std__allocator_int__* t681 = t678->_M_vect;
      int* t682 = t678->_M_storage;
      unsigned long t683 = t678->_M_len;
      std___Vector_base_int__std__allocator_int______M_deallocate(t681, t682, t683);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_M_realloc_appendIJRKiEEEvDpOT_
void void_std__vector_int__std__allocator_int______M_realloc_append_int_const__(struct std__vector_int__std__allocator_int__* v684, int* v685) {
bb686:
  struct std__vector_int__std__allocator_int__* this687;
  int* __args688;
  unsigned long __len689;
  int* __old_start690;
  int* __old_finish691;
  unsigned long __elems692;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0693;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1694;
  int* __new_start695;
  int* __new_finish696;
  this687 = v684;
  __args688 = v685;
  struct std__vector_int__std__allocator_int__* t697 = this687;
  unsigned long c698 = 1;
  char* cast699 = (char*)&(_str_9);
  unsigned long r700 = std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(t697, c698, cast699);
  if (__cir_exc_active) {
    return;
  }
  __len689 = r700;
    unsigned long t701 = __len689;
    unsigned long c702 = 0;
    _Bool c703 = ((t701 <= c702)) ? 1 : 0;
    if (c703) {
      __builtin_unreachable();
    }
  struct std___Vector_base_int__std__allocator_int__* base704 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t697 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base705 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base704->_M_impl) + 0);
  int* t706 = base705->_M_start;
  __old_start690 = t706;
  struct std___Vector_base_int__std__allocator_int__* base707 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t697 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base708 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base707->_M_impl) + 0);
  int* t709 = base708->_M_finish;
  __old_finish691 = t709;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r710 = std__vector_int__std__allocator_int_____end(t697);
  ref_tmp0693 = r710;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r711 = std__vector_int__std__allocator_int_____begin(t697);
  ref_tmp1694 = r711;
  long r712 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&ref_tmp0693, &ref_tmp1694);
  unsigned long cast713 = (unsigned long)r712;
  __elems692 = cast713;
  struct std___Vector_base_int__std__allocator_int__* base714 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t697 + 0);
  unsigned long t715 = __len689;
  int* r716 = std___Vector_base_int__std__allocator_int______M_allocate(base714, t715);
  if (__cir_exc_active) {
    return;
  }
  __new_start695 = r716;
  int* t717 = __new_start695;
  __new_finish696 = t717;
    struct std__vector_int__std__allocator_int_____Guard_alloc __guard718;
    int* ref_tmp2719;
    int* t720 = __new_start695;
    unsigned long t721 = __len689;
    struct std___Vector_base_int__std__allocator_int__* base722 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t697 + 0);
    std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(&__guard718, t720, t721, base722);
    if (__cir_exc_active) {
      return;
    }
      struct std___Vector_base_int__std__allocator_int__* base723 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t697 + 0);
      struct std__allocator_int_* base724 = (struct std__allocator_int_*)((char *)&(base723->_M_impl) + 0);
      int* t725 = __new_start695;
      unsigned long t726 = __elems692;
      int* ptr727 = &(t725)[t726];
      ref_tmp2719 = ptr727;
      int* r728 = auto_std____to_address_int__(&ref_tmp2719);
      int* t729 = __args688;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(base724, r728, t729);
        int* t730 = __old_start690;
        int* t731 = __old_finish691;
        int* t732 = __new_start695;
        struct std___Vector_base_int__std__allocator_int__* base733 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t697 + 0);
        struct std__allocator_int_* r734 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base733);
        int* r735 = std__vector_int__std__allocator_int______S_relocate(t730, t731, t732, r734);
        __new_finish696 = r735;
        int* t736 = __new_finish696;
        int c737 = 1;
        int* ptr738 = &(t736)[c737];
        __new_finish696 = ptr738;
      int* t739 = __old_start690;
      __guard718._M_storage = t739;
      struct std___Vector_base_int__std__allocator_int__* base740 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t697 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base741 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base740->_M_impl) + 0);
      int* t742 = base741->_M_end_of_storage;
      int* t743 = __old_start690;
      long diff744 = t742 - t743;
      unsigned long cast745 = (unsigned long)diff744;
      __guard718._M_len = cast745;
    {
      std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(&__guard718);
    }
  int* t746 = __new_start695;
  struct std___Vector_base_int__std__allocator_int__* base747 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t697 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base748 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base747->_M_impl) + 0);
  base748->_M_start = t746;
  int* t749 = __new_finish696;
  struct std___Vector_base_int__std__allocator_int__* base750 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t697 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base751 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base750->_M_impl) + 0);
  base751->_M_finish = t749;
  int* t752 = __new_start695;
  unsigned long t753 = __len689;
  int* ptr754 = &(t752)[t753];
  struct std___Vector_base_int__std__allocator_int__* base755 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t697 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base756 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base755->_M_impl) + 0);
  base756->_M_end_of_storage = ptr754;
  return;
}

// function: _ZNSt6vectorIiSaIiEE9push_backERKi
void std__vector_int__std__allocator_int_____push_back(struct std__vector_int__std__allocator_int__* v757, int* v758) {
bb759:
  struct std__vector_int__std__allocator_int__* this760;
  int* __x761;
  this760 = v757;
  __x761 = v758;
  struct std__vector_int__std__allocator_int__* t762 = this760;
    struct std___Vector_base_int__std__allocator_int__* base763 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t762 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base764 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base763->_M_impl) + 0);
    int* t765 = base764->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base766 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t762 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base767 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base766->_M_impl) + 0);
    int* t768 = base767->_M_end_of_storage;
    _Bool c769 = ((t765 != t768)) ? 1 : 0;
    if (c769) {
      struct std___Vector_base_int__std__allocator_int__* base770 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t762 + 0);
      struct std__allocator_int_* base771 = (struct std__allocator_int_*)((char *)&(base770->_M_impl) + 0);
      struct std___Vector_base_int__std__allocator_int__* base772 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t762 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base773 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base772->_M_impl) + 0);
      int* t774 = base773->_M_finish;
      int* t775 = __x761;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(base771, t774, t775);
      struct std___Vector_base_int__std__allocator_int__* base776 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t762 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base777 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base776->_M_impl) + 0);
      int* t778 = base777->_M_finish;
      int c779 = 1;
      int* ptr780 = &(t778)[c779];
      base777->_M_finish = ptr780;
    } else {
      int* t781 = __x761;
      void_std__vector_int__std__allocator_int______M_realloc_append_int_const__(t762, t781);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v782) {
bb783:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this784;
  int** __retval785;
  this784 = v782;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t786 = this784;
  __retval785 = &t786->_M_current;
  int** t787 = __retval785;
  return t787;
}

// function: _ZN9__gnu_cxxmiIPKiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS9_SC_
long __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int_const___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v788, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v789) {
bb790:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __lhs791;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __rhs792;
  long __retval793;
  __lhs791 = v788;
  __rhs792 = v789;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t794 = __lhs791;
  int** r795 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t794);
  int* t796 = *r795;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t797 = __rhs792;
  int** r798 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t797);
  int* t799 = *r798;
  long diff800 = t796 - t799;
  __retval793 = diff800;
  long t801 = __retval793;
  return t801;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2ERKS2_
void __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v802, int** v803) {
bb804:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this805;
  int** __i806;
  this805 = v802;
  __i806 = v803;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t807 = this805;
  int** t808 = __i806;
  int* t809 = *t808;
  t807->_M_current = t809;
  return;
}

// function: _ZNKSt6vectorIiSaIiEE6cbeginEv
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____cbegin___const(struct std__vector_int__std__allocator_int__* v810) {
bb811:
  struct std__vector_int__std__allocator_int__* this812;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __retval813;
  this812 = v810;
  struct std__vector_int__std__allocator_int__* t814 = this812;
  struct std___Vector_base_int__std__allocator_int__* base815 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t814 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base816 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base815->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(&__retval813, &base816->_M_start);
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t817 = __retval813;
  return t817;
}

// function: _ZNSt6vectorIiSaIiEE14_M_fill_appendEmRKi
void std__vector_int__std__allocator_int______M_fill_append(struct std__vector_int__std__allocator_int__* v818, unsigned long v819, int* v820) {
bb821:
  struct std__vector_int__std__allocator_int__* this822;
  unsigned long __n823;
  int* __x824;
  this822 = v818;
  __n823 = v819;
  __x824 = v820;
  struct std__vector_int__std__allocator_int__* t825 = this822;
    struct std___Vector_base_int__std__allocator_int__* base826 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t825 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base827 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base826->_M_impl) + 0);
    int* t828 = base827->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int__* base829 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t825 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base830 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base829->_M_impl) + 0);
    int* t831 = base830->_M_finish;
    long diff832 = t828 - t831;
    unsigned long cast833 = (unsigned long)diff832;
    unsigned long t834 = __n823;
    _Bool c835 = ((cast833 >= t834)) ? 1 : 0;
    if (c835) {
      struct std___Vector_base_int__std__allocator_int__* base836 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t825 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base837 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base836->_M_impl) + 0);
      int* t838 = base837->_M_finish;
      unsigned long t839 = __n823;
      int* t840 = __x824;
      struct std___Vector_base_int__std__allocator_int__* base841 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t825 + 0);
      struct std__allocator_int_* r842 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base841);
      int* r843 = int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(t838, t839, t840, r842);
      if (__cir_exc_active) {
        return;
      }
      struct std___Vector_base_int__std__allocator_int__* base844 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t825 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base845 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base844->_M_impl) + 0);
      base845->_M_finish = r843;
    } else {
      int* __old_start846;
      int* __old_finish847;
      unsigned long __old_size848;
      unsigned long __len849;
      int* __new_start850;
      int* __new_finish851;
      struct std___Vector_base_int__std__allocator_int__* base852 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t825 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base853 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base852->_M_impl) + 0);
      int* t854 = base853->_M_start;
      __old_start846 = t854;
      struct std___Vector_base_int__std__allocator_int__* base855 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t825 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base856 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base855->_M_impl) + 0);
      int* t857 = base856->_M_finish;
      __old_finish847 = t857;
      int* t858 = __old_finish847;
      int* t859 = __old_start846;
      long diff860 = t858 - t859;
      unsigned long cast861 = (unsigned long)diff860;
      __old_size848 = cast861;
      unsigned long t862 = __n823;
      char* cast863 = (char*)&(_str_11);
      unsigned long r864 = std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(t825, t862, cast863);
      if (__cir_exc_active) {
        return;
      }
      __len849 = r864;
      struct std___Vector_base_int__std__allocator_int__* base865 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t825 + 0);
      unsigned long t866 = __len849;
      int* r867 = std___Vector_base_int__std__allocator_int______M_allocate(base865, t866);
      if (__cir_exc_active) {
        return;
      }
      __new_start850 = r867;
      int* t868 = __new_start850;
      unsigned long t869 = __old_size848;
      int* ptr870 = &(t868)[t869];
      __new_finish851 = ptr870;
          int* t872 = __new_finish851;
          unsigned long t873 = __n823;
          int* t874 = __x824;
          struct std___Vector_base_int__std__allocator_int__* base875 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t825 + 0);
          struct std__allocator_int_* r876 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base875);
          int* r877 = int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(t872, t873, t874, r876);
          if (__cir_exc_active) {
            goto cir_try_dispatch871;
          }
          __new_finish851 = r877;
          int* t878 = __old_start846;
          int* t879 = __old_finish847;
          int* t880 = __new_start850;
          struct std___Vector_base_int__std__allocator_int__* base881 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t825 + 0);
          struct std__allocator_int_* r882 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base881);
          int* r883 = int__std____uninitialized_move_if_noexcept_a_int___int___std__allocator_int___(t878, t879, t880, r882);
          if (__cir_exc_active) {
            goto cir_try_dispatch871;
          }
        cir_try_dispatch871: ;
        if (__cir_exc_active) {
        {
          int ca_tok884 = 0;
          void* ca_exn885 = (void*)__cir_exc_ptr;
          __cir_exc_active = 0;
            int* t886 = __new_start850;
            unsigned long t887 = __old_size848;
            int* ptr888 = &(t886)[t887];
            int* t889 = __new_finish851;
            struct std___Vector_base_int__std__allocator_int__* base890 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t825 + 0);
            struct std__allocator_int_* r891 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base890);
            void_std___Destroy_int___int_(ptr888, t889, r891);
            if (__cir_exc_active) {
              {
                if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
              }
              return;
            }
            struct std___Vector_base_int__std__allocator_int__* base892 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t825 + 0);
            int* t893 = __new_start850;
            unsigned long t894 = __len849;
            std___Vector_base_int__std__allocator_int______M_deallocate(base892, t893, t894);
            if (__cir_exc_active) {
              {
                if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
              }
              return;
            }
            __cir_exc_active = 1;
            {
              if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
            }
            return;
            __builtin_unreachable();
        }
        }
      int* t895 = __old_start846;
      int* t896 = __old_finish847;
      struct std___Vector_base_int__std__allocator_int__* base897 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t825 + 0);
      struct std__allocator_int_* r898 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base897);
      void_std___Destroy_int___int_(t895, t896, r898);
      if (__cir_exc_active) {
        return;
      }
      struct std___Vector_base_int__std__allocator_int__* base899 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t825 + 0);
      int* t900 = __old_start846;
      struct std___Vector_base_int__std__allocator_int__* base901 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t825 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base902 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base901->_M_impl) + 0);
      int* t903 = base902->_M_end_of_storage;
      int* t904 = __old_start846;
      long diff905 = t903 - t904;
      unsigned long cast906 = (unsigned long)diff905;
      std___Vector_base_int__std__allocator_int______M_deallocate(base899, t900, cast906);
      if (__cir_exc_active) {
        return;
      }
      int* t907 = __new_start850;
      struct std___Vector_base_int__std__allocator_int__* base908 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t825 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base909 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base908->_M_impl) + 0);
      base909->_M_start = t907;
      int* t910 = __new_finish851;
      struct std___Vector_base_int__std__allocator_int__* base911 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t825 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base912 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base911->_M_impl) + 0);
      base912->_M_finish = t910;
      int* t913 = __new_start850;
      unsigned long t914 = __len849;
      int* ptr915 = &(t913)[t914];
      struct std___Vector_base_int__std__allocator_int__* base916 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t825 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base917 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base916->_M_impl) + 0);
      base917->_M_end_of_storage = ptr915;
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE16_Temporary_valueC2IJRKiEEEPS1_DpOT_
void std__vector_int__std__allocator_int______Temporary_value___Temporary_value_int_const__(struct std__vector_int__std__allocator_int_____Temporary_value* v918, struct std__vector_int__std__allocator_int__* v919, int* v920) {
bb921:
  struct std__vector_int__std__allocator_int_____Temporary_value* this922;
  struct std__vector_int__std__allocator_int__* __vec923;
  int* __args924;
  this922 = v918;
  __vec923 = v919;
  __args924 = v920;
  struct std__vector_int__std__allocator_int_____Temporary_value* t925 = this922;
  struct std__vector_int__std__allocator_int__* t926 = __vec923;
  t925->_M_this = t926;
  std__vector_int__std__allocator_int______Temporary_value___Storage___Storage(&t925->_M_storage);
  if (__cir_exc_active) {
    return;
  }
    struct std__vector_int__std__allocator_int__* t927 = t925->_M_this;
    struct std___Vector_base_int__std__allocator_int__* base928 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t927 + 0);
    struct std__allocator_int_* base929 = (struct std__allocator_int_*)((char *)&(base928->_M_impl) + 0);
    int* r930 = std__vector_int__std__allocator_int______Temporary_value___M_ptr(t925);
    int* t931 = __args924;
    void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(base929, r930, t931);
  return;
}

// function: _ZNSt6vectorIiSaIiEE16_Temporary_value6_M_valEv
int* std__vector_int__std__allocator_int______Temporary_value___M_val(struct std__vector_int__std__allocator_int_____Temporary_value* v932) {
bb933:
  struct std__vector_int__std__allocator_int_____Temporary_value* this934;
  int* __retval935;
  this934 = v932;
  struct std__vector_int__std__allocator_int_____Temporary_value* t936 = this934;
  __retval935 = &t936->_M_storage._M_val;
  int* t937 = __retval935;
  return t937;
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v938, int** v939) {
bb940:
  struct std___UninitDestroyGuard_int____void_* this941;
  int** __first942;
  this941 = v938;
  __first942 = v939;
  struct std___UninitDestroyGuard_int____void_* t943 = this941;
  int** t944 = __first942;
  int* t945 = *t944;
  t943->_M_first = t945;
  int** t946 = __first942;
  t943->_M_cur = t946;
  return;
}

// function: _ZNKRSt13move_iteratorIPiE4baseEv
int** std__move_iterator_int____base___const__(struct std__move_iterator_int___* v947) {
bb948:
  struct std__move_iterator_int___* this949;
  int** __retval950;
  this949 = v947;
  struct std__move_iterator_int___* t951 = this949;
  __retval950 = &t951->_M_current;
  int** t952 = __retval950;
  return t952;
}

// function: _ZSteqIPiEbRKSt13move_iteratorIT_ES5_
_Bool bool_std__operator___int__(struct std__move_iterator_int___* v953, struct std__move_iterator_int___* v954) {
bb955:
  struct std__move_iterator_int___* __x956;
  struct std__move_iterator_int___* __y957;
  _Bool __retval958;
  __x956 = v953;
  __y957 = v954;
  struct std__move_iterator_int___* t959 = __x956;
  int** r960 = std__move_iterator_int____base___const__(t959);
  int* t961 = *r960;
  struct std__move_iterator_int___* t962 = __y957;
  int** r963 = std__move_iterator_int____base___const__(t962);
  int* t964 = *r963;
  _Bool c965 = ((t961 == t964)) ? 1 : 0;
  __retval958 = c965;
  _Bool t966 = __retval958;
  return t966;
}

// function: _ZSt10_ConstructIiJiEEvPT_DpOT0_
void void_std___Construct_int__int_(int* v967, int* v968) {
bb969:
  int* __p970;
  int* __args971;
  __p970 = v967;
  __args971 = v968;
    _Bool r972 = std____is_constant_evaluated();
    if (r972) {
      int* t973 = __p970;
      int* t974 = __args971;
      int* r975 = _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t973, t974);
      return;
    }
  int* t976 = __p970;
  void* cast977 = (void*)t976;
  int* cast978 = (int*)cast977;
  int* t979 = __args971;
  int t980 = *t979;
  *cast978 = t980;
  return;
}

// function: _ZNKSt6ranges7__imove9_IterMoveclIRKPiQoo11__adl_imoveIT_ErqTDTdeclsr3stdE7declvalIS6_EEEEEENS1_8__resultIS6_E4typeEOS6_
int* _ZNKSt6ranges7__imove9_IterMoveclIRKPiQoo11__adl_imoveIT_ErqTDTdeclsr3stdE7declvalIS6_EEEEEENS1_8__resultIS6_E4typeEOS6_(struct std__ranges____imove___IterMove* v981, int** v982) {
bb983:
  struct std__ranges____imove___IterMove* this984;
  int** __e985;
  int* __retval986;
  this984 = v981;
  __e985 = v982;
  struct std__ranges____imove___IterMove* t987 = this984;
      int** t988 = __e985;
      int* t989 = *t988;
      __retval986 = t989;
      int* t990 = __retval986;
      return t990;
  abort();
}

// function: _ZNKSt13move_iteratorIPiEdeEv
int* std__move_iterator_int____operator____const(struct std__move_iterator_int___* v991) {
bb992:
  struct std__move_iterator_int___* this993;
  int* __retval994;
  this993 = v991;
  struct std__move_iterator_int___* t995 = this993;
  int* r996 = _ZNKSt6ranges7__imove9_IterMoveclIRKPiQoo11__adl_imoveIT_ErqTDTdeclsr3stdE7declvalIS6_EEEEEENS1_8__resultIS6_E4typeEOS6_(&_ZNSt6ranges4_Cpo9iter_moveE, &t995->_M_current);
  __retval994 = r996;
  int* t997 = __retval994;
  return t997;
}

// function: _ZNSt13move_iteratorIPiEppEv
struct std__move_iterator_int___* std__move_iterator_int____operator__(struct std__move_iterator_int___* v998) {
bb999:
  struct std__move_iterator_int___* this1000;
  struct std__move_iterator_int___* __retval1001;
  this1000 = v998;
  struct std__move_iterator_int___* t1002 = this1000;
  int* t1003 = t1002->_M_current;
  int c1004 = 1;
  int* ptr1005 = &(t1003)[c1004];
  t1002->_M_current = ptr1005;
  __retval1001 = t1002;
  struct std__move_iterator_int___* t1006 = __retval1001;
  return t1006;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v1007) {
bb1008:
  struct std___UninitDestroyGuard_int____void_* this1009;
  this1009 = v1007;
  struct std___UninitDestroyGuard_int____void_* t1010 = this1009;
  int** c1011 = ((void*)0);
  t1010->_M_cur = c1011;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v1012) {
bb1013:
  struct std___UninitDestroyGuard_int____void_* this1014;
  this1014 = v1012;
  struct std___UninitDestroyGuard_int____void_* t1015 = this1014;
    int** t1016 = t1015->_M_cur;
    int** c1017 = ((void*)0);
    _Bool c1018 = ((t1016 != c1017)) ? 1 : 0;
    if (c1018) {
      int* t1019 = t1015->_M_first;
      int** t1020 = t1015->_M_cur;
      int* t1021 = *t1020;
      void_std___Destroy_int__(t1019, t1021);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZSt16__do_uninit_copyISt13move_iteratorIPiES2_S1_ET1_T_T0_S3_
int* int__std____do_uninit_copy_std__move_iterator_int____std__move_iterator_int____int__(struct std__move_iterator_int___ v1022, struct std__move_iterator_int___ v1023, int* v1024) {
bb1025:
  struct std__move_iterator_int___ __first1026;
  struct std__move_iterator_int___ __last1027;
  int* __result1028;
  int* __retval1029;
  struct std___UninitDestroyGuard_int____void_ __guard1030;
  __first1026 = v1022;
  __last1027 = v1023;
  __result1028 = v1024;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard1030, &__result1028);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
      while (1) {
        _Bool r1032 = bool_std__operator___int__(&__first1026, &__last1027);
        if (__cir_exc_active) {
          {
            std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1030);
          }
          int* __cir_eh_ret = (int*)0;
          return __cir_eh_ret;
        }
        _Bool u1033 = !r1032;
        if (!u1033) break;
        int* t1034 = __result1028;
        int* r1035 = std__move_iterator_int____operator____const(&__first1026);
        if (__cir_exc_active) {
          {
            std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1030);
          }
          int* __cir_eh_ret = (int*)0;
          return __cir_eh_ret;
        }
        void_std___Construct_int__int_(t1034, r1035);
        if (__cir_exc_active) {
          {
            std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1030);
          }
          int* __cir_eh_ret = (int*)0;
          return __cir_eh_ret;
        }
      for_step1031: ;
        struct std__move_iterator_int___* r1036 = std__move_iterator_int____operator__(&__first1026);
        if (__cir_exc_active) {
          {
            std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1030);
          }
          int* __cir_eh_ret = (int*)0;
          return __cir_eh_ret;
        }
        int* t1037 = __result1028;
        int c1038 = 1;
        int* ptr1039 = &(t1037)[c1038];
        __result1028 = ptr1039;
      }
    std___UninitDestroyGuard_int___void___release(&__guard1030);
    if (__cir_exc_active) {
      {
        std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1030);
      }
      int* __cir_eh_ret = (int*)0;
      return __cir_eh_ret;
    }
    int* t1040 = __result1028;
    __retval1029 = t1040;
    int* t1041 = __retval1029;
    int* ret_val1042 = t1041;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1030);
    }
    return ret_val1042;
  abort();
}

// function: _ZSt18uninitialized_copyISt13move_iteratorIPiES1_ET0_T_S4_S3_
int* int__std__uninitialized_copy_std__move_iterator_int____int__(struct std__move_iterator_int___ v1043, struct std__move_iterator_int___ v1044, int* v1045) {
bb1046:
  struct std__move_iterator_int___ __first1047;
  struct std__move_iterator_int___ __last1048;
  int* __result1049;
  int* __retval1050;
  __first1047 = v1043;
  __last1048 = v1044;
  __result1049 = v1045;
        struct std__move_iterator_int___ agg_tmp01051;
        struct std__move_iterator_int___ agg_tmp11052;
        agg_tmp01051 = __first1047; // copy
        agg_tmp11052 = __last1048; // copy
        int* t1053 = __result1049;
        struct std__move_iterator_int___ t1054 = agg_tmp01051;
        struct std__move_iterator_int___ t1055 = agg_tmp11052;
        int* r1056 = int__std____do_uninit_copy_std__move_iterator_int____std__move_iterator_int____int__(t1054, t1055, t1053);
        if (__cir_exc_active) {
          int* __cir_eh_ret = (int*)0;
          return __cir_eh_ret;
        }
        __retval1050 = r1056;
        int* t1057 = __retval1050;
        return t1057;
  abort();
}

// function: _ZSt22__uninitialized_copy_aISt13move_iteratorIPiES2_S1_iET1_T_T0_S3_RSaIT2_E
int* int__std____uninitialized_copy_a_std__move_iterator_int____std__move_iterator_int____int___int_(struct std__move_iterator_int___ v1058, struct std__move_iterator_int___ v1059, int* v1060, struct std__allocator_int_* v1061) {
bb1062:
  struct std__move_iterator_int___ __first1063;
  struct std__move_iterator_int___ __last1064;
  int* __result1065;
  struct std__allocator_int_* unnamed1066;
  int* __retval1067;
  __first1063 = v1058;
  __last1064 = v1059;
  __result1065 = v1060;
  unnamed1066 = v1061;
    _Bool r1068 = std__is_constant_evaluated();
    if (r1068) {
      struct std__move_iterator_int___ agg_tmp01069;
      struct std__move_iterator_int___ agg_tmp11070;
      agg_tmp01069 = __first1063; // copy
      agg_tmp11070 = __last1064; // copy
      int* t1071 = __result1065;
      struct std__move_iterator_int___ t1072 = agg_tmp01069;
      struct std__move_iterator_int___ t1073 = agg_tmp11070;
      int* r1074 = int__std____do_uninit_copy_std__move_iterator_int____std__move_iterator_int____int__(t1072, t1073, t1071);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      __retval1067 = r1074;
      int* t1075 = __retval1067;
      return t1075;
    }
    struct std__move_iterator_int___ agg_tmp21076;
    struct std__move_iterator_int___ agg_tmp31077;
    agg_tmp21076 = __first1063; // copy
    agg_tmp31077 = __last1064; // copy
    int* t1078 = __result1065;
    struct std__move_iterator_int___ t1079 = agg_tmp21076;
    struct std__move_iterator_int___ t1080 = agg_tmp31077;
    int* r1081 = int__std__uninitialized_copy_std__move_iterator_int____int__(t1079, t1080, t1078);
    if (__cir_exc_active) {
      int* __cir_eh_ret = (int*)0;
      return __cir_eh_ret;
    }
    __retval1067 = r1081;
    int* t1082 = __retval1067;
    return t1082;
  abort();
}

// function: _ZNSt13move_iteratorIPiEC2ES0_
void std__move_iterator_int____move_iterator(struct std__move_iterator_int___* v1083, int* v1084) {
bb1085:
  struct std__move_iterator_int___* this1086;
  int* __i1087;
  this1086 = v1083;
  __i1087 = v1084;
  struct std__move_iterator_int___* t1088 = this1086;
  struct std____detail____move_iter_cat_int___* base1089 = (struct std____detail____move_iter_cat_int___*)((char *)t1088 + 0);
  int* t1090 = __i1087;
  t1088->_M_current = t1090;
  return;
}

// function: _ZSt18make_move_iteratorIPiESt13move_iteratorIT_ES2_
struct std__move_iterator_int___ std__move_iterator_int___std__make_move_iterator_int__(int* v1091) {
bb1092:
  int* __i1093;
  struct std__move_iterator_int___ __retval1094;
  __i1093 = v1091;
  int* t1095 = __i1093;
  std__move_iterator_int____move_iterator(&__retval1094, t1095);
  if (__cir_exc_active) {
    struct std__move_iterator_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std__move_iterator_int___ t1096 = __retval1094;
  return t1096;
}

// function: _ZSt22__uninitialized_move_aIPiS0_SaIiEET0_T_S3_S2_RT1_
int* int__std____uninitialized_move_a_int___int___std__allocator_int___(int* v1097, int* v1098, int* v1099, struct std__allocator_int_* v1100) {
bb1101:
  int* __first1102;
  int* __last1103;
  int* __result1104;
  struct std__allocator_int_* __alloc1105;
  int* __retval1106;
  struct std__move_iterator_int___ agg_tmp01107;
  struct std__move_iterator_int___ agg_tmp11108;
  __first1102 = v1097;
  __last1103 = v1098;
  __result1104 = v1099;
  __alloc1105 = v1100;
  int* t1109 = __first1102;
  struct std__move_iterator_int___ r1110 = std__move_iterator_int___std__make_move_iterator_int__(t1109);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  agg_tmp01107 = r1110;
  int* t1111 = __last1103;
  struct std__move_iterator_int___ r1112 = std__move_iterator_int___std__make_move_iterator_int__(t1111);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  agg_tmp11108 = r1112;
  int* t1113 = __result1104;
  struct std__allocator_int_* t1114 = __alloc1105;
  struct std__move_iterator_int___ t1115 = agg_tmp01107;
  struct std__move_iterator_int___ t1116 = agg_tmp11108;
  int* r1117 = int__std____uninitialized_copy_a_std__move_iterator_int____std__move_iterator_int____int___int_(t1115, t1116, t1113, t1114);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1106 = r1117;
  int* t1118 = __retval1106;
  return t1118;
}

// function: _ZSt12__niter_wrapIPiET_RKS1_S1_
int* int__std____niter_wrap_int__(int** v1119, int* v1120) {
bb1121:
  int** unnamed1122;
  int* __res1123;
  int* __retval1124;
  unnamed1122 = v1119;
  __res1123 = v1120;
  int* t1125 = __res1123;
  __retval1124 = t1125;
  int* t1126 = __retval1124;
  return t1126;
}

// function: _ZSt10__distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_St26random_access_iterator_tag
long std__iterator_traits_int____difference_type_std____distance_int__(int* v1127, int* v1128, struct std__random_access_iterator_tag v1129) {
bb1130:
  int* __first1131;
  int* __last1132;
  struct std__random_access_iterator_tag unnamed1133;
  long __retval1134;
  __first1131 = v1127;
  __last1132 = v1128;
  unnamed1133 = v1129;
  int* t1135 = __last1132;
  int* t1136 = __first1131;
  long diff1137 = t1135 - t1136;
  __retval1134 = diff1137;
  long t1138 = __retval1134;
  return t1138;
}

// function: _ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** v1139) {
bb1140:
  int** unnamed1141;
  struct std__random_access_iterator_tag __retval1142;
  unnamed1141 = v1139;
  struct std__random_access_iterator_tag t1143 = __retval1142;
  return t1143;
}

// function: _ZSt8distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_
long std__iterator_traits_int____difference_type_std__distance_int__(int* v1144, int* v1145) {
bb1146:
  int* __first1147;
  int* __last1148;
  long __retval1149;
  struct std__random_access_iterator_tag agg_tmp01150;
  __first1147 = v1144;
  __last1148 = v1145;
  int* t1151 = __first1147;
  int* t1152 = __last1148;
  struct std__random_access_iterator_tag r1153 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first1147);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  agg_tmp01150 = r1153;
  struct std__random_access_iterator_tag t1154 = agg_tmp01150;
  long r1155 = std__iterator_traits_int____difference_type_std____distance_int__(t1151, t1152, t1154);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  __retval1149 = r1155;
  long t1156 = __retval1149;
  return t1156;
}

// function: _ZSt9__advanceIPilEvRT_T0_St26random_access_iterator_tag
void void_std____advance_int___long_(int** v1157, long v1158, struct std__random_access_iterator_tag v1159) {
bb1160:
  int** __i1161;
  long __n1162;
  struct std__random_access_iterator_tag unnamed1163;
  __i1161 = v1157;
  __n1162 = v1158;
  unnamed1163 = v1159;
    long t1164 = __n1162;
    _Bool isconst1165 = 0;
    _Bool ternary1166;
    if (isconst1165) {
      long t1167 = __n1162;
      long c1168 = 1;
      _Bool c1169 = ((t1167 == c1168)) ? 1 : 0;
      ternary1166 = (_Bool)c1169;
    } else {
      _Bool c1170 = 0;
      ternary1166 = (_Bool)c1170;
    }
    if (ternary1166) {
      int** t1171 = __i1161;
      int* t1172 = *t1171;
      int c1173 = 1;
      int* ptr1174 = &(t1172)[c1173];
      *t1171 = ptr1174;
    } else {
        long t1175 = __n1162;
        _Bool isconst1176 = 0;
        _Bool ternary1177;
        if (isconst1176) {
          long t1178 = __n1162;
          long c1179 = -1;
          _Bool c1180 = ((t1178 == c1179)) ? 1 : 0;
          ternary1177 = (_Bool)c1180;
        } else {
          _Bool c1181 = 0;
          ternary1177 = (_Bool)c1181;
        }
        if (ternary1177) {
          int** t1182 = __i1161;
          int* t1183 = *t1182;
          int c1184 = -1;
          int* ptr1185 = &(t1183)[c1184];
          *t1182 = ptr1185;
        } else {
          long t1186 = __n1162;
          int** t1187 = __i1161;
          int* t1188 = *t1187;
          int* ptr1189 = &(t1188)[t1186];
          *t1187 = ptr1189;
        }
    }
  return;
}

// function: _ZSt7advanceIPilEvRT_T0_
void void_std__advance_int___long_(int** v1190, long v1191) {
bb1192:
  int** __i1193;
  long __n1194;
  long __d1195;
  struct std__random_access_iterator_tag agg_tmp01196;
  __i1193 = v1190;
  __n1194 = v1191;
  long t1197 = __n1194;
  __d1195 = t1197;
  int** t1198 = __i1193;
  long t1199 = __d1195;
  int** t1200 = __i1193;
  struct std__random_access_iterator_tag r1201 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(t1200);
  if (__cir_exc_active) {
    return;
  }
  agg_tmp01196 = r1201;
  struct std__random_access_iterator_tag t1202 = agg_tmp01196;
  void_std____advance_int___long_(t1198, t1199, t1202);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt12__assign_oneILb1EPiS0_EvRT0_RT1_
void void_std____assign_one_true__int___int__(int** v1203, int** v1204) {
bb1205:
  int** __out1206;
  int** __in1207;
  __out1206 = v1203;
  __in1207 = v1204;
    int** t1208 = __in1207;
    int* t1209 = *t1208;
    int t1210 = *t1209;
    int** t1211 = __out1206;
    int* t1212 = *t1211;
    *t1212 = t1210;
  return;
}

// function: _ZSt23__copy_move_backward_a2ILb1EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_backward_a2_true__int___int__(int* v1213, int* v1214, int* v1215) {
bb1216:
  int* __first1217;
  int* __last1218;
  int* __result1219;
  int* __retval1220;
  __first1217 = v1213;
  __last1218 = v1214;
  __result1219 = v1215;
      _Bool r1221 = std__is_constant_evaluated();
      if (r1221) {
      } else {
          long __n1222;
          int* t1223 = __first1217;
          int* t1224 = __last1218;
          long r1225 = std__iterator_traits_int____difference_type_std__distance_int__(t1223, t1224);
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
          __n1222 = r1225;
          long t1226 = __n1222;
          long u1227 = -t1226;
          void_std__advance_int___long_(&__result1219, u1227);
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
            long t1228 = __n1222;
            long c1229 = 1;
            _Bool c1230 = ((t1228 > c1229)) ? 1 : 0;
            if (c1230) {
              int* t1231 = __result1219;
              void* cast1232 = (void*)t1231;
              int* t1233 = __first1217;
              void* cast1234 = (void*)t1233;
              long t1235 = __n1222;
              unsigned long cast1236 = (unsigned long)t1235;
              unsigned long c1237 = 4;
              unsigned long b1238 = cast1236 * c1237;
              void* r1239 = memmove(cast1232, cast1234, b1238);
            } else {
                long t1240 = __n1222;
                long c1241 = 1;
                _Bool c1242 = ((t1240 == c1241)) ? 1 : 0;
                if (c1242) {
                  void_std____assign_one_true__int___int__(&__result1219, &__first1217);
                  if (__cir_exc_active) {
                    int* __cir_eh_ret = (int*)0;
                    return __cir_eh_ret;
                  }
                }
            }
          int* t1243 = __result1219;
          __retval1220 = t1243;
          int* t1244 = __retval1220;
          return t1244;
      }
    while (1) {
      int* t1245 = __first1217;
      int* t1246 = __last1218;
      _Bool c1247 = ((t1245 != t1246)) ? 1 : 0;
      if (!c1247) break;
        int* t1248 = __last1218;
        int c1249 = -1;
        int* ptr1250 = &(t1248)[c1249];
        __last1218 = ptr1250;
        int* t1251 = __result1219;
        int c1252 = -1;
        int* ptr1253 = &(t1251)[c1252];
        __result1219 = ptr1253;
        void_std____assign_one_true__int___int__(&__result1219, &__last1218);
        if (__cir_exc_active) {
          int* __cir_eh_ret = (int*)0;
          return __cir_eh_ret;
        }
    }
  int* t1254 = __result1219;
  __retval1220 = t1254;
  int* t1255 = __retval1220;
  return t1255;
}

// function: _ZSt23__copy_move_backward_a1ILb1EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_backward_a1_true__int___int__(int* v1256, int* v1257, int* v1258) {
bb1259:
  int* __first1260;
  int* __last1261;
  int* __result1262;
  int* __retval1263;
  __first1260 = v1256;
  __last1261 = v1257;
  __result1262 = v1258;
  int* t1264 = __first1260;
  int* t1265 = __last1261;
  int* t1266 = __result1262;
  int* r1267 = int__std____copy_move_backward_a2_true__int___int__(t1264, t1265, t1266);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1263 = r1267;
  int* t1268 = __retval1263;
  return t1268;
}

// function: _ZSt22__copy_move_backward_aILb1EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_backward_a_true__int___int__(int* v1269, int* v1270, int* v1271) {
bb1272:
  int* __first1273;
  int* __last1274;
  int* __result1275;
  int* __retval1276;
  __first1273 = v1269;
  __last1274 = v1270;
  __result1275 = v1271;
  int* t1277 = __first1273;
  int* r1278 = int__std____niter_base_int__(t1277);
  int* t1279 = __last1274;
  int* r1280 = int__std____niter_base_int__(t1279);
  int* t1281 = __result1275;
  int* r1282 = int__std____niter_base_int__(t1281);
  int* r1283 = int__std____copy_move_backward_a1_true__int___int__(r1278, r1280, r1282);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* r1284 = int__std____niter_wrap_int__(&__result1275, r1283);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1276 = r1284;
  int* t1285 = __retval1276;
  return t1285;
}

// function: _ZSt12__miter_baseIPiET_S1_
int* int__std____miter_base_int__(int* v1286) {
bb1287:
  int* __it1288;
  int* __retval1289;
  __it1288 = v1286;
  int* t1290 = __it1288;
  __retval1289 = t1290;
  int* t1291 = __retval1289;
  return t1291;
}

// function: _ZSt13move_backwardIPiS0_ET0_T_S2_S1_
int* int__std__move_backward_int___int__(int* v1292, int* v1293, int* v1294) {
bb1295:
  int* __first1296;
  int* __last1297;
  int* __result1298;
  int* __retval1299;
  __first1296 = v1292;
  __last1297 = v1293;
  __result1298 = v1294;
  int* t1300 = __first1296;
  int* r1301 = int__std____miter_base_int__(t1300);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* t1302 = __last1297;
  int* r1303 = int__std____miter_base_int__(t1302);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* t1304 = __result1298;
  int* r1305 = int__std____copy_move_backward_a_true__int___int__(r1301, r1303, t1304);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1299 = r1305;
  int* t1306 = __retval1299;
  return t1306;
}

// function: _ZSt9__fill_a1IPiiEvT_S1_RKT0_
void void_std____fill_a1_int___int_(int* v1307, int* v1308, int* v1309) {
bb1310:
  int* __first1311;
  int* __last1312;
  int* __value1313;
  _Bool __load_outside_loop1314;
  int __val1315;
  __first1311 = v1307;
  __last1312 = v1308;
  __value1313 = v1309;
  _Bool c1316 = 1;
  __load_outside_loop1314 = c1316;
  int* t1317 = __value1313;
  int t1318 = *t1317;
  __val1315 = t1318;
    while (1) {
      int* t1320 = __first1311;
      int* t1321 = __last1312;
      _Bool c1322 = ((t1320 != t1321)) ? 1 : 0;
      if (!c1322) break;
      int t1323 = __val1315;
      int* t1324 = __first1311;
      *t1324 = t1323;
    for_step1319: ;
      int* t1325 = __first1311;
      int c1326 = 1;
      int* ptr1327 = &(t1325)[c1326];
      __first1311 = ptr1327;
    }
  return;
}

// function: _ZSt8__fill_aIPiiEvT_S1_RKT0_
void void_std____fill_a_int___int_(int* v1328, int* v1329, int* v1330) {
bb1331:
  int* __first1332;
  int* __last1333;
  int* __value1334;
  __first1332 = v1328;
  __last1333 = v1329;
  __value1334 = v1330;
  int* t1335 = __first1332;
  int* t1336 = __last1333;
  int* t1337 = __value1334;
  void_std____fill_a1_int___int_(t1335, t1336, t1337);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt4fillIPiiEvT_S1_RKT0_
void void_std__fill_int___int_(int* v1338, int* v1339, int* v1340) {
bb1341:
  int* __first1342;
  int* __last1343;
  int* __value1344;
  __first1342 = v1338;
  __last1343 = v1339;
  __value1344 = v1340;
  int* t1345 = __first1342;
  int* t1346 = __last1343;
  int* t1347 = __value1344;
  void_std____fill_a_int___int_(t1345, t1346, t1347);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt10_ConstructIiJRKiEEvPT_DpOT0_
void void_std___Construct_int__int_const__(int* v1348, int* v1349) {
bb1350:
  int* __p1351;
  int* __args1352;
  __p1351 = v1348;
  __args1352 = v1349;
    _Bool r1353 = std____is_constant_evaluated();
    if (r1353) {
      int* t1354 = __p1351;
      int* t1355 = __args1352;
      int* r1356 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1354, t1355);
      return;
    }
  int* t1357 = __p1351;
  void* cast1358 = (void*)t1357;
  int* cast1359 = (int*)cast1358;
  int* t1360 = __args1352;
  int t1361 = *t1360;
  *cast1359 = t1361;
  return;
}

// function: _ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_
int* int__std____do_uninit_fill_n_int___unsigned_long__int_(int* v1362, unsigned long v1363, int* v1364) {
bb1365:
  int* __first1366;
  unsigned long __n1367;
  int* __x1368;
  int* __retval1369;
  struct std___UninitDestroyGuard_int____void_ __guard1370;
  __first1366 = v1362;
  __n1367 = v1363;
  __x1368 = v1364;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard1370, &__first1366);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
        do {
              unsigned long t1371 = __n1367;
              unsigned long c1372 = 0;
              _Bool c1373 = ((t1371 >= c1372)) ? 1 : 0;
              _Bool u1374 = !c1373;
              if (u1374) {
                char* cast1375 = (char*)&(_str_12);
                int c1376 = 463;
                char* cast1377 = (char*)&(__PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_);
                char* cast1378 = (char*)&(_str_13);
                std____glibcxx_assert_fail(cast1375, c1376, cast1377, cast1378);
              }
          _Bool c1379 = 0;
          if (!c1379) break;
        } while (1);
      while (1) {
        unsigned long t1381 = __n1367;
        unsigned long u1382 = t1381 - 1;
        __n1367 = u1382;
        _Bool cast1383 = (_Bool)t1381;
        if (!cast1383) break;
        int* t1384 = __first1366;
        int* t1385 = __x1368;
        void_std___Construct_int__int_const__(t1384, t1385);
        if (__cir_exc_active) {
          {
            std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1370);
          }
          int* __cir_eh_ret = (int*)0;
          return __cir_eh_ret;
        }
      for_step1380: ;
        int* t1386 = __first1366;
        int c1387 = 1;
        int* ptr1388 = &(t1386)[c1387];
        __first1366 = ptr1388;
      }
    std___UninitDestroyGuard_int___void___release(&__guard1370);
    if (__cir_exc_active) {
      {
        std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1370);
      }
      int* __cir_eh_ret = (int*)0;
      return __cir_eh_ret;
    }
    int* t1389 = __first1366;
    __retval1369 = t1389;
    int* t1390 = __retval1369;
    int* ret_val1391 = t1390;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1370);
    }
    return ret_val1391;
  abort();
}

// function: _ZSt20uninitialized_fill_nIPimiET_S1_T0_RKT1_
int* int__std__uninitialized_fill_n_int___unsigned_long__int_(int* v1392, unsigned long v1393, int* v1394) {
bb1395:
  int* __first1396;
  unsigned long __n1397;
  int* __x1398;
  int* __retval1399;
  __first1396 = v1392;
  __n1397 = v1393;
  __x1398 = v1394;
  int* t1400 = __first1396;
  unsigned long t1401 = __n1397;
  int* t1402 = __x1398;
  int* r1403 = int__std____do_uninit_fill_n_int___unsigned_long__int_(t1400, t1401, t1402);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1399 = r1403;
  int* t1404 = __retval1399;
  return t1404;
}

// function: _ZSt24__uninitialized_fill_n_aIPimiiET_S1_T0_RKT1_RSaIT2_E
int* int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(int* v1405, unsigned long v1406, int* v1407, struct std__allocator_int_* v1408) {
bb1409:
  int* __first1410;
  unsigned long __n1411;
  int* __x1412;
  struct std__allocator_int_* unnamed1413;
  int* __retval1414;
  __first1410 = v1405;
  __n1411 = v1406;
  __x1412 = v1407;
  unnamed1413 = v1408;
    _Bool r1415 = std__is_constant_evaluated();
    if (r1415) {
      int* t1416 = __first1410;
      unsigned long t1417 = __n1411;
      int* t1418 = __x1412;
      int* r1419 = int__std____do_uninit_fill_n_int___unsigned_long__int_(t1416, t1417, t1418);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      __retval1414 = r1419;
      int* t1420 = __retval1414;
      return t1420;
    }
  int* t1421 = __first1410;
  unsigned long t1422 = __n1411;
  int* t1423 = __x1412;
  int* r1424 = int__std__uninitialized_fill_n_int___unsigned_long__int_(t1421, t1422, t1423);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1414 = r1424;
  int* t1425 = __retval1414;
  return t1425;
}

// function: _ZNSt6vectorIiSaIiEE16_Temporary_valueD2Ev
void std__vector_int__std__allocator_int______Temporary_value____Temporary_value(struct std__vector_int__std__allocator_int_____Temporary_value* v1426) {
bb1427:
  struct std__vector_int__std__allocator_int_____Temporary_value* this1428;
  this1428 = v1426;
  struct std__vector_int__std__allocator_int_____Temporary_value* t1429 = this1428;
    struct std__vector_int__std__allocator_int__* t1430 = t1429->_M_this;
    struct std___Vector_base_int__std__allocator_int__* base1431 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1430 + 0);
    struct std__allocator_int_* base1432 = (struct std__allocator_int_*)((char *)&(base1431->_M_impl) + 0);
    int* r1433 = std__vector_int__std__allocator_int______Temporary_value___M_ptr(t1429);
    void_std__allocator_traits_std__allocator_int_____destroy_int_(base1432, r1433);
  {
    std__vector_int__std__allocator_int______Temporary_value___Storage____Storage(&t1429->_M_storage);
  }
  return;
}

// function: _ZSt32__make_move_if_noexcept_iteratorIiSt13move_iteratorIPiEET0_PT_
struct std__move_iterator_int___ std__move_iterator_int___std____make_move_if_noexcept_iterator_int__std__move_iterator_int____(int* v1434) {
bb1435:
  int* __i1436;
  struct std__move_iterator_int___ __retval1437;
  __i1436 = v1434;
  int* t1438 = __i1436;
  std__move_iterator_int____move_iterator(&__retval1437, t1438);
  if (__cir_exc_active) {
    struct std__move_iterator_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std__move_iterator_int___ t1439 = __retval1437;
  return t1439;
}

// function: _ZSt34__uninitialized_move_if_noexcept_aIPiS0_SaIiEET0_T_S3_S2_RT1_
int* int__std____uninitialized_move_if_noexcept_a_int___int___std__allocator_int___(int* v1440, int* v1441, int* v1442, struct std__allocator_int_* v1443) {
bb1444:
  int* __first1445;
  int* __last1446;
  int* __result1447;
  struct std__allocator_int_* __alloc1448;
  int* __retval1449;
  struct std__move_iterator_int___ agg_tmp01450;
  struct std__move_iterator_int___ agg_tmp11451;
  __first1445 = v1440;
  __last1446 = v1441;
  __result1447 = v1442;
  __alloc1448 = v1443;
  int* t1452 = __first1445;
  struct std__move_iterator_int___ r1453 = std__move_iterator_int___std____make_move_if_noexcept_iterator_int__std__move_iterator_int____(t1452);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  agg_tmp01450 = r1453;
  int* t1454 = __last1446;
  struct std__move_iterator_int___ r1455 = std__move_iterator_int___std____make_move_if_noexcept_iterator_int__std__move_iterator_int____(t1454);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  agg_tmp11451 = r1455;
  int* t1456 = __result1447;
  struct std__allocator_int_* t1457 = __alloc1448;
  struct std__move_iterator_int___ t1458 = agg_tmp01450;
  struct std__move_iterator_int___ t1459 = agg_tmp11451;
  int* r1460 = int__std____uninitialized_copy_a_std__move_iterator_int____std__move_iterator_int____int___int_(t1458, t1459, t1456, t1457);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1449 = r1460;
  int* t1461 = __retval1449;
  return t1461;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v1462, int* v1463, struct std__allocator_int_* v1464) {
bb1465:
  int* __first1466;
  int* __last1467;
  struct std__allocator_int_* unnamed1468;
  __first1466 = v1462;
  __last1467 = v1463;
  unnamed1468 = v1464;
  int* t1469 = __first1466;
  int* t1470 = __last1467;
  void_std___Destroy_int__(t1469, t1470);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt6vectorIiSaIiEE14_M_fill_insertEN9__gnu_cxx17__normal_iteratorIPiS1_EEmRKi
void std__vector_int__std__allocator_int______M_fill_insert(struct std__vector_int__std__allocator_int__* v1471, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1472, unsigned long v1473, int* v1474) {
bb1475:
  struct std__vector_int__std__allocator_int__* this1476;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __position1477;
  unsigned long __n1478;
  int* __x1479;
  this1476 = v1471;
  __position1477 = v1472;
  __n1478 = v1473;
  __x1479 = v1474;
  struct std__vector_int__std__allocator_int__* t1480 = this1476;
    unsigned long t1481 = __n1478;
    unsigned long c1482 = 0;
    _Bool c1483 = ((t1481 != c1482)) ? 1 : 0;
    if (c1483) {
        int** r1484 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__position1477);
        int* t1485 = *r1484;
        struct std___Vector_base_int__std__allocator_int__* base1486 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1480 + 0);
        struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1487 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1486->_M_impl) + 0);
        int* t1488 = base1487->_M_finish;
        _Bool c1489 = ((t1485 == t1488)) ? 1 : 0;
        if (c1489) {
          unsigned long t1490 = __n1478;
          int* t1491 = __x1479;
          std__vector_int__std__allocator_int______M_fill_append(t1480, t1490, t1491);
          if (__cir_exc_active) {
            return;
          }
        } else {
            struct std___Vector_base_int__std__allocator_int__* base1492 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1480 + 0);
            struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1493 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1492->_M_impl) + 0);
            int* t1494 = base1493->_M_end_of_storage;
            struct std___Vector_base_int__std__allocator_int__* base1495 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1480 + 0);
            struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1496 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1495->_M_impl) + 0);
            int* t1497 = base1496->_M_finish;
            long diff1498 = t1494 - t1497;
            unsigned long cast1499 = (unsigned long)diff1498;
            unsigned long t1500 = __n1478;
            _Bool c1501 = ((cast1499 >= t1500)) ? 1 : 0;
            if (c1501) {
              struct std__vector_int__std__allocator_int_____Temporary_value __tmp1502;
              int* __x_copy1503;
              unsigned long __elems_after1504;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp01505;
              int* __old_finish1506;
              int* t1507 = __x1479;
              std__vector_int__std__allocator_int______Temporary_value___Temporary_value_int_const__(&__tmp1502, t1480, t1507);
              if (__cir_exc_active) {
                return;
              }
                int* r1508 = std__vector_int__std__allocator_int______Temporary_value___M_val(&__tmp1502);
                __x_copy1503 = r1508;
                struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1509 = std__vector_int__std__allocator_int_____end(t1480);
                ref_tmp01505 = r1509;
                long r1510 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&ref_tmp01505, &__position1477);
                unsigned long cast1511 = (unsigned long)r1510;
                __elems_after1504 = cast1511;
                struct std___Vector_base_int__std__allocator_int__* base1512 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1480 + 0);
                struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1513 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1512->_M_impl) + 0);
                int* t1514 = base1513->_M_finish;
                __old_finish1506 = t1514;
                  unsigned long t1515 = __elems_after1504;
                  unsigned long t1516 = __n1478;
                  _Bool c1517 = ((t1515 > t1516)) ? 1 : 0;
                  if (c1517) {
                    int* t1518 = __old_finish1506;
                    unsigned long t1519 = __n1478;
                    long cast1520 = (long)t1519;
                    long u1521 = -cast1520;
                    int* ptr1522 = &(t1518)[u1521];
                    int* t1523 = __old_finish1506;
                    int* t1524 = __old_finish1506;
                    struct std___Vector_base_int__std__allocator_int__* base1525 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1480 + 0);
                    struct std__allocator_int_* r1526 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1525);
                    int* r1527 = int__std____uninitialized_move_a_int___int___std__allocator_int___(ptr1522, t1523, t1524, r1526);
                    if (__cir_exc_active) {
                      {
                        std__vector_int__std__allocator_int______Temporary_value____Temporary_value(&__tmp1502);
                      }
                      return;
                    }
                    unsigned long t1528 = __n1478;
                    struct std___Vector_base_int__std__allocator_int__* base1529 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1480 + 0);
                    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1530 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1529->_M_impl) + 0);
                    int* t1531 = base1530->_M_finish;
                    int* ptr1532 = &(t1531)[t1528];
                    base1530->_M_finish = ptr1532;
                    int** r1533 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__position1477);
                    int* t1534 = *r1533;
                    int* t1535 = __old_finish1506;
                    unsigned long t1536 = __n1478;
                    long cast1537 = (long)t1536;
                    long u1538 = -cast1537;
                    int* ptr1539 = &(t1535)[u1538];
                    int* t1540 = __old_finish1506;
                    int* r1541 = int__std__move_backward_int___int__(t1534, ptr1539, t1540);
                    if (__cir_exc_active) {
                      {
                        std__vector_int__std__allocator_int______Temporary_value____Temporary_value(&__tmp1502);
                      }
                      return;
                    }
                    int** r1542 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__position1477);
                    int* t1543 = *r1542;
                    int** r1544 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__position1477);
                    int* t1545 = *r1544;
                    unsigned long t1546 = __n1478;
                    int* ptr1547 = &(t1545)[t1546];
                    int* t1548 = __x_copy1503;
                    void_std__fill_int___int_(t1543, ptr1547, t1548);
                    if (__cir_exc_active) {
                      {
                        std__vector_int__std__allocator_int______Temporary_value____Temporary_value(&__tmp1502);
                      }
                      return;
                    }
                  } else {
                    int* t1549 = __old_finish1506;
                    unsigned long t1550 = __n1478;
                    unsigned long t1551 = __elems_after1504;
                    unsigned long b1552 = t1550 - t1551;
                    int* t1553 = __x_copy1503;
                    struct std___Vector_base_int__std__allocator_int__* base1554 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1480 + 0);
                    struct std__allocator_int_* r1555 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1554);
                    int* r1556 = int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(t1549, b1552, t1553, r1555);
                    if (__cir_exc_active) {
                      {
                        std__vector_int__std__allocator_int______Temporary_value____Temporary_value(&__tmp1502);
                      }
                      return;
                    }
                    struct std___Vector_base_int__std__allocator_int__* base1557 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1480 + 0);
                    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1558 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1557->_M_impl) + 0);
                    base1558->_M_finish = r1556;
                    int** r1559 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__position1477);
                    int* t1560 = *r1559;
                    int* t1561 = __old_finish1506;
                    struct std___Vector_base_int__std__allocator_int__* base1562 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1480 + 0);
                    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1563 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1562->_M_impl) + 0);
                    int* t1564 = base1563->_M_finish;
                    struct std___Vector_base_int__std__allocator_int__* base1565 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1480 + 0);
                    struct std__allocator_int_* r1566 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1565);
                    int* r1567 = int__std____uninitialized_move_a_int___int___std__allocator_int___(t1560, t1561, t1564, r1566);
                    if (__cir_exc_active) {
                      {
                        std__vector_int__std__allocator_int______Temporary_value____Temporary_value(&__tmp1502);
                      }
                      return;
                    }
                    unsigned long t1568 = __elems_after1504;
                    struct std___Vector_base_int__std__allocator_int__* base1569 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1480 + 0);
                    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1570 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1569->_M_impl) + 0);
                    int* t1571 = base1570->_M_finish;
                    int* ptr1572 = &(t1571)[t1568];
                    base1570->_M_finish = ptr1572;
                    int** r1573 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__position1477);
                    int* t1574 = *r1573;
                    int* t1575 = __old_finish1506;
                    int* t1576 = __x_copy1503;
                    void_std__fill_int___int_(t1574, t1575, t1576);
                    if (__cir_exc_active) {
                      {
                        std__vector_int__std__allocator_int______Temporary_value____Temporary_value(&__tmp1502);
                      }
                      return;
                    }
                  }
              {
                std__vector_int__std__allocator_int______Temporary_value____Temporary_value(&__tmp1502);
              }
            } else {
              int* __old_start1577;
              int* __old_finish1578;
              int* __pos1579;
              unsigned long __len1580;
              unsigned long __elems_before1581;
              int* __new_start1582;
              int* __new_finish1583;
              struct std___Vector_base_int__std__allocator_int__* base1584 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1480 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1585 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1584->_M_impl) + 0);
              int* t1586 = base1585->_M_start;
              __old_start1577 = t1586;
              struct std___Vector_base_int__std__allocator_int__* base1587 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1480 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1588 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1587->_M_impl) + 0);
              int* t1589 = base1588->_M_finish;
              __old_finish1578 = t1589;
              int** r1590 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__position1477);
              int* t1591 = *r1590;
              __pos1579 = t1591;
              unsigned long t1592 = __n1478;
              char* cast1593 = (char*)&(_str_10);
              unsigned long r1594 = std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(t1480, t1592, cast1593);
              if (__cir_exc_active) {
                return;
              }
              __len1580 = r1594;
              int* t1595 = __pos1579;
              int* t1596 = __old_start1577;
              long diff1597 = t1595 - t1596;
              unsigned long cast1598 = (unsigned long)diff1597;
              __elems_before1581 = cast1598;
              struct std___Vector_base_int__std__allocator_int__* base1599 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1480 + 0);
              unsigned long t1600 = __len1580;
              int* r1601 = std___Vector_base_int__std__allocator_int______M_allocate(base1599, t1600);
              if (__cir_exc_active) {
                return;
              }
              __new_start1582 = r1601;
              int* t1602 = __new_start1582;
              __new_finish1583 = t1602;
                  int* t1604 = __new_start1582;
                  unsigned long t1605 = __elems_before1581;
                  int* ptr1606 = &(t1604)[t1605];
                  unsigned long t1607 = __n1478;
                  int* t1608 = __x1479;
                  struct std___Vector_base_int__std__allocator_int__* base1609 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1480 + 0);
                  struct std__allocator_int_* r1610 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1609);
                  int* r1611 = int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(ptr1606, t1607, t1608, r1610);
                  if (__cir_exc_active) {
                    goto cir_try_dispatch1603;
                  }
                  int* c1612 = ((void*)0);
                  __new_finish1583 = c1612;
                  int* t1613 = __old_start1577;
                  int* t1614 = __pos1579;
                  int* t1615 = __new_start1582;
                  struct std___Vector_base_int__std__allocator_int__* base1616 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1480 + 0);
                  struct std__allocator_int_* r1617 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1616);
                  int* r1618 = int__std____uninitialized_move_if_noexcept_a_int___int___std__allocator_int___(t1613, t1614, t1615, r1617);
                  if (__cir_exc_active) {
                    goto cir_try_dispatch1603;
                  }
                  __new_finish1583 = r1618;
                  unsigned long t1619 = __n1478;
                  int* t1620 = __new_finish1583;
                  int* ptr1621 = &(t1620)[t1619];
                  __new_finish1583 = ptr1621;
                  int* t1622 = __pos1579;
                  int* t1623 = __old_finish1578;
                  int* t1624 = __new_finish1583;
                  struct std___Vector_base_int__std__allocator_int__* base1625 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1480 + 0);
                  struct std__allocator_int_* r1626 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1625);
                  int* r1627 = int__std____uninitialized_move_if_noexcept_a_int___int___std__allocator_int___(t1622, t1623, t1624, r1626);
                  if (__cir_exc_active) {
                    goto cir_try_dispatch1603;
                  }
                  __new_finish1583 = r1627;
                cir_try_dispatch1603: ;
                if (__cir_exc_active) {
                {
                  int ca_tok1628 = 0;
                  void* ca_exn1629 = (void*)__cir_exc_ptr;
                  __cir_exc_active = 0;
                      int* t1630 = __new_finish1583;
                      _Bool cast1631 = (_Bool)t1630;
                      _Bool u1632 = !cast1631;
                      if (u1632) {
                        int* t1633 = __new_start1582;
                        unsigned long t1634 = __elems_before1581;
                        int* ptr1635 = &(t1633)[t1634];
                        int* t1636 = __new_start1582;
                        unsigned long t1637 = __elems_before1581;
                        int* ptr1638 = &(t1636)[t1637];
                        unsigned long t1639 = __n1478;
                        int* ptr1640 = &(ptr1638)[t1639];
                        struct std___Vector_base_int__std__allocator_int__* base1641 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1480 + 0);
                        struct std__allocator_int_* r1642 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1641);
                        void_std___Destroy_int___int_(ptr1635, ptr1640, r1642);
                        if (__cir_exc_active) {
                          {
                            if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
                          }
                          return;
                        }
                      } else {
                        int* t1643 = __new_start1582;
                        int* t1644 = __new_finish1583;
                        struct std___Vector_base_int__std__allocator_int__* base1645 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1480 + 0);
                        struct std__allocator_int_* r1646 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1645);
                        void_std___Destroy_int___int_(t1643, t1644, r1646);
                        if (__cir_exc_active) {
                          {
                            if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
                          }
                          return;
                        }
                      }
                    struct std___Vector_base_int__std__allocator_int__* base1647 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1480 + 0);
                    int* t1648 = __new_start1582;
                    unsigned long t1649 = __len1580;
                    std___Vector_base_int__std__allocator_int______M_deallocate(base1647, t1648, t1649);
                    if (__cir_exc_active) {
                      {
                        if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
                      }
                      return;
                    }
                    __cir_exc_active = 1;
                    {
                      if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
                    }
                    return;
                    __builtin_unreachable();
                }
                }
              int* t1650 = __old_start1577;
              int* t1651 = __old_finish1578;
              struct std___Vector_base_int__std__allocator_int__* base1652 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1480 + 0);
              struct std__allocator_int_* r1653 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1652);
              void_std___Destroy_int___int_(t1650, t1651, r1653);
              if (__cir_exc_active) {
                return;
              }
              struct std___Vector_base_int__std__allocator_int__* base1654 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1480 + 0);
              int* t1655 = __old_start1577;
              struct std___Vector_base_int__std__allocator_int__* base1656 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1480 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1657 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1656->_M_impl) + 0);
              int* t1658 = base1657->_M_end_of_storage;
              int* t1659 = __old_start1577;
              long diff1660 = t1658 - t1659;
              unsigned long cast1661 = (unsigned long)diff1660;
              std___Vector_base_int__std__allocator_int______M_deallocate(base1654, t1655, cast1661);
              if (__cir_exc_active) {
                return;
              }
              int* t1662 = __new_start1582;
              struct std___Vector_base_int__std__allocator_int__* base1663 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1480 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1664 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1663->_M_impl) + 0);
              base1664->_M_start = t1662;
              int* t1665 = __new_finish1583;
              struct std___Vector_base_int__std__allocator_int__* base1666 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1480 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1667 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1666->_M_impl) + 0);
              base1667->_M_finish = t1665;
              int* t1668 = __new_start1582;
              unsigned long t1669 = __len1580;
              int* ptr1670 = &(t1668)[t1669];
              struct std___Vector_base_int__std__allocator_int__* base1671 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1480 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1672 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1671->_M_impl) + 0);
              base1672->_M_end_of_storage = ptr1670;
            }
        }
    }
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEplEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1673, long v1674) {
bb1675:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this1676;
  long __n1677;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval1678;
  int* ref_tmp01679;
  this1676 = v1673;
  __n1677 = v1674;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1680 = this1676;
  int* t1681 = t1680->_M_current;
  long t1682 = __n1677;
  int* ptr1683 = &(t1681)[t1682];
  ref_tmp01679 = ptr1683;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval1678, &ref_tmp01679);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1684 = __retval1678;
  return t1684;
}

// function: _ZNSt6vectorIiSaIiEE6insertEN9__gnu_cxx17__normal_iteratorIPKiS1_EEmRS4_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____insert(struct std__vector_int__std__allocator_int__* v1685, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v1686, unsigned long v1687, int* v1688) {
bb1689:
  struct std__vector_int__std__allocator_int__* this1690;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __position1691;
  unsigned long __n1692;
  int* __x1693;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval1694;
  long __offset1695;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ ref_tmp01696;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01697;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp11698;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp21699;
  this1690 = v1685;
  __position1691 = v1686;
  __n1692 = v1687;
  __x1693 = v1688;
  struct std__vector_int__std__allocator_int__* t1700 = this1690;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r1701 = std__vector_int__std__allocator_int_____cbegin___const(t1700);
  ref_tmp01696 = r1701;
  long r1702 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int_const___std__vector_int__std__allocator_int_____(&__position1691, &ref_tmp01696);
  __offset1695 = r1702;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1703 = std__vector_int__std__allocator_int_____begin(t1700);
  ref_tmp11698 = r1703;
  long t1704 = __offset1695;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1705 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&ref_tmp11698, t1704);
  agg_tmp01697 = r1705;
  unsigned long t1706 = __n1692;
  int* t1707 = __x1693;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1708 = agg_tmp01697;
  std__vector_int__std__allocator_int______M_fill_insert(t1700, t1708, t1706, t1707);
  if (__cir_exc_active) {
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1709 = std__vector_int__std__allocator_int_____begin(t1700);
  ref_tmp21699 = r1709;
  long t1710 = __offset1695;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1711 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&ref_tmp21699, t1710);
  __retval1694 = r1711;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1712 = __retval1694;
  return t1712;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v1713) {
bb1714:
  struct std__vector_int__std__allocator_int__* this1715;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval1716;
  this1715 = v1713;
  struct std__vector_int__std__allocator_int__* t1717 = this1715;
  struct std___Vector_base_int__std__allocator_int__* base1718 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1717 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1719 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1718->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval1716, &base1719->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1720 = __retval1716;
  return t1720;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2IPiQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISA_S5_EE
void _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2IPiQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISA_S5_EE(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v1721, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1722) {
bb1723:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this1724;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __i1725;
  this1724 = v1721;
  __i1725 = v1722;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t1726 = this1724;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1727 = __i1725;
  int** r1728 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t1727);
  int* t1729 = *r1728;
  t1726->_M_current = t1729;
  return;
}

// function: _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v1730, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v1731) {
bb1732:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __lhs1733;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __rhs1734;
  _Bool __retval1735;
  __lhs1733 = v1730;
  __rhs1734 = v1731;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t1736 = __lhs1733;
  int** r1737 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t1736);
  int* t1738 = *r1737;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t1739 = __rhs1734;
  int** r1740 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t1739);
  int* t1741 = *r1740;
  _Bool c1742 = ((t1738 == t1741)) ? 1 : 0;
  __retval1735 = c1742;
  _Bool t1743 = __retval1735;
  return t1743;
}

// function: _ZNKSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin___const(struct std__vector_int__std__allocator_int__* v1744) {
bb1745:
  struct std__vector_int__std__allocator_int__* this1746;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __retval1747;
  this1746 = v1744;
  struct std__vector_int__std__allocator_int__* t1748 = this1746;
  struct std___Vector_base_int__std__allocator_int__* base1749 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1748 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1750 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1749->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(&__retval1747, &base1750->_M_start);
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t1751 = __retval1747;
  return t1751;
}

// function: _ZNKSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end___const(struct std__vector_int__std__allocator_int__* v1752) {
bb1753:
  struct std__vector_int__std__allocator_int__* this1754;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __retval1755;
  this1754 = v1752;
  struct std__vector_int__std__allocator_int__* t1756 = this1754;
  struct std___Vector_base_int__std__allocator_int__* base1757 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1756 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1758 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1757->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(&__retval1755, &base1758->_M_finish);
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t1759 = __retval1755;
  return t1759;
}

// function: _ZNKSt6vectorIiSaIiEE5emptyEv
_Bool std__vector_int__std__allocator_int_____empty___const(struct std__vector_int__std__allocator_int__* v1760) {
bb1761:
  struct std__vector_int__std__allocator_int__* this1762;
  _Bool __retval1763;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ ref_tmp01764;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ ref_tmp11765;
  this1762 = v1760;
  struct std__vector_int__std__allocator_int__* t1766 = this1762;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r1767 = std__vector_int__std__allocator_int_____begin___const(t1766);
  ref_tmp01764 = r1767;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r1768 = std__vector_int__std__allocator_int_____end___const(t1766);
  ref_tmp11765 = r1768;
  _Bool r1769 = _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&ref_tmp01764, &ref_tmp11765);
  __retval1763 = r1769;
  _Bool t1770 = __retval1763;
  return t1770;
}

// function: _ZNSt6vectorIiSaIiEE8pop_backEv
void std__vector_int__std__allocator_int_____pop_back(struct std__vector_int__std__allocator_int__* v1771) {
bb1772:
  struct std__vector_int__std__allocator_int__* this1773;
  this1773 = v1771;
  struct std__vector_int__std__allocator_int__* t1774 = this1773;
    do {
          _Bool r1775 = std__vector_int__std__allocator_int_____empty___const(t1774);
          if (r1775) {
            char* cast1776 = (char*)&(_str_14);
            int c1777 = 1459;
            char* cast1778 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE8pop_backEv);
            char* cast1779 = (char*)&(_str_15);
            std____glibcxx_assert_fail(cast1776, c1777, cast1778, cast1779);
          }
      _Bool c1780 = 0;
      if (!c1780) break;
    } while (1);
  struct std___Vector_base_int__std__allocator_int__* base1781 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1774 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1782 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1781->_M_impl) + 0);
  int* t1783 = base1782->_M_finish;
  int c1784 = -1;
  int* ptr1785 = &(t1783)[c1784];
  base1782->_M_finish = ptr1785;
  struct std___Vector_base_int__std__allocator_int__* base1786 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1774 + 0);
  struct std__allocator_int_* base1787 = (struct std__allocator_int_*)((char *)&(base1786->_M_impl) + 0);
  struct std___Vector_base_int__std__allocator_int__* base1788 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1774 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1789 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1788->_M_impl) + 0);
  int* t1790 = base1789->_M_finish;
  void_std__allocator_traits_std__allocator_int_____destroy_int_(base1787, t1790);
  return;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v1791) {
bb1792:
  struct std__vector_int__std__allocator_int__* this1793;
  this1793 = v1791;
  struct std__vector_int__std__allocator_int__* t1794 = this1793;
    struct std___Vector_base_int__std__allocator_int__* base1795 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1794 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1796 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1795->_M_impl) + 0);
    int* t1797 = base1796->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base1798 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1794 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1799 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1798->_M_impl) + 0);
    int* t1800 = base1799->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base1801 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1794 + 0);
    struct std__allocator_int_* r1802 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1801);
    void_std___Destroy_int___int_(t1797, t1800, r1802);
    if (__cir_exc_active) {
      {
        struct std___Vector_base_int__std__allocator_int__* base1803 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1794 + 0);
        std___Vector_base_int__std__allocator_int_______Vector_base(base1803);
      }
      return;
    }
  {
    struct std___Vector_base_int__std__allocator_int__* base1804 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1794 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base1804);
  }
  return;
}

// function: main
int main() {
bb1805:
  int __retval1806;
  struct std__vector_int__std__allocator_int__ myints1807;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp01808;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp01809;
  int ref_tmp11810;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11811;
  int c1812 = 0;
  __retval1806 = c1812;
  std__vector_int__std__allocator_int_____vector(&myints1807);
    char* cast1813 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* r1814 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1813);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&myints1807);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long r1815 = std__vector_int__std__allocator_int_____size___const(&myints1807);
    int cast1816 = (int)r1815;
    struct std__basic_ostream_char__std__char_traits_char__* r1817 = std__ostream__operator__(r1814, cast1816);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&myints1807);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__basic_ostream_char__std__char_traits_char__* r1818 = std__ostream__operator___std__ostream_____(r1817, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&myints1807);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long r1819 = std__vector_int__std__allocator_int_____size___const(&myints1807);
    unsigned long c1820 = 0;
    _Bool c1821 = ((r1819 == c1820)) ? 1 : 0;
    if (c1821) {
    } else {
      char* cast1822 = (char*)&(_str_1);
      char* c1823 = _str_2;
      unsigned int c1824 = 18;
      char* cast1825 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1822, c1823, c1824, cast1825);
    }
      int i1826;
      int c1827 = 0;
      i1826 = c1827;
      while (1) {
        int t1829 = i1826;
        int c1830 = 10;
        _Bool c1831 = ((t1829 < c1830)) ? 1 : 0;
        if (!c1831) break;
        std__vector_int__std__allocator_int_____push_back(&myints1807, &i1826);
        if (__cir_exc_active) {
          {
            std__vector_int__std__allocator_int______vector(&myints1807);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
      for_step1828: ;
        int t1832 = i1826;
        int u1833 = t1832 + 1;
        i1826 = u1833;
      }
    char* cast1834 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* r1835 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1834);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&myints1807);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long r1836 = std__vector_int__std__allocator_int_____size___const(&myints1807);
    int cast1837 = (int)r1836;
    struct std__basic_ostream_char__std__char_traits_char__* r1838 = std__ostream__operator__(r1835, cast1837);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&myints1807);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__basic_ostream_char__std__char_traits_char__* r1839 = std__ostream__operator___std__ostream_____(r1838, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&myints1807);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long r1840 = std__vector_int__std__allocator_int_____size___const(&myints1807);
    unsigned long c1841 = 10;
    _Bool c1842 = ((r1840 == c1841)) ? 1 : 0;
    if (c1842) {
    } else {
      char* cast1843 = (char*)&(_str_4);
      char* c1844 = _str_2;
      unsigned int c1845 = 22;
      char* cast1846 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1843, c1844, c1845, cast1846);
    }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1847 = std__vector_int__std__allocator_int_____end(&myints1807);
    ref_tmp01809 = r1847;
    _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2IPiQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISA_S5_EE(&agg_tmp01808, &ref_tmp01809);
    unsigned long c1848 = 10;
    int c1849 = 100;
    ref_tmp11810 = c1849;
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t1850 = agg_tmp01808;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1851 = std__vector_int__std__allocator_int_____insert(&myints1807, t1850, c1848, &ref_tmp11810);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&myints1807);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp11811 = r1851;
    char* cast1852 = (char*)&(_str_5);
    struct std__basic_ostream_char__std__char_traits_char__* r1853 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1852);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&myints1807);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long r1854 = std__vector_int__std__allocator_int_____size___const(&myints1807);
    int cast1855 = (int)r1854;
    struct std__basic_ostream_char__std__char_traits_char__* r1856 = std__ostream__operator__(r1853, cast1855);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&myints1807);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__basic_ostream_char__std__char_traits_char__* r1857 = std__ostream__operator___std__ostream_____(r1856, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&myints1807);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long r1858 = std__vector_int__std__allocator_int_____size___const(&myints1807);
    unsigned long c1859 = 20;
    _Bool c1860 = ((r1858 == c1859)) ? 1 : 0;
    if (c1860) {
    } else {
      char* cast1861 = (char*)&(_str_6);
      char* c1862 = _str_2;
      unsigned int c1863 = 26;
      char* cast1864 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1861, c1862, c1863, cast1864);
    }
    std__vector_int__std__allocator_int_____pop_back(&myints1807);
    char* cast1865 = (char*)&(_str_7);
    struct std__basic_ostream_char__std__char_traits_char__* r1866 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1865);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&myints1807);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long r1867 = std__vector_int__std__allocator_int_____size___const(&myints1807);
    int cast1868 = (int)r1867;
    struct std__basic_ostream_char__std__char_traits_char__* r1869 = std__ostream__operator__(r1866, cast1868);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&myints1807);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__basic_ostream_char__std__char_traits_char__* r1870 = std__ostream__operator___std__ostream_____(r1869, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&myints1807);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long r1871 = std__vector_int__std__allocator_int_____size___const(&myints1807);
    unsigned long c1872 = 19;
    _Bool c1873 = ((r1871 != c1872)) ? 1 : 0;
    if (c1873) {
    } else {
      char* cast1874 = (char*)&(_str_8);
      char* c1875 = _str_2;
      unsigned int c1876 = 30;
      char* cast1877 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1874, c1875, c1876, cast1877);
    }
    int c1878 = 0;
    __retval1806 = c1878;
    int t1879 = __retval1806;
    int ret_val1880 = t1879;
    {
      std__vector_int__std__allocator_int______vector(&myints1807);
    }
    return ret_val1880;
  int t1881 = __retval1806;
  return t1881;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE
void _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1882) {
bb1883:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1884;
  this1884 = v1882;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1885 = this1884;
  struct std__allocator_int_* base1886 = (struct std__allocator_int_*)((char *)t1885 + 0);
  std__allocator_int___allocator(base1886);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1887 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t1885 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base1887);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1888) {
bb1889:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1890;
  this1890 = v1888;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1891 = this1890;
  {
    struct std__allocator_int_* base1892 = (struct std__allocator_int_*)((char *)t1891 + 0);
    std__allocator_int____allocator(base1892);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2Ev
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1893) {
bb1894:
  struct std___Vector_base_int__std__allocator_int__* this1895;
  this1895 = v1893;
  struct std___Vector_base_int__std__allocator_int__* t1896 = this1895;
  _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(&t1896->_M_impl);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1897:
  _Bool __retval1898;
    _Bool c1899 = 0;
    __retval1898 = c1899;
    _Bool t1900 = __retval1898;
    return t1900;
  abort();
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v1901, int* v1902, unsigned long v1903) {
bb1904:
  struct std____new_allocator_int_* this1905;
  int* __p1906;
  unsigned long __n1907;
  this1905 = v1901;
  __p1906 = v1902;
  __n1907 = v1903;
  struct std____new_allocator_int_* t1908 = this1905;
    unsigned long c1909 = 4;
    unsigned long c1910 = 16;
    _Bool c1911 = ((c1909 > c1910)) ? 1 : 0;
    if (c1911) {
      int* t1912 = __p1906;
      void* cast1913 = (void*)t1912;
      unsigned long t1914 = __n1907;
      unsigned long c1915 = 4;
      unsigned long b1916 = t1914 * c1915;
      unsigned long c1917 = 4;
      operator_delete_3(cast1913, b1916, c1917);
      return;
    }
  int* t1918 = __p1906;
  void* cast1919 = (void*)t1918;
  unsigned long t1920 = __n1907;
  unsigned long c1921 = 4;
  unsigned long b1922 = t1920 * c1921;
  operator_delete_2(cast1919, b1922);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1923, int* v1924, unsigned long v1925) {
bb1926:
  struct std__allocator_int_* this1927;
  int* __p1928;
  unsigned long __n1929;
  this1927 = v1923;
  __p1928 = v1924;
  __n1929 = v1925;
  struct std__allocator_int_* t1930 = this1927;
    _Bool r1931 = std____is_constant_evaluated();
    if (r1931) {
      int* t1932 = __p1928;
      void* cast1933 = (void*)t1932;
      operator_delete(cast1933);
      return;
    }
  struct std____new_allocator_int_* base1934 = (struct std____new_allocator_int_*)((char *)t1930 + 0);
  int* t1935 = __p1928;
  unsigned long t1936 = __n1929;
  std____new_allocator_int___deallocate(base1934, t1935, t1936);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1937, int* v1938, unsigned long v1939) {
bb1940:
  struct std__allocator_int_* __a1941;
  int* __p1942;
  unsigned long __n1943;
  __a1941 = v1937;
  __p1942 = v1938;
  __n1943 = v1939;
  struct std__allocator_int_* t1944 = __a1941;
  int* t1945 = __p1942;
  unsigned long t1946 = __n1943;
  std__allocator_int___deallocate(t1944, t1945, t1946);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v1947, int* v1948, unsigned long v1949) {
bb1950:
  struct std___Vector_base_int__std__allocator_int__* this1951;
  int* __p1952;
  unsigned long __n1953;
  this1951 = v1947;
  __p1952 = v1948;
  __n1953 = v1949;
  struct std___Vector_base_int__std__allocator_int__* t1954 = this1951;
    int* t1955 = __p1952;
    _Bool cast1956 = (_Bool)t1955;
    if (cast1956) {
      struct std__allocator_int_* base1957 = (struct std__allocator_int_*)((char *)&(t1954->_M_impl) + 0);
      int* t1958 = __p1952;
      unsigned long t1959 = __n1953;
      std__allocator_traits_std__allocator_int_____deallocate(base1957, t1958, t1959);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1960) {
bb1961:
  struct std___Vector_base_int__std__allocator_int__* this1962;
  this1962 = v1960;
  struct std___Vector_base_int__std__allocator_int__* t1963 = this1962;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1964 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1963->_M_impl) + 0);
    int* t1965 = base1964->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1966 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1963->_M_impl) + 0);
    int* t1967 = base1966->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1968 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1963->_M_impl) + 0);
    int* t1969 = base1968->_M_start;
    long diff1970 = t1967 - t1969;
    unsigned long cast1971 = (unsigned long)diff1970;
    std___Vector_base_int__std__allocator_int______M_deallocate(t1963, t1965, cast1971);
    if (__cir_exc_active) {
      {
        std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t1963->_M_impl);
      }
      return;
    }
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t1963->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1972) {
bb1973:
  struct std____new_allocator_int_* this1974;
  this1974 = v1972;
  struct std____new_allocator_int_* t1975 = this1974;
  return;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator(struct std__allocator_int_* v1976) {
bb1977:
  struct std__allocator_int_* this1978;
  this1978 = v1976;
  struct std__allocator_int_* t1979 = this1978;
  struct std____new_allocator_int_* base1980 = (struct std____new_allocator_int_*)((char *)t1979 + 0);
  std____new_allocator_int_____new_allocator(base1980);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v1981) {
bb1982:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this1983;
  this1983 = v1981;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1984 = this1983;
  int* c1985 = ((void*)0);
  t1984->_M_start = c1985;
  int* c1986 = ((void*)0);
  t1984->_M_finish = c1986;
  int* c1987 = ((void*)0);
  t1984->_M_end_of_storage = c1987;
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v1988) {
bb1989:
  struct std__allocator_int_* this1990;
  this1990 = v1988;
  struct std__allocator_int_* t1991 = this1990;
  return;
}

// function: _ZNSt6vectorIiSaIiEE16_Temporary_value8_StorageC2Ev
void std__vector_int__std__allocator_int______Temporary_value___Storage___Storage(union std__vector_int__std__allocator_int_____Temporary_value___Storage* v1992) {
bb1993:
  union std__vector_int__std__allocator_int_____Temporary_value___Storage* this1994;
  this1994 = v1992;
  union std__vector_int__std__allocator_int_____Temporary_value___Storage* t1995 = this1994;
  unsigned char c1996 = 0;
  t1995->_M_byte = c1996;
  return;
}

// function: _ZNSt6vectorIiSaIiEE16_Temporary_value6_M_ptrEv
int* std__vector_int__std__allocator_int______Temporary_value___M_ptr(struct std__vector_int__std__allocator_int_____Temporary_value* v1997) {
bb1998:
  struct std__vector_int__std__allocator_int_____Temporary_value* this1999;
  int* __retval2000;
  this1999 = v1997;
  struct std__vector_int__std__allocator_int_____Temporary_value* t2001 = this1999;
  __retval2000 = &t2001->_M_storage._M_val;
  int* t2002 = __retval2000;
  return t2002;
}

// function: _ZNSt6vectorIiSaIiEE16_Temporary_value8_StorageD2Ev
void std__vector_int__std__allocator_int______Temporary_value___Storage____Storage(union std__vector_int__std__allocator_int_____Temporary_value___Storage* v2003) {
bb2004:
  union std__vector_int__std__allocator_int_____Temporary_value___Storage* this2005;
  this2005 = v2003;
  union std__vector_int__std__allocator_int_____Temporary_value___Storage* t2006 = this2005;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v2007, int* v2008) {
bb2009:
  int* __first2010;
  int* __last2011;
  __first2010 = v2007;
  __last2011 = v2008;
      _Bool r2012 = std____is_constant_evaluated();
      if (r2012) {
          while (1) {
            int* t2014 = __first2010;
            int* t2015 = __last2011;
            _Bool c2016 = ((t2014 != t2015)) ? 1 : 0;
            if (!c2016) break;
            int* t2017 = __first2010;
            void_std__destroy_at_int_(t2017);
            if (__cir_exc_active) {
              return;
            }
          for_step2013: ;
            int* t2018 = __first2010;
            int c2019 = 1;
            int* ptr2020 = &(t2018)[c2019];
            __first2010 = ptr2020;
          }
      }
  return;
}

