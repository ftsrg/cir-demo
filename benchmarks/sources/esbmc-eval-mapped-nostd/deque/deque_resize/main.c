extern void abort(void);
// Exception handling state (modelled in plain C)
static void *__cir_exc_ptr;
static const void *__cir_exc_type;
static unsigned long __cir_exc_type_id;
static int __cir_exc_active;
static void *__cir_exc_dtor;

// Struct definitions (auto-parsed)
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Deque_iterator_int__int____int___ { int* _M_cur; int* _M_first; int* _M_last; int** _M_node; };
struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____std__allocator_int__ { struct std___Deque_iterator_int__int____int___ _M_first; struct std___Deque_iterator_int__int____int___* _M_cur; struct std__allocator_int_* _M_alloc; };
struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____void_ { struct std___Deque_iterator_int__int____int___ _M_first; struct std___Deque_iterator_int__int____int___* _M_cur; };
struct std____detail____move_iter_cat_std___Deque_iterator_int__int____int____ { unsigned char __field0; };
struct std____new_allocator_int_ { unsigned char __field0; };
struct std____new_allocator_int___ { unsigned char __field0; };
struct std__allocator_int_ { unsigned char __field0; };
struct std__allocator_int___ { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__move_iterator_std___Deque_iterator_int__int____int____ { struct std___Deque_iterator_int__int____int___ _M_current; };
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__ranges____imove___IterMove { unsigned char __field0; };
struct std___Deque_base_int__std__allocator_int_____Deque_impl_data { int** _M_map; unsigned long _M_map_size; struct std___Deque_iterator_int__int____int___ _M_start; struct std___Deque_iterator_int__int____int___ _M_finish; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Deque_base_int__std__allocator_int_____Deque_impl { struct std___Deque_base_int__std__allocator_int_____Deque_impl_data __field0; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std___Deque_base_int__std__allocator_int__ { struct std___Deque_base_int__std__allocator_int_____Deque_impl _M_impl; };
struct std__deque_int__std__allocator_int__ { struct std___Deque_base_int__std__allocator_int__ __field0; };

// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[20] = "mydeque.size() == 9";
char _str_1[106] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/deque/deque_resize/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[16] = "mydeque[0] == 1";
char _str_3[20] = "mydeque.size() == 5";
char _str_4[20] = "mydeque.size() == 8";
char _str_5[18] = "mydeque[5] == 100";
char _str_6[21] = "mydeque.size() == 12";
char _str_7[17] = "mydeque[10] == 0";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_8[18] = "mydeque contains:";
char _str_9[48] = "cannot create std::deque larger than max_size()";
char _str_10[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_deque.h";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE4backEv[76] = "reference std::deque<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_11[15] = "!this->empty()";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEEixEm[91] = "reference std::deque<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_12[19] = "__n < this->size()";
char _str_13[31] = "deque::_M_new_elements_at_back";
char _str_14[32] = "deque::_M_new_elements_at_front";
struct std__ranges____imove___IterMove _ZNSt6ranges4_Cpo9iter_moveE;
void std__deque_int__std__allocator_int_____deque(struct std__deque_int__std__allocator_int__* p0);
void std___Deque_iterator_int__int___int_____Deque_iterator_2(struct std___Deque_iterator_int__int____int___* p0);
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std__allocator_int_* p0, int* p1, int* p2);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__deque_int__std__allocator_int______S_max_size(struct std__allocator_int_* p0);
unsigned long std__deque_int__std__allocator_int_____max_size___const(struct std__deque_int__std__allocator_int__* p0);
extern void std____throw_length_error(char* p0);
int** int___std____niter_wrap_int___(int*** p0, int** p1);
long std__iterator_traits_int_____difference_type_std____distance_int___(int** p0, int** p1, struct std__random_access_iterator_tag p2);
struct std__random_access_iterator_tag std__iterator_traits_int_____iterator_category_std____iterator_category_int___(int*** p0);
long std__iterator_traits_int_____difference_type_std__distance_int___(int** p0, int** p1);
extern void* memmove(void* p0, void* p1, unsigned long p2);
void void_std____assign_one_false__int____int___(int*** p0, int*** p1);
int** int___std____copy_move_a2_false__int____int____int___(int** p0, int** p1, int** p2);
int** int___std____copy_move_a1_false__int____int___(int** p0, int** p1, int** p2);
int** int___std____niter_base_int___(int** p0);
int** int___std____copy_move_a_false__int____int___(int** p0, int** p1, int** p2);
int** int___std____miter_base_int___(int** p0);
int** int___std__copy_int____int___(int** p0, int** p1, int** p2);
_Bool std__is_constant_evaluated();
void void_std____advance_int____long_(int*** p0, long p1, struct std__random_access_iterator_tag p2);
void void_std__advance_int____long_(int*** p0, long p1);
int** int___std____copy_move_backward_a2_false__int____int___(int** p0, int** p1, int** p2);
int** int___std____copy_move_backward_a1_false__int____int___(int** p0, int** p1, int** p2);
int** int___std____copy_move_backward_a_false__int____int___(int** p0, int** p1, int** p2);
int** int___std__copy_backward_int____int___(int** p0, int** p1, int** p2);
void std__deque_int__std__allocator_int______M_reallocate_map(struct std__deque_int__std__allocator_int__* p0, unsigned long p1, _Bool p2);
void std__deque_int__std__allocator_int______M_reserve_map_at_back(struct std__deque_int__std__allocator_int__* p0, unsigned long p1);
void void_std__deque_int__std__allocator_int______M_push_back_aux_int_(struct std__deque_int__std__allocator_int__* p0, int* p1);
_Bool std__operator__(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___* p1);
_Bool std__deque_int__std__allocator_int_____empty___const(struct std__deque_int__std__allocator_int__* p0);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator___2(struct std___Deque_iterator_int__int____int___* p0);
int* std___Deque_iterator_int__int___int____operator____const(struct std___Deque_iterator_int__int____int___* p0);
int* std__deque_int__std__allocator_int_____back(struct std__deque_int__std__allocator_int__* p0);
int* int__std__deque_int__std__allocator_int_____emplace_back_int_(struct std__deque_int__std__allocator_int__* p0, int* p1);
void std__deque_int__std__allocator_int_____push_back(struct std__deque_int__std__allocator_int__* p0, int* p1);
long std__operator_(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___* p1);
unsigned long std__deque_int__std__allocator_int_____size___const(struct std__deque_int__std__allocator_int__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator___3(struct std___Deque_iterator_int__int____int___* p0, long p1);
struct std___Deque_iterator_int__int____int___ std__operator__4(struct std___Deque_iterator_int__int____int___* p0, long p1);
int* std___Deque_iterator_int__int___int____operator___long__const(struct std___Deque_iterator_int__int____int___* p0, long p1);
int* std__deque_int__std__allocator_int_____operator__(struct std__deque_int__std__allocator_int__* p0, unsigned long p1);
void std__deque_int__std__allocator_int______M_new_elements_at_back(struct std__deque_int__std__allocator_int__* p0, unsigned long p1);
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int______M_reserve_elements_at_back(struct std__deque_int__std__allocator_int__* p0, unsigned long p1);
void std___UninitDestroyGuard_std___Deque_iterator_int__int___int____void____UninitDestroyGuard(struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____void_* p0, struct std___Deque_iterator_int__int____int___* p1);
int* _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* p0);
void void_std___Construct_int_(int* p0);
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator___4(struct std___Deque_iterator_int__int____int___* p0);
void std___UninitDestroyGuard_std___Deque_iterator_int__int___int____void___release(struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____void_* p0);
void std___UninitDestroyGuard_std___Deque_iterator_int__int___int____void_____UninitDestroyGuard(struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____void_* p0);
void void_std____uninitialized_default_1_false_____uninit_default_std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1);
void void_std____fill_a1_int___int_(int* p0, int* p1, int* p2);
void void_std____fill_a1_int__int_(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___* p1, int* p2);
void void_std____fill_a_std___Deque_iterator_int__int___int____int_(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1, int* p2);
void void_std__fill_std___Deque_iterator_int__int___int____int_(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1, int* p2);
void void_std____uninitialized_default_1_true_____uninit_default_std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1);
void void_std____uninitialized_default_std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1);
void void_std____uninitialized_default_a_std___Deque_iterator_int__int___int____int_(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1, struct std__allocator_int_* p2);
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator_(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___* p1);
void std__deque_int__std__allocator_int______M_default_append(struct std__deque_int__std__allocator_int__* p0, unsigned long p1);
void std__deque_int__std__allocator_int______M_erase_at_end(struct std__deque_int__std__allocator_int__* p0, struct std___Deque_iterator_int__int____int___ p1);
void std__deque_int__std__allocator_int_____resize(struct std__deque_int__std__allocator_int__* p0, unsigned long p1);
void std__deque_int__std__allocator_int______M_reserve_map_at_front(struct std__deque_int__std__allocator_int__* p0, unsigned long p1);
void std__deque_int__std__allocator_int______M_new_elements_at_front(struct std__deque_int__std__allocator_int__* p0, unsigned long p1);
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator__(struct std___Deque_iterator_int__int____int___* p0, long p1);
struct std___Deque_iterator_int__int____int___ std__operator__2(struct std___Deque_iterator_int__int____int___* p0, long p1);
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int______M_reserve_elements_at_front(struct std__deque_int__std__allocator_int__* p0, unsigned long p1);
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* p0, int* p1);
void void_std___Construct_int__int_const__(int* p0, int* p1);
void void_std____do_uninit_fill_std___Deque_iterator_int__int___int____int_(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1, int* p2);
void void_std__uninitialized_fill_std___Deque_iterator_int__int___int____int_(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1, int* p2);
void void_std____uninitialized_fill_a_std___Deque_iterator_int__int___int____int__int_(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1, int* p2, struct std__allocator_int_* p3);
struct std___Deque_iterator_int__int____int___* std__move_iterator_std___Deque_iterator_int__int___int______base___const__(struct std__move_iterator_std___Deque_iterator_int__int____int____* p0);
_Bool bool_std__operator___std___Deque_iterator_int__int___int____(struct std__move_iterator_std___Deque_iterator_int__int____int____* p0, struct std__move_iterator_std___Deque_iterator_int__int____int____* p1);
void void_std___Construct_int__int_(int* p0, int* p1);
int* _ZNKSt6ranges7__imove9_IterMoveclIRKSt15_Deque_iteratorIiRiPiEQoo11__adl_imoveIT_ErqTDTdeclsr3stdE7declvalIS9_EEEEEENS1_8__resultIS9_E4typeEOS9_(struct std__ranges____imove___IterMove* p0, struct std___Deque_iterator_int__int____int___* p1);
int* std__move_iterator_std___Deque_iterator_int__int___int______operator____const(struct std__move_iterator_std___Deque_iterator_int__int____int____* p0);
struct std__move_iterator_std___Deque_iterator_int__int____int____* std__move_iterator_std___Deque_iterator_int__int___int______operator__(struct std__move_iterator_std___Deque_iterator_int__int____int____* p0);
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____do_uninit_copy_std__move_iterator_std___Deque_iterator_int__int___int______std__move_iterator_std___Deque_iterator_int__int___int______std___Deque_iterator_int__int___int____(struct std__move_iterator_std___Deque_iterator_int__int____int____ p0, struct std__move_iterator_std___Deque_iterator_int__int____int____ p1, struct std___Deque_iterator_int__int____int___ p2);
void std__move_iterator_std___Deque_iterator_int__int___int______move_iterator(struct std__move_iterator_std___Deque_iterator_int__int____int____* p0, struct std__move_iterator_std___Deque_iterator_int__int____int____* p1);
void std__move_iterator_std___Deque_iterator_int__int___int______move_iterator_2(struct std__move_iterator_std___Deque_iterator_int__int____int____* p0, struct std__move_iterator_std___Deque_iterator_int__int____int____* p1);
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std__uninitialized_copy_std__move_iterator_std___Deque_iterator_int__int___int______std___Deque_iterator_int__int___int____(struct std__move_iterator_std___Deque_iterator_int__int____int____ p0, struct std__move_iterator_std___Deque_iterator_int__int____int____ p1, struct std___Deque_iterator_int__int____int___ p2);
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____uninitialized_copy_a_std__move_iterator_std___Deque_iterator_int__int___int______std__move_iterator_std___Deque_iterator_int__int___int______std___Deque_iterator_int__int___int____int_(struct std__move_iterator_std___Deque_iterator_int__int____int____ p0, struct std__move_iterator_std___Deque_iterator_int__int____int____ p1, struct std___Deque_iterator_int__int____int___ p2, struct std__allocator_int_* p3);
void std__move_iterator_std___Deque_iterator_int__int___int______move_iterator_3(struct std__move_iterator_std___Deque_iterator_int__int____int____* p0, struct std___Deque_iterator_int__int____int___ p1);
struct std__move_iterator_std___Deque_iterator_int__int____int____ std__move_iterator_std___Deque_iterator_int__int___int_____std__make_move_iterator_std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ p0);
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____uninitialized_move_a_std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____std__allocator_int___(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1, struct std___Deque_iterator_int__int____int___ p2, struct std__allocator_int_* p3);
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____niter_wrap_std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___ p1);
long* long_const__std__min_long_(long* p0, long* p1);
long std__iterator_traits_int____difference_type_std____distance_int__(int* p0, int* p1, struct std__random_access_iterator_tag p2);
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** p0);
long std__iterator_traits_int____difference_type_std__distance_int__(int* p0, int* p1);
void void_std____assign_one_true__int___int__(int** p0, int** p1);
int* int__std____copy_move_a2_true__int___int___int__(int* p0, int* p1, int* p2);
int* int__std____copy_move_a1_true__int___int__(int* p0, int* p1, int* p2);
struct std___Deque_iterator_int__int____int___ __gnu_cxx____enable_if___is_random_access_iter_int______value__std___Deque_iterator_int__int___int________type_std____copy_move_a1_true__int___int_(int* p0, int* p1, struct std___Deque_iterator_int__int____int___ p2);
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____copy_move_dit_true__int__int___int___std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1, struct std___Deque_iterator_int__int____int___ p2);
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____copy_move_a1_true__int__int___int___int_(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1, struct std___Deque_iterator_int__int____int___ p2);
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____niter_base_std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ p0);
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____copy_move_a_true__std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1, struct std___Deque_iterator_int__int____int___ p2);
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____miter_base_std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ p0);
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std__move_std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1, struct std___Deque_iterator_int__int____int___ p2);
void std___UninitDestroyGuard_std___Deque_iterator_int__int___int____std__allocator_int______UninitDestroyGuard(struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____std__allocator_int__* p0, struct std___Deque_iterator_int__int____int___* p1, struct std__allocator_int_* p2);
void std___UninitDestroyGuard_std___Deque_iterator_int__int___int____std__allocator_int_____release(struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____std__allocator_int__* p0);
void std___UninitDestroyGuard_std___Deque_iterator_int__int___int____std__allocator_int_______UninitDestroyGuard(struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____std__allocator_int__* p0);
void void_std____uninitialized_move_fill_std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____int__std__allocator_int___(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1, struct std___Deque_iterator_int__int____int___ p2, struct std___Deque_iterator_int__int____int___ p3, int* p4, struct std__allocator_int_* p5);
void void_std____advance_int___long_(int** p0, long p1, struct std__random_access_iterator_tag p2);
void void_std__advance_int___long_(int** p0, long p1);
int* int__std____copy_move_backward_a2_true__int___int__(int* p0, int* p1, int* p2);
int* int__std____copy_move_backward_a1_true__int___int__(int* p0, int* p1, int* p2);
struct std___Deque_iterator_int__int____int___ __gnu_cxx____enable_if___is_random_access_iter_int______value__std___Deque_iterator_int__int___int________type_std____copy_move_backward_a1_true__int___int_(int* p0, int* p1, struct std___Deque_iterator_int__int____int___ p2);
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____copy_move_backward_dit_true__int__int___int___std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1, struct std___Deque_iterator_int__int____int___ p2);
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____copy_move_backward_a1_true__int__int___int___int_(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1, struct std___Deque_iterator_int__int____int___ p2);
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____copy_move_backward_a_true__std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1, struct std___Deque_iterator_int__int____int___ p2);
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std__move_backward_std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1, struct std___Deque_iterator_int__int____int___ p2);
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____uninitialized_fill_move_std___Deque_iterator_int__int___int____int__std___Deque_iterator_int__int___int____std__allocator_int___(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1, int* p2, struct std___Deque_iterator_int__int____int___ p3, struct std___Deque_iterator_int__int____int___ p4, struct std__allocator_int_* p5);
void std__deque_int__std__allocator_int______M_insert_aux(struct std__deque_int__std__allocator_int__* p0, struct std___Deque_iterator_int__int____int___ p1, unsigned long p2, int* p3);
void std__deque_int__std__allocator_int______M_fill_insert(struct std__deque_int__std__allocator_int__* p0, struct std___Deque_iterator_int__int____int___ p1, unsigned long p2, int* p3);
void std__deque_int__std__allocator_int_____resize_2(struct std__deque_int__std__allocator_int__* p0, unsigned long p1, int* p2);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator__3(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
_Bool __gnu_cxx__char_traits_char___eq(char* p0, char* p1);
unsigned long __gnu_cxx__char_traits_char___length(char* p0);
extern unsigned long strlen(char* p0);
unsigned long std__char_traits_char___length(char* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
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
void std__deque_int__std__allocator_int______deque(struct std__deque_int__std__allocator_int__* p0);
int main();
void std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* p0);
unsigned long std____deque_buf_size(unsigned long p0);
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* p0, unsigned long* p1);
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Deque_base_int__std__allocator_int__* p0);
void std__allocator_int____allocator_int_(struct std__allocator_int___* p0, struct std__allocator_int_* p1);
struct std__allocator_int___ std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(struct std___Deque_base_int__std__allocator_int__* p0);
_Bool std____is_constant_evaluated();
extern void std____throw_bad_array_new_length();
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new(unsigned long p0) { return malloc(p0); }
unsigned long std____new_allocator_int_____M_max_size___const(struct std____new_allocator_int___* p0);
extern void std____throw_bad_alloc();
void* operator_new_2(unsigned long p0, unsigned long p1) { return malloc(p0); }
int** std____new_allocator_int____allocate(struct std____new_allocator_int___* p0, unsigned long p1, void* p2);
int** std__allocator_int____allocate(struct std__allocator_int___* p0, unsigned long p1);
int** std__allocator_traits_std__allocator_int______allocate(struct std__allocator_int___* p0, unsigned long p1);
int** std___Deque_base_int__std__allocator_int______M_allocate_map(struct std___Deque_base_int__std__allocator_int__* p0, unsigned long p1);
extern int __gxx_personality_v0();
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* p0);
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* p0, unsigned long p1, void* p2);
int* std__allocator_int___allocate(struct std__allocator_int_* p0, unsigned long p1);
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* p0, unsigned long p1);
int* std___Deque_base_int__std__allocator_int______M_allocate_node(struct std___Deque_base_int__std__allocator_int__* p0);
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* p0, int* p1, unsigned long p2);
void std__allocator_int___deallocate(struct std__allocator_int_* p0, int* p1, unsigned long p2);
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* p0, int* p1, unsigned long p2);
void std___Deque_base_int__std__allocator_int______M_deallocate_node(struct std___Deque_base_int__std__allocator_int__* p0, int* p1);
void std___Deque_base_int__std__allocator_int______M_destroy_nodes(struct std___Deque_base_int__std__allocator_int__* p0, int** p1, int** p2);
void std___Deque_base_int__std__allocator_int______M_create_nodes(struct std___Deque_base_int__std__allocator_int__* p0, int** p1, int** p2);
void std____new_allocator_int____deallocate(struct std____new_allocator_int___* p0, int** p1, unsigned long p2);
void std__allocator_int____deallocate(struct std__allocator_int___* p0, int** p1, unsigned long p2);
void std__allocator_traits_std__allocator_int______deallocate(struct std__allocator_int___* p0, int** p1, unsigned long p2);
void std___Deque_base_int__std__allocator_int______M_deallocate_map(struct std___Deque_base_int__std__allocator_int__* p0, int** p1, unsigned long p2);
unsigned long std___Deque_iterator_int__int___int_____S_buffer_size();
void std___Deque_iterator_int__int___int_____M_set_node(struct std___Deque_iterator_int__int____int___* p0, int** p1);
void std___Deque_base_int__std__allocator_int______M_initialize_map(struct std___Deque_base_int__std__allocator_int__* p0, unsigned long p1);
void std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* p0);
void std___Deque_base_int__std__allocator_int______Deque_base(struct std___Deque_base_int__std__allocator_int__* p0);
void std___Deque_base_int__std__allocator_int_______Deque_base(struct std___Deque_base_int__std__allocator_int__* p0);
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* p0);
void std__allocator_int___allocator(struct std__allocator_int_* p0);
void std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data(struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* p0);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
void std____new_allocator_int______new_allocator(struct std____new_allocator_int___* p0);
void void_std__destroy_at_int_(int* p0);
void void_std___Destroy_int__(int* p0, int* p1);
void void_std___Destroy_int___int_(int* p0, int* p1, struct std__allocator_int_* p2);
unsigned long std__deque_int__std__allocator_int______S_buffer_size();
void std__deque_int__std__allocator_int______M_destroy_data_aux(struct std__deque_int__std__allocator_int__* p0, struct std___Deque_iterator_int__int____int___ p1, struct std___Deque_iterator_int__int____int___ p2);
void std___Deque_iterator_int__int___int_____Deque_iterator(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___* p1);
void std__deque_int__std__allocator_int______M_destroy_data(struct std__deque_int__std__allocator_int__* p0, struct std___Deque_iterator_int__int____int___ p1, struct std___Deque_iterator_int__int____int___ p2, struct std__allocator_int_* p3);
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____begin(struct std__deque_int__std__allocator_int__* p0);
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____end(struct std__deque_int__std__allocator_int__* p0);
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Deque_base_int__std__allocator_int__* p0);
void void_std___Destroy_std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1);
void void_std___Destroy_std___Deque_iterator_int__int___int____int_(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1, struct std__allocator_int_* p2);

// function: _ZNSt5dequeIiSaIiEEC2Ev
void std__deque_int__std__allocator_int_____deque(struct std__deque_int__std__allocator_int__* v0) {
bb1: ;
  struct std__deque_int__std__allocator_int__* this2;
  this2 = v0;
  struct std__deque_int__std__allocator_int__* t3 = this2;
  struct std___Deque_base_int__std__allocator_int__* base4 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t3 + 0);
  std___Deque_base_int__std__allocator_int______Deque_base(base4);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEC2Ev
void std___Deque_iterator_int__int___int_____Deque_iterator_2(struct std___Deque_iterator_int__int____int___* v5) {
bb6: ;
  struct std___Deque_iterator_int__int____int___* this7;
  this7 = v5;
  struct std___Deque_iterator_int__int____int___* t8 = this7;
  int* c9 = ((void*)0);
  t8->_M_cur = c9;
  int* c10 = ((void*)0);
  t8->_M_first = c10;
  int* c11 = ((void*)0);
  t8->_M_last = c11;
  int** c12 = ((void*)0);
  t8->_M_node = c12;
  return;
}

// function: _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v13, int* v14) {
bb15: ;
  int* __location16;
  int* __args17;
  int* __retval18;
  void* __loc19;
  __location16 = v13;
  __args17 = v14;
  int* t20 = __location16;
  void* cast21 = (void*)t20;
  __loc19 = cast21;
    void* t22 = __loc19;
    int* cast23 = (int*)t22;
    int* t24 = __args17;
    int t25 = *t24;
    *cast23 = t25;
    __retval18 = cast23;
    int* t26 = __retval18;
    return t26;
  abort();
}

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std__allocator_int_* v27, int* v28, int* v29) {
bb30: ;
  struct std__allocator_int_* __a31;
  int* __p32;
  int* __args33;
  __a31 = v27;
  __p32 = v28;
  __args33 = v29;
  int* t34 = __p32;
  int* t35 = __args33;
  int* r36 = _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t34, t35);
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v37, unsigned long* v38) {
bb39: ;
  unsigned long* __a40;
  unsigned long* __b41;
  unsigned long* __retval42;
  __a40 = v37;
  __b41 = v38;
    unsigned long* t43 = __b41;
    unsigned long t44 = *t43;
    unsigned long* t45 = __a40;
    unsigned long t46 = *t45;
    _Bool c47 = ((t44 < t46)) ? 1 : 0;
    if (c47) {
      unsigned long* t48 = __b41;
      __retval42 = t48;
      unsigned long* t49 = __retval42;
      return t49;
    }
  unsigned long* t50 = __a40;
  __retval42 = t50;
  unsigned long* t51 = __retval42;
  return t51;
}

// function: _ZNSt5dequeIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__deque_int__std__allocator_int______S_max_size(struct std__allocator_int_* v52) {
bb53: ;
  struct std__allocator_int_* __a54;
  unsigned long __retval55;
  unsigned long __diffmax56;
  unsigned long __allocmax57;
  __a54 = v52;
  unsigned long c58 = 9223372036854775807;
  __diffmax56 = c58;
  unsigned long c59 = 4611686018427387903;
  __allocmax57 = c59;
  unsigned long* r60 = unsigned_long_const__std__min_unsigned_long_(&__diffmax56, &__allocmax57);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  unsigned long t61 = *r60;
  __retval55 = t61;
  unsigned long t62 = __retval55;
  return t62;
}

// function: _ZNKSt5dequeIiSaIiEE8max_sizeEv
unsigned long std__deque_int__std__allocator_int_____max_size___const(struct std__deque_int__std__allocator_int__* v63) {
bb64: ;
  struct std__deque_int__std__allocator_int__* this65;
  unsigned long __retval66;
  this65 = v63;
  struct std__deque_int__std__allocator_int__* t67 = this65;
  struct std___Deque_base_int__std__allocator_int__* base68 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t67 + 0);
  struct std__allocator_int_* r69 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(base68);
  unsigned long r70 = std__deque_int__std__allocator_int______S_max_size(r69);
  __retval66 = r70;
  unsigned long t71 = __retval66;
  return t71;
}

// function: _ZSt12__niter_wrapIPPiET_RKS2_S2_
int** int___std____niter_wrap_int___(int*** v72, int** v73) {
bb74: ;
  int*** unnamed75;
  int** __res76;
  int** __retval77;
  unnamed75 = v72;
  __res76 = v73;
  int** t78 = __res76;
  __retval77 = t78;
  int** t79 = __retval77;
  return t79;
}

// function: _ZSt10__distanceIPPiENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_int_____difference_type_std____distance_int___(int** v80, int** v81, struct std__random_access_iterator_tag v82) {
bb83: ;
  int** __first84;
  int** __last85;
  struct std__random_access_iterator_tag unnamed86;
  long __retval87;
  __first84 = v80;
  __last85 = v81;
  unnamed86 = v82;
  int** t88 = __last85;
  int** t89 = __first84;
  long diff90 = t88 - t89;
  __retval87 = diff90;
  long t91 = __retval87;
  return t91;
}

// function: _ZSt19__iterator_categoryIPPiENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_int_____iterator_category_std____iterator_category_int___(int*** v92) {
bb93: ;
  int*** unnamed94;
  struct std__random_access_iterator_tag __retval95;
  unnamed94 = v92;
  struct std__random_access_iterator_tag t96 = __retval95;
  return t96;
}

// function: _ZSt8distanceIPPiENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_int_____difference_type_std__distance_int___(int** v97, int** v98) {
bb99: ;
  int** __first100;
  int** __last101;
  long __retval102;
  struct std__random_access_iterator_tag agg_tmp0103;
  __first100 = v97;
  __last101 = v98;
  int** t104 = __first100;
  int** t105 = __last101;
  struct std__random_access_iterator_tag r106 = std__iterator_traits_int_____iterator_category_std____iterator_category_int___(&__first100);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  agg_tmp0103 = r106;
  struct std__random_access_iterator_tag t107 = agg_tmp0103;
  long r108 = std__iterator_traits_int_____difference_type_std____distance_int___(t104, t105, t107);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  __retval102 = r108;
  long t109 = __retval102;
  return t109;
}

// function: _ZSt12__assign_oneILb0EPPiS1_EvRT0_RT1_
void void_std____assign_one_false__int____int___(int*** v110, int*** v111) {
bb112: ;
  int*** __out113;
  int*** __in114;
  __out113 = v110;
  __in114 = v111;
    int*** t115 = __in114;
    int** t116 = *t115;
    int* t117 = *t116;
    int*** t118 = __out113;
    int** t119 = *t118;
    *t119 = t117;
  return;
}

// function: _ZSt14__copy_move_a2ILb0EPPiS1_S1_ET2_T0_T1_S2_
int** int___std____copy_move_a2_false__int____int____int___(int** v120, int** v121, int** v122) {
bb123: ;
  int** __first124;
  int** __last125;
  int** __result126;
  int** __retval127;
  __first124 = v120;
  __last125 = v121;
  __result126 = v122;
      _Bool r128 = std____is_constant_evaluated();
      if (r128) {
      } else {
          long __n129;
          int** t130 = __first124;
          int** t131 = __last125;
          long r132 = std__iterator_traits_int_____difference_type_std__distance_int___(t130, t131);
          if (__cir_exc_active) {
            int** __cir_eh_ret = (int**)0;
            return __cir_eh_ret;
          }
          __n129 = r132;
            long t133 = __n129;
            long c134 = 1;
            _Bool c135 = ((t133 > c134)) ? 1 : 0;
            if (c135) {
              int** t136 = __result126;
              void* cast137 = (void*)t136;
              int** t138 = __first124;
              void* cast139 = (void*)t138;
              long t140 = __n129;
              unsigned long cast141 = (unsigned long)t140;
              unsigned long c142 = 8;
              unsigned long b143 = cast141 * c142;
              void* r144 = memmove(cast137, cast139, b143);
              long t145 = __n129;
              int** t146 = __result126;
              int** ptr147 = &(t146)[t145];
              __result126 = ptr147;
            } else {
                long t148 = __n129;
                long c149 = 1;
                _Bool c150 = ((t148 == c149)) ? 1 : 0;
                if (c150) {
                  void_std____assign_one_false__int____int___(&__result126, &__first124);
                  if (__cir_exc_active) {
                    int** __cir_eh_ret = (int**)0;
                    return __cir_eh_ret;
                  }
                  int** t151 = __result126;
                  int c152 = 1;
                  int** ptr153 = &(t151)[c152];
                  __result126 = ptr153;
                }
            }
          int** t154 = __result126;
          __retval127 = t154;
          int** t155 = __retval127;
          return t155;
      }
    while (1) {
      int** t157 = __first124;
      int** t158 = __last125;
      _Bool c159 = ((t157 != t158)) ? 1 : 0;
      if (!c159) break;
      void_std____assign_one_false__int____int___(&__result126, &__first124);
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
    for_step156: ;
      int** t160 = __result126;
      int c161 = 1;
      int** ptr162 = &(t160)[c161];
      __result126 = ptr162;
      int** t163 = __first124;
      int c164 = 1;
      int** ptr165 = &(t163)[c164];
      __first124 = ptr165;
    }
  int** t166 = __result126;
  __retval127 = t166;
  int** t167 = __retval127;
  return t167;
}

// function: _ZSt14__copy_move_a1ILb0EPPiS1_ET1_T0_S3_S2_
int** int___std____copy_move_a1_false__int____int___(int** v168, int** v169, int** v170) {
bb171: ;
  int** __first172;
  int** __last173;
  int** __result174;
  int** __retval175;
  __first172 = v168;
  __last173 = v169;
  __result174 = v170;
  int** t176 = __first172;
  int** t177 = __last173;
  int** t178 = __result174;
  int** r179 = int___std____copy_move_a2_false__int____int____int___(t176, t177, t178);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval175 = r179;
  int** t180 = __retval175;
  return t180;
}

// function: _ZSt12__niter_baseIPPiET_S2_
int** int___std____niter_base_int___(int** v181) {
bb182: ;
  int** __it183;
  int** __retval184;
  __it183 = v181;
  int** t185 = __it183;
  __retval184 = t185;
  int** t186 = __retval184;
  return t186;
}

// function: _ZSt13__copy_move_aILb0EPPiS1_ET1_T0_S3_S2_
int** int___std____copy_move_a_false__int____int___(int** v187, int** v188, int** v189) {
bb190: ;
  int** __first191;
  int** __last192;
  int** __result193;
  int** __retval194;
  __first191 = v187;
  __last192 = v188;
  __result193 = v189;
  int** t195 = __first191;
  int** r196 = int___std____niter_base_int___(t195);
  int** t197 = __last192;
  int** r198 = int___std____niter_base_int___(t197);
  int** t199 = __result193;
  int** r200 = int___std____niter_base_int___(t199);
  int** r201 = int___std____copy_move_a1_false__int____int___(r196, r198, r200);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** r202 = int___std____niter_wrap_int___(&__result193, r201);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval194 = r202;
  int** t203 = __retval194;
  return t203;
}

// function: _ZSt12__miter_baseIPPiET_S2_
int** int___std____miter_base_int___(int** v204) {
bb205: ;
  int** __it206;
  int** __retval207;
  __it206 = v204;
  int** t208 = __it206;
  __retval207 = t208;
  int** t209 = __retval207;
  return t209;
}

// function: _ZSt4copyIPPiS1_ET0_T_S3_S2_
int** int___std__copy_int____int___(int** v210, int** v211, int** v212) {
bb213: ;
  int** __first214;
  int** __last215;
  int** __result216;
  int** __retval217;
  __first214 = v210;
  __last215 = v211;
  __result216 = v212;
  int** t218 = __first214;
  int** r219 = int___std____miter_base_int___(t218);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** t220 = __last215;
  int** r221 = int___std____miter_base_int___(t220);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** t222 = __result216;
  int** r223 = int___std____copy_move_a_false__int____int___(r219, r221, t222);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval217 = r223;
  int** t224 = __retval217;
  return t224;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb225: ;
  _Bool __retval226;
    _Bool c227 = 0;
    __retval226 = c227;
    _Bool t228 = __retval226;
    return t228;
  abort();
}

// function: _ZSt9__advanceIPPilEvRT_T0_St26random_access_iterator_tag
void void_std____advance_int____long_(int*** v229, long v230, struct std__random_access_iterator_tag v231) {
bb232: ;
  int*** __i233;
  long __n234;
  struct std__random_access_iterator_tag unnamed235;
  __i233 = v229;
  __n234 = v230;
  unnamed235 = v231;
    long t236 = __n234;
    _Bool isconst237 = 0;
    _Bool ternary238;
    if (isconst237) {
      long t239 = __n234;
      long c240 = 1;
      _Bool c241 = ((t239 == c240)) ? 1 : 0;
      ternary238 = (_Bool)c241;
    } else {
      _Bool c242 = 0;
      ternary238 = (_Bool)c242;
    }
    if (ternary238) {
      int*** t243 = __i233;
      int** t244 = *t243;
      int c245 = 1;
      int** ptr246 = &(t244)[c245];
      *t243 = ptr246;
    } else {
        long t247 = __n234;
        _Bool isconst248 = 0;
        _Bool ternary249;
        if (isconst248) {
          long t250 = __n234;
          long c251 = -1;
          _Bool c252 = ((t250 == c251)) ? 1 : 0;
          ternary249 = (_Bool)c252;
        } else {
          _Bool c253 = 0;
          ternary249 = (_Bool)c253;
        }
        if (ternary249) {
          int*** t254 = __i233;
          int** t255 = *t254;
          int c256 = -1;
          int** ptr257 = &(t255)[c256];
          *t254 = ptr257;
        } else {
          long t258 = __n234;
          int*** t259 = __i233;
          int** t260 = *t259;
          int** ptr261 = &(t260)[t258];
          *t259 = ptr261;
        }
    }
  return;
}

// function: _ZSt7advanceIPPilEvRT_T0_
void void_std__advance_int____long_(int*** v262, long v263) {
bb264: ;
  int*** __i265;
  long __n266;
  long __d267;
  struct std__random_access_iterator_tag agg_tmp0268;
  __i265 = v262;
  __n266 = v263;
  long t269 = __n266;
  __d267 = t269;
  int*** t270 = __i265;
  long t271 = __d267;
  int*** t272 = __i265;
  struct std__random_access_iterator_tag r273 = std__iterator_traits_int_____iterator_category_std____iterator_category_int___(t272);
  if (__cir_exc_active) {
    return;
  }
  agg_tmp0268 = r273;
  struct std__random_access_iterator_tag t274 = agg_tmp0268;
  void_std____advance_int____long_(t270, t271, t274);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt23__copy_move_backward_a2ILb0EPPiS1_ET1_T0_S3_S2_
int** int___std____copy_move_backward_a2_false__int____int___(int** v275, int** v276, int** v277) {
bb278: ;
  int** __first279;
  int** __last280;
  int** __result281;
  int** __retval282;
  __first279 = v275;
  __last280 = v276;
  __result281 = v277;
      _Bool r283 = std__is_constant_evaluated();
      if (r283) {
      } else {
          long __n284;
          int** t285 = __first279;
          int** t286 = __last280;
          long r287 = std__iterator_traits_int_____difference_type_std__distance_int___(t285, t286);
          if (__cir_exc_active) {
            int** __cir_eh_ret = (int**)0;
            return __cir_eh_ret;
          }
          __n284 = r287;
          long t288 = __n284;
          long u289 = -t288;
          void_std__advance_int____long_(&__result281, u289);
          if (__cir_exc_active) {
            int** __cir_eh_ret = (int**)0;
            return __cir_eh_ret;
          }
            long t290 = __n284;
            long c291 = 1;
            _Bool c292 = ((t290 > c291)) ? 1 : 0;
            if (c292) {
              int** t293 = __result281;
              void* cast294 = (void*)t293;
              int** t295 = __first279;
              void* cast296 = (void*)t295;
              long t297 = __n284;
              unsigned long cast298 = (unsigned long)t297;
              unsigned long c299 = 8;
              unsigned long b300 = cast298 * c299;
              void* r301 = memmove(cast294, cast296, b300);
            } else {
                long t302 = __n284;
                long c303 = 1;
                _Bool c304 = ((t302 == c303)) ? 1 : 0;
                if (c304) {
                  void_std____assign_one_false__int____int___(&__result281, &__first279);
                  if (__cir_exc_active) {
                    int** __cir_eh_ret = (int**)0;
                    return __cir_eh_ret;
                  }
                }
            }
          int** t305 = __result281;
          __retval282 = t305;
          int** t306 = __retval282;
          return t306;
      }
    while (1) {
      int** t307 = __first279;
      int** t308 = __last280;
      _Bool c309 = ((t307 != t308)) ? 1 : 0;
      if (!c309) break;
        int** t310 = __last280;
        int c311 = -1;
        int** ptr312 = &(t310)[c311];
        __last280 = ptr312;
        int** t313 = __result281;
        int c314 = -1;
        int** ptr315 = &(t313)[c314];
        __result281 = ptr315;
        void_std____assign_one_false__int____int___(&__result281, &__last280);
        if (__cir_exc_active) {
          int** __cir_eh_ret = (int**)0;
          return __cir_eh_ret;
        }
    }
  int** t316 = __result281;
  __retval282 = t316;
  int** t317 = __retval282;
  return t317;
}

// function: _ZSt23__copy_move_backward_a1ILb0EPPiS1_ET1_T0_S3_S2_
int** int___std____copy_move_backward_a1_false__int____int___(int** v318, int** v319, int** v320) {
bb321: ;
  int** __first322;
  int** __last323;
  int** __result324;
  int** __retval325;
  __first322 = v318;
  __last323 = v319;
  __result324 = v320;
  int** t326 = __first322;
  int** t327 = __last323;
  int** t328 = __result324;
  int** r329 = int___std____copy_move_backward_a2_false__int____int___(t326, t327, t328);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval325 = r329;
  int** t330 = __retval325;
  return t330;
}

// function: _ZSt22__copy_move_backward_aILb0EPPiS1_ET1_T0_S3_S2_
int** int___std____copy_move_backward_a_false__int____int___(int** v331, int** v332, int** v333) {
bb334: ;
  int** __first335;
  int** __last336;
  int** __result337;
  int** __retval338;
  __first335 = v331;
  __last336 = v332;
  __result337 = v333;
  int** t339 = __first335;
  int** r340 = int___std____niter_base_int___(t339);
  int** t341 = __last336;
  int** r342 = int___std____niter_base_int___(t341);
  int** t343 = __result337;
  int** r344 = int___std____niter_base_int___(t343);
  int** r345 = int___std____copy_move_backward_a1_false__int____int___(r340, r342, r344);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** r346 = int___std____niter_wrap_int___(&__result337, r345);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval338 = r346;
  int** t347 = __retval338;
  return t347;
}

// function: _ZSt13copy_backwardIPPiS1_ET0_T_S3_S2_
int** int___std__copy_backward_int____int___(int** v348, int** v349, int** v350) {
bb351: ;
  int** __first352;
  int** __last353;
  int** __result354;
  int** __retval355;
  __first352 = v348;
  __last353 = v349;
  __result354 = v350;
  int** t356 = __first352;
  int** r357 = int___std____miter_base_int___(t356);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** t358 = __last353;
  int** r359 = int___std____miter_base_int___(t358);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** t360 = __result354;
  int** r361 = int___std____copy_move_backward_a_false__int____int___(r357, r359, t360);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval355 = r361;
  int** t362 = __retval355;
  return t362;
}

// function: _ZNSt5dequeIiSaIiEE17_M_reallocate_mapEmb
void std__deque_int__std__allocator_int______M_reallocate_map(struct std__deque_int__std__allocator_int__* v363, unsigned long v364, _Bool v365) {
bb366: ;
  struct std__deque_int__std__allocator_int__* this367;
  unsigned long __nodes_to_add368;
  _Bool __add_at_front369;
  unsigned long __old_num_nodes370;
  unsigned long __new_num_nodes371;
  int** __new_nstart372;
  this367 = v363;
  __nodes_to_add368 = v364;
  __add_at_front369 = v365;
  struct std__deque_int__std__allocator_int__* t373 = this367;
  struct std___Deque_base_int__std__allocator_int__* base374 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t373 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base375 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base374->_M_impl) + 0);
  int** t376 = base375->_M_finish._M_node;
  struct std___Deque_base_int__std__allocator_int__* base377 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t373 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base378 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base377->_M_impl) + 0);
  int** t379 = base378->_M_start._M_node;
  long diff380 = t376 - t379;
  long c381 = 1;
  long b382 = diff380 + c381;
  unsigned long cast383 = (unsigned long)b382;
  __old_num_nodes370 = cast383;
  unsigned long t384 = __old_num_nodes370;
  unsigned long t385 = __nodes_to_add368;
  unsigned long b386 = t384 + t385;
  __new_num_nodes371 = b386;
    struct std___Deque_base_int__std__allocator_int__* base387 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t373 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base388 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base387->_M_impl) + 0);
    unsigned long t389 = base388->_M_map_size;
    unsigned long c390 = 2;
    unsigned long t391 = __new_num_nodes371;
    unsigned long b392 = c390 * t391;
    _Bool c393 = ((t389 > b392)) ? 1 : 0;
    if (c393) {
      struct std___Deque_base_int__std__allocator_int__* base394 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t373 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base395 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base394->_M_impl) + 0);
      int** t396 = base395->_M_map;
      struct std___Deque_base_int__std__allocator_int__* base397 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t373 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base398 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base397->_M_impl) + 0);
      unsigned long t399 = base398->_M_map_size;
      unsigned long t400 = __new_num_nodes371;
      unsigned long b401 = t399 - t400;
      unsigned long c402 = 2;
      unsigned long b403 = b401 / c402;
      int** ptr404 = &(t396)[b403];
      _Bool t405 = __add_at_front369;
      unsigned long ternary406;
      if (t405) {
        unsigned long t407 = __nodes_to_add368;
        ternary406 = (unsigned long)t407;
      } else {
        unsigned long c408 = 0;
        ternary406 = (unsigned long)c408;
      }
      int** ptr409 = &(ptr404)[ternary406];
      __new_nstart372 = ptr409;
        int** t410 = __new_nstart372;
        struct std___Deque_base_int__std__allocator_int__* base411 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t373 + 0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base412 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base411->_M_impl) + 0);
        int** t413 = base412->_M_start._M_node;
        _Bool c414 = ((t410 < t413)) ? 1 : 0;
        if (c414) {
          struct std___Deque_base_int__std__allocator_int__* base415 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t373 + 0);
          struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base416 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base415->_M_impl) + 0);
          int** t417 = base416->_M_start._M_node;
          struct std___Deque_base_int__std__allocator_int__* base418 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t373 + 0);
          struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base419 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base418->_M_impl) + 0);
          int** t420 = base419->_M_finish._M_node;
          int c421 = 1;
          int** ptr422 = &(t420)[c421];
          int** t423 = __new_nstart372;
          int** r424 = int___std__copy_int____int___(t417, ptr422, t423);
          if (__cir_exc_active) {
            return;
          }
        } else {
          struct std___Deque_base_int__std__allocator_int__* base425 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t373 + 0);
          struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base426 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base425->_M_impl) + 0);
          int** t427 = base426->_M_start._M_node;
          struct std___Deque_base_int__std__allocator_int__* base428 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t373 + 0);
          struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base429 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base428->_M_impl) + 0);
          int** t430 = base429->_M_finish._M_node;
          int c431 = 1;
          int** ptr432 = &(t430)[c431];
          int** t433 = __new_nstart372;
          unsigned long t434 = __old_num_nodes370;
          int** ptr435 = &(t433)[t434];
          int** r436 = int___std__copy_backward_int____int___(t427, ptr432, ptr435);
          if (__cir_exc_active) {
            return;
          }
        }
    } else {
      unsigned long __new_map_size437;
      unsigned long __bufsz438;
      int** __new_map439;
      struct std___Deque_base_int__std__allocator_int__* base440 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t373 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base441 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base440->_M_impl) + 0);
      unsigned long t442 = base441->_M_map_size;
      struct std___Deque_base_int__std__allocator_int__* base443 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t373 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base444 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base443->_M_impl) + 0);
      unsigned long* r445 = unsigned_long_const__std__max_unsigned_long_(&base444->_M_map_size, &__nodes_to_add368);
      if (__cir_exc_active) {
        return;
      }
      unsigned long t446 = *r445;
      unsigned long b447 = t442 + t446;
      unsigned long c448 = 2;
      unsigned long b449 = b447 + c448;
      __new_map_size437 = b449;
      unsigned long c450 = 128;
      __bufsz438 = c450;
        unsigned long t451 = __new_map_size437;
        unsigned long r452 = std__deque_int__std__allocator_int_____max_size___const(t373);
        unsigned long t453 = __bufsz438;
        unsigned long b454 = r452 + t453;
        unsigned long c455 = 1;
        unsigned long b456 = b454 - c455;
        unsigned long t457 = __bufsz438;
        unsigned long b458 = b456 / t457;
        unsigned long c459 = 2;
        unsigned long b460 = b458 * c459;
        _Bool c461 = ((t451 > b460)) ? 1 : 0;
        if (c461) {
          __builtin_unreachable();
        }
      struct std___Deque_base_int__std__allocator_int__* base462 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t373 + 0);
      unsigned long t463 = __new_map_size437;
      int** r464 = std___Deque_base_int__std__allocator_int______M_allocate_map(base462, t463);
      if (__cir_exc_active) {
        return;
      }
      __new_map439 = r464;
      int** t465 = __new_map439;
      unsigned long t466 = __new_map_size437;
      unsigned long t467 = __new_num_nodes371;
      unsigned long b468 = t466 - t467;
      unsigned long c469 = 2;
      unsigned long b470 = b468 / c469;
      int** ptr471 = &(t465)[b470];
      _Bool t472 = __add_at_front369;
      unsigned long ternary473;
      if (t472) {
        unsigned long t474 = __nodes_to_add368;
        ternary473 = (unsigned long)t474;
      } else {
        unsigned long c475 = 0;
        ternary473 = (unsigned long)c475;
      }
      int** ptr476 = &(ptr471)[ternary473];
      __new_nstart372 = ptr476;
      struct std___Deque_base_int__std__allocator_int__* base477 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t373 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base478 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base477->_M_impl) + 0);
      int** t479 = base478->_M_start._M_node;
      struct std___Deque_base_int__std__allocator_int__* base480 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t373 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base481 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base480->_M_impl) + 0);
      int** t482 = base481->_M_finish._M_node;
      int c483 = 1;
      int** ptr484 = &(t482)[c483];
      int** t485 = __new_nstart372;
      int** r486 = int___std__copy_int____int___(t479, ptr484, t485);
      if (__cir_exc_active) {
        return;
      }
      struct std___Deque_base_int__std__allocator_int__* base487 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t373 + 0);
      struct std___Deque_base_int__std__allocator_int__* base488 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t373 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base489 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base488->_M_impl) + 0);
      int** t490 = base489->_M_map;
      struct std___Deque_base_int__std__allocator_int__* base491 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t373 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base492 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base491->_M_impl) + 0);
      unsigned long t493 = base492->_M_map_size;
      std___Deque_base_int__std__allocator_int______M_deallocate_map(base487, t490, t493);
      int** t494 = __new_map439;
      struct std___Deque_base_int__std__allocator_int__* base495 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t373 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base496 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base495->_M_impl) + 0);
      base496->_M_map = t494;
      unsigned long t497 = __new_map_size437;
      struct std___Deque_base_int__std__allocator_int__* base498 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t373 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base499 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base498->_M_impl) + 0);
      base499->_M_map_size = t497;
    }
  struct std___Deque_base_int__std__allocator_int__* base500 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t373 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base501 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base500->_M_impl) + 0);
  int** t502 = __new_nstart372;
  std___Deque_iterator_int__int___int_____M_set_node(&base501->_M_start, t502);
  struct std___Deque_base_int__std__allocator_int__* base503 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t373 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base504 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base503->_M_impl) + 0);
  int** t505 = __new_nstart372;
  unsigned long t506 = __old_num_nodes370;
  int** ptr507 = &(t505)[t506];
  int c508 = -1;
  int** ptr509 = &(ptr507)[c508];
  std___Deque_iterator_int__int___int_____M_set_node(&base504->_M_finish, ptr509);
  return;
}

// function: _ZNSt5dequeIiSaIiEE22_M_reserve_map_at_backEm
void std__deque_int__std__allocator_int______M_reserve_map_at_back(struct std__deque_int__std__allocator_int__* v510, unsigned long v511) {
bb512: ;
  struct std__deque_int__std__allocator_int__* this513;
  unsigned long __nodes_to_add514;
  this513 = v510;
  __nodes_to_add514 = v511;
  struct std__deque_int__std__allocator_int__* t515 = this513;
    unsigned long t516 = __nodes_to_add514;
    unsigned long c517 = 1;
    unsigned long b518 = t516 + c517;
    struct std___Deque_base_int__std__allocator_int__* base519 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t515 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base520 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base519->_M_impl) + 0);
    unsigned long t521 = base520->_M_map_size;
    struct std___Deque_base_int__std__allocator_int__* base522 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t515 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base523 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base522->_M_impl) + 0);
    int** t524 = base523->_M_finish._M_node;
    struct std___Deque_base_int__std__allocator_int__* base525 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t515 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base526 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base525->_M_impl) + 0);
    int** t527 = base526->_M_map;
    long diff528 = t524 - t527;
    unsigned long cast529 = (unsigned long)diff528;
    unsigned long b530 = t521 - cast529;
    _Bool c531 = ((b518 > b530)) ? 1 : 0;
    if (c531) {
      unsigned long t532 = __nodes_to_add514;
      _Bool c533 = 0;
      std__deque_int__std__allocator_int______M_reallocate_map(t515, t532, c533);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5dequeIiSaIiEE16_M_push_back_auxIJiEEEvDpOT_
void void_std__deque_int__std__allocator_int______M_push_back_aux_int_(struct std__deque_int__std__allocator_int__* v534, int* v535) {
bb536: ;
  struct std__deque_int__std__allocator_int__* this537;
  int* __args538;
  this537 = v534;
  __args538 = v535;
  struct std__deque_int__std__allocator_int__* t539 = this537;
    unsigned long r540 = std__deque_int__std__allocator_int_____size___const(t539);
    unsigned long r541 = std__deque_int__std__allocator_int_____max_size___const(t539);
    _Bool c542 = ((r540 == r541)) ? 1 : 0;
    if (c542) {
      char* cast543 = (char*)&(_str_9);
      std____throw_length_error(cast543);
      if (__cir_exc_active) {
        return;
      }
    }
  unsigned long c544 = 1;
  std__deque_int__std__allocator_int______M_reserve_map_at_back(t539, c544);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_int__std__allocator_int__* base545 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t539 + 0);
  int* r546 = std___Deque_base_int__std__allocator_int______M_allocate_node(base545);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_int__std__allocator_int__* base547 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t539 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base548 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base547->_M_impl) + 0);
  int** t549 = base548->_M_finish._M_node;
  int c550 = 1;
  int** ptr551 = &(t549)[c550];
  *ptr551 = r546;
      struct std___Deque_base_int__std__allocator_int__* base553 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t539 + 0);
      struct std__allocator_int_* base554 = (struct std__allocator_int_*)((char *)&(base553->_M_impl) + 0);
      struct std___Deque_base_int__std__allocator_int__* base555 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t539 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base556 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base555->_M_impl) + 0);
      int* t557 = base556->_M_finish._M_cur;
      int* t558 = __args538;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_(base554, t557, t558);
      struct std___Deque_base_int__std__allocator_int__* base559 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t539 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base560 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base559->_M_impl) + 0);
      struct std___Deque_base_int__std__allocator_int__* base561 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t539 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base562 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base561->_M_impl) + 0);
      int** t563 = base562->_M_finish._M_node;
      int c564 = 1;
      int** ptr565 = &(t563)[c564];
      std___Deque_iterator_int__int___int_____M_set_node(&base560->_M_finish, ptr565);
      struct std___Deque_base_int__std__allocator_int__* base566 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t539 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base567 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base566->_M_impl) + 0);
      int* t568 = base567->_M_finish._M_first;
      struct std___Deque_base_int__std__allocator_int__* base569 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t539 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base570 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base569->_M_impl) + 0);
      base570->_M_finish._M_cur = t568;
    cir_try_dispatch552: ;
    if (__cir_exc_active) {
    {
      int ca_tok571 = 0;
      void* ca_exn572 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Deque_base_int__std__allocator_int__* base573 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t539 + 0);
        struct std___Deque_base_int__std__allocator_int__* base574 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t539 + 0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base575 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base574->_M_impl) + 0);
        int** t576 = base575->_M_finish._M_node;
        int c577 = 1;
        int** ptr578 = &(t576)[c577];
        int* t579 = *ptr578;
        std___Deque_base_int__std__allocator_int______M_deallocate_node(base573, t579);
        __cir_exc_active = 1;
        {
          if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
        }
        return;
        __builtin_unreachable();
    }
    }
  return;
}

// function: _ZSteqRKSt15_Deque_iteratorIiRiPiES4_
_Bool std__operator__(struct std___Deque_iterator_int__int____int___* v580, struct std___Deque_iterator_int__int____int___* v581) {
bb582: ;
  struct std___Deque_iterator_int__int____int___* __x583;
  struct std___Deque_iterator_int__int____int___* __y584;
  _Bool __retval585;
  __x583 = v580;
  __y584 = v581;
  struct std___Deque_iterator_int__int____int___* t586 = __x583;
  int* t587 = t586->_M_cur;
  struct std___Deque_iterator_int__int____int___* t588 = __y584;
  int* t589 = t588->_M_cur;
  _Bool c590 = ((t587 == t589)) ? 1 : 0;
  __retval585 = c590;
  _Bool t591 = __retval585;
  return t591;
}

// function: _ZNKSt5dequeIiSaIiEE5emptyEv
_Bool std__deque_int__std__allocator_int_____empty___const(struct std__deque_int__std__allocator_int__* v592) {
bb593: ;
  struct std__deque_int__std__allocator_int__* this594;
  _Bool __retval595;
  this594 = v592;
  struct std__deque_int__std__allocator_int__* t596 = this594;
  struct std___Deque_base_int__std__allocator_int__* base597 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t596 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base598 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base597->_M_impl) + 0);
  struct std___Deque_base_int__std__allocator_int__* base599 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t596 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base600 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base599->_M_impl) + 0);
  _Bool r601 = std__operator__(&base598->_M_finish, &base600->_M_start);
  __retval595 = r601;
  _Bool t602 = __retval595;
  return t602;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEmmEv
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator___2(struct std___Deque_iterator_int__int____int___* v603) {
bb604: ;
  struct std___Deque_iterator_int__int____int___* this605;
  struct std___Deque_iterator_int__int____int___* __retval606;
  this605 = v603;
  struct std___Deque_iterator_int__int____int___* t607 = this605;
    int* t608 = t607->_M_cur;
    int* t609 = t607->_M_first;
    _Bool c610 = ((t608 == t609)) ? 1 : 0;
    if (c610) {
      int** t611 = t607->_M_node;
      int c612 = -1;
      int** ptr613 = &(t611)[c612];
      std___Deque_iterator_int__int___int_____M_set_node(t607, ptr613);
      int* t614 = t607->_M_last;
      t607->_M_cur = t614;
    }
  int* t615 = t607->_M_cur;
  int c616 = -1;
  int* ptr617 = &(t615)[c616];
  t607->_M_cur = ptr617;
  __retval606 = t607;
  struct std___Deque_iterator_int__int____int___* t618 = __retval606;
  return t618;
}

// function: _ZNKSt15_Deque_iteratorIiRiPiEdeEv
int* std___Deque_iterator_int__int___int____operator____const(struct std___Deque_iterator_int__int____int___* v619) {
bb620: ;
  struct std___Deque_iterator_int__int____int___* this621;
  int* __retval622;
  this621 = v619;
  struct std___Deque_iterator_int__int____int___* t623 = this621;
  int* t624 = t623->_M_cur;
  __retval622 = t624;
  int* t625 = __retval622;
  return t625;
}

// function: _ZNSt5dequeIiSaIiEE4backEv
int* std__deque_int__std__allocator_int_____back(struct std__deque_int__std__allocator_int__* v626) {
bb627: ;
  struct std__deque_int__std__allocator_int__* this628;
  int* __retval629;
  struct std___Deque_iterator_int__int____int___ __tmp630;
  this628 = v626;
  struct std__deque_int__std__allocator_int__* t631 = this628;
    do {
          _Bool r632 = std__deque_int__std__allocator_int_____empty___const(t631);
          if (r632) {
            char* cast633 = (char*)&(_str_10);
            int c634 = 1537;
            char* cast635 = (char*)&(__PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE4backEv);
            char* cast636 = (char*)&(_str_11);
            std____glibcxx_assert_fail(cast633, c634, cast635, cast636);
          }
      _Bool c637 = 0;
      if (!c637) break;
    } while (1);
  struct std___Deque_iterator_int__int____int___ r638 = std__deque_int__std__allocator_int_____end(t631);
  __tmp630 = r638;
  struct std___Deque_iterator_int__int____int___* r639 = std___Deque_iterator_int__int___int____operator___2(&__tmp630);
  int* r640 = std___Deque_iterator_int__int___int____operator____const(&__tmp630);
  __retval629 = r640;
  int* t641 = __retval629;
  return t641;
}

// function: _ZNSt5dequeIiSaIiEE12emplace_backIJiEEERiDpOT_
int* int__std__deque_int__std__allocator_int_____emplace_back_int_(struct std__deque_int__std__allocator_int__* v642, int* v643) {
bb644: ;
  struct std__deque_int__std__allocator_int__* this645;
  int* __args646;
  int* __retval647;
  this645 = v642;
  __args646 = v643;
  struct std__deque_int__std__allocator_int__* t648 = this645;
    struct std___Deque_base_int__std__allocator_int__* base649 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t648 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base650 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base649->_M_impl) + 0);
    int* t651 = base650->_M_finish._M_cur;
    struct std___Deque_base_int__std__allocator_int__* base652 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t648 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base653 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base652->_M_impl) + 0);
    int* t654 = base653->_M_finish._M_last;
    int c655 = -1;
    int* ptr656 = &(t654)[c655];
    _Bool c657 = ((t651 != ptr656)) ? 1 : 0;
    if (c657) {
      struct std___Deque_base_int__std__allocator_int__* base658 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t648 + 0);
      struct std__allocator_int_* base659 = (struct std__allocator_int_*)((char *)&(base658->_M_impl) + 0);
      struct std___Deque_base_int__std__allocator_int__* base660 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t648 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base661 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base660->_M_impl) + 0);
      int* t662 = base661->_M_finish._M_cur;
      int* t663 = __args646;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_(base659, t662, t663);
      struct std___Deque_base_int__std__allocator_int__* base664 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t648 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base665 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base664->_M_impl) + 0);
      int* t666 = base665->_M_finish._M_cur;
      int c667 = 1;
      int* ptr668 = &(t666)[c667];
      base665->_M_finish._M_cur = ptr668;
    } else {
      int* t669 = __args646;
      void_std__deque_int__std__allocator_int______M_push_back_aux_int_(t648, t669);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
    }
  int* r670 = std__deque_int__std__allocator_int_____back(t648);
  __retval647 = r670;
  int* t671 = __retval647;
  return t671;
}

// function: _ZNSt5dequeIiSaIiEE9push_backEOi
void std__deque_int__std__allocator_int_____push_back(struct std__deque_int__std__allocator_int__* v672, int* v673) {
bb674: ;
  struct std__deque_int__std__allocator_int__* this675;
  int* __x676;
  this675 = v672;
  __x676 = v673;
  struct std__deque_int__std__allocator_int__* t677 = this675;
  int* t678 = __x676;
  int* r679 = int__std__deque_int__std__allocator_int_____emplace_back_int_(t677, t678);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZStmiRKSt15_Deque_iteratorIiRiPiES4_
long std__operator_(struct std___Deque_iterator_int__int____int___* v680, struct std___Deque_iterator_int__int____int___* v681) {
bb682: ;
  struct std___Deque_iterator_int__int____int___* __x683;
  struct std___Deque_iterator_int__int____int___* __y684;
  long __retval685;
  __x683 = v680;
  __y684 = v681;
  unsigned long r686 = std___Deque_iterator_int__int___int_____S_buffer_size();
  long cast687 = (long)r686;
  struct std___Deque_iterator_int__int____int___* t688 = __x683;
  int** t689 = t688->_M_node;
  struct std___Deque_iterator_int__int____int___* t690 = __y684;
  int** t691 = t690->_M_node;
  long diff692 = t689 - t691;
  struct std___Deque_iterator_int__int____int___* t693 = __x683;
  int** t694 = t693->_M_node;
  _Bool cast695 = (_Bool)t694;
  long cast696 = (long)cast695;
  long b697 = diff692 - cast696;
  long b698 = cast687 * b697;
  struct std___Deque_iterator_int__int____int___* t699 = __x683;
  int* t700 = t699->_M_cur;
  struct std___Deque_iterator_int__int____int___* t701 = __x683;
  int* t702 = t701->_M_first;
  long diff703 = t700 - t702;
  long b704 = b698 + diff703;
  struct std___Deque_iterator_int__int____int___* t705 = __y684;
  int* t706 = t705->_M_last;
  struct std___Deque_iterator_int__int____int___* t707 = __y684;
  int* t708 = t707->_M_cur;
  long diff709 = t706 - t708;
  long b710 = b704 + diff709;
  __retval685 = b710;
  long t711 = __retval685;
  return t711;
}

// function: _ZNKSt5dequeIiSaIiEE4sizeEv
unsigned long std__deque_int__std__allocator_int_____size___const(struct std__deque_int__std__allocator_int__* v712) {
bb713: ;
  struct std__deque_int__std__allocator_int__* this714;
  unsigned long __retval715;
  unsigned long __sz716;
  this714 = v712;
  struct std__deque_int__std__allocator_int__* t717 = this714;
  struct std___Deque_base_int__std__allocator_int__* base718 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t717 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base719 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base718->_M_impl) + 0);
  struct std___Deque_base_int__std__allocator_int__* base720 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t717 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base721 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base720->_M_impl) + 0);
  long r722 = std__operator_(&base719->_M_finish, &base721->_M_start);
  unsigned long cast723 = (unsigned long)r722;
  __sz716 = cast723;
    unsigned long t724 = __sz716;
    unsigned long r725 = std__deque_int__std__allocator_int_____max_size___const(t717);
    _Bool c726 = ((t724 > r725)) ? 1 : 0;
    if (c726) {
      __builtin_unreachable();
    }
  unsigned long t727 = __sz716;
  __retval715 = t727;
  unsigned long t728 = __retval715;
  return t728;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEpLEl
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator___3(struct std___Deque_iterator_int__int____int___* v729, long v730) {
bb731: ;
  struct std___Deque_iterator_int__int____int___* this732;
  long __n733;
  struct std___Deque_iterator_int__int____int___* __retval734;
  long __offset735;
  this732 = v729;
  __n733 = v730;
  struct std___Deque_iterator_int__int____int___* t736 = this732;
  long t737 = __n733;
  int* t738 = t736->_M_cur;
  int* t739 = t736->_M_first;
  long diff740 = t738 - t739;
  long b741 = t737 + diff740;
  __offset735 = b741;
    long t742 = __offset735;
    long c743 = 0;
    _Bool c744 = ((t742 >= c743)) ? 1 : 0;
    _Bool ternary745;
    if (c744) {
      long t746 = __offset735;
      unsigned long r747 = std___Deque_iterator_int__int___int_____S_buffer_size();
      long cast748 = (long)r747;
      _Bool c749 = ((t746 < cast748)) ? 1 : 0;
      ternary745 = (_Bool)c749;
    } else {
      _Bool c750 = 0;
      ternary745 = (_Bool)c750;
    }
    if (ternary745) {
      long t751 = __n733;
      int* t752 = t736->_M_cur;
      int* ptr753 = &(t752)[t751];
      t736->_M_cur = ptr753;
    } else {
      long __node_offset754;
      long t755 = __offset735;
      long c756 = 0;
      _Bool c757 = ((t755 > c756)) ? 1 : 0;
      long ternary758;
      if (c757) {
        long t759 = __offset735;
        unsigned long r760 = std___Deque_iterator_int__int___int_____S_buffer_size();
        long cast761 = (long)r760;
        long b762 = t759 / cast761;
        ternary758 = (long)b762;
      } else {
        long t763 = __offset735;
        long u764 = -t763;
        long c765 = 1;
        long b766 = u764 - c765;
        unsigned long cast767 = (unsigned long)b766;
        unsigned long r768 = std___Deque_iterator_int__int___int_____S_buffer_size();
        unsigned long b769 = cast767 / r768;
        long cast770 = (long)b769;
        long u771 = -cast770;
        long c772 = 1;
        long b773 = u771 - c772;
        ternary758 = (long)b773;
      }
      __node_offset754 = ternary758;
      int** t774 = t736->_M_node;
      long t775 = __node_offset754;
      int** ptr776 = &(t774)[t775];
      std___Deque_iterator_int__int___int_____M_set_node(t736, ptr776);
      int* t777 = t736->_M_first;
      long t778 = __offset735;
      long t779 = __node_offset754;
      unsigned long r780 = std___Deque_iterator_int__int___int_____S_buffer_size();
      long cast781 = (long)r780;
      long b782 = t779 * cast781;
      long b783 = t778 - b782;
      int* ptr784 = &(t777)[b783];
      t736->_M_cur = ptr784;
    }
  __retval734 = t736;
  struct std___Deque_iterator_int__int____int___* t785 = __retval734;
  return t785;
}

// function: _ZStplRKSt15_Deque_iteratorIiRiPiEl
struct std___Deque_iterator_int__int____int___ std__operator__4(struct std___Deque_iterator_int__int____int___* v786, long v787) {
bb788: ;
  struct std___Deque_iterator_int__int____int___* __x789;
  long __n790;
  struct std___Deque_iterator_int__int____int___ __retval791;
  __x789 = v786;
  __n790 = v787;
  struct std___Deque_iterator_int__int____int___* t792 = __x789;
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval791, t792);
  long t793 = __n790;
  struct std___Deque_iterator_int__int____int___* r794 = std___Deque_iterator_int__int___int____operator___3(&__retval791, t793);
  struct std___Deque_iterator_int__int____int___ t795 = __retval791;
  return t795;
}

// function: _ZNKSt15_Deque_iteratorIiRiPiEixEl
int* std___Deque_iterator_int__int___int____operator___long__const(struct std___Deque_iterator_int__int____int___* v796, long v797) {
bb798: ;
  struct std___Deque_iterator_int__int____int___* this799;
  long __n800;
  int* __retval801;
  struct std___Deque_iterator_int__int____int___ ref_tmp0802;
  this799 = v796;
  __n800 = v797;
  struct std___Deque_iterator_int__int____int___* t803 = this799;
  long t804 = __n800;
  struct std___Deque_iterator_int__int____int___ r805 = std__operator__4(t803, t804);
  ref_tmp0802 = r805;
  int* r806 = std___Deque_iterator_int__int___int____operator____const(&ref_tmp0802);
  __retval801 = r806;
  int* t807 = __retval801;
  return t807;
}

// function: _ZNSt5dequeIiSaIiEEixEm
int* std__deque_int__std__allocator_int_____operator__(struct std__deque_int__std__allocator_int__* v808, unsigned long v809) {
bb810: ;
  struct std__deque_int__std__allocator_int__* this811;
  unsigned long __n812;
  int* __retval813;
  this811 = v808;
  __n812 = v809;
  struct std__deque_int__std__allocator_int__* t814 = this811;
    do {
          unsigned long t815 = __n812;
          unsigned long r816 = std__deque_int__std__allocator_int_____size___const(t814);
          _Bool c817 = ((t815 < r816)) ? 1 : 0;
          _Bool u818 = !c817;
          if (u818) {
            char* cast819 = (char*)&(_str_10);
            int c820 = 1433;
            char* cast821 = (char*)&(__PRETTY_FUNCTION____ZNSt5dequeIiSaIiEEixEm);
            char* cast822 = (char*)&(_str_12);
            std____glibcxx_assert_fail(cast819, c820, cast821, cast822);
          }
      _Bool c823 = 0;
      if (!c823) break;
    } while (1);
  struct std___Deque_base_int__std__allocator_int__* base824 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t814 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base825 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base824->_M_impl) + 0);
  unsigned long t826 = __n812;
  long cast827 = (long)t826;
  int* r828 = std___Deque_iterator_int__int___int____operator___long__const(&base825->_M_start, cast827);
  __retval813 = r828;
  int* t829 = __retval813;
  return t829;
}

// function: _ZNSt5dequeIiSaIiEE23_M_new_elements_at_backEm
void std__deque_int__std__allocator_int______M_new_elements_at_back(struct std__deque_int__std__allocator_int__* v830, unsigned long v831) {
bb832: ;
  struct std__deque_int__std__allocator_int__* this833;
  unsigned long __new_elems834;
  unsigned long __new_nodes835;
  unsigned long __i836;
  this833 = v830;
  __new_elems834 = v831;
  struct std__deque_int__std__allocator_int__* t837 = this833;
    unsigned long r838 = std__deque_int__std__allocator_int_____max_size___const(t837);
    unsigned long r839 = std__deque_int__std__allocator_int_____size___const(t837);
    unsigned long b840 = r838 - r839;
    unsigned long t841 = __new_elems834;
    _Bool c842 = ((b840 < t841)) ? 1 : 0;
    if (c842) {
      char* cast843 = (char*)&(_str_13);
      std____throw_length_error(cast843);
      if (__cir_exc_active) {
        return;
      }
    }
  unsigned long t844 = __new_elems834;
  unsigned long r845 = std__deque_int__std__allocator_int______S_buffer_size();
  unsigned long b846 = t844 + r845;
  unsigned long c847 = 1;
  unsigned long b848 = b846 - c847;
  unsigned long r849 = std__deque_int__std__allocator_int______S_buffer_size();
  unsigned long b850 = b848 / r849;
  __new_nodes835 = b850;
  unsigned long t851 = __new_nodes835;
  std__deque_int__std__allocator_int______M_reserve_map_at_back(t837, t851);
  if (__cir_exc_active) {
    return;
  }
        unsigned long c853 = 1;
        __i836 = c853;
        while (1) {
          unsigned long t855 = __i836;
          unsigned long t856 = __new_nodes835;
          _Bool c857 = ((t855 <= t856)) ? 1 : 0;
          if (!c857) break;
          struct std___Deque_base_int__std__allocator_int__* base858 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t837 + 0);
          int* r859 = std___Deque_base_int__std__allocator_int______M_allocate_node(base858);
          if (__cir_exc_active) {
            goto cir_try_dispatch852;
          }
          struct std___Deque_base_int__std__allocator_int__* base860 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t837 + 0);
          struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base861 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base860->_M_impl) + 0);
          int** t862 = base861->_M_finish._M_node;
          unsigned long t863 = __i836;
          int** ptr864 = &(t862)[t863];
          *ptr864 = r859;
        for_step854: ;
          unsigned long t865 = __i836;
          unsigned long u866 = t865 + 1;
          __i836 = u866;
        }
    cir_try_dispatch852: ;
    if (__cir_exc_active) {
    {
      int ca_tok867 = 0;
      void* ca_exn868 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
          unsigned long __j869;
          unsigned long c870 = 1;
          __j869 = c870;
          while (1) {
            unsigned long t872 = __j869;
            unsigned long t873 = __i836;
            _Bool c874 = ((t872 < t873)) ? 1 : 0;
            if (!c874) break;
            struct std___Deque_base_int__std__allocator_int__* base875 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t837 + 0);
            struct std___Deque_base_int__std__allocator_int__* base876 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t837 + 0);
            struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base877 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base876->_M_impl) + 0);
            int** t878 = base877->_M_finish._M_node;
            unsigned long t879 = __j869;
            int** ptr880 = &(t878)[t879];
            int* t881 = *ptr880;
            std___Deque_base_int__std__allocator_int______M_deallocate_node(base875, t881);
          for_step871: ;
            unsigned long t882 = __j869;
            unsigned long u883 = t882 + 1;
            __j869 = u883;
          }
        __cir_exc_active = 1;
        {
          if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
        }
        return;
        __builtin_unreachable();
    }
    }
  return;
}

// function: _ZNSt5dequeIiSaIiEE27_M_reserve_elements_at_backEm
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int______M_reserve_elements_at_back(struct std__deque_int__std__allocator_int__* v884, unsigned long v885) {
bb886: ;
  struct std__deque_int__std__allocator_int__* this887;
  unsigned long __n888;
  struct std___Deque_iterator_int__int____int___ __retval889;
  unsigned long __vacancies890;
  this887 = v884;
  __n888 = v885;
  struct std__deque_int__std__allocator_int__* t891 = this887;
  struct std___Deque_base_int__std__allocator_int__* base892 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t891 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base893 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base892->_M_impl) + 0);
  int* t894 = base893->_M_finish._M_last;
  struct std___Deque_base_int__std__allocator_int__* base895 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t891 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base896 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base895->_M_impl) + 0);
  int* t897 = base896->_M_finish._M_cur;
  long diff898 = t894 - t897;
  long c899 = 1;
  long b900 = diff898 - c899;
  unsigned long cast901 = (unsigned long)b900;
  __vacancies890 = cast901;
    unsigned long t902 = __n888;
    unsigned long t903 = __vacancies890;
    _Bool c904 = ((t902 > t903)) ? 1 : 0;
    if (c904) {
      unsigned long t905 = __n888;
      unsigned long t906 = __vacancies890;
      unsigned long b907 = t905 - t906;
      std__deque_int__std__allocator_int______M_new_elements_at_back(t891, b907);
      if (__cir_exc_active) {
        struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
    }
  struct std___Deque_base_int__std__allocator_int__* base908 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t891 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base909 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base908->_M_impl) + 0);
  unsigned long t910 = __n888;
  long cast911 = (long)t910;
  struct std___Deque_iterator_int__int____int___ r912 = std__operator__4(&base909->_M_finish, cast911);
  __retval889 = r912;
  struct std___Deque_iterator_int__int____int___ t913 = __retval889;
  return t913;
}

// function: _ZNSt19_UninitDestroyGuardISt15_Deque_iteratorIiRiPiEvEC2ERS3_
void std___UninitDestroyGuard_std___Deque_iterator_int__int___int____void____UninitDestroyGuard(struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____void_* v914, struct std___Deque_iterator_int__int____int___* v915) {
bb916: ;
  struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____void_* this917;
  struct std___Deque_iterator_int__int____int___* __first918;
  this917 = v914;
  __first918 = v915;
  struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____void_* t919 = this917;
  struct std___Deque_iterator_int__int____int___* t920 = __first918;
  std___Deque_iterator_int__int___int_____Deque_iterator(&t919->_M_first, t920);
  struct std___Deque_iterator_int__int____int___* t921 = __first918;
  t919->_M_cur = t921;
  return;
}

// function: _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v922) {
bb923: ;
  int* __location924;
  int* __retval925;
  void* __loc926;
  __location924 = v922;
  int* t927 = __location924;
  void* cast928 = (void*)t927;
  __loc926 = cast928;
    void* t929 = __loc926;
    int* cast930 = (int*)t929;
    int c931 = 0;
    *cast930 = c931;
    __retval925 = cast930;
    int* t932 = __retval925;
    return t932;
  abort();
}

// function: _ZSt10_ConstructIiJEEvPT_DpOT0_
void void_std___Construct_int_(int* v933) {
bb934: ;
  int* __p935;
  __p935 = v933;
    _Bool r936 = std____is_constant_evaluated();
    if (r936) {
      int* t937 = __p935;
      int* r938 = _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t937);
      return;
    }
  int* t939 = __p935;
  void* cast940 = (void*)t939;
  int* cast941 = (int*)cast940;
  int c942 = 0;
  *cast941 = c942;
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEppEv
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator___4(struct std___Deque_iterator_int__int____int___* v943) {
bb944: ;
  struct std___Deque_iterator_int__int____int___* this945;
  struct std___Deque_iterator_int__int____int___* __retval946;
  this945 = v943;
  struct std___Deque_iterator_int__int____int___* t947 = this945;
  int* t948 = t947->_M_cur;
  int c949 = 1;
  int* ptr950 = &(t948)[c949];
  t947->_M_cur = ptr950;
    int* t951 = t947->_M_cur;
    int* t952 = t947->_M_last;
    _Bool c953 = ((t951 == t952)) ? 1 : 0;
    if (c953) {
      int** t954 = t947->_M_node;
      int c955 = 1;
      int** ptr956 = &(t954)[c955];
      std___Deque_iterator_int__int___int_____M_set_node(t947, ptr956);
      int* t957 = t947->_M_first;
      t947->_M_cur = t957;
    }
  __retval946 = t947;
  struct std___Deque_iterator_int__int____int___* t958 = __retval946;
  return t958;
}

// function: _ZNSt19_UninitDestroyGuardISt15_Deque_iteratorIiRiPiEvE7releaseEv
void std___UninitDestroyGuard_std___Deque_iterator_int__int___int____void___release(struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____void_* v959) {
bb960: ;
  struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____void_* this961;
  this961 = v959;
  struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____void_* t962 = this961;
  struct std___Deque_iterator_int__int____int___* c963 = ((void*)0);
  t962->_M_cur = c963;
  return;
}

// function: _ZNSt19_UninitDestroyGuardISt15_Deque_iteratorIiRiPiEvED2Ev
void std___UninitDestroyGuard_std___Deque_iterator_int__int___int____void_____UninitDestroyGuard(struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____void_* v964) {
bb965: ;
  struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____void_* this966;
  this966 = v964;
  struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____void_* t967 = this966;
    struct std___Deque_iterator_int__int____int___* t968 = t967->_M_cur;
    struct std___Deque_iterator_int__int____int___* c969 = ((void*)0);
    _Bool c970 = ((t968 != c969)) ? 1 : 0;
    if (c970) {
      struct std___Deque_iterator_int__int____int___ agg_tmp0971;
      struct std___Deque_iterator_int__int____int___ agg_tmp1972;
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp0971, &t967->_M_first);
      struct std___Deque_iterator_int__int____int___* t973 = t967->_M_cur;
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp1972, t973);
      struct std___Deque_iterator_int__int____int___ t974 = agg_tmp0971;
      struct std___Deque_iterator_int__int____int___ t975 = agg_tmp1972;
      void_std___Destroy_std___Deque_iterator_int__int___int____(t974, t975);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt25__uninitialized_default_1ILb0EE16__uninit_defaultISt15_Deque_iteratorIiRiPiEEEvT_S6_
void void_std____uninitialized_default_1_false_____uninit_default_std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ v976, struct std___Deque_iterator_int__int____int___ v977) {
bb978: ;
  struct std___Deque_iterator_int__int____int___ __first979;
  struct std___Deque_iterator_int__int____int___ __last980;
  struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____void_ __guard981;
  __first979 = v976;
  __last980 = v977;
  std___UninitDestroyGuard_std___Deque_iterator_int__int___int____void____UninitDestroyGuard(&__guard981, &__first979);
  if (__cir_exc_active) {
    return;
  }
      while (1) {
        _Bool r983 = std__operator__(&__first979, &__last980);
        _Bool u984 = !r983;
        if (!u984) break;
        int* r985 = std___Deque_iterator_int__int___int____operator____const(&__first979);
        void_std___Construct_int_(r985);
        if (__cir_exc_active) {
          {
            std___UninitDestroyGuard_std___Deque_iterator_int__int___int____void_____UninitDestroyGuard(&__guard981);
          }
          return;
        }
      for_step982: ;
        struct std___Deque_iterator_int__int____int___* r986 = std___Deque_iterator_int__int___int____operator___4(&__first979);
      }
    std___UninitDestroyGuard_std___Deque_iterator_int__int___int____void___release(&__guard981);
    if (__cir_exc_active) {
      {
        std___UninitDestroyGuard_std___Deque_iterator_int__int___int____void_____UninitDestroyGuard(&__guard981);
      }
      return;
    }
  {
    std___UninitDestroyGuard_std___Deque_iterator_int__int___int____void_____UninitDestroyGuard(&__guard981);
  }
  return;
}

// function: _ZSt9__fill_a1IPiiEvT_S1_RKT0_
void void_std____fill_a1_int___int_(int* v987, int* v988, int* v989) {
bb990: ;
  int* __first991;
  int* __last992;
  int* __value993;
  _Bool __load_outside_loop994;
  int __val995;
  __first991 = v987;
  __last992 = v988;
  __value993 = v989;
  _Bool c996 = 1;
  __load_outside_loop994 = c996;
  int* t997 = __value993;
  int t998 = *t997;
  __val995 = t998;
    while (1) {
      int* t1000 = __first991;
      int* t1001 = __last992;
      _Bool c1002 = ((t1000 != t1001)) ? 1 : 0;
      if (!c1002) break;
      int t1003 = __val995;
      int* t1004 = __first991;
      *t1004 = t1003;
    for_step999: ;
      int* t1005 = __first991;
      int c1006 = 1;
      int* ptr1007 = &(t1005)[c1006];
      __first991 = ptr1007;
    }
  return;
}

// function: _ZSt9__fill_a1IiiEvRKSt15_Deque_iteratorIT_RS1_PS1_ES6_RKT0_
void void_std____fill_a1_int__int_(struct std___Deque_iterator_int__int____int___* v1008, struct std___Deque_iterator_int__int____int___* v1009, int* v1010) {
bb1011: ;
  struct std___Deque_iterator_int__int____int___* __first1012;
  struct std___Deque_iterator_int__int____int___* __last1013;
  int* __value1014;
  __first1012 = v1008;
  __last1013 = v1009;
  __value1014 = v1010;
    struct std___Deque_iterator_int__int____int___* t1015 = __first1012;
    int** t1016 = t1015->_M_node;
    struct std___Deque_iterator_int__int____int___* t1017 = __last1013;
    int** t1018 = t1017->_M_node;
    _Bool c1019 = ((t1016 != t1018)) ? 1 : 0;
    if (c1019) {
      struct std___Deque_iterator_int__int____int___* t1020 = __first1012;
      int* t1021 = t1020->_M_cur;
      struct std___Deque_iterator_int__int____int___* t1022 = __first1012;
      int* t1023 = t1022->_M_last;
      int* t1024 = __value1014;
      void_std____fill_a1_int___int_(t1021, t1023, t1024);
      if (__cir_exc_active) {
        return;
      }
        int** __node1025;
        struct std___Deque_iterator_int__int____int___* t1026 = __first1012;
        int** t1027 = t1026->_M_node;
        int c1028 = 1;
        int** ptr1029 = &(t1027)[c1028];
        __node1025 = ptr1029;
        while (1) {
          int** t1031 = __node1025;
          struct std___Deque_iterator_int__int____int___* t1032 = __last1013;
          int** t1033 = t1032->_M_node;
          _Bool c1034 = ((t1031 < t1033)) ? 1 : 0;
          if (!c1034) break;
          int** t1035 = __node1025;
          int* t1036 = *t1035;
          int** t1037 = __node1025;
          int* t1038 = *t1037;
          unsigned long r1039 = std___Deque_iterator_int__int___int_____S_buffer_size();
          int* ptr1040 = &(t1038)[r1039];
          int* t1041 = __value1014;
          void_std____fill_a1_int___int_(t1036, ptr1040, t1041);
          if (__cir_exc_active) {
            return;
          }
        for_step1030: ;
          int** t1042 = __node1025;
          int c1043 = 1;
          int** ptr1044 = &(t1042)[c1043];
          __node1025 = ptr1044;
        }
      struct std___Deque_iterator_int__int____int___* t1045 = __last1013;
      int* t1046 = t1045->_M_first;
      struct std___Deque_iterator_int__int____int___* t1047 = __last1013;
      int* t1048 = t1047->_M_cur;
      int* t1049 = __value1014;
      void_std____fill_a1_int___int_(t1046, t1048, t1049);
      if (__cir_exc_active) {
        return;
      }
    } else {
      struct std___Deque_iterator_int__int____int___* t1050 = __first1012;
      int* t1051 = t1050->_M_cur;
      struct std___Deque_iterator_int__int____int___* t1052 = __last1013;
      int* t1053 = t1052->_M_cur;
      int* t1054 = __value1014;
      void_std____fill_a1_int___int_(t1051, t1053, t1054);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZSt8__fill_aISt15_Deque_iteratorIiRiPiEiEvT_S4_RKT0_
void void_std____fill_a_std___Deque_iterator_int__int___int____int_(struct std___Deque_iterator_int__int____int___ v1055, struct std___Deque_iterator_int__int____int___ v1056, int* v1057) {
bb1058: ;
  struct std___Deque_iterator_int__int____int___ __first1059;
  struct std___Deque_iterator_int__int____int___ __last1060;
  int* __value1061;
  __first1059 = v1055;
  __last1060 = v1056;
  __value1061 = v1057;
  int* t1062 = __value1061;
  void_std____fill_a1_int__int_(&__first1059, &__last1060, t1062);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt4fillISt15_Deque_iteratorIiRiPiEiEvT_S4_RKT0_
void void_std__fill_std___Deque_iterator_int__int___int____int_(struct std___Deque_iterator_int__int____int___ v1063, struct std___Deque_iterator_int__int____int___ v1064, int* v1065) {
bb1066: ;
  struct std___Deque_iterator_int__int____int___ __first1067;
  struct std___Deque_iterator_int__int____int___ __last1068;
  int* __value1069;
  struct std___Deque_iterator_int__int____int___ agg_tmp01070;
  struct std___Deque_iterator_int__int____int___ agg_tmp11071;
  __first1067 = v1063;
  __last1068 = v1064;
  __value1069 = v1065;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp01070, &__first1067);
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp11071, &__last1068);
  int* t1072 = __value1069;
  struct std___Deque_iterator_int__int____int___ t1073 = agg_tmp01070;
  struct std___Deque_iterator_int__int____int___ t1074 = agg_tmp11071;
  void_std____fill_a_std___Deque_iterator_int__int___int____int_(t1073, t1074, t1072);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt25__uninitialized_default_1ILb1EE16__uninit_defaultISt15_Deque_iteratorIiRiPiEEEvT_S6_
void void_std____uninitialized_default_1_true_____uninit_default_std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ v1075, struct std___Deque_iterator_int__int____int___ v1076) {
bb1077: ;
  struct std___Deque_iterator_int__int____int___ __first1078;
  struct std___Deque_iterator_int__int____int___ __last1079;
  int* __val1080;
  __first1078 = v1075;
  __last1079 = v1076;
    _Bool r1081 = std__operator__(&__first1078, &__last1079);
    if (r1081) {
      return;
    }
  int* r1082 = std___Deque_iterator_int__int___int____operator____const(&__first1078);
  __val1080 = r1082;
  int* t1083 = __val1080;
  void_std___Construct_int_(t1083);
  if (__cir_exc_active) {
    return;
  }
    struct std___Deque_iterator_int__int____int___* r1084 = std___Deque_iterator_int__int___int____operator___4(&__first1078);
    _Bool r1085 = std__operator__(r1084, &__last1079);
    _Bool u1086 = !r1085;
    if (u1086) {
      struct std___Deque_iterator_int__int____int___ agg_tmp01087;
      struct std___Deque_iterator_int__int____int___ agg_tmp11088;
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp01087, &__first1078);
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp11088, &__last1079);
      int* t1089 = __val1080;
      struct std___Deque_iterator_int__int____int___ t1090 = agg_tmp01087;
      struct std___Deque_iterator_int__int____int___ t1091 = agg_tmp11088;
      void_std__fill_std___Deque_iterator_int__int___int____int_(t1090, t1091, t1089);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZSt23__uninitialized_defaultISt15_Deque_iteratorIiRiPiEEvT_S4_
void void_std____uninitialized_default_std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ v1092, struct std___Deque_iterator_int__int____int___ v1093) {
bb1094: ;
  struct std___Deque_iterator_int__int____int___ __first1095;
  struct std___Deque_iterator_int__int____int___ __last1096;
  _Bool __assignable1097;
  struct std___Deque_iterator_int__int____int___ agg_tmp21098;
  struct std___Deque_iterator_int__int____int___ agg_tmp31099;
  __first1095 = v1092;
  __last1096 = v1093;
    _Bool r1100 = std__is_constant_evaluated();
    if (r1100) {
      struct std___Deque_iterator_int__int____int___ agg_tmp01101;
      struct std___Deque_iterator_int__int____int___ agg_tmp11102;
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp01101, &__first1095);
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp11102, &__last1096);
      struct std___Deque_iterator_int__int____int___ t1103 = agg_tmp01101;
      struct std___Deque_iterator_int__int____int___ t1104 = agg_tmp11102;
      void_std____uninitialized_default_1_false_____uninit_default_std___Deque_iterator_int__int___int____(t1103, t1104);
      if (__cir_exc_active) {
        return;
      }
      return;
    }
  _Bool c1105 = 1;
  __assignable1097 = c1105;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp21098, &__first1095);
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp31099, &__last1096);
  struct std___Deque_iterator_int__int____int___ t1106 = agg_tmp21098;
  struct std___Deque_iterator_int__int____int___ t1107 = agg_tmp31099;
  void_std____uninitialized_default_1_true_____uninit_default_std___Deque_iterator_int__int___int____(t1106, t1107);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt25__uninitialized_default_aISt15_Deque_iteratorIiRiPiEiEvT_S4_RSaIT0_E
void void_std____uninitialized_default_a_std___Deque_iterator_int__int___int____int_(struct std___Deque_iterator_int__int____int___ v1108, struct std___Deque_iterator_int__int____int___ v1109, struct std__allocator_int_* v1110) {
bb1111: ;
  struct std___Deque_iterator_int__int____int___ __first1112;
  struct std___Deque_iterator_int__int____int___ __last1113;
  struct std__allocator_int_* unnamed1114;
  struct std___Deque_iterator_int__int____int___ agg_tmp01115;
  struct std___Deque_iterator_int__int____int___ agg_tmp11116;
  __first1112 = v1108;
  __last1113 = v1109;
  unnamed1114 = v1110;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp01115, &__first1112);
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp11116, &__last1113);
  struct std___Deque_iterator_int__int____int___ t1117 = agg_tmp01115;
  struct std___Deque_iterator_int__int____int___ t1118 = agg_tmp11116;
  void_std____uninitialized_default_std___Deque_iterator_int__int___int____(t1117, t1118);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEaSERKS2_
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator_(struct std___Deque_iterator_int__int____int___* v1119, struct std___Deque_iterator_int__int____int___* v1120) {
bb1121: ;
  struct std___Deque_iterator_int__int____int___* this1122;
  struct std___Deque_iterator_int__int____int___* unnamed1123;
  struct std___Deque_iterator_int__int____int___* __retval1124;
  this1122 = v1119;
  unnamed1123 = v1120;
  struct std___Deque_iterator_int__int____int___* t1125 = this1122;
  struct std___Deque_iterator_int__int____int___* t1126 = unnamed1123;
  int* t1127 = t1126->_M_cur;
  t1125->_M_cur = t1127;
  struct std___Deque_iterator_int__int____int___* t1128 = unnamed1123;
  int* t1129 = t1128->_M_first;
  t1125->_M_first = t1129;
  struct std___Deque_iterator_int__int____int___* t1130 = unnamed1123;
  int* t1131 = t1130->_M_last;
  t1125->_M_last = t1131;
  struct std___Deque_iterator_int__int____int___* t1132 = unnamed1123;
  int** t1133 = t1132->_M_node;
  t1125->_M_node = t1133;
  __retval1124 = t1125;
  struct std___Deque_iterator_int__int____int___* t1134 = __retval1124;
  return t1134;
}

// function: _ZNSt5dequeIiSaIiEE17_M_default_appendEm
void std__deque_int__std__allocator_int______M_default_append(struct std__deque_int__std__allocator_int__* v1135, unsigned long v1136) {
bb1137: ;
  struct std__deque_int__std__allocator_int__* this1138;
  unsigned long __n1139;
  this1138 = v1135;
  __n1139 = v1136;
  struct std__deque_int__std__allocator_int__* t1140 = this1138;
    unsigned long t1141 = __n1139;
    _Bool cast1142 = (_Bool)t1141;
    if (cast1142) {
      struct std___Deque_iterator_int__int____int___ __new_finish1143;
      unsigned long t1144 = __n1139;
      struct std___Deque_iterator_int__int____int___ r1145 = std__deque_int__std__allocator_int______M_reserve_elements_at_back(t1140, t1144);
      if (__cir_exc_active) {
        return;
      }
      __new_finish1143 = r1145;
        struct std___Deque_iterator_int__int____int___ agg_tmp01146;
        struct std___Deque_iterator_int__int____int___ agg_tmp11147;
          struct std___Deque_base_int__std__allocator_int__* base1149 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1140 + 0);
          struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1150 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1149->_M_impl) + 0);
          std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp01146, &base1150->_M_finish);
          std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp11147, &__new_finish1143);
          struct std___Deque_base_int__std__allocator_int__* base1151 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1140 + 0);
          struct std__allocator_int_* r1152 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1151);
          struct std___Deque_iterator_int__int____int___ t1153 = agg_tmp01146;
          struct std___Deque_iterator_int__int____int___ t1154 = agg_tmp11147;
          void_std____uninitialized_default_a_std___Deque_iterator_int__int___int____int_(t1153, t1154, r1152);
          if (__cir_exc_active) {
            goto cir_try_dispatch1148;
          }
          struct std___Deque_base_int__std__allocator_int__* base1155 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1140 + 0);
          struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1156 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1155->_M_impl) + 0);
          struct std___Deque_iterator_int__int____int___* r1157 = std___Deque_iterator_int__int___int____operator_(&base1156->_M_finish, &__new_finish1143);
        cir_try_dispatch1148: ;
        if (__cir_exc_active) {
        {
          int ca_tok1158 = 0;
          void* ca_exn1159 = (void*)__cir_exc_ptr;
          __cir_exc_active = 0;
            struct std___Deque_base_int__std__allocator_int__* base1160 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1140 + 0);
            struct std___Deque_base_int__std__allocator_int__* base1161 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1140 + 0);
            struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1162 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1161->_M_impl) + 0);
            int** t1163 = base1162->_M_finish._M_node;
            int c1164 = 1;
            int** ptr1165 = &(t1163)[c1164];
            int** t1166 = __new_finish1143._M_node;
            int c1167 = 1;
            int** ptr1168 = &(t1166)[c1167];
            std___Deque_base_int__std__allocator_int______M_destroy_nodes(base1160, ptr1165, ptr1168);
            __cir_exc_active = 1;
            {
              if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
            }
            return;
            __builtin_unreachable();
        }
        }
    }
  return;
}

// function: _ZNSt5dequeIiSaIiEE15_M_erase_at_endESt15_Deque_iteratorIiRiPiE
void std__deque_int__std__allocator_int______M_erase_at_end(struct std__deque_int__std__allocator_int__* v1169, struct std___Deque_iterator_int__int____int___ v1170) {
bb1171: ;
  struct std__deque_int__std__allocator_int__* this1172;
  struct std___Deque_iterator_int__int____int___ __pos1173;
  struct std___Deque_iterator_int__int____int___ agg_tmp01174;
  struct std___Deque_iterator_int__int____int___ agg_tmp11175;
  this1172 = v1169;
  __pos1173 = v1170;
  struct std__deque_int__std__allocator_int__* t1176 = this1172;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp01174, &__pos1173);
  struct std___Deque_iterator_int__int____int___ r1177 = std__deque_int__std__allocator_int_____end(t1176);
  agg_tmp11175 = r1177;
  struct std___Deque_base_int__std__allocator_int__* base1178 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1176 + 0);
  struct std__allocator_int_* r1179 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1178);
  struct std___Deque_iterator_int__int____int___ t1180 = agg_tmp01174;
  struct std___Deque_iterator_int__int____int___ t1181 = agg_tmp11175;
  std__deque_int__std__allocator_int______M_destroy_data(t1176, t1180, t1181, r1179);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_int__std__allocator_int__* base1182 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1176 + 0);
  int** t1183 = __pos1173._M_node;
  int c1184 = 1;
  int** ptr1185 = &(t1183)[c1184];
  struct std___Deque_base_int__std__allocator_int__* base1186 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1176 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1187 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1186->_M_impl) + 0);
  int** t1188 = base1187->_M_finish._M_node;
  int c1189 = 1;
  int** ptr1190 = &(t1188)[c1189];
  std___Deque_base_int__std__allocator_int______M_destroy_nodes(base1182, ptr1185, ptr1190);
  struct std___Deque_base_int__std__allocator_int__* base1191 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1176 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1192 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1191->_M_impl) + 0);
  struct std___Deque_iterator_int__int____int___* r1193 = std___Deque_iterator_int__int___int____operator_(&base1192->_M_finish, &__pos1173);
  return;
}

// function: _ZNSt5dequeIiSaIiEE6resizeEm
void std__deque_int__std__allocator_int_____resize(struct std__deque_int__std__allocator_int__* v1194, unsigned long v1195) {
bb1196: ;
  struct std__deque_int__std__allocator_int__* this1197;
  unsigned long __new_size1198;
  unsigned long __len1199;
  this1197 = v1194;
  __new_size1198 = v1195;
  struct std__deque_int__std__allocator_int__* t1200 = this1197;
  unsigned long r1201 = std__deque_int__std__allocator_int_____size___const(t1200);
  __len1199 = r1201;
    unsigned long t1202 = __new_size1198;
    unsigned long t1203 = __len1199;
    _Bool c1204 = ((t1202 > t1203)) ? 1 : 0;
    if (c1204) {
      unsigned long t1205 = __new_size1198;
      unsigned long t1206 = __len1199;
      unsigned long b1207 = t1205 - t1206;
      std__deque_int__std__allocator_int______M_default_append(t1200, b1207);
      if (__cir_exc_active) {
        return;
      }
    } else {
        unsigned long t1208 = __new_size1198;
        unsigned long t1209 = __len1199;
        _Bool c1210 = ((t1208 < t1209)) ? 1 : 0;
        if (c1210) {
          struct std___Deque_iterator_int__int____int___ agg_tmp01211;
          struct std___Deque_base_int__std__allocator_int__* base1212 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1200 + 0);
          struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1213 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1212->_M_impl) + 0);
          unsigned long t1214 = __new_size1198;
          long cast1215 = (long)t1214;
          struct std___Deque_iterator_int__int____int___ r1216 = std__operator__4(&base1213->_M_start, cast1215);
          agg_tmp01211 = r1216;
          struct std___Deque_iterator_int__int____int___ t1217 = agg_tmp01211;
          std__deque_int__std__allocator_int______M_erase_at_end(t1200, t1217);
          if (__cir_exc_active) {
            return;
          }
        }
    }
  return;
}

// function: _ZNSt5dequeIiSaIiEE23_M_reserve_map_at_frontEm
void std__deque_int__std__allocator_int______M_reserve_map_at_front(struct std__deque_int__std__allocator_int__* v1218, unsigned long v1219) {
bb1220: ;
  struct std__deque_int__std__allocator_int__* this1221;
  unsigned long __nodes_to_add1222;
  this1221 = v1218;
  __nodes_to_add1222 = v1219;
  struct std__deque_int__std__allocator_int__* t1223 = this1221;
    unsigned long t1224 = __nodes_to_add1222;
    struct std___Deque_base_int__std__allocator_int__* base1225 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1223 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1226 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1225->_M_impl) + 0);
    int** t1227 = base1226->_M_start._M_node;
    struct std___Deque_base_int__std__allocator_int__* base1228 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1223 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1229 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1228->_M_impl) + 0);
    int** t1230 = base1229->_M_map;
    long diff1231 = t1227 - t1230;
    unsigned long cast1232 = (unsigned long)diff1231;
    _Bool c1233 = ((t1224 > cast1232)) ? 1 : 0;
    if (c1233) {
      unsigned long t1234 = __nodes_to_add1222;
      _Bool c1235 = 1;
      std__deque_int__std__allocator_int______M_reallocate_map(t1223, t1234, c1235);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5dequeIiSaIiEE24_M_new_elements_at_frontEm
void std__deque_int__std__allocator_int______M_new_elements_at_front(struct std__deque_int__std__allocator_int__* v1236, unsigned long v1237) {
bb1238: ;
  struct std__deque_int__std__allocator_int__* this1239;
  unsigned long __new_elems1240;
  unsigned long __new_nodes1241;
  unsigned long __i1242;
  this1239 = v1236;
  __new_elems1240 = v1237;
  struct std__deque_int__std__allocator_int__* t1243 = this1239;
    unsigned long r1244 = std__deque_int__std__allocator_int_____max_size___const(t1243);
    unsigned long r1245 = std__deque_int__std__allocator_int_____size___const(t1243);
    unsigned long b1246 = r1244 - r1245;
    unsigned long t1247 = __new_elems1240;
    _Bool c1248 = ((b1246 < t1247)) ? 1 : 0;
    if (c1248) {
      char* cast1249 = (char*)&(_str_14);
      std____throw_length_error(cast1249);
      if (__cir_exc_active) {
        return;
      }
    }
  unsigned long t1250 = __new_elems1240;
  unsigned long r1251 = std__deque_int__std__allocator_int______S_buffer_size();
  unsigned long b1252 = t1250 + r1251;
  unsigned long c1253 = 1;
  unsigned long b1254 = b1252 - c1253;
  unsigned long r1255 = std__deque_int__std__allocator_int______S_buffer_size();
  unsigned long b1256 = b1254 / r1255;
  __new_nodes1241 = b1256;
  unsigned long t1257 = __new_nodes1241;
  std__deque_int__std__allocator_int______M_reserve_map_at_front(t1243, t1257);
  if (__cir_exc_active) {
    return;
  }
        unsigned long c1259 = 1;
        __i1242 = c1259;
        while (1) {
          unsigned long t1261 = __i1242;
          unsigned long t1262 = __new_nodes1241;
          _Bool c1263 = ((t1261 <= t1262)) ? 1 : 0;
          if (!c1263) break;
          struct std___Deque_base_int__std__allocator_int__* base1264 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1243 + 0);
          int* r1265 = std___Deque_base_int__std__allocator_int______M_allocate_node(base1264);
          if (__cir_exc_active) {
            goto cir_try_dispatch1258;
          }
          struct std___Deque_base_int__std__allocator_int__* base1266 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1243 + 0);
          struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1267 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1266->_M_impl) + 0);
          int** t1268 = base1267->_M_start._M_node;
          unsigned long t1269 = __i1242;
          long cast1270 = (long)t1269;
          long u1271 = -cast1270;
          int** ptr1272 = &(t1268)[u1271];
          *ptr1272 = r1265;
        for_step1260: ;
          unsigned long t1273 = __i1242;
          unsigned long u1274 = t1273 + 1;
          __i1242 = u1274;
        }
    cir_try_dispatch1258: ;
    if (__cir_exc_active) {
    {
      int ca_tok1275 = 0;
      void* ca_exn1276 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
          unsigned long __j1277;
          unsigned long c1278 = 1;
          __j1277 = c1278;
          while (1) {
            unsigned long t1280 = __j1277;
            unsigned long t1281 = __i1242;
            _Bool c1282 = ((t1280 < t1281)) ? 1 : 0;
            if (!c1282) break;
            struct std___Deque_base_int__std__allocator_int__* base1283 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1243 + 0);
            struct std___Deque_base_int__std__allocator_int__* base1284 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1243 + 0);
            struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1285 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1284->_M_impl) + 0);
            int** t1286 = base1285->_M_start._M_node;
            unsigned long t1287 = __j1277;
            long cast1288 = (long)t1287;
            long u1289 = -cast1288;
            int** ptr1290 = &(t1286)[u1289];
            int* t1291 = *ptr1290;
            std___Deque_base_int__std__allocator_int______M_deallocate_node(base1283, t1291);
          for_step1279: ;
            unsigned long t1292 = __j1277;
            unsigned long u1293 = t1292 + 1;
            __j1277 = u1293;
          }
        __cir_exc_active = 1;
        {
          if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
        }
        return;
        __builtin_unreachable();
    }
    }
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEmIEl
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator__(struct std___Deque_iterator_int__int____int___* v1294, long v1295) {
bb1296: ;
  struct std___Deque_iterator_int__int____int___* this1297;
  long __n1298;
  struct std___Deque_iterator_int__int____int___* __retval1299;
  this1297 = v1294;
  __n1298 = v1295;
  struct std___Deque_iterator_int__int____int___* t1300 = this1297;
  long t1301 = __n1298;
  long u1302 = -t1301;
  struct std___Deque_iterator_int__int____int___* r1303 = std___Deque_iterator_int__int___int____operator___3(t1300, u1302);
  __retval1299 = r1303;
  struct std___Deque_iterator_int__int____int___* t1304 = __retval1299;
  return t1304;
}

// function: _ZStmiRKSt15_Deque_iteratorIiRiPiEl
struct std___Deque_iterator_int__int____int___ std__operator__2(struct std___Deque_iterator_int__int____int___* v1305, long v1306) {
bb1307: ;
  struct std___Deque_iterator_int__int____int___* __x1308;
  long __n1309;
  struct std___Deque_iterator_int__int____int___ __retval1310;
  __x1308 = v1305;
  __n1309 = v1306;
  struct std___Deque_iterator_int__int____int___* t1311 = __x1308;
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval1310, t1311);
  long t1312 = __n1309;
  struct std___Deque_iterator_int__int____int___* r1313 = std___Deque_iterator_int__int___int____operator__(&__retval1310, t1312);
  struct std___Deque_iterator_int__int____int___ t1314 = __retval1310;
  return t1314;
}

// function: _ZNSt5dequeIiSaIiEE28_M_reserve_elements_at_frontEm
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int______M_reserve_elements_at_front(struct std__deque_int__std__allocator_int__* v1315, unsigned long v1316) {
bb1317: ;
  struct std__deque_int__std__allocator_int__* this1318;
  unsigned long __n1319;
  struct std___Deque_iterator_int__int____int___ __retval1320;
  unsigned long __vacancies1321;
  this1318 = v1315;
  __n1319 = v1316;
  struct std__deque_int__std__allocator_int__* t1322 = this1318;
  struct std___Deque_base_int__std__allocator_int__* base1323 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1322 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1324 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1323->_M_impl) + 0);
  int* t1325 = base1324->_M_start._M_cur;
  struct std___Deque_base_int__std__allocator_int__* base1326 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1322 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1327 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1326->_M_impl) + 0);
  int* t1328 = base1327->_M_start._M_first;
  long diff1329 = t1325 - t1328;
  unsigned long cast1330 = (unsigned long)diff1329;
  __vacancies1321 = cast1330;
    unsigned long t1331 = __n1319;
    unsigned long t1332 = __vacancies1321;
    _Bool c1333 = ((t1331 > t1332)) ? 1 : 0;
    if (c1333) {
      unsigned long t1334 = __n1319;
      unsigned long t1335 = __vacancies1321;
      unsigned long b1336 = t1334 - t1335;
      std__deque_int__std__allocator_int______M_new_elements_at_front(t1322, b1336);
      if (__cir_exc_active) {
        struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
    }
  struct std___Deque_base_int__std__allocator_int__* base1337 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1322 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1338 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1337->_M_impl) + 0);
  unsigned long t1339 = __n1319;
  long cast1340 = (long)t1339;
  struct std___Deque_iterator_int__int____int___ r1341 = std__operator__2(&base1338->_M_start, cast1340);
  __retval1320 = r1341;
  struct std___Deque_iterator_int__int____int___ t1342 = __retval1320;
  return t1342;
}

// function: _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* v1343, int* v1344) {
bb1345: ;
  int* __location1346;
  int* __args1347;
  int* __retval1348;
  void* __loc1349;
  __location1346 = v1343;
  __args1347 = v1344;
  int* t1350 = __location1346;
  void* cast1351 = (void*)t1350;
  __loc1349 = cast1351;
    void* t1352 = __loc1349;
    int* cast1353 = (int*)t1352;
    int* t1354 = __args1347;
    int t1355 = *t1354;
    *cast1353 = t1355;
    __retval1348 = cast1353;
    int* t1356 = __retval1348;
    return t1356;
  abort();
}

// function: _ZSt10_ConstructIiJRKiEEvPT_DpOT0_
void void_std___Construct_int__int_const__(int* v1357, int* v1358) {
bb1359: ;
  int* __p1360;
  int* __args1361;
  __p1360 = v1357;
  __args1361 = v1358;
    _Bool r1362 = std____is_constant_evaluated();
    if (r1362) {
      int* t1363 = __p1360;
      int* t1364 = __args1361;
      int* r1365 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1363, t1364);
      return;
    }
  int* t1366 = __p1360;
  void* cast1367 = (void*)t1366;
  int* cast1368 = (int*)cast1367;
  int* t1369 = __args1361;
  int t1370 = *t1369;
  *cast1368 = t1370;
  return;
}

// function: _ZSt16__do_uninit_fillISt15_Deque_iteratorIiRiPiEiEvT_S4_RKT0_
void void_std____do_uninit_fill_std___Deque_iterator_int__int___int____int_(struct std___Deque_iterator_int__int____int___ v1371, struct std___Deque_iterator_int__int____int___ v1372, int* v1373) {
bb1374: ;
  struct std___Deque_iterator_int__int____int___ __first1375;
  struct std___Deque_iterator_int__int____int___ __last1376;
  int* __x1377;
  struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____void_ __guard1378;
  __first1375 = v1371;
  __last1376 = v1372;
  __x1377 = v1373;
  std___UninitDestroyGuard_std___Deque_iterator_int__int___int____void____UninitDestroyGuard(&__guard1378, &__first1375);
  if (__cir_exc_active) {
    return;
  }
      while (1) {
        _Bool r1380 = std__operator__(&__first1375, &__last1376);
        _Bool u1381 = !r1380;
        if (!u1381) break;
        int* r1382 = std___Deque_iterator_int__int___int____operator____const(&__first1375);
        int* t1383 = __x1377;
        void_std___Construct_int__int_const__(r1382, t1383);
        if (__cir_exc_active) {
          {
            std___UninitDestroyGuard_std___Deque_iterator_int__int___int____void_____UninitDestroyGuard(&__guard1378);
          }
          return;
        }
      for_step1379: ;
        struct std___Deque_iterator_int__int____int___* r1384 = std___Deque_iterator_int__int___int____operator___4(&__first1375);
      }
    std___UninitDestroyGuard_std___Deque_iterator_int__int___int____void___release(&__guard1378);
    if (__cir_exc_active) {
      {
        std___UninitDestroyGuard_std___Deque_iterator_int__int___int____void_____UninitDestroyGuard(&__guard1378);
      }
      return;
    }
  {
    std___UninitDestroyGuard_std___Deque_iterator_int__int___int____void_____UninitDestroyGuard(&__guard1378);
  }
  return;
}

// function: _ZSt18uninitialized_fillISt15_Deque_iteratorIiRiPiEiEvT_S4_RKT0_
void void_std__uninitialized_fill_std___Deque_iterator_int__int___int____int_(struct std___Deque_iterator_int__int____int___ v1385, struct std___Deque_iterator_int__int____int___ v1386, int* v1387) {
bb1388: ;
  struct std___Deque_iterator_int__int____int___ __first1389;
  struct std___Deque_iterator_int__int____int___ __last1390;
  int* __x1391;
  struct std___Deque_iterator_int__int____int___ agg_tmp01392;
  struct std___Deque_iterator_int__int____int___ agg_tmp11393;
  __first1389 = v1385;
  __last1390 = v1386;
  __x1391 = v1387;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp01392, &__first1389);
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp11393, &__last1390);
  int* t1394 = __x1391;
  struct std___Deque_iterator_int__int____int___ t1395 = agg_tmp01392;
  struct std___Deque_iterator_int__int____int___ t1396 = agg_tmp11393;
  void_std____do_uninit_fill_std___Deque_iterator_int__int___int____int_(t1395, t1396, t1394);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt22__uninitialized_fill_aISt15_Deque_iteratorIiRiPiEiiEvT_S4_RKT0_RSaIT1_E
void void_std____uninitialized_fill_a_std___Deque_iterator_int__int___int____int__int_(struct std___Deque_iterator_int__int____int___ v1397, struct std___Deque_iterator_int__int____int___ v1398, int* v1399, struct std__allocator_int_* v1400) {
bb1401: ;
  struct std___Deque_iterator_int__int____int___ __first1402;
  struct std___Deque_iterator_int__int____int___ __last1403;
  int* __x1404;
  struct std__allocator_int_* unnamed1405;
  struct std___Deque_iterator_int__int____int___ agg_tmp21406;
  struct std___Deque_iterator_int__int____int___ agg_tmp31407;
  __first1402 = v1397;
  __last1403 = v1398;
  __x1404 = v1399;
  unnamed1405 = v1400;
    _Bool r1408 = std__is_constant_evaluated();
    if (r1408) {
      struct std___Deque_iterator_int__int____int___ agg_tmp01409;
      struct std___Deque_iterator_int__int____int___ agg_tmp11410;
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp01409, &__first1402);
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp11410, &__last1403);
      int* t1411 = __x1404;
      struct std___Deque_iterator_int__int____int___ t1412 = agg_tmp01409;
      struct std___Deque_iterator_int__int____int___ t1413 = agg_tmp11410;
      void_std____do_uninit_fill_std___Deque_iterator_int__int___int____int_(t1412, t1413, t1411);
      if (__cir_exc_active) {
        return;
      }
      return;
    }
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp21406, &__first1402);
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp31407, &__last1403);
  int* t1414 = __x1404;
  struct std___Deque_iterator_int__int____int___ t1415 = agg_tmp21406;
  struct std___Deque_iterator_int__int____int___ t1416 = agg_tmp31407;
  void_std__uninitialized_fill_std___Deque_iterator_int__int___int____int_(t1415, t1416, t1414);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNKRSt13move_iteratorISt15_Deque_iteratorIiRiPiEE4baseEv
struct std___Deque_iterator_int__int____int___* std__move_iterator_std___Deque_iterator_int__int___int______base___const__(struct std__move_iterator_std___Deque_iterator_int__int____int____* v1417) {
bb1418: ;
  struct std__move_iterator_std___Deque_iterator_int__int____int____* this1419;
  struct std___Deque_iterator_int__int____int___* __retval1420;
  this1419 = v1417;
  struct std__move_iterator_std___Deque_iterator_int__int____int____* t1421 = this1419;
  __retval1420 = &t1421->_M_current;
  struct std___Deque_iterator_int__int____int___* t1422 = __retval1420;
  return t1422;
}

// function: _ZSteqISt15_Deque_iteratorIiRiPiEEbRKSt13move_iteratorIT_ES8_
_Bool bool_std__operator___std___Deque_iterator_int__int___int____(struct std__move_iterator_std___Deque_iterator_int__int____int____* v1423, struct std__move_iterator_std___Deque_iterator_int__int____int____* v1424) {
bb1425: ;
  struct std__move_iterator_std___Deque_iterator_int__int____int____* __x1426;
  struct std__move_iterator_std___Deque_iterator_int__int____int____* __y1427;
  _Bool __retval1428;
  __x1426 = v1423;
  __y1427 = v1424;
  struct std__move_iterator_std___Deque_iterator_int__int____int____* t1429 = __x1426;
  struct std___Deque_iterator_int__int____int___* r1430 = std__move_iterator_std___Deque_iterator_int__int___int______base___const__(t1429);
  struct std__move_iterator_std___Deque_iterator_int__int____int____* t1431 = __y1427;
  struct std___Deque_iterator_int__int____int___* r1432 = std__move_iterator_std___Deque_iterator_int__int___int______base___const__(t1431);
  _Bool r1433 = std__operator__(r1430, r1432);
  __retval1428 = r1433;
  _Bool t1434 = __retval1428;
  return t1434;
}

// function: _ZSt10_ConstructIiJiEEvPT_DpOT0_
void void_std___Construct_int__int_(int* v1435, int* v1436) {
bb1437: ;
  int* __p1438;
  int* __args1439;
  __p1438 = v1435;
  __args1439 = v1436;
    _Bool r1440 = std____is_constant_evaluated();
    if (r1440) {
      int* t1441 = __p1438;
      int* t1442 = __args1439;
      int* r1443 = _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t1441, t1442);
      return;
    }
  int* t1444 = __p1438;
  void* cast1445 = (void*)t1444;
  int* cast1446 = (int*)cast1445;
  int* t1447 = __args1439;
  int t1448 = *t1447;
  *cast1446 = t1448;
  return;
}

// function: _ZNKSt6ranges7__imove9_IterMoveclIRKSt15_Deque_iteratorIiRiPiEQoo11__adl_imoveIT_ErqTDTdeclsr3stdE7declvalIS9_EEEEEENS1_8__resultIS9_E4typeEOS9_
int* _ZNKSt6ranges7__imove9_IterMoveclIRKSt15_Deque_iteratorIiRiPiEQoo11__adl_imoveIT_ErqTDTdeclsr3stdE7declvalIS9_EEEEEENS1_8__resultIS9_E4typeEOS9_(struct std__ranges____imove___IterMove* v1449, struct std___Deque_iterator_int__int____int___* v1450) {
bb1451: ;
  struct std__ranges____imove___IterMove* this1452;
  struct std___Deque_iterator_int__int____int___* __e1453;
  int* __retval1454;
  this1452 = v1449;
  __e1453 = v1450;
  struct std__ranges____imove___IterMove* t1455 = this1452;
      struct std___Deque_iterator_int__int____int___* t1456 = __e1453;
      int* r1457 = std___Deque_iterator_int__int___int____operator____const(t1456);
      __retval1454 = r1457;
      int* t1458 = __retval1454;
      return t1458;
  abort();
}

// function: _ZNKSt13move_iteratorISt15_Deque_iteratorIiRiPiEEdeEv
int* std__move_iterator_std___Deque_iterator_int__int___int______operator____const(struct std__move_iterator_std___Deque_iterator_int__int____int____* v1459) {
bb1460: ;
  struct std__move_iterator_std___Deque_iterator_int__int____int____* this1461;
  int* __retval1462;
  this1461 = v1459;
  struct std__move_iterator_std___Deque_iterator_int__int____int____* t1463 = this1461;
  int* r1464 = _ZNKSt6ranges7__imove9_IterMoveclIRKSt15_Deque_iteratorIiRiPiEQoo11__adl_imoveIT_ErqTDTdeclsr3stdE7declvalIS9_EEEEEENS1_8__resultIS9_E4typeEOS9_(&_ZNSt6ranges4_Cpo9iter_moveE, &t1463->_M_current);
  __retval1462 = r1464;
  int* t1465 = __retval1462;
  return t1465;
}

// function: _ZNSt13move_iteratorISt15_Deque_iteratorIiRiPiEEppEv
struct std__move_iterator_std___Deque_iterator_int__int____int____* std__move_iterator_std___Deque_iterator_int__int___int______operator__(struct std__move_iterator_std___Deque_iterator_int__int____int____* v1466) {
bb1467: ;
  struct std__move_iterator_std___Deque_iterator_int__int____int____* this1468;
  struct std__move_iterator_std___Deque_iterator_int__int____int____* __retval1469;
  this1468 = v1466;
  struct std__move_iterator_std___Deque_iterator_int__int____int____* t1470 = this1468;
  struct std___Deque_iterator_int__int____int___* r1471 = std___Deque_iterator_int__int___int____operator___4(&t1470->_M_current);
  __retval1469 = t1470;
  struct std__move_iterator_std___Deque_iterator_int__int____int____* t1472 = __retval1469;
  return t1472;
}

// function: _ZSt16__do_uninit_copyISt13move_iteratorISt15_Deque_iteratorIiRiPiEES5_S4_ET1_T_T0_S6_
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____do_uninit_copy_std__move_iterator_std___Deque_iterator_int__int___int______std__move_iterator_std___Deque_iterator_int__int___int______std___Deque_iterator_int__int___int____(struct std__move_iterator_std___Deque_iterator_int__int____int____ v1473, struct std__move_iterator_std___Deque_iterator_int__int____int____ v1474, struct std___Deque_iterator_int__int____int___ v1475) {
bb1476: ;
  struct std__move_iterator_std___Deque_iterator_int__int____int____ __first1477;
  struct std__move_iterator_std___Deque_iterator_int__int____int____ __last1478;
  struct std___Deque_iterator_int__int____int___ __result1479;
  struct std___Deque_iterator_int__int____int___ __retval1480;
  struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____void_ __guard1481;
  __first1477 = v1473;
  __last1478 = v1474;
  __result1479 = v1475;
  std___UninitDestroyGuard_std___Deque_iterator_int__int___int____void____UninitDestroyGuard(&__guard1481, &__result1479);
  if (__cir_exc_active) {
    struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
      while (1) {
        _Bool r1483 = bool_std__operator___std___Deque_iterator_int__int___int____(&__first1477, &__last1478);
        if (__cir_exc_active) {
          {
            std___UninitDestroyGuard_std___Deque_iterator_int__int___int____void_____UninitDestroyGuard(&__guard1481);
          }
          struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool u1484 = !r1483;
        if (!u1484) break;
        int* r1485 = std___Deque_iterator_int__int___int____operator____const(&__result1479);
        int* r1486 = std__move_iterator_std___Deque_iterator_int__int___int______operator____const(&__first1477);
        if (__cir_exc_active) {
          {
            std___UninitDestroyGuard_std___Deque_iterator_int__int___int____void_____UninitDestroyGuard(&__guard1481);
          }
          struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        void_std___Construct_int__int_(r1485, r1486);
        if (__cir_exc_active) {
          {
            std___UninitDestroyGuard_std___Deque_iterator_int__int___int____void_____UninitDestroyGuard(&__guard1481);
          }
          struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
      for_step1482: ;
        struct std__move_iterator_std___Deque_iterator_int__int____int____* r1487 = std__move_iterator_std___Deque_iterator_int__int___int______operator__(&__first1477);
        if (__cir_exc_active) {
          {
            std___UninitDestroyGuard_std___Deque_iterator_int__int___int____void_____UninitDestroyGuard(&__guard1481);
          }
          struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        struct std___Deque_iterator_int__int____int___* r1488 = std___Deque_iterator_int__int___int____operator___4(&__result1479);
      }
    std___UninitDestroyGuard_std___Deque_iterator_int__int___int____void___release(&__guard1481);
    if (__cir_exc_active) {
      {
        std___UninitDestroyGuard_std___Deque_iterator_int__int___int____void_____UninitDestroyGuard(&__guard1481);
      }
      struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    std___Deque_iterator_int__int___int_____Deque_iterator(&__retval1480, &__result1479);
    struct std___Deque_iterator_int__int____int___ t1489 = __retval1480;
    struct std___Deque_iterator_int__int____int___ ret_val1490 = t1489;
    {
      std___UninitDestroyGuard_std___Deque_iterator_int__int___int____void_____UninitDestroyGuard(&__guard1481);
    }
    return ret_val1490;
  abort();
}

// function: _ZNSt13move_iteratorISt15_Deque_iteratorIiRiPiEEC2EOS4_
void std__move_iterator_std___Deque_iterator_int__int___int______move_iterator(struct std__move_iterator_std___Deque_iterator_int__int____int____* v1491, struct std__move_iterator_std___Deque_iterator_int__int____int____* v1492) {
bb1493: ;
  struct std__move_iterator_std___Deque_iterator_int__int____int____* this1494;
  struct std__move_iterator_std___Deque_iterator_int__int____int____* unnamed1495;
  this1494 = v1491;
  unnamed1495 = v1492;
  struct std__move_iterator_std___Deque_iterator_int__int____int____* t1496 = this1494;
  struct std____detail____move_iter_cat_std___Deque_iterator_int__int____int____* base1497 = (struct std____detail____move_iter_cat_std___Deque_iterator_int__int____int____*)((char *)t1496 + 0);
  struct std__move_iterator_std___Deque_iterator_int__int____int____* t1498 = unnamed1495;
  struct std____detail____move_iter_cat_std___Deque_iterator_int__int____int____* base1499 = (struct std____detail____move_iter_cat_std___Deque_iterator_int__int____int____*)((char *)t1498 + 0);
  struct std__move_iterator_std___Deque_iterator_int__int____int____* t1500 = unnamed1495;
  std___Deque_iterator_int__int___int_____Deque_iterator(&t1496->_M_current, &t1500->_M_current);
  return;
}

// function: _ZNSt13move_iteratorISt15_Deque_iteratorIiRiPiEEC2ERKS4_
void std__move_iterator_std___Deque_iterator_int__int___int______move_iterator_2(struct std__move_iterator_std___Deque_iterator_int__int____int____* v1501, struct std__move_iterator_std___Deque_iterator_int__int____int____* v1502) {
bb1503: ;
  struct std__move_iterator_std___Deque_iterator_int__int____int____* this1504;
  struct std__move_iterator_std___Deque_iterator_int__int____int____* unnamed1505;
  this1504 = v1501;
  unnamed1505 = v1502;
  struct std__move_iterator_std___Deque_iterator_int__int____int____* t1506 = this1504;
  struct std____detail____move_iter_cat_std___Deque_iterator_int__int____int____* base1507 = (struct std____detail____move_iter_cat_std___Deque_iterator_int__int____int____*)((char *)t1506 + 0);
  struct std__move_iterator_std___Deque_iterator_int__int____int____* t1508 = unnamed1505;
  struct std____detail____move_iter_cat_std___Deque_iterator_int__int____int____* base1509 = (struct std____detail____move_iter_cat_std___Deque_iterator_int__int____int____*)((char *)t1508 + 0);
  struct std__move_iterator_std___Deque_iterator_int__int____int____* t1510 = unnamed1505;
  std___Deque_iterator_int__int___int_____Deque_iterator(&t1506->_M_current, &t1510->_M_current);
  return;
}

// function: _ZSt18uninitialized_copyISt13move_iteratorISt15_Deque_iteratorIiRiPiEES4_ET0_T_S7_S6_
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std__uninitialized_copy_std__move_iterator_std___Deque_iterator_int__int___int______std___Deque_iterator_int__int___int____(struct std__move_iterator_std___Deque_iterator_int__int____int____ v1511, struct std__move_iterator_std___Deque_iterator_int__int____int____ v1512, struct std___Deque_iterator_int__int____int___ v1513) {
bb1514: ;
  struct std__move_iterator_std___Deque_iterator_int__int____int____ __first1515;
  struct std__move_iterator_std___Deque_iterator_int__int____int____ __last1516;
  struct std___Deque_iterator_int__int____int___ __result1517;
  struct std___Deque_iterator_int__int____int___ __retval1518;
  __first1515 = v1511;
  __last1516 = v1512;
  __result1517 = v1513;
        struct std__move_iterator_std___Deque_iterator_int__int____int____ agg_tmp01519;
        struct std__move_iterator_std___Deque_iterator_int__int____int____ agg_tmp11520;
        struct std___Deque_iterator_int__int____int___ agg_tmp21521;
        std__move_iterator_std___Deque_iterator_int__int___int______move_iterator_2(&agg_tmp01519, &__first1515);
        std__move_iterator_std___Deque_iterator_int__int___int______move_iterator_2(&agg_tmp11520, &__last1516);
        std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp21521, &__result1517);
        struct std__move_iterator_std___Deque_iterator_int__int____int____ t1522 = agg_tmp01519;
        struct std__move_iterator_std___Deque_iterator_int__int____int____ t1523 = agg_tmp11520;
        struct std___Deque_iterator_int__int____int___ t1524 = agg_tmp21521;
        struct std___Deque_iterator_int__int____int___ r1525 = std___Deque_iterator_int__int___int___std____do_uninit_copy_std__move_iterator_std___Deque_iterator_int__int___int______std__move_iterator_std___Deque_iterator_int__int___int______std___Deque_iterator_int__int___int____(t1522, t1523, t1524);
        if (__cir_exc_active) {
          struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        __retval1518 = r1525;
        struct std___Deque_iterator_int__int____int___ t1526 = __retval1518;
        return t1526;
  abort();
}

// function: _ZSt22__uninitialized_copy_aISt13move_iteratorISt15_Deque_iteratorIiRiPiEES5_S4_iET1_T_T0_S6_RSaIT2_E
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____uninitialized_copy_a_std__move_iterator_std___Deque_iterator_int__int___int______std__move_iterator_std___Deque_iterator_int__int___int______std___Deque_iterator_int__int___int____int_(struct std__move_iterator_std___Deque_iterator_int__int____int____ v1527, struct std__move_iterator_std___Deque_iterator_int__int____int____ v1528, struct std___Deque_iterator_int__int____int___ v1529, struct std__allocator_int_* v1530) {
bb1531: ;
  struct std__move_iterator_std___Deque_iterator_int__int____int____ __first1532;
  struct std__move_iterator_std___Deque_iterator_int__int____int____ __last1533;
  struct std___Deque_iterator_int__int____int___ __result1534;
  struct std__allocator_int_* unnamed1535;
  struct std___Deque_iterator_int__int____int___ __retval1536;
  __first1532 = v1527;
  __last1533 = v1528;
  __result1534 = v1529;
  unnamed1535 = v1530;
    _Bool r1537 = std__is_constant_evaluated();
    if (r1537) {
      struct std__move_iterator_std___Deque_iterator_int__int____int____ agg_tmp01538;
      struct std__move_iterator_std___Deque_iterator_int__int____int____ agg_tmp11539;
      struct std___Deque_iterator_int__int____int___ agg_tmp21540;
      std__move_iterator_std___Deque_iterator_int__int___int______move_iterator(&agg_tmp01538, &__first1532);
      std__move_iterator_std___Deque_iterator_int__int___int______move_iterator_2(&agg_tmp11539, &__last1533);
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp21540, &__result1534);
      struct std__move_iterator_std___Deque_iterator_int__int____int____ t1541 = agg_tmp01538;
      struct std__move_iterator_std___Deque_iterator_int__int____int____ t1542 = agg_tmp11539;
      struct std___Deque_iterator_int__int____int___ t1543 = agg_tmp21540;
      struct std___Deque_iterator_int__int____int___ r1544 = std___Deque_iterator_int__int___int___std____do_uninit_copy_std__move_iterator_std___Deque_iterator_int__int___int______std__move_iterator_std___Deque_iterator_int__int___int______std___Deque_iterator_int__int___int____(t1541, t1542, t1543);
      if (__cir_exc_active) {
        struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      __retval1536 = r1544;
      struct std___Deque_iterator_int__int____int___ t1545 = __retval1536;
      return t1545;
    }
    struct std__move_iterator_std___Deque_iterator_int__int____int____ agg_tmp31546;
    struct std__move_iterator_std___Deque_iterator_int__int____int____ agg_tmp41547;
    struct std___Deque_iterator_int__int____int___ agg_tmp51548;
    std__move_iterator_std___Deque_iterator_int__int___int______move_iterator(&agg_tmp31546, &__first1532);
    std__move_iterator_std___Deque_iterator_int__int___int______move_iterator_2(&agg_tmp41547, &__last1533);
    std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp51548, &__result1534);
    struct std__move_iterator_std___Deque_iterator_int__int____int____ t1549 = agg_tmp31546;
    struct std__move_iterator_std___Deque_iterator_int__int____int____ t1550 = agg_tmp41547;
    struct std___Deque_iterator_int__int____int___ t1551 = agg_tmp51548;
    struct std___Deque_iterator_int__int____int___ r1552 = std___Deque_iterator_int__int___int___std__uninitialized_copy_std__move_iterator_std___Deque_iterator_int__int___int______std___Deque_iterator_int__int___int____(t1549, t1550, t1551);
    if (__cir_exc_active) {
      struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    __retval1536 = r1552;
    struct std___Deque_iterator_int__int____int___ t1553 = __retval1536;
    return t1553;
  abort();
}

// function: _ZNSt13move_iteratorISt15_Deque_iteratorIiRiPiEEC2ES3_
void std__move_iterator_std___Deque_iterator_int__int___int______move_iterator_3(struct std__move_iterator_std___Deque_iterator_int__int____int____* v1554, struct std___Deque_iterator_int__int____int___ v1555) {
bb1556: ;
  struct std__move_iterator_std___Deque_iterator_int__int____int____* this1557;
  struct std___Deque_iterator_int__int____int___ __i1558;
  this1557 = v1554;
  __i1558 = v1555;
  struct std__move_iterator_std___Deque_iterator_int__int____int____* t1559 = this1557;
  struct std____detail____move_iter_cat_std___Deque_iterator_int__int____int____* base1560 = (struct std____detail____move_iter_cat_std___Deque_iterator_int__int____int____*)((char *)t1559 + 0);
  std___Deque_iterator_int__int___int_____Deque_iterator(&t1559->_M_current, &__i1558);
  return;
}

// function: _ZSt18make_move_iteratorISt15_Deque_iteratorIiRiPiEESt13move_iteratorIT_ES5_
struct std__move_iterator_std___Deque_iterator_int__int____int____ std__move_iterator_std___Deque_iterator_int__int___int_____std__make_move_iterator_std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ v1561) {
bb1562: ;
  struct std___Deque_iterator_int__int____int___ __i1563;
  struct std__move_iterator_std___Deque_iterator_int__int____int____ __retval1564;
  struct std___Deque_iterator_int__int____int___ agg_tmp01565;
  __i1563 = v1561;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp01565, &__i1563);
  struct std___Deque_iterator_int__int____int___ t1566 = agg_tmp01565;
  std__move_iterator_std___Deque_iterator_int__int___int______move_iterator_3(&__retval1564, t1566);
  if (__cir_exc_active) {
    struct std__move_iterator_std___Deque_iterator_int__int____int____ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std__move_iterator_std___Deque_iterator_int__int____int____ t1567 = __retval1564;
  return t1567;
}

// function: _ZSt22__uninitialized_move_aISt15_Deque_iteratorIiRiPiES3_SaIiEET0_T_S6_S5_RT1_
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____uninitialized_move_a_std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____std__allocator_int___(struct std___Deque_iterator_int__int____int___ v1568, struct std___Deque_iterator_int__int____int___ v1569, struct std___Deque_iterator_int__int____int___ v1570, struct std__allocator_int_* v1571) {
bb1572: ;
  struct std___Deque_iterator_int__int____int___ __first1573;
  struct std___Deque_iterator_int__int____int___ __last1574;
  struct std___Deque_iterator_int__int____int___ __result1575;
  struct std__allocator_int_* __alloc1576;
  struct std___Deque_iterator_int__int____int___ __retval1577;
  struct std__move_iterator_std___Deque_iterator_int__int____int____ agg_tmp01578;
  struct std___Deque_iterator_int__int____int___ agg_tmp11579;
  struct std__move_iterator_std___Deque_iterator_int__int____int____ agg_tmp21580;
  struct std___Deque_iterator_int__int____int___ agg_tmp31581;
  struct std___Deque_iterator_int__int____int___ agg_tmp41582;
  __first1573 = v1568;
  __last1574 = v1569;
  __result1575 = v1570;
  __alloc1576 = v1571;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp11579, &__first1573);
  struct std___Deque_iterator_int__int____int___ t1583 = agg_tmp11579;
  struct std__move_iterator_std___Deque_iterator_int__int____int____ r1584 = std__move_iterator_std___Deque_iterator_int__int___int_____std__make_move_iterator_std___Deque_iterator_int__int___int____(t1583);
  if (__cir_exc_active) {
    struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  agg_tmp01578 = r1584;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp31581, &__last1574);
  struct std___Deque_iterator_int__int____int___ t1585 = agg_tmp31581;
  struct std__move_iterator_std___Deque_iterator_int__int____int____ r1586 = std__move_iterator_std___Deque_iterator_int__int___int_____std__make_move_iterator_std___Deque_iterator_int__int___int____(t1585);
  if (__cir_exc_active) {
    struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  agg_tmp21580 = r1586;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp41582, &__result1575);
  struct std__allocator_int_* t1587 = __alloc1576;
  struct std__move_iterator_std___Deque_iterator_int__int____int____ t1588 = agg_tmp01578;
  struct std__move_iterator_std___Deque_iterator_int__int____int____ t1589 = agg_tmp21580;
  struct std___Deque_iterator_int__int____int___ t1590 = agg_tmp41582;
  struct std___Deque_iterator_int__int____int___ r1591 = std___Deque_iterator_int__int___int___std____uninitialized_copy_a_std__move_iterator_std___Deque_iterator_int__int___int______std__move_iterator_std___Deque_iterator_int__int___int______std___Deque_iterator_int__int___int____int_(t1588, t1589, t1590, t1587);
  if (__cir_exc_active) {
    struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval1577 = r1591;
  struct std___Deque_iterator_int__int____int___ t1592 = __retval1577;
  return t1592;
}

// function: _ZSt12__niter_wrapISt15_Deque_iteratorIiRiPiEET_RKS4_S4_
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____niter_wrap_std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___* v1593, struct std___Deque_iterator_int__int____int___ v1594) {
bb1595: ;
  struct std___Deque_iterator_int__int____int___* unnamed1596;
  struct std___Deque_iterator_int__int____int___ __res1597;
  struct std___Deque_iterator_int__int____int___ __retval1598;
  unnamed1596 = v1593;
  __res1597 = v1594;
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval1598, &__res1597);
  struct std___Deque_iterator_int__int____int___ t1599 = __retval1598;
  return t1599;
}

// function: _ZSt3minIlERKT_S2_S2_
long* long_const__std__min_long_(long* v1600, long* v1601) {
bb1602: ;
  long* __a1603;
  long* __b1604;
  long* __retval1605;
  __a1603 = v1600;
  __b1604 = v1601;
    long* t1606 = __b1604;
    long t1607 = *t1606;
    long* t1608 = __a1603;
    long t1609 = *t1608;
    _Bool c1610 = ((t1607 < t1609)) ? 1 : 0;
    if (c1610) {
      long* t1611 = __b1604;
      __retval1605 = t1611;
      long* t1612 = __retval1605;
      return t1612;
    }
  long* t1613 = __a1603;
  __retval1605 = t1613;
  long* t1614 = __retval1605;
  return t1614;
}

// function: _ZSt10__distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_St26random_access_iterator_tag
long std__iterator_traits_int____difference_type_std____distance_int__(int* v1615, int* v1616, struct std__random_access_iterator_tag v1617) {
bb1618: ;
  int* __first1619;
  int* __last1620;
  struct std__random_access_iterator_tag unnamed1621;
  long __retval1622;
  __first1619 = v1615;
  __last1620 = v1616;
  unnamed1621 = v1617;
  int* t1623 = __last1620;
  int* t1624 = __first1619;
  long diff1625 = t1623 - t1624;
  __retval1622 = diff1625;
  long t1626 = __retval1622;
  return t1626;
}

// function: _ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** v1627) {
bb1628: ;
  int** unnamed1629;
  struct std__random_access_iterator_tag __retval1630;
  unnamed1629 = v1627;
  struct std__random_access_iterator_tag t1631 = __retval1630;
  return t1631;
}

// function: _ZSt8distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_
long std__iterator_traits_int____difference_type_std__distance_int__(int* v1632, int* v1633) {
bb1634: ;
  int* __first1635;
  int* __last1636;
  long __retval1637;
  struct std__random_access_iterator_tag agg_tmp01638;
  __first1635 = v1632;
  __last1636 = v1633;
  int* t1639 = __first1635;
  int* t1640 = __last1636;
  struct std__random_access_iterator_tag r1641 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first1635);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  agg_tmp01638 = r1641;
  struct std__random_access_iterator_tag t1642 = agg_tmp01638;
  long r1643 = std__iterator_traits_int____difference_type_std____distance_int__(t1639, t1640, t1642);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  __retval1637 = r1643;
  long t1644 = __retval1637;
  return t1644;
}

// function: _ZSt12__assign_oneILb1EPiS0_EvRT0_RT1_
void void_std____assign_one_true__int___int__(int** v1645, int** v1646) {
bb1647: ;
  int** __out1648;
  int** __in1649;
  __out1648 = v1645;
  __in1649 = v1646;
    int** t1650 = __in1649;
    int* t1651 = *t1650;
    int t1652 = *t1651;
    int** t1653 = __out1648;
    int* t1654 = *t1653;
    *t1654 = t1652;
  return;
}

// function: _ZSt14__copy_move_a2ILb1EPiS0_S0_ET2_T0_T1_S1_
int* int__std____copy_move_a2_true__int___int___int__(int* v1655, int* v1656, int* v1657) {
bb1658: ;
  int* __first1659;
  int* __last1660;
  int* __result1661;
  int* __retval1662;
  __first1659 = v1655;
  __last1660 = v1656;
  __result1661 = v1657;
      _Bool r1663 = std____is_constant_evaluated();
      if (r1663) {
      } else {
          long __n1664;
          int* t1665 = __first1659;
          int* t1666 = __last1660;
          long r1667 = std__iterator_traits_int____difference_type_std__distance_int__(t1665, t1666);
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
          __n1664 = r1667;
            long t1668 = __n1664;
            long c1669 = 1;
            _Bool c1670 = ((t1668 > c1669)) ? 1 : 0;
            if (c1670) {
              int* t1671 = __result1661;
              void* cast1672 = (void*)t1671;
              int* t1673 = __first1659;
              void* cast1674 = (void*)t1673;
              long t1675 = __n1664;
              unsigned long cast1676 = (unsigned long)t1675;
              unsigned long c1677 = 4;
              unsigned long b1678 = cast1676 * c1677;
              void* r1679 = memmove(cast1672, cast1674, b1678);
              long t1680 = __n1664;
              int* t1681 = __result1661;
              int* ptr1682 = &(t1681)[t1680];
              __result1661 = ptr1682;
            } else {
                long t1683 = __n1664;
                long c1684 = 1;
                _Bool c1685 = ((t1683 == c1684)) ? 1 : 0;
                if (c1685) {
                  void_std____assign_one_true__int___int__(&__result1661, &__first1659);
                  if (__cir_exc_active) {
                    int* __cir_eh_ret = (int*)0;
                    return __cir_eh_ret;
                  }
                  int* t1686 = __result1661;
                  int c1687 = 1;
                  int* ptr1688 = &(t1686)[c1687];
                  __result1661 = ptr1688;
                }
            }
          int* t1689 = __result1661;
          __retval1662 = t1689;
          int* t1690 = __retval1662;
          return t1690;
      }
    while (1) {
      int* t1692 = __first1659;
      int* t1693 = __last1660;
      _Bool c1694 = ((t1692 != t1693)) ? 1 : 0;
      if (!c1694) break;
      void_std____assign_one_true__int___int__(&__result1661, &__first1659);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
    for_step1691: ;
      int* t1695 = __result1661;
      int c1696 = 1;
      int* ptr1697 = &(t1695)[c1696];
      __result1661 = ptr1697;
      int* t1698 = __first1659;
      int c1699 = 1;
      int* ptr1700 = &(t1698)[c1699];
      __first1659 = ptr1700;
    }
  int* t1701 = __result1661;
  __retval1662 = t1701;
  int* t1702 = __retval1662;
  return t1702;
}

// function: _ZSt14__copy_move_a1ILb1EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_a1_true__int___int__(int* v1703, int* v1704, int* v1705) {
bb1706: ;
  int* __first1707;
  int* __last1708;
  int* __result1709;
  int* __retval1710;
  __first1707 = v1703;
  __last1708 = v1704;
  __result1709 = v1705;
  int* t1711 = __first1707;
  int* t1712 = __last1708;
  int* t1713 = __result1709;
  int* r1714 = int__std____copy_move_a2_true__int___int___int__(t1711, t1712, t1713);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1710 = r1714;
  int* t1715 = __retval1710;
  return t1715;
}

// function: _ZSt14__copy_move_a1ILb1EPiiEN9__gnu_cxx11__enable_ifIXsr23__is_random_access_iterIT0_EE7__valueESt15_Deque_iteratorIT1_RS5_PS5_EE6__typeES3_S3_S8_
struct std___Deque_iterator_int__int____int___ __gnu_cxx____enable_if___is_random_access_iter_int______value__std___Deque_iterator_int__int___int________type_std____copy_move_a1_true__int___int_(int* v1716, int* v1717, struct std___Deque_iterator_int__int____int___ v1718) {
bb1719: ;
  int* __first1720;
  int* __last1721;
  struct std___Deque_iterator_int__int____int___ __result1722;
  struct std___Deque_iterator_int__int____int___ __retval1723;
  long __len1724;
  __first1720 = v1716;
  __last1721 = v1717;
  __result1722 = v1718;
  int* t1725 = __last1721;
  int* t1726 = __first1720;
  long diff1727 = t1725 - t1726;
  __len1724 = diff1727;
    while (1) {
      long t1728 = __len1724;
      long c1729 = 0;
      _Bool c1730 = ((t1728 > c1729)) ? 1 : 0;
      if (!c1730) break;
        long __clen1731;
        long ref_tmp01732;
        int* t1733 = __result1722._M_last;
        int* t1734 = __result1722._M_cur;
        long diff1735 = t1733 - t1734;
        ref_tmp01732 = diff1735;
        long* r1736 = long_const__std__min_long_(&__len1724, &ref_tmp01732);
        if (__cir_exc_active) {
          struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        long t1737 = *r1736;
        __clen1731 = t1737;
        int* t1738 = __first1720;
        int* t1739 = __first1720;
        long t1740 = __clen1731;
        int* ptr1741 = &(t1739)[t1740];
        int* t1742 = __result1722._M_cur;
        int* r1743 = int__std____copy_move_a1_true__int___int__(t1738, ptr1741, t1742);
        if (__cir_exc_active) {
          struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        long t1744 = __clen1731;
        int* t1745 = __first1720;
        int* ptr1746 = &(t1745)[t1744];
        __first1720 = ptr1746;
        long t1747 = __clen1731;
        struct std___Deque_iterator_int__int____int___* r1748 = std___Deque_iterator_int__int___int____operator___3(&__result1722, t1747);
        long t1749 = __clen1731;
        long t1750 = __len1724;
        long b1751 = t1750 - t1749;
        __len1724 = b1751;
    }
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval1723, &__result1722);
  struct std___Deque_iterator_int__int____int___ t1752 = __retval1723;
  return t1752;
}

// function: _ZSt15__copy_move_ditILb1EiRiPiSt15_Deque_iteratorIiS0_S1_EET3_S2_IT0_T1_T2_ES8_S4_
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____copy_move_dit_true__int__int___int___std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ v1753, struct std___Deque_iterator_int__int____int___ v1754, struct std___Deque_iterator_int__int____int___ v1755) {
bb1756: ;
  struct std___Deque_iterator_int__int____int___ __first1757;
  struct std___Deque_iterator_int__int____int___ __last1758;
  struct std___Deque_iterator_int__int____int___ __result1759;
  struct std___Deque_iterator_int__int____int___ __retval1760;
  struct std___Deque_iterator_int__int____int___ agg_tmp31761;
  __first1757 = v1753;
  __last1758 = v1754;
  __result1759 = v1755;
    int** t1762 = __first1757._M_node;
    int** t1763 = __last1758._M_node;
    _Bool c1764 = ((t1762 != t1763)) ? 1 : 0;
    if (c1764) {
      struct std___Deque_iterator_int__int____int___ ref_tmp01765;
      struct std___Deque_iterator_int__int____int___ agg_tmp01766;
      struct std___Deque_iterator_int__int____int___ agg_tmp21767;
      int* t1768 = __first1757._M_cur;
      int* t1769 = __first1757._M_last;
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp01766, &__result1759);
      struct std___Deque_iterator_int__int____int___ t1770 = agg_tmp01766;
      struct std___Deque_iterator_int__int____int___ r1771 = __gnu_cxx____enable_if___is_random_access_iter_int______value__std___Deque_iterator_int__int___int________type_std____copy_move_a1_true__int___int_(t1768, t1769, t1770);
      if (__cir_exc_active) {
        struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      ref_tmp01765 = r1771;
      struct std___Deque_iterator_int__int____int___* r1772 = std___Deque_iterator_int__int___int____operator_(&__result1759, &ref_tmp01765);
        int** __node1773;
        struct std___Deque_iterator_int__int____int___ ref_tmp11774;
        struct std___Deque_iterator_int__int____int___ agg_tmp11775;
        int** t1776 = __first1757._M_node;
        int c1777 = 1;
        int** ptr1778 = &(t1776)[c1777];
        __node1773 = ptr1778;
        while (1) {
          int** t1780 = __node1773;
          int** t1781 = __last1758._M_node;
          _Bool c1782 = ((t1780 != t1781)) ? 1 : 0;
          if (!c1782) break;
          int** t1783 = __node1773;
          int* t1784 = *t1783;
          int** t1785 = __node1773;
          int* t1786 = *t1785;
          unsigned long r1787 = std___Deque_iterator_int__int___int_____S_buffer_size();
          int* ptr1788 = &(t1786)[r1787];
          std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp11775, &__result1759);
          struct std___Deque_iterator_int__int____int___ t1789 = agg_tmp11775;
          struct std___Deque_iterator_int__int____int___ r1790 = __gnu_cxx____enable_if___is_random_access_iter_int______value__std___Deque_iterator_int__int___int________type_std____copy_move_a1_true__int___int_(t1784, ptr1788, t1789);
          if (__cir_exc_active) {
            struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          ref_tmp11774 = r1790;
          struct std___Deque_iterator_int__int____int___* r1791 = std___Deque_iterator_int__int___int____operator_(&__result1759, &ref_tmp11774);
        for_step1779: ;
          int** t1792 = __node1773;
          int c1793 = 1;
          int** ptr1794 = &(t1792)[c1793];
          __node1773 = ptr1794;
        }
      int* t1795 = __last1758._M_first;
      int* t1796 = __last1758._M_cur;
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp21767, &__result1759);
      struct std___Deque_iterator_int__int____int___ t1797 = agg_tmp21767;
      struct std___Deque_iterator_int__int____int___ r1798 = __gnu_cxx____enable_if___is_random_access_iter_int______value__std___Deque_iterator_int__int___int________type_std____copy_move_a1_true__int___int_(t1795, t1796, t1797);
      if (__cir_exc_active) {
        struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      __retval1760 = r1798;
      struct std___Deque_iterator_int__int____int___ t1799 = __retval1760;
      return t1799;
    }
  int* t1800 = __first1757._M_cur;
  int* t1801 = __last1758._M_cur;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp31761, &__result1759);
  struct std___Deque_iterator_int__int____int___ t1802 = agg_tmp31761;
  struct std___Deque_iterator_int__int____int___ r1803 = __gnu_cxx____enable_if___is_random_access_iter_int______value__std___Deque_iterator_int__int___int________type_std____copy_move_a1_true__int___int_(t1800, t1801, t1802);
  if (__cir_exc_active) {
    struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval1760 = r1803;
  struct std___Deque_iterator_int__int____int___ t1804 = __retval1760;
  return t1804;
}

// function: _ZSt14__copy_move_a1ILb1EiRiPiiESt15_Deque_iteratorIT3_RS3_PS3_ES2_IT0_T1_T2_ESA_S6_
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____copy_move_a1_true__int__int___int___int_(struct std___Deque_iterator_int__int____int___ v1805, struct std___Deque_iterator_int__int____int___ v1806, struct std___Deque_iterator_int__int____int___ v1807) {
bb1808: ;
  struct std___Deque_iterator_int__int____int___ __first1809;
  struct std___Deque_iterator_int__int____int___ __last1810;
  struct std___Deque_iterator_int__int____int___ __result1811;
  struct std___Deque_iterator_int__int____int___ __retval1812;
  struct std___Deque_iterator_int__int____int___ agg_tmp01813;
  struct std___Deque_iterator_int__int____int___ agg_tmp11814;
  struct std___Deque_iterator_int__int____int___ agg_tmp21815;
  __first1809 = v1805;
  __last1810 = v1806;
  __result1811 = v1807;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp01813, &__first1809);
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp11814, &__last1810);
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp21815, &__result1811);
  struct std___Deque_iterator_int__int____int___ t1816 = agg_tmp01813;
  struct std___Deque_iterator_int__int____int___ t1817 = agg_tmp11814;
  struct std___Deque_iterator_int__int____int___ t1818 = agg_tmp21815;
  struct std___Deque_iterator_int__int____int___ r1819 = std___Deque_iterator_int__int___int___std____copy_move_dit_true__int__int___int___std___Deque_iterator_int__int___int____(t1816, t1817, t1818);
  if (__cir_exc_active) {
    struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval1812 = r1819;
  struct std___Deque_iterator_int__int____int___ t1820 = __retval1812;
  return t1820;
}

// function: _ZSt12__niter_baseISt15_Deque_iteratorIiRiPiEET_S4_
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____niter_base_std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ v1821) {
bb1822: ;
  struct std___Deque_iterator_int__int____int___ __it1823;
  struct std___Deque_iterator_int__int____int___ __retval1824;
  __it1823 = v1821;
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval1824, &__it1823);
  struct std___Deque_iterator_int__int____int___ t1825 = __retval1824;
  return t1825;
}

// function: _ZSt13__copy_move_aILb1ESt15_Deque_iteratorIiRiPiES3_ET1_T0_S5_S4_
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____copy_move_a_true__std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ v1826, struct std___Deque_iterator_int__int____int___ v1827, struct std___Deque_iterator_int__int____int___ v1828) {
bb1829: ;
  struct std___Deque_iterator_int__int____int___ __first1830;
  struct std___Deque_iterator_int__int____int___ __last1831;
  struct std___Deque_iterator_int__int____int___ __result1832;
  struct std___Deque_iterator_int__int____int___ __retval1833;
  struct std___Deque_iterator_int__int____int___ agg_tmp01834;
  struct std___Deque_iterator_int__int____int___ agg_tmp11835;
  struct std___Deque_iterator_int__int____int___ agg_tmp21836;
  struct std___Deque_iterator_int__int____int___ agg_tmp31837;
  struct std___Deque_iterator_int__int____int___ agg_tmp41838;
  struct std___Deque_iterator_int__int____int___ agg_tmp51839;
  struct std___Deque_iterator_int__int____int___ agg_tmp61840;
  __first1830 = v1826;
  __last1831 = v1827;
  __result1832 = v1828;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp21836, &__first1830);
  struct std___Deque_iterator_int__int____int___ t1841 = agg_tmp21836;
  struct std___Deque_iterator_int__int____int___ r1842 = std___Deque_iterator_int__int___int___std____niter_base_std___Deque_iterator_int__int___int____(t1841);
  agg_tmp11835 = r1842;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp41838, &__last1831);
  struct std___Deque_iterator_int__int____int___ t1843 = agg_tmp41838;
  struct std___Deque_iterator_int__int____int___ r1844 = std___Deque_iterator_int__int___int___std____niter_base_std___Deque_iterator_int__int___int____(t1843);
  agg_tmp31837 = r1844;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp61840, &__result1832);
  struct std___Deque_iterator_int__int____int___ t1845 = agg_tmp61840;
  struct std___Deque_iterator_int__int____int___ r1846 = std___Deque_iterator_int__int___int___std____niter_base_std___Deque_iterator_int__int___int____(t1845);
  agg_tmp51839 = r1846;
  struct std___Deque_iterator_int__int____int___ t1847 = agg_tmp11835;
  struct std___Deque_iterator_int__int____int___ t1848 = agg_tmp31837;
  struct std___Deque_iterator_int__int____int___ t1849 = agg_tmp51839;
  struct std___Deque_iterator_int__int____int___ r1850 = std___Deque_iterator_int__int___int___std____copy_move_a1_true__int__int___int___int_(t1847, t1848, t1849);
  if (__cir_exc_active) {
    struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  agg_tmp01834 = r1850;
  struct std___Deque_iterator_int__int____int___ t1851 = agg_tmp01834;
  struct std___Deque_iterator_int__int____int___ r1852 = std___Deque_iterator_int__int___int___std____niter_wrap_std___Deque_iterator_int__int___int____(&__result1832, t1851);
  if (__cir_exc_active) {
    struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval1833 = r1852;
  struct std___Deque_iterator_int__int____int___ t1853 = __retval1833;
  return t1853;
}

// function: _ZSt12__miter_baseISt15_Deque_iteratorIiRiPiEET_S4_
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____miter_base_std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ v1854) {
bb1855: ;
  struct std___Deque_iterator_int__int____int___ __it1856;
  struct std___Deque_iterator_int__int____int___ __retval1857;
  __it1856 = v1854;
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval1857, &__it1856);
  struct std___Deque_iterator_int__int____int___ t1858 = __retval1857;
  return t1858;
}

// function: _ZSt4moveISt15_Deque_iteratorIiRiPiES3_ET0_T_S5_S4_
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std__move_std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ v1859, struct std___Deque_iterator_int__int____int___ v1860, struct std___Deque_iterator_int__int____int___ v1861) {
bb1862: ;
  struct std___Deque_iterator_int__int____int___ __first1863;
  struct std___Deque_iterator_int__int____int___ __last1864;
  struct std___Deque_iterator_int__int____int___ __result1865;
  struct std___Deque_iterator_int__int____int___ __retval1866;
  struct std___Deque_iterator_int__int____int___ agg_tmp01867;
  struct std___Deque_iterator_int__int____int___ agg_tmp11868;
  struct std___Deque_iterator_int__int____int___ agg_tmp21869;
  struct std___Deque_iterator_int__int____int___ agg_tmp31870;
  struct std___Deque_iterator_int__int____int___ agg_tmp41871;
  __first1863 = v1859;
  __last1864 = v1860;
  __result1865 = v1861;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp11868, &__first1863);
  struct std___Deque_iterator_int__int____int___ t1872 = agg_tmp11868;
  struct std___Deque_iterator_int__int____int___ r1873 = std___Deque_iterator_int__int___int___std____miter_base_std___Deque_iterator_int__int___int____(t1872);
  if (__cir_exc_active) {
    struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  agg_tmp01867 = r1873;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp31870, &__last1864);
  struct std___Deque_iterator_int__int____int___ t1874 = agg_tmp31870;
  struct std___Deque_iterator_int__int____int___ r1875 = std___Deque_iterator_int__int___int___std____miter_base_std___Deque_iterator_int__int___int____(t1874);
  if (__cir_exc_active) {
    struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  agg_tmp21869 = r1875;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp41871, &__result1865);
  struct std___Deque_iterator_int__int____int___ t1876 = agg_tmp01867;
  struct std___Deque_iterator_int__int____int___ t1877 = agg_tmp21869;
  struct std___Deque_iterator_int__int____int___ t1878 = agg_tmp41871;
  struct std___Deque_iterator_int__int____int___ r1879 = std___Deque_iterator_int__int___int___std____copy_move_a_true__std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____(t1876, t1877, t1878);
  if (__cir_exc_active) {
    struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval1866 = r1879;
  struct std___Deque_iterator_int__int____int___ t1880 = __retval1866;
  return t1880;
}

// function: _ZNSt19_UninitDestroyGuardISt15_Deque_iteratorIiRiPiESaIiEEC2ERS3_RS4_
void std___UninitDestroyGuard_std___Deque_iterator_int__int___int____std__allocator_int______UninitDestroyGuard(struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____std__allocator_int__* v1881, struct std___Deque_iterator_int__int____int___* v1882, struct std__allocator_int_* v1883) {
bb1884: ;
  struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____std__allocator_int__* this1885;
  struct std___Deque_iterator_int__int____int___* __first1886;
  struct std__allocator_int_* __a1887;
  this1885 = v1881;
  __first1886 = v1882;
  __a1887 = v1883;
  struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____std__allocator_int__* t1888 = this1885;
  struct std___Deque_iterator_int__int____int___* t1889 = __first1886;
  std___Deque_iterator_int__int___int_____Deque_iterator(&t1888->_M_first, t1889);
  struct std___Deque_iterator_int__int____int___* t1890 = __first1886;
  t1888->_M_cur = t1890;
  struct std__allocator_int_* t1891 = __a1887;
  t1888->_M_alloc = t1891;
  return;
}

// function: _ZNSt19_UninitDestroyGuardISt15_Deque_iteratorIiRiPiESaIiEE7releaseEv
void std___UninitDestroyGuard_std___Deque_iterator_int__int___int____std__allocator_int_____release(struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____std__allocator_int__* v1892) {
bb1893: ;
  struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____std__allocator_int__* this1894;
  this1894 = v1892;
  struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____std__allocator_int__* t1895 = this1894;
  struct std___Deque_iterator_int__int____int___* c1896 = ((void*)0);
  t1895->_M_cur = c1896;
  return;
}

// function: _ZNSt19_UninitDestroyGuardISt15_Deque_iteratorIiRiPiESaIiEED2Ev
void std___UninitDestroyGuard_std___Deque_iterator_int__int___int____std__allocator_int_______UninitDestroyGuard(struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____std__allocator_int__* v1897) {
bb1898: ;
  struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____std__allocator_int__* this1899;
  this1899 = v1897;
  struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____std__allocator_int__* t1900 = this1899;
    struct std___Deque_iterator_int__int____int___* t1901 = t1900->_M_cur;
    struct std___Deque_iterator_int__int____int___* c1902 = ((void*)0);
    _Bool c1903 = ((t1901 != c1902)) ? 1 : 0;
    if (c1903) {
      struct std___Deque_iterator_int__int____int___ agg_tmp01904;
      struct std___Deque_iterator_int__int____int___ agg_tmp11905;
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp01904, &t1900->_M_first);
      struct std___Deque_iterator_int__int____int___* t1906 = t1900->_M_cur;
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp11905, t1906);
      struct std__allocator_int_* t1907 = t1900->_M_alloc;
      struct std___Deque_iterator_int__int____int___ t1908 = agg_tmp01904;
      struct std___Deque_iterator_int__int____int___ t1909 = agg_tmp11905;
      void_std___Destroy_std___Deque_iterator_int__int___int____int_(t1908, t1909, t1907);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZSt25__uninitialized_move_fillISt15_Deque_iteratorIiRiPiES3_iSaIiEEvT_S5_T0_S6_RKT1_RT2_
void void_std____uninitialized_move_fill_std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____int__std__allocator_int___(struct std___Deque_iterator_int__int____int___ v1910, struct std___Deque_iterator_int__int____int___ v1911, struct std___Deque_iterator_int__int____int___ v1912, struct std___Deque_iterator_int__int____int___ v1913, int* v1914, struct std__allocator_int_* v1915) {
bb1916: ;
  struct std___Deque_iterator_int__int____int___ __first11917;
  struct std___Deque_iterator_int__int____int___ __last11918;
  struct std___Deque_iterator_int__int____int___ __first21919;
  struct std___Deque_iterator_int__int____int___ __last21920;
  int* __x1921;
  struct std__allocator_int_* __alloc1922;
  struct std___Deque_iterator_int__int____int___ __mid21923;
  struct std___Deque_iterator_int__int____int___ agg_tmp01924;
  struct std___Deque_iterator_int__int____int___ agg_tmp11925;
  struct std___Deque_iterator_int__int____int___ agg_tmp21926;
  struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____std__allocator_int__ __guard1927;
  struct std___Deque_iterator_int__int____int___ agg_tmp31928;
  struct std___Deque_iterator_int__int____int___ agg_tmp41929;
  __first11917 = v1910;
  __last11918 = v1911;
  __first21919 = v1912;
  __last21920 = v1913;
  __x1921 = v1914;
  __alloc1922 = v1915;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp01924, &__first11917);
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp11925, &__last11918);
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp21926, &__first21919);
  struct std__allocator_int_* t1930 = __alloc1922;
  struct std___Deque_iterator_int__int____int___ t1931 = agg_tmp01924;
  struct std___Deque_iterator_int__int____int___ t1932 = agg_tmp11925;
  struct std___Deque_iterator_int__int____int___ t1933 = agg_tmp21926;
  struct std___Deque_iterator_int__int____int___ r1934 = std___Deque_iterator_int__int___int___std____uninitialized_move_a_std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____std__allocator_int___(t1931, t1932, t1933, t1930);
  if (__cir_exc_active) {
    return;
  }
  __mid21923 = r1934;
  struct std__allocator_int_* t1935 = __alloc1922;
  std___UninitDestroyGuard_std___Deque_iterator_int__int___int____std__allocator_int______UninitDestroyGuard(&__guard1927, &__first21919, t1935);
  if (__cir_exc_active) {
    return;
  }
    struct std___Deque_iterator_int__int____int___* r1936 = std___Deque_iterator_int__int___int____operator_(&__first21919, &__mid21923);
    std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp31928, &__mid21923);
    std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp41929, &__last21920);
    int* t1937 = __x1921;
    struct std__allocator_int_* t1938 = __alloc1922;
    struct std___Deque_iterator_int__int____int___ t1939 = agg_tmp31928;
    struct std___Deque_iterator_int__int____int___ t1940 = agg_tmp41929;
    void_std____uninitialized_fill_a_std___Deque_iterator_int__int___int____int__int_(t1939, t1940, t1937, t1938);
    if (__cir_exc_active) {
      {
        std___UninitDestroyGuard_std___Deque_iterator_int__int___int____std__allocator_int_______UninitDestroyGuard(&__guard1927);
      }
      return;
    }
    std___UninitDestroyGuard_std___Deque_iterator_int__int___int____std__allocator_int_____release(&__guard1927);
    if (__cir_exc_active) {
      {
        std___UninitDestroyGuard_std___Deque_iterator_int__int___int____std__allocator_int_______UninitDestroyGuard(&__guard1927);
      }
      return;
    }
  {
    std___UninitDestroyGuard_std___Deque_iterator_int__int___int____std__allocator_int_______UninitDestroyGuard(&__guard1927);
  }
  return;
}

// function: _ZSt9__advanceIPilEvRT_T0_St26random_access_iterator_tag
void void_std____advance_int___long_(int** v1941, long v1942, struct std__random_access_iterator_tag v1943) {
bb1944: ;
  int** __i1945;
  long __n1946;
  struct std__random_access_iterator_tag unnamed1947;
  __i1945 = v1941;
  __n1946 = v1942;
  unnamed1947 = v1943;
    long t1948 = __n1946;
    _Bool isconst1949 = 0;
    _Bool ternary1950;
    if (isconst1949) {
      long t1951 = __n1946;
      long c1952 = 1;
      _Bool c1953 = ((t1951 == c1952)) ? 1 : 0;
      ternary1950 = (_Bool)c1953;
    } else {
      _Bool c1954 = 0;
      ternary1950 = (_Bool)c1954;
    }
    if (ternary1950) {
      int** t1955 = __i1945;
      int* t1956 = *t1955;
      int c1957 = 1;
      int* ptr1958 = &(t1956)[c1957];
      *t1955 = ptr1958;
    } else {
        long t1959 = __n1946;
        _Bool isconst1960 = 0;
        _Bool ternary1961;
        if (isconst1960) {
          long t1962 = __n1946;
          long c1963 = -1;
          _Bool c1964 = ((t1962 == c1963)) ? 1 : 0;
          ternary1961 = (_Bool)c1964;
        } else {
          _Bool c1965 = 0;
          ternary1961 = (_Bool)c1965;
        }
        if (ternary1961) {
          int** t1966 = __i1945;
          int* t1967 = *t1966;
          int c1968 = -1;
          int* ptr1969 = &(t1967)[c1968];
          *t1966 = ptr1969;
        } else {
          long t1970 = __n1946;
          int** t1971 = __i1945;
          int* t1972 = *t1971;
          int* ptr1973 = &(t1972)[t1970];
          *t1971 = ptr1973;
        }
    }
  return;
}

// function: _ZSt7advanceIPilEvRT_T0_
void void_std__advance_int___long_(int** v1974, long v1975) {
bb1976: ;
  int** __i1977;
  long __n1978;
  long __d1979;
  struct std__random_access_iterator_tag agg_tmp01980;
  __i1977 = v1974;
  __n1978 = v1975;
  long t1981 = __n1978;
  __d1979 = t1981;
  int** t1982 = __i1977;
  long t1983 = __d1979;
  int** t1984 = __i1977;
  struct std__random_access_iterator_tag r1985 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(t1984);
  if (__cir_exc_active) {
    return;
  }
  agg_tmp01980 = r1985;
  struct std__random_access_iterator_tag t1986 = agg_tmp01980;
  void_std____advance_int___long_(t1982, t1983, t1986);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt23__copy_move_backward_a2ILb1EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_backward_a2_true__int___int__(int* v1987, int* v1988, int* v1989) {
bb1990: ;
  int* __first1991;
  int* __last1992;
  int* __result1993;
  int* __retval1994;
  __first1991 = v1987;
  __last1992 = v1988;
  __result1993 = v1989;
      _Bool r1995 = std__is_constant_evaluated();
      if (r1995) {
      } else {
          long __n1996;
          int* t1997 = __first1991;
          int* t1998 = __last1992;
          long r1999 = std__iterator_traits_int____difference_type_std__distance_int__(t1997, t1998);
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
          __n1996 = r1999;
          long t2000 = __n1996;
          long u2001 = -t2000;
          void_std__advance_int___long_(&__result1993, u2001);
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
            long t2002 = __n1996;
            long c2003 = 1;
            _Bool c2004 = ((t2002 > c2003)) ? 1 : 0;
            if (c2004) {
              int* t2005 = __result1993;
              void* cast2006 = (void*)t2005;
              int* t2007 = __first1991;
              void* cast2008 = (void*)t2007;
              long t2009 = __n1996;
              unsigned long cast2010 = (unsigned long)t2009;
              unsigned long c2011 = 4;
              unsigned long b2012 = cast2010 * c2011;
              void* r2013 = memmove(cast2006, cast2008, b2012);
            } else {
                long t2014 = __n1996;
                long c2015 = 1;
                _Bool c2016 = ((t2014 == c2015)) ? 1 : 0;
                if (c2016) {
                  void_std____assign_one_true__int___int__(&__result1993, &__first1991);
                  if (__cir_exc_active) {
                    int* __cir_eh_ret = (int*)0;
                    return __cir_eh_ret;
                  }
                }
            }
          int* t2017 = __result1993;
          __retval1994 = t2017;
          int* t2018 = __retval1994;
          return t2018;
      }
    while (1) {
      int* t2019 = __first1991;
      int* t2020 = __last1992;
      _Bool c2021 = ((t2019 != t2020)) ? 1 : 0;
      if (!c2021) break;
        int* t2022 = __last1992;
        int c2023 = -1;
        int* ptr2024 = &(t2022)[c2023];
        __last1992 = ptr2024;
        int* t2025 = __result1993;
        int c2026 = -1;
        int* ptr2027 = &(t2025)[c2026];
        __result1993 = ptr2027;
        void_std____assign_one_true__int___int__(&__result1993, &__last1992);
        if (__cir_exc_active) {
          int* __cir_eh_ret = (int*)0;
          return __cir_eh_ret;
        }
    }
  int* t2028 = __result1993;
  __retval1994 = t2028;
  int* t2029 = __retval1994;
  return t2029;
}

// function: _ZSt23__copy_move_backward_a1ILb1EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_backward_a1_true__int___int__(int* v2030, int* v2031, int* v2032) {
bb2033: ;
  int* __first2034;
  int* __last2035;
  int* __result2036;
  int* __retval2037;
  __first2034 = v2030;
  __last2035 = v2031;
  __result2036 = v2032;
  int* t2038 = __first2034;
  int* t2039 = __last2035;
  int* t2040 = __result2036;
  int* r2041 = int__std____copy_move_backward_a2_true__int___int__(t2038, t2039, t2040);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval2037 = r2041;
  int* t2042 = __retval2037;
  return t2042;
}

// function: _ZSt23__copy_move_backward_a1ILb1EPiiEN9__gnu_cxx11__enable_ifIXsr23__is_random_access_iterIT0_EE7__valueESt15_Deque_iteratorIT1_RS5_PS5_EE6__typeES3_S3_S8_
struct std___Deque_iterator_int__int____int___ __gnu_cxx____enable_if___is_random_access_iter_int______value__std___Deque_iterator_int__int___int________type_std____copy_move_backward_a1_true__int___int_(int* v2043, int* v2044, struct std___Deque_iterator_int__int____int___ v2045) {
bb2046: ;
  int* __first2047;
  int* __last2048;
  struct std___Deque_iterator_int__int____int___ __result2049;
  struct std___Deque_iterator_int__int____int___ __retval2050;
  long __len2051;
  __first2047 = v2043;
  __last2048 = v2044;
  __result2049 = v2045;
  int* t2052 = __last2048;
  int* t2053 = __first2047;
  long diff2054 = t2052 - t2053;
  __len2051 = diff2054;
    while (1) {
      long t2055 = __len2051;
      long c2056 = 0;
      _Bool c2057 = ((t2055 > c2056)) ? 1 : 0;
      if (!c2057) break;
        long __rlen2058;
        int* __rend2059;
        long __clen2060;
        int* t2061 = __result2049._M_cur;
        int* t2062 = __result2049._M_first;
        long diff2063 = t2061 - t2062;
        __rlen2058 = diff2063;
        int* t2064 = __result2049._M_cur;
        __rend2059 = t2064;
          long t2065 = __rlen2058;
          _Bool cast2066 = (_Bool)t2065;
          _Bool u2067 = !cast2066;
          if (u2067) {
            unsigned long r2068 = std___Deque_iterator_int__int___int_____S_buffer_size();
            long cast2069 = (long)r2068;
            __rlen2058 = cast2069;
            int** t2070 = __result2049._M_node;
            int c2071 = -1;
            int** ptr2072 = &(t2070)[c2071];
            int* t2073 = *ptr2072;
            long t2074 = __rlen2058;
            int* ptr2075 = &(t2073)[t2074];
            __rend2059 = ptr2075;
          }
        long* r2076 = long_const__std__min_long_(&__len2051, &__rlen2058);
        if (__cir_exc_active) {
          struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        long t2077 = *r2076;
        __clen2060 = t2077;
        int* t2078 = __last2048;
        long t2079 = __clen2060;
        long u2080 = -t2079;
        int* ptr2081 = &(t2078)[u2080];
        int* t2082 = __last2048;
        int* t2083 = __rend2059;
        int* r2084 = int__std____copy_move_backward_a1_true__int___int__(ptr2081, t2082, t2083);
        if (__cir_exc_active) {
          struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        long t2085 = __clen2060;
        int* t2086 = __last2048;
        long u2087 = -t2085;
        int* ptr2088 = &(t2086)[u2087];
        __last2048 = ptr2088;
        long t2089 = __clen2060;
        struct std___Deque_iterator_int__int____int___* r2090 = std___Deque_iterator_int__int___int____operator__(&__result2049, t2089);
        long t2091 = __clen2060;
        long t2092 = __len2051;
        long b2093 = t2092 - t2091;
        __len2051 = b2093;
    }
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval2050, &__result2049);
  struct std___Deque_iterator_int__int____int___ t2094 = __retval2050;
  return t2094;
}

// function: _ZSt24__copy_move_backward_ditILb1EiRiPiSt15_Deque_iteratorIiS0_S1_EET3_S2_IT0_T1_T2_ES8_S4_
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____copy_move_backward_dit_true__int__int___int___std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ v2095, struct std___Deque_iterator_int__int____int___ v2096, struct std___Deque_iterator_int__int____int___ v2097) {
bb2098: ;
  struct std___Deque_iterator_int__int____int___ __first2099;
  struct std___Deque_iterator_int__int____int___ __last2100;
  struct std___Deque_iterator_int__int____int___ __result2101;
  struct std___Deque_iterator_int__int____int___ __retval2102;
  struct std___Deque_iterator_int__int____int___ agg_tmp32103;
  __first2099 = v2095;
  __last2100 = v2096;
  __result2101 = v2097;
    int** t2104 = __first2099._M_node;
    int** t2105 = __last2100._M_node;
    _Bool c2106 = ((t2104 != t2105)) ? 1 : 0;
    if (c2106) {
      struct std___Deque_iterator_int__int____int___ ref_tmp02107;
      struct std___Deque_iterator_int__int____int___ agg_tmp02108;
      struct std___Deque_iterator_int__int____int___ agg_tmp22109;
      int* t2110 = __last2100._M_first;
      int* t2111 = __last2100._M_cur;
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp02108, &__result2101);
      struct std___Deque_iterator_int__int____int___ t2112 = agg_tmp02108;
      struct std___Deque_iterator_int__int____int___ r2113 = __gnu_cxx____enable_if___is_random_access_iter_int______value__std___Deque_iterator_int__int___int________type_std____copy_move_backward_a1_true__int___int_(t2110, t2111, t2112);
      if (__cir_exc_active) {
        struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      ref_tmp02107 = r2113;
      struct std___Deque_iterator_int__int____int___* r2114 = std___Deque_iterator_int__int___int____operator_(&__result2101, &ref_tmp02107);
        int** __node2115;
        struct std___Deque_iterator_int__int____int___ ref_tmp12116;
        struct std___Deque_iterator_int__int____int___ agg_tmp12117;
        int** t2118 = __last2100._M_node;
        int c2119 = -1;
        int** ptr2120 = &(t2118)[c2119];
        __node2115 = ptr2120;
        while (1) {
          int** t2122 = __node2115;
          int** t2123 = __first2099._M_node;
          _Bool c2124 = ((t2122 != t2123)) ? 1 : 0;
          if (!c2124) break;
          int** t2125 = __node2115;
          int* t2126 = *t2125;
          int** t2127 = __node2115;
          int* t2128 = *t2127;
          unsigned long r2129 = std___Deque_iterator_int__int___int_____S_buffer_size();
          int* ptr2130 = &(t2128)[r2129];
          std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp12117, &__result2101);
          struct std___Deque_iterator_int__int____int___ t2131 = agg_tmp12117;
          struct std___Deque_iterator_int__int____int___ r2132 = __gnu_cxx____enable_if___is_random_access_iter_int______value__std___Deque_iterator_int__int___int________type_std____copy_move_backward_a1_true__int___int_(t2126, ptr2130, t2131);
          if (__cir_exc_active) {
            struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          ref_tmp12116 = r2132;
          struct std___Deque_iterator_int__int____int___* r2133 = std___Deque_iterator_int__int___int____operator_(&__result2101, &ref_tmp12116);
        for_step2121: ;
          int** t2134 = __node2115;
          int c2135 = -1;
          int** ptr2136 = &(t2134)[c2135];
          __node2115 = ptr2136;
        }
      int* t2137 = __first2099._M_cur;
      int* t2138 = __first2099._M_last;
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp22109, &__result2101);
      struct std___Deque_iterator_int__int____int___ t2139 = agg_tmp22109;
      struct std___Deque_iterator_int__int____int___ r2140 = __gnu_cxx____enable_if___is_random_access_iter_int______value__std___Deque_iterator_int__int___int________type_std____copy_move_backward_a1_true__int___int_(t2137, t2138, t2139);
      if (__cir_exc_active) {
        struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      __retval2102 = r2140;
      struct std___Deque_iterator_int__int____int___ t2141 = __retval2102;
      return t2141;
    }
  int* t2142 = __first2099._M_cur;
  int* t2143 = __last2100._M_cur;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp32103, &__result2101);
  struct std___Deque_iterator_int__int____int___ t2144 = agg_tmp32103;
  struct std___Deque_iterator_int__int____int___ r2145 = __gnu_cxx____enable_if___is_random_access_iter_int______value__std___Deque_iterator_int__int___int________type_std____copy_move_backward_a1_true__int___int_(t2142, t2143, t2144);
  if (__cir_exc_active) {
    struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval2102 = r2145;
  struct std___Deque_iterator_int__int____int___ t2146 = __retval2102;
  return t2146;
}

// function: _ZSt23__copy_move_backward_a1ILb1EiRiPiiESt15_Deque_iteratorIT3_RS3_PS3_ES2_IT0_T1_T2_ESA_S6_
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____copy_move_backward_a1_true__int__int___int___int_(struct std___Deque_iterator_int__int____int___ v2147, struct std___Deque_iterator_int__int____int___ v2148, struct std___Deque_iterator_int__int____int___ v2149) {
bb2150: ;
  struct std___Deque_iterator_int__int____int___ __first2151;
  struct std___Deque_iterator_int__int____int___ __last2152;
  struct std___Deque_iterator_int__int____int___ __result2153;
  struct std___Deque_iterator_int__int____int___ __retval2154;
  struct std___Deque_iterator_int__int____int___ agg_tmp02155;
  struct std___Deque_iterator_int__int____int___ agg_tmp12156;
  struct std___Deque_iterator_int__int____int___ agg_tmp22157;
  __first2151 = v2147;
  __last2152 = v2148;
  __result2153 = v2149;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp02155, &__first2151);
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp12156, &__last2152);
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp22157, &__result2153);
  struct std___Deque_iterator_int__int____int___ t2158 = agg_tmp02155;
  struct std___Deque_iterator_int__int____int___ t2159 = agg_tmp12156;
  struct std___Deque_iterator_int__int____int___ t2160 = agg_tmp22157;
  struct std___Deque_iterator_int__int____int___ r2161 = std___Deque_iterator_int__int___int___std____copy_move_backward_dit_true__int__int___int___std___Deque_iterator_int__int___int____(t2158, t2159, t2160);
  if (__cir_exc_active) {
    struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval2154 = r2161;
  struct std___Deque_iterator_int__int____int___ t2162 = __retval2154;
  return t2162;
}

// function: _ZSt22__copy_move_backward_aILb1ESt15_Deque_iteratorIiRiPiES3_ET1_T0_S5_S4_
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____copy_move_backward_a_true__std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ v2163, struct std___Deque_iterator_int__int____int___ v2164, struct std___Deque_iterator_int__int____int___ v2165) {
bb2166: ;
  struct std___Deque_iterator_int__int____int___ __first2167;
  struct std___Deque_iterator_int__int____int___ __last2168;
  struct std___Deque_iterator_int__int____int___ __result2169;
  struct std___Deque_iterator_int__int____int___ __retval2170;
  struct std___Deque_iterator_int__int____int___ agg_tmp02171;
  struct std___Deque_iterator_int__int____int___ agg_tmp12172;
  struct std___Deque_iterator_int__int____int___ agg_tmp22173;
  struct std___Deque_iterator_int__int____int___ agg_tmp32174;
  struct std___Deque_iterator_int__int____int___ agg_tmp42175;
  struct std___Deque_iterator_int__int____int___ agg_tmp52176;
  struct std___Deque_iterator_int__int____int___ agg_tmp62177;
  __first2167 = v2163;
  __last2168 = v2164;
  __result2169 = v2165;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp22173, &__first2167);
  struct std___Deque_iterator_int__int____int___ t2178 = agg_tmp22173;
  struct std___Deque_iterator_int__int____int___ r2179 = std___Deque_iterator_int__int___int___std____niter_base_std___Deque_iterator_int__int___int____(t2178);
  agg_tmp12172 = r2179;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp42175, &__last2168);
  struct std___Deque_iterator_int__int____int___ t2180 = agg_tmp42175;
  struct std___Deque_iterator_int__int____int___ r2181 = std___Deque_iterator_int__int___int___std____niter_base_std___Deque_iterator_int__int___int____(t2180);
  agg_tmp32174 = r2181;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp62177, &__result2169);
  struct std___Deque_iterator_int__int____int___ t2182 = agg_tmp62177;
  struct std___Deque_iterator_int__int____int___ r2183 = std___Deque_iterator_int__int___int___std____niter_base_std___Deque_iterator_int__int___int____(t2182);
  agg_tmp52176 = r2183;
  struct std___Deque_iterator_int__int____int___ t2184 = agg_tmp12172;
  struct std___Deque_iterator_int__int____int___ t2185 = agg_tmp32174;
  struct std___Deque_iterator_int__int____int___ t2186 = agg_tmp52176;
  struct std___Deque_iterator_int__int____int___ r2187 = std___Deque_iterator_int__int___int___std____copy_move_backward_a1_true__int__int___int___int_(t2184, t2185, t2186);
  if (__cir_exc_active) {
    struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  agg_tmp02171 = r2187;
  struct std___Deque_iterator_int__int____int___ t2188 = agg_tmp02171;
  struct std___Deque_iterator_int__int____int___ r2189 = std___Deque_iterator_int__int___int___std____niter_wrap_std___Deque_iterator_int__int___int____(&__result2169, t2188);
  if (__cir_exc_active) {
    struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval2170 = r2189;
  struct std___Deque_iterator_int__int____int___ t2190 = __retval2170;
  return t2190;
}

// function: _ZSt13move_backwardISt15_Deque_iteratorIiRiPiES3_ET0_T_S5_S4_
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std__move_backward_std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ v2191, struct std___Deque_iterator_int__int____int___ v2192, struct std___Deque_iterator_int__int____int___ v2193) {
bb2194: ;
  struct std___Deque_iterator_int__int____int___ __first2195;
  struct std___Deque_iterator_int__int____int___ __last2196;
  struct std___Deque_iterator_int__int____int___ __result2197;
  struct std___Deque_iterator_int__int____int___ __retval2198;
  struct std___Deque_iterator_int__int____int___ agg_tmp02199;
  struct std___Deque_iterator_int__int____int___ agg_tmp12200;
  struct std___Deque_iterator_int__int____int___ agg_tmp22201;
  struct std___Deque_iterator_int__int____int___ agg_tmp32202;
  struct std___Deque_iterator_int__int____int___ agg_tmp42203;
  __first2195 = v2191;
  __last2196 = v2192;
  __result2197 = v2193;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp12200, &__first2195);
  struct std___Deque_iterator_int__int____int___ t2204 = agg_tmp12200;
  struct std___Deque_iterator_int__int____int___ r2205 = std___Deque_iterator_int__int___int___std____miter_base_std___Deque_iterator_int__int___int____(t2204);
  if (__cir_exc_active) {
    struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  agg_tmp02199 = r2205;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp32202, &__last2196);
  struct std___Deque_iterator_int__int____int___ t2206 = agg_tmp32202;
  struct std___Deque_iterator_int__int____int___ r2207 = std___Deque_iterator_int__int___int___std____miter_base_std___Deque_iterator_int__int___int____(t2206);
  if (__cir_exc_active) {
    struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  agg_tmp22201 = r2207;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp42203, &__result2197);
  struct std___Deque_iterator_int__int____int___ t2208 = agg_tmp02199;
  struct std___Deque_iterator_int__int____int___ t2209 = agg_tmp22201;
  struct std___Deque_iterator_int__int____int___ t2210 = agg_tmp42203;
  struct std___Deque_iterator_int__int____int___ r2211 = std___Deque_iterator_int__int___int___std____copy_move_backward_a_true__std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____(t2208, t2209, t2210);
  if (__cir_exc_active) {
    struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval2198 = r2211;
  struct std___Deque_iterator_int__int____int___ t2212 = __retval2198;
  return t2212;
}

// function: _ZSt25__uninitialized_fill_moveISt15_Deque_iteratorIiRiPiEiS3_SaIiEET_S5_S5_RKT0_T1_S9_RT2_
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____uninitialized_fill_move_std___Deque_iterator_int__int___int____int__std___Deque_iterator_int__int___int____std__allocator_int___(struct std___Deque_iterator_int__int____int___ v2213, struct std___Deque_iterator_int__int____int___ v2214, int* v2215, struct std___Deque_iterator_int__int____int___ v2216, struct std___Deque_iterator_int__int____int___ v2217, struct std__allocator_int_* v2218) {
bb2219: ;
  struct std___Deque_iterator_int__int____int___ __result2220;
  struct std___Deque_iterator_int__int____int___ __mid2221;
  int* __x2222;
  struct std___Deque_iterator_int__int____int___ __first2223;
  struct std___Deque_iterator_int__int____int___ __last2224;
  struct std__allocator_int_* __alloc2225;
  struct std___Deque_iterator_int__int____int___ __retval2226;
  struct std___Deque_iterator_int__int____int___ agg_tmp02227;
  struct std___Deque_iterator_int__int____int___ agg_tmp12228;
  struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____std__allocator_int__ __guard2229;
  struct std___Deque_iterator_int__int____int___ ref_tmp02230;
  struct std___Deque_iterator_int__int____int___ agg_tmp22231;
  struct std___Deque_iterator_int__int____int___ agg_tmp32232;
  struct std___Deque_iterator_int__int____int___ agg_tmp42233;
  __result2220 = v2213;
  __mid2221 = v2214;
  __x2222 = v2215;
  __first2223 = v2216;
  __last2224 = v2217;
  __alloc2225 = v2218;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp02227, &__result2220);
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp12228, &__mid2221);
  int* t2234 = __x2222;
  struct std__allocator_int_* t2235 = __alloc2225;
  struct std___Deque_iterator_int__int____int___ t2236 = agg_tmp02227;
  struct std___Deque_iterator_int__int____int___ t2237 = agg_tmp12228;
  void_std____uninitialized_fill_a_std___Deque_iterator_int__int___int____int__int_(t2236, t2237, t2234, t2235);
  if (__cir_exc_active) {
    struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std__allocator_int_* t2238 = __alloc2225;
  std___UninitDestroyGuard_std___Deque_iterator_int__int___int____std__allocator_int______UninitDestroyGuard(&__guard2229, &__result2220, t2238);
  if (__cir_exc_active) {
    struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
    struct std___Deque_iterator_int__int____int___* r2239 = std___Deque_iterator_int__int___int____operator_(&__result2220, &__mid2221);
    std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp22231, &__first2223);
    std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp32232, &__last2224);
    std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp42233, &__mid2221);
    struct std__allocator_int_* t2240 = __alloc2225;
    struct std___Deque_iterator_int__int____int___ t2241 = agg_tmp22231;
    struct std___Deque_iterator_int__int____int___ t2242 = agg_tmp32232;
    struct std___Deque_iterator_int__int____int___ t2243 = agg_tmp42233;
    struct std___Deque_iterator_int__int____int___ r2244 = std___Deque_iterator_int__int___int___std____uninitialized_move_a_std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____std__allocator_int___(t2241, t2242, t2243, t2240);
    if (__cir_exc_active) {
      {
        std___UninitDestroyGuard_std___Deque_iterator_int__int___int____std__allocator_int_______UninitDestroyGuard(&__guard2229);
      }
      struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    ref_tmp02230 = r2244;
    struct std___Deque_iterator_int__int____int___* r2245 = std___Deque_iterator_int__int___int____operator_(&__result2220, &ref_tmp02230);
    std___UninitDestroyGuard_std___Deque_iterator_int__int___int____std__allocator_int_____release(&__guard2229);
    if (__cir_exc_active) {
      {
        std___UninitDestroyGuard_std___Deque_iterator_int__int___int____std__allocator_int_______UninitDestroyGuard(&__guard2229);
      }
      struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    std___Deque_iterator_int__int___int_____Deque_iterator(&__retval2226, &__result2220);
    struct std___Deque_iterator_int__int____int___ t2246 = __retval2226;
    struct std___Deque_iterator_int__int____int___ ret_val2247 = t2246;
    {
      std___UninitDestroyGuard_std___Deque_iterator_int__int___int____std__allocator_int_______UninitDestroyGuard(&__guard2229);
    }
    return ret_val2247;
  abort();
}

// function: _ZNSt5dequeIiSaIiEE13_M_insert_auxESt15_Deque_iteratorIiRiPiEmRKi
void std__deque_int__std__allocator_int______M_insert_aux(struct std__deque_int__std__allocator_int__* v2248, struct std___Deque_iterator_int__int____int___ v2249, unsigned long v2250, int* v2251) {
bb2252: ;
  struct std__deque_int__std__allocator_int__* this2253;
  struct std___Deque_iterator_int__int____int___ __pos2254;
  unsigned long __n2255;
  int* __x2256;
  long __elems_before2257;
  unsigned long __length2258;
  int __x_copy2259;
  this2253 = v2248;
  __pos2254 = v2249;
  __n2255 = v2250;
  __x2256 = v2251;
  struct std__deque_int__std__allocator_int__* t2260 = this2253;
  struct std___Deque_base_int__std__allocator_int__* base2261 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2260 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2262 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2261->_M_impl) + 0);
  long r2263 = std__operator_(&__pos2254, &base2262->_M_start);
  __elems_before2257 = r2263;
  unsigned long r2264 = std__deque_int__std__allocator_int_____size___const(t2260);
  __length2258 = r2264;
  int* t2265 = __x2256;
  int t2266 = *t2265;
  __x_copy2259 = t2266;
    long t2267 = __elems_before2257;
    unsigned long t2268 = __length2258;
    unsigned long c2269 = 2;
    unsigned long b2270 = t2268 / c2269;
    long cast2271 = (long)b2270;
    _Bool c2272 = ((t2267 < cast2271)) ? 1 : 0;
    if (c2272) {
      struct std___Deque_iterator_int__int____int___ __new_start2273;
      struct std___Deque_iterator_int__int____int___ __old_start2274;
      struct std___Deque_iterator_int__int____int___ ref_tmp02275;
      unsigned long t2276 = __n2255;
      struct std___Deque_iterator_int__int____int___ r2277 = std__deque_int__std__allocator_int______M_reserve_elements_at_front(t2260, t2276);
      if (__cir_exc_active) {
        return;
      }
      __new_start2273 = r2277;
      struct std___Deque_base_int__std__allocator_int__* base2278 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2260 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2279 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2278->_M_impl) + 0);
      std___Deque_iterator_int__int___int_____Deque_iterator(&__old_start2274, &base2279->_M_start);
      struct std___Deque_base_int__std__allocator_int__* base2280 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2260 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2281 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2280->_M_impl) + 0);
      long t2282 = __elems_before2257;
      struct std___Deque_iterator_int__int____int___ r2283 = std__operator__4(&base2281->_M_start, t2282);
      ref_tmp02275 = r2283;
      struct std___Deque_iterator_int__int____int___* r2284 = std___Deque_iterator_int__int___int____operator_(&__pos2254, &ref_tmp02275);
            long t2286 = __elems_before2257;
            unsigned long t2287 = __n2255;
            long cast2288 = (long)t2287;
            _Bool c2289 = ((t2286 >= cast2288)) ? 1 : 0;
            if (c2289) {
              struct std___Deque_iterator_int__int____int___ __start_n2290;
              struct std___Deque_iterator_int__int____int___ agg_tmp02291;
              struct std___Deque_iterator_int__int____int___ agg_tmp12292;
              struct std___Deque_iterator_int__int____int___ agg_tmp22293;
              struct std___Deque_iterator_int__int____int___ agg_tmp32294;
              struct std___Deque_iterator_int__int____int___ agg_tmp42295;
              struct std___Deque_iterator_int__int____int___ agg_tmp52296;
              struct std___Deque_iterator_int__int____int___ agg_tmp62297;
              struct std___Deque_iterator_int__int____int___ agg_tmp72298;
              struct std___Deque_iterator_int__int____int___ agg_tmp82299;
              struct std___Deque_iterator_int__int____int___ agg_tmp92300;
              struct std___Deque_base_int__std__allocator_int__* base2301 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2260 + 0);
              struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2302 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2301->_M_impl) + 0);
              unsigned long t2303 = __n2255;
              long cast2304 = (long)t2303;
              struct std___Deque_iterator_int__int____int___ r2305 = std__operator__4(&base2302->_M_start, cast2304);
              __start_n2290 = r2305;
              struct std___Deque_base_int__std__allocator_int__* base2306 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2260 + 0);
              struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2307 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2306->_M_impl) + 0);
              std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp02291, &base2307->_M_start);
              std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp12292, &__start_n2290);
              std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp22293, &__new_start2273);
              struct std___Deque_base_int__std__allocator_int__* base2308 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2260 + 0);
              struct std__allocator_int_* r2309 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base2308);
              struct std___Deque_iterator_int__int____int___ t2310 = agg_tmp02291;
              struct std___Deque_iterator_int__int____int___ t2311 = agg_tmp12292;
              struct std___Deque_iterator_int__int____int___ t2312 = agg_tmp22293;
              struct std___Deque_iterator_int__int____int___ r2313 = std___Deque_iterator_int__int___int___std____uninitialized_move_a_std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____std__allocator_int___(t2310, t2311, t2312, r2309);
              if (__cir_exc_active) {
                goto cir_try_dispatch2285;
              }
              agg_tmp32294 = r2313;
              struct std___Deque_base_int__std__allocator_int__* base2314 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2260 + 0);
              struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2315 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2314->_M_impl) + 0);
              struct std___Deque_iterator_int__int____int___* r2316 = std___Deque_iterator_int__int___int____operator_(&base2315->_M_start, &__new_start2273);
              std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp42295, &__start_n2290);
              std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp52296, &__pos2254);
              std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp62297, &__old_start2274);
              struct std___Deque_iterator_int__int____int___ t2317 = agg_tmp42295;
              struct std___Deque_iterator_int__int____int___ t2318 = agg_tmp52296;
              struct std___Deque_iterator_int__int____int___ t2319 = agg_tmp62297;
              struct std___Deque_iterator_int__int____int___ r2320 = std___Deque_iterator_int__int___int___std__move_std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____(t2317, t2318, t2319);
              if (__cir_exc_active) {
                goto cir_try_dispatch2285;
              }
              agg_tmp72298 = r2320;
              unsigned long t2321 = __n2255;
              long cast2322 = (long)t2321;
              struct std___Deque_iterator_int__int____int___ r2323 = std__operator__2(&__pos2254, cast2322);
              agg_tmp82299 = r2323;
              std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp92300, &__pos2254);
              struct std___Deque_iterator_int__int____int___ t2324 = agg_tmp82299;
              struct std___Deque_iterator_int__int____int___ t2325 = agg_tmp92300;
              void_std__fill_std___Deque_iterator_int__int___int____int_(t2324, t2325, &__x_copy2259);
              if (__cir_exc_active) {
                goto cir_try_dispatch2285;
              }
            } else {
              struct std___Deque_iterator_int__int____int___ agg_tmp102326;
              struct std___Deque_iterator_int__int____int___ agg_tmp112327;
              struct std___Deque_iterator_int__int____int___ agg_tmp122328;
              struct std___Deque_iterator_int__int____int___ agg_tmp132329;
              struct std___Deque_iterator_int__int____int___ agg_tmp142330;
              struct std___Deque_iterator_int__int____int___ agg_tmp152331;
              struct std___Deque_base_int__std__allocator_int__* base2332 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2260 + 0);
              struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2333 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2332->_M_impl) + 0);
              std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp102326, &base2333->_M_start);
              std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp112327, &__pos2254);
              std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp122328, &__new_start2273);
              struct std___Deque_base_int__std__allocator_int__* base2334 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2260 + 0);
              struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2335 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2334->_M_impl) + 0);
              std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp132329, &base2335->_M_start);
              struct std___Deque_base_int__std__allocator_int__* base2336 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2260 + 0);
              struct std__allocator_int_* r2337 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base2336);
              struct std___Deque_iterator_int__int____int___ t2338 = agg_tmp102326;
              struct std___Deque_iterator_int__int____int___ t2339 = agg_tmp112327;
              struct std___Deque_iterator_int__int____int___ t2340 = agg_tmp122328;
              struct std___Deque_iterator_int__int____int___ t2341 = agg_tmp132329;
              void_std____uninitialized_move_fill_std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____int__std__allocator_int___(t2338, t2339, t2340, t2341, &__x_copy2259, r2337);
              if (__cir_exc_active) {
                goto cir_try_dispatch2285;
              }
              struct std___Deque_base_int__std__allocator_int__* base2342 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2260 + 0);
              struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2343 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2342->_M_impl) + 0);
              struct std___Deque_iterator_int__int____int___* r2344 = std___Deque_iterator_int__int___int____operator_(&base2343->_M_start, &__new_start2273);
              std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp142330, &__old_start2274);
              std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp152331, &__pos2254);
              struct std___Deque_iterator_int__int____int___ t2345 = agg_tmp142330;
              struct std___Deque_iterator_int__int____int___ t2346 = agg_tmp152331;
              void_std__fill_std___Deque_iterator_int__int___int____int_(t2345, t2346, &__x_copy2259);
              if (__cir_exc_active) {
                goto cir_try_dispatch2285;
              }
            }
        cir_try_dispatch2285: ;
        if (__cir_exc_active) {
        {
          int ca_tok2347 = 0;
          void* ca_exn2348 = (void*)__cir_exc_ptr;
          __cir_exc_active = 0;
            struct std___Deque_base_int__std__allocator_int__* base2349 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2260 + 0);
            int** t2350 = __new_start2273._M_node;
            struct std___Deque_base_int__std__allocator_int__* base2351 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2260 + 0);
            struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2352 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2351->_M_impl) + 0);
            int** t2353 = base2352->_M_start._M_node;
            std___Deque_base_int__std__allocator_int______M_destroy_nodes(base2349, t2350, t2353);
            __cir_exc_active = 1;
            {
              if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
            }
            return;
            __builtin_unreachable();
        }
        }
    } else {
      struct std___Deque_iterator_int__int____int___ __new_finish2354;
      struct std___Deque_iterator_int__int____int___ __old_finish2355;
      long __elems_after2356;
      struct std___Deque_iterator_int__int____int___ ref_tmp12357;
      unsigned long t2358 = __n2255;
      struct std___Deque_iterator_int__int____int___ r2359 = std__deque_int__std__allocator_int______M_reserve_elements_at_back(t2260, t2358);
      if (__cir_exc_active) {
        return;
      }
      __new_finish2354 = r2359;
      struct std___Deque_base_int__std__allocator_int__* base2360 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2260 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2361 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2360->_M_impl) + 0);
      std___Deque_iterator_int__int___int_____Deque_iterator(&__old_finish2355, &base2361->_M_finish);
      unsigned long t2362 = __length2258;
      long cast2363 = (long)t2362;
      long t2364 = __elems_before2257;
      long b2365 = cast2363 - t2364;
      __elems_after2356 = b2365;
      struct std___Deque_base_int__std__allocator_int__* base2366 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2260 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2367 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2366->_M_impl) + 0);
      long t2368 = __elems_after2356;
      struct std___Deque_iterator_int__int____int___ r2369 = std__operator__2(&base2367->_M_finish, t2368);
      ref_tmp12357 = r2369;
      struct std___Deque_iterator_int__int____int___* r2370 = std___Deque_iterator_int__int___int____operator_(&__pos2254, &ref_tmp12357);
            long t2372 = __elems_after2356;
            unsigned long t2373 = __n2255;
            long cast2374 = (long)t2373;
            _Bool c2375 = ((t2372 > cast2374)) ? 1 : 0;
            if (c2375) {
              struct std___Deque_iterator_int__int____int___ __finish_n2376;
              struct std___Deque_iterator_int__int____int___ agg_tmp162377;
              struct std___Deque_iterator_int__int____int___ agg_tmp172378;
              struct std___Deque_iterator_int__int____int___ agg_tmp182379;
              struct std___Deque_iterator_int__int____int___ agg_tmp192380;
              struct std___Deque_iterator_int__int____int___ agg_tmp202381;
              struct std___Deque_iterator_int__int____int___ agg_tmp212382;
              struct std___Deque_iterator_int__int____int___ agg_tmp222383;
              struct std___Deque_iterator_int__int____int___ agg_tmp232384;
              struct std___Deque_iterator_int__int____int___ agg_tmp242385;
              struct std___Deque_iterator_int__int____int___ agg_tmp252386;
              struct std___Deque_base_int__std__allocator_int__* base2387 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2260 + 0);
              struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2388 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2387->_M_impl) + 0);
              unsigned long t2389 = __n2255;
              long cast2390 = (long)t2389;
              struct std___Deque_iterator_int__int____int___ r2391 = std__operator__2(&base2388->_M_finish, cast2390);
              __finish_n2376 = r2391;
              std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp162377, &__finish_n2376);
              struct std___Deque_base_int__std__allocator_int__* base2392 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2260 + 0);
              struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2393 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2392->_M_impl) + 0);
              std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp172378, &base2393->_M_finish);
              struct std___Deque_base_int__std__allocator_int__* base2394 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2260 + 0);
              struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2395 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2394->_M_impl) + 0);
              std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp182379, &base2395->_M_finish);
              struct std___Deque_base_int__std__allocator_int__* base2396 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2260 + 0);
              struct std__allocator_int_* r2397 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base2396);
              struct std___Deque_iterator_int__int____int___ t2398 = agg_tmp162377;
              struct std___Deque_iterator_int__int____int___ t2399 = agg_tmp172378;
              struct std___Deque_iterator_int__int____int___ t2400 = agg_tmp182379;
              struct std___Deque_iterator_int__int____int___ r2401 = std___Deque_iterator_int__int___int___std____uninitialized_move_a_std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____std__allocator_int___(t2398, t2399, t2400, r2397);
              if (__cir_exc_active) {
                goto cir_try_dispatch2371;
              }
              agg_tmp192380 = r2401;
              struct std___Deque_base_int__std__allocator_int__* base2402 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2260 + 0);
              struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2403 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2402->_M_impl) + 0);
              struct std___Deque_iterator_int__int____int___* r2404 = std___Deque_iterator_int__int___int____operator_(&base2403->_M_finish, &__new_finish2354);
              std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp202381, &__pos2254);
              std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp212382, &__finish_n2376);
              std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp222383, &__old_finish2355);
              struct std___Deque_iterator_int__int____int___ t2405 = agg_tmp202381;
              struct std___Deque_iterator_int__int____int___ t2406 = agg_tmp212382;
              struct std___Deque_iterator_int__int____int___ t2407 = agg_tmp222383;
              struct std___Deque_iterator_int__int____int___ r2408 = std___Deque_iterator_int__int___int___std__move_backward_std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____(t2405, t2406, t2407);
              if (__cir_exc_active) {
                goto cir_try_dispatch2371;
              }
              agg_tmp232384 = r2408;
              std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp242385, &__pos2254);
              unsigned long t2409 = __n2255;
              long cast2410 = (long)t2409;
              struct std___Deque_iterator_int__int____int___ r2411 = std__operator__4(&__pos2254, cast2410);
              agg_tmp252386 = r2411;
              struct std___Deque_iterator_int__int____int___ t2412 = agg_tmp242385;
              struct std___Deque_iterator_int__int____int___ t2413 = agg_tmp252386;
              void_std__fill_std___Deque_iterator_int__int___int____int_(t2412, t2413, &__x_copy2259);
              if (__cir_exc_active) {
                goto cir_try_dispatch2371;
              }
            } else {
              struct std___Deque_iterator_int__int____int___ agg_tmp262414;
              struct std___Deque_iterator_int__int____int___ agg_tmp272415;
              struct std___Deque_iterator_int__int____int___ agg_tmp282416;
              struct std___Deque_iterator_int__int____int___ agg_tmp292417;
              struct std___Deque_iterator_int__int____int___ agg_tmp302418;
              struct std___Deque_iterator_int__int____int___ agg_tmp312419;
              struct std___Deque_iterator_int__int____int___ agg_tmp322420;
              struct std___Deque_base_int__std__allocator_int__* base2421 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2260 + 0);
              struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2422 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2421->_M_impl) + 0);
              std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp262414, &base2422->_M_finish);
              unsigned long t2423 = __n2255;
              long cast2424 = (long)t2423;
              struct std___Deque_iterator_int__int____int___ r2425 = std__operator__4(&__pos2254, cast2424);
              agg_tmp272415 = r2425;
              std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp282416, &__pos2254);
              struct std___Deque_base_int__std__allocator_int__* base2426 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2260 + 0);
              struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2427 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2426->_M_impl) + 0);
              std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp292417, &base2427->_M_finish);
              struct std___Deque_base_int__std__allocator_int__* base2428 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2260 + 0);
              struct std__allocator_int_* r2429 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base2428);
              struct std___Deque_iterator_int__int____int___ t2430 = agg_tmp262414;
              struct std___Deque_iterator_int__int____int___ t2431 = agg_tmp272415;
              struct std___Deque_iterator_int__int____int___ t2432 = agg_tmp282416;
              struct std___Deque_iterator_int__int____int___ t2433 = agg_tmp292417;
              struct std___Deque_iterator_int__int____int___ r2434 = std___Deque_iterator_int__int___int___std____uninitialized_fill_move_std___Deque_iterator_int__int___int____int__std___Deque_iterator_int__int___int____std__allocator_int___(t2430, t2431, &__x_copy2259, t2432, t2433, r2429);
              if (__cir_exc_active) {
                goto cir_try_dispatch2371;
              }
              agg_tmp302418 = r2434;
              struct std___Deque_base_int__std__allocator_int__* base2435 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2260 + 0);
              struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2436 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2435->_M_impl) + 0);
              struct std___Deque_iterator_int__int____int___* r2437 = std___Deque_iterator_int__int___int____operator_(&base2436->_M_finish, &__new_finish2354);
              std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp312419, &__pos2254);
              std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp322420, &__old_finish2355);
              struct std___Deque_iterator_int__int____int___ t2438 = agg_tmp312419;
              struct std___Deque_iterator_int__int____int___ t2439 = agg_tmp322420;
              void_std__fill_std___Deque_iterator_int__int___int____int_(t2438, t2439, &__x_copy2259);
              if (__cir_exc_active) {
                goto cir_try_dispatch2371;
              }
            }
        cir_try_dispatch2371: ;
        if (__cir_exc_active) {
        {
          int ca_tok2440 = 0;
          void* ca_exn2441 = (void*)__cir_exc_ptr;
          __cir_exc_active = 0;
            struct std___Deque_base_int__std__allocator_int__* base2442 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2260 + 0);
            struct std___Deque_base_int__std__allocator_int__* base2443 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2260 + 0);
            struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2444 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2443->_M_impl) + 0);
            int** t2445 = base2444->_M_finish._M_node;
            int c2446 = 1;
            int** ptr2447 = &(t2445)[c2446];
            int** t2448 = __new_finish2354._M_node;
            int c2449 = 1;
            int** ptr2450 = &(t2448)[c2449];
            std___Deque_base_int__std__allocator_int______M_destroy_nodes(base2442, ptr2447, ptr2450);
            __cir_exc_active = 1;
            {
              if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
            }
            return;
            __builtin_unreachable();
        }
        }
    }
  return;
}

// function: _ZNSt5dequeIiSaIiEE14_M_fill_insertESt15_Deque_iteratorIiRiPiEmRKi
void std__deque_int__std__allocator_int______M_fill_insert(struct std__deque_int__std__allocator_int__* v2451, struct std___Deque_iterator_int__int____int___ v2452, unsigned long v2453, int* v2454) {
bb2455: ;
  struct std__deque_int__std__allocator_int__* this2456;
  struct std___Deque_iterator_int__int____int___ __pos2457;
  unsigned long __n2458;
  int* __x2459;
  this2456 = v2451;
  __pos2457 = v2452;
  __n2458 = v2453;
  __x2459 = v2454;
  struct std__deque_int__std__allocator_int__* t2460 = this2456;
    int* t2461 = __pos2457._M_cur;
    struct std___Deque_base_int__std__allocator_int__* base2462 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2460 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2463 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2462->_M_impl) + 0);
    int* t2464 = base2463->_M_start._M_cur;
    _Bool c2465 = ((t2461 == t2464)) ? 1 : 0;
    if (c2465) {
      struct std___Deque_iterator_int__int____int___ __new_start2466;
      unsigned long t2467 = __n2458;
      struct std___Deque_iterator_int__int____int___ r2468 = std__deque_int__std__allocator_int______M_reserve_elements_at_front(t2460, t2467);
      if (__cir_exc_active) {
        return;
      }
      __new_start2466 = r2468;
        struct std___Deque_iterator_int__int____int___ agg_tmp02469;
        struct std___Deque_iterator_int__int____int___ agg_tmp12470;
          std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp02469, &__new_start2466);
          struct std___Deque_base_int__std__allocator_int__* base2472 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2460 + 0);
          struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2473 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2472->_M_impl) + 0);
          std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp12470, &base2473->_M_start);
          int* t2474 = __x2459;
          struct std___Deque_base_int__std__allocator_int__* base2475 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2460 + 0);
          struct std__allocator_int_* r2476 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base2475);
          struct std___Deque_iterator_int__int____int___ t2477 = agg_tmp02469;
          struct std___Deque_iterator_int__int____int___ t2478 = agg_tmp12470;
          void_std____uninitialized_fill_a_std___Deque_iterator_int__int___int____int__int_(t2477, t2478, t2474, r2476);
          if (__cir_exc_active) {
            goto cir_try_dispatch2471;
          }
          struct std___Deque_base_int__std__allocator_int__* base2479 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2460 + 0);
          struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2480 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2479->_M_impl) + 0);
          struct std___Deque_iterator_int__int____int___* r2481 = std___Deque_iterator_int__int___int____operator_(&base2480->_M_start, &__new_start2466);
        cir_try_dispatch2471: ;
        if (__cir_exc_active) {
        {
          int ca_tok2482 = 0;
          void* ca_exn2483 = (void*)__cir_exc_ptr;
          __cir_exc_active = 0;
            struct std___Deque_base_int__std__allocator_int__* base2484 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2460 + 0);
            int** t2485 = __new_start2466._M_node;
            struct std___Deque_base_int__std__allocator_int__* base2486 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2460 + 0);
            struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2487 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2486->_M_impl) + 0);
            int** t2488 = base2487->_M_start._M_node;
            std___Deque_base_int__std__allocator_int______M_destroy_nodes(base2484, t2485, t2488);
            __cir_exc_active = 1;
            {
              if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
            }
            return;
            __builtin_unreachable();
        }
        }
    } else {
        int* t2489 = __pos2457._M_cur;
        struct std___Deque_base_int__std__allocator_int__* base2490 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2460 + 0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2491 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2490->_M_impl) + 0);
        int* t2492 = base2491->_M_finish._M_cur;
        _Bool c2493 = ((t2489 == t2492)) ? 1 : 0;
        if (c2493) {
          struct std___Deque_iterator_int__int____int___ __new_finish2494;
          unsigned long t2495 = __n2458;
          struct std___Deque_iterator_int__int____int___ r2496 = std__deque_int__std__allocator_int______M_reserve_elements_at_back(t2460, t2495);
          if (__cir_exc_active) {
            return;
          }
          __new_finish2494 = r2496;
            struct std___Deque_iterator_int__int____int___ agg_tmp22497;
            struct std___Deque_iterator_int__int____int___ agg_tmp32498;
              struct std___Deque_base_int__std__allocator_int__* base2500 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2460 + 0);
              struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2501 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2500->_M_impl) + 0);
              std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp22497, &base2501->_M_finish);
              std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp32498, &__new_finish2494);
              int* t2502 = __x2459;
              struct std___Deque_base_int__std__allocator_int__* base2503 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2460 + 0);
              struct std__allocator_int_* r2504 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base2503);
              struct std___Deque_iterator_int__int____int___ t2505 = agg_tmp22497;
              struct std___Deque_iterator_int__int____int___ t2506 = agg_tmp32498;
              void_std____uninitialized_fill_a_std___Deque_iterator_int__int___int____int__int_(t2505, t2506, t2502, r2504);
              if (__cir_exc_active) {
                goto cir_try_dispatch2499;
              }
              struct std___Deque_base_int__std__allocator_int__* base2507 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2460 + 0);
              struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2508 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2507->_M_impl) + 0);
              struct std___Deque_iterator_int__int____int___* r2509 = std___Deque_iterator_int__int___int____operator_(&base2508->_M_finish, &__new_finish2494);
            cir_try_dispatch2499: ;
            if (__cir_exc_active) {
            {
              int ca_tok2510 = 0;
              void* ca_exn2511 = (void*)__cir_exc_ptr;
              __cir_exc_active = 0;
                struct std___Deque_base_int__std__allocator_int__* base2512 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2460 + 0);
                struct std___Deque_base_int__std__allocator_int__* base2513 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2460 + 0);
                struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2514 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2513->_M_impl) + 0);
                int** t2515 = base2514->_M_finish._M_node;
                int c2516 = 1;
                int** ptr2517 = &(t2515)[c2516];
                int** t2518 = __new_finish2494._M_node;
                int c2519 = 1;
                int** ptr2520 = &(t2518)[c2519];
                std___Deque_base_int__std__allocator_int______M_destroy_nodes(base2512, ptr2517, ptr2520);
                __cir_exc_active = 1;
                {
                  if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
                }
                return;
                __builtin_unreachable();
            }
            }
        } else {
          struct std___Deque_iterator_int__int____int___ agg_tmp42521;
          std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp42521, &__pos2457);
          unsigned long t2522 = __n2458;
          int* t2523 = __x2459;
          struct std___Deque_iterator_int__int____int___ t2524 = agg_tmp42521;
          std__deque_int__std__allocator_int______M_insert_aux(t2460, t2524, t2522, t2523);
          if (__cir_exc_active) {
            return;
          }
        }
    }
  return;
}

// function: _ZNSt5dequeIiSaIiEE6resizeEmRKi
void std__deque_int__std__allocator_int_____resize_2(struct std__deque_int__std__allocator_int__* v2525, unsigned long v2526, int* v2527) {
bb2528: ;
  struct std__deque_int__std__allocator_int__* this2529;
  unsigned long __new_size2530;
  int* __x2531;
  unsigned long __len2532;
  this2529 = v2525;
  __new_size2530 = v2526;
  __x2531 = v2527;
  struct std__deque_int__std__allocator_int__* t2533 = this2529;
  unsigned long r2534 = std__deque_int__std__allocator_int_____size___const(t2533);
  __len2532 = r2534;
    unsigned long t2535 = __new_size2530;
    unsigned long t2536 = __len2532;
    _Bool c2537 = ((t2535 > t2536)) ? 1 : 0;
    if (c2537) {
      struct std___Deque_iterator_int__int____int___ agg_tmp02538;
      struct std___Deque_base_int__std__allocator_int__* base2539 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2533 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2540 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2539->_M_impl) + 0);
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp02538, &base2540->_M_finish);
      unsigned long t2541 = __new_size2530;
      unsigned long t2542 = __len2532;
      unsigned long b2543 = t2541 - t2542;
      int* t2544 = __x2531;
      struct std___Deque_iterator_int__int____int___ t2545 = agg_tmp02538;
      std__deque_int__std__allocator_int______M_fill_insert(t2533, t2545, b2543, t2544);
      if (__cir_exc_active) {
        return;
      }
    } else {
        unsigned long t2546 = __new_size2530;
        unsigned long t2547 = __len2532;
        _Bool c2548 = ((t2546 < t2547)) ? 1 : 0;
        if (c2548) {
          struct std___Deque_iterator_int__int____int___ agg_tmp12549;
          struct std___Deque_base_int__std__allocator_int__* base2550 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2533 + 0);
          struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2551 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2550->_M_impl) + 0);
          unsigned long t2552 = __new_size2530;
          long cast2553 = (long)t2552;
          struct std___Deque_iterator_int__int____int___ r2554 = std__operator__4(&base2551->_M_start, cast2553);
          agg_tmp12549 = r2554;
          struct std___Deque_iterator_int__int____int___ t2555 = agg_tmp12549;
          std__deque_int__std__allocator_int______M_erase_at_end(t2533, t2555);
          if (__cir_exc_active) {
            return;
          }
        }
    }
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator__3(int v2556, int v2557) {
bb2558: ;
  int __a2559;
  int __b2560;
  int __retval2561;
  __a2559 = v2556;
  __b2560 = v2557;
  int t2562 = __a2559;
  int t2563 = __b2560;
  int b2564 = t2562 | t2563;
  __retval2561 = b2564;
  int t2565 = __retval2561;
  return t2565;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v2566) {
bb2567: ;
  struct std__basic_ios_char__std__char_traits_char__* this2568;
  int __retval2569;
  this2568 = v2566;
  struct std__basic_ios_char__std__char_traits_char__* t2570 = this2568;
  struct std__ios_base* base2571 = (struct std__ios_base*)((char *)t2570 + 0);
  int t2572 = base2571->_M_streambuf_state;
  __retval2569 = t2572;
  int t2573 = __retval2569;
  return t2573;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v2574, int v2575) {
bb2576: ;
  struct std__basic_ios_char__std__char_traits_char__* this2577;
  int __state2578;
  this2577 = v2574;
  __state2578 = v2575;
  struct std__basic_ios_char__std__char_traits_char__* t2579 = this2577;
  int r2580 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t2579);
  if (__cir_exc_active) {
    return;
  }
  int t2581 = __state2578;
  int r2582 = std__operator__3(r2580, t2581);
  std__basic_ios_char__std__char_traits_char_____clear(t2579, r2582);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v2583, char* v2584) {
bb2585: ;
  char* __c12586;
  char* __c22587;
  _Bool __retval2588;
  __c12586 = v2583;
  __c22587 = v2584;
  char* t2589 = __c12586;
  char t2590 = *t2589;
  int cast2591 = (int)t2590;
  char* t2592 = __c22587;
  char t2593 = *t2592;
  int cast2594 = (int)t2593;
  _Bool c2595 = ((cast2591 == cast2594)) ? 1 : 0;
  __retval2588 = c2595;
  _Bool t2596 = __retval2588;
  return t2596;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v2597) {
bb2598: ;
  char* __p2599;
  unsigned long __retval2600;
  unsigned long __i2601;
  __p2599 = v2597;
  unsigned long c2602 = 0;
  __i2601 = c2602;
    char ref_tmp02603;
    while (1) {
      unsigned long t2604 = __i2601;
      char* t2605 = __p2599;
      char* ptr2606 = &(t2605)[t2604];
      char c2607 = 0;
      ref_tmp02603 = c2607;
      _Bool r2608 = __gnu_cxx__char_traits_char___eq(ptr2606, &ref_tmp02603);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u2609 = !r2608;
      if (!u2609) break;
      unsigned long t2610 = __i2601;
      unsigned long u2611 = t2610 + 1;
      __i2601 = u2611;
    }
  unsigned long t2612 = __i2601;
  __retval2600 = t2612;
  unsigned long t2613 = __retval2600;
  return t2613;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v2614) {
bb2615: ;
  char* __s2616;
  unsigned long __retval2617;
  __s2616 = v2614;
    _Bool r2618 = std____is_constant_evaluated();
    if (r2618) {
      char* t2619 = __s2616;
      unsigned long r2620 = __gnu_cxx__char_traits_char___length(t2619);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval2617 = r2620;
      unsigned long t2621 = __retval2617;
      return t2621;
    }
  char* t2622 = __s2616;
  unsigned long r2623 = strlen(t2622);
  __retval2617 = r2623;
  unsigned long t2624 = __retval2617;
  return t2624;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v2625, char* v2626) {
bb2627: ;
  struct std__basic_ostream_char__std__char_traits_char__* __out2628;
  char* __s2629;
  struct std__basic_ostream_char__std__char_traits_char__* __retval2630;
  __out2628 = v2625;
  __s2629 = v2626;
    char* t2631 = __s2629;
    _Bool cast2632 = (_Bool)t2631;
    _Bool u2633 = !cast2632;
    if (u2633) {
      struct std__basic_ostream_char__std__char_traits_char__* t2634 = __out2628;
      void** v2635 = (void**)t2634;
      void* v2636 = *((void**)v2635);
      unsigned char* cast2637 = (unsigned char*)v2636;
      long c2638 = -24;
      unsigned char* ptr2639 = &(cast2637)[c2638];
      long* cast2640 = (long*)ptr2639;
      long t2641 = *cast2640;
      unsigned char* cast2642 = (unsigned char*)t2634;
      unsigned char* ptr2643 = &(cast2642)[t2641];
      struct std__basic_ostream_char__std__char_traits_char__* cast2644 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr2643;
      struct std__basic_ios_char__std__char_traits_char__* cast2645 = (struct std__basic_ios_char__std__char_traits_char__*)cast2644;
      int t2646 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast2645, t2646);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t2647 = __out2628;
      char* t2648 = __s2629;
      char* t2649 = __s2629;
      unsigned long r2650 = std__char_traits_char___length(t2649);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast2651 = (long)r2650;
      struct std__basic_ostream_char__std__char_traits_char__* r2652 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t2647, t2648, cast2651);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t2653 = __out2628;
  __retval2630 = t2653;
  struct std__basic_ostream_char__std__char_traits_char__* t2654 = __retval2630;
  return t2654;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v2655, void* v2656) {
bb2657: ;
  struct std__basic_ostream_char__std__char_traits_char__* this2658;
  void* __pf2659;
  struct std__basic_ostream_char__std__char_traits_char__* __retval2660;
  this2658 = v2655;
  __pf2659 = v2656;
  struct std__basic_ostream_char__std__char_traits_char__* t2661 = this2658;
  void* t2662 = __pf2659;
  struct std__basic_ostream_char__std__char_traits_char__* r2663 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t2662)(t2661);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval2660 = r2663;
  struct std__basic_ostream_char__std__char_traits_char__* t2664 = __retval2660;
  return t2664;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v2665) {
bb2666: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os2667;
  struct std__basic_ostream_char__std__char_traits_char__* __retval2668;
  __os2667 = v2665;
  struct std__basic_ostream_char__std__char_traits_char__* t2669 = __os2667;
  struct std__basic_ostream_char__std__char_traits_char__* r2670 = std__ostream__flush(t2669);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval2668 = r2670;
  struct std__basic_ostream_char__std__char_traits_char__* t2671 = __retval2668;
  return t2671;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v2672) {
bb2673: ;
  struct std__ctype_char_* __f2674;
  struct std__ctype_char_* __retval2675;
  __f2674 = v2672;
    struct std__ctype_char_* t2676 = __f2674;
    _Bool cast2677 = (_Bool)t2676;
    _Bool u2678 = !cast2677;
    if (u2678) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t2679 = __f2674;
  __retval2675 = t2679;
  struct std__ctype_char_* t2680 = __retval2675;
  return t2680;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v2681, char v2682) {
bb2683: ;
  struct std__ctype_char_* this2684;
  char __c2685;
  char __retval2686;
  this2684 = v2681;
  __c2685 = v2682;
  struct std__ctype_char_* t2687 = this2684;
    char t2688 = t2687->_M_widen_ok;
    _Bool cast2689 = (_Bool)t2688;
    if (cast2689) {
      char t2690 = __c2685;
      unsigned char cast2691 = (unsigned char)t2690;
      unsigned long cast2692 = (unsigned long)cast2691;
      char t2693 = t2687->_M_widen[cast2692];
      __retval2686 = t2693;
      char t2694 = __retval2686;
      return t2694;
    }
  std__ctype_char____M_widen_init___const(t2687);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t2695 = __c2685;
  void** v2696 = (void**)t2687;
  void* v2697 = *((void**)v2696);
  char vcall2700 = (char)__VERIFIER_virtual_call_char_char(t2687, 6, t2695);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval2686 = vcall2700;
  char t2701 = __retval2686;
  return t2701;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v2702, char v2703) {
bb2704: ;
  struct std__basic_ios_char__std__char_traits_char__* this2705;
  char __c2706;
  char __retval2707;
  this2705 = v2702;
  __c2706 = v2703;
  struct std__basic_ios_char__std__char_traits_char__* t2708 = this2705;
  struct std__ctype_char_* t2709 = t2708->_M_ctype;
  struct std__ctype_char_* r2710 = std__ctype_char__const__std____check_facet_std__ctype_char___(t2709);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t2711 = __c2706;
  char r2712 = std__ctype_char___widen_char__const(r2710, t2711);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval2707 = r2712;
  char t2713 = __retval2707;
  return t2713;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v2714) {
bb2715: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os2716;
  struct std__basic_ostream_char__std__char_traits_char__* __retval2717;
  __os2716 = v2714;
  struct std__basic_ostream_char__std__char_traits_char__* t2718 = __os2716;
  struct std__basic_ostream_char__std__char_traits_char__* t2719 = __os2716;
  void** v2720 = (void**)t2719;
  void* v2721 = *((void**)v2720);
  unsigned char* cast2722 = (unsigned char*)v2721;
  long c2723 = -24;
  unsigned char* ptr2724 = &(cast2722)[c2723];
  long* cast2725 = (long*)ptr2724;
  long t2726 = *cast2725;
  unsigned char* cast2727 = (unsigned char*)t2719;
  unsigned char* ptr2728 = &(cast2727)[t2726];
  struct std__basic_ostream_char__std__char_traits_char__* cast2729 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr2728;
  struct std__basic_ios_char__std__char_traits_char__* cast2730 = (struct std__basic_ios_char__std__char_traits_char__*)cast2729;
  char c2731 = 10;
  char r2732 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast2730, c2731);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r2733 = std__ostream__put(t2718, r2732);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r2734 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r2733);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval2717 = r2734;
  struct std__basic_ostream_char__std__char_traits_char__* t2735 = __retval2717;
  return t2735;
}

// function: _ZNSt5dequeIiSaIiEED2Ev
void std__deque_int__std__allocator_int______deque(struct std__deque_int__std__allocator_int__* v2736) {
bb2737: ;
  struct std__deque_int__std__allocator_int__* this2738;
  struct std___Deque_iterator_int__int____int___ agg_tmp02739;
  struct std___Deque_iterator_int__int____int___ agg_tmp12740;
  this2738 = v2736;
  struct std__deque_int__std__allocator_int__* t2741 = this2738;
    struct std___Deque_iterator_int__int____int___ r2742 = std__deque_int__std__allocator_int_____begin(t2741);
    agg_tmp02739 = r2742;
    struct std___Deque_iterator_int__int____int___ r2743 = std__deque_int__std__allocator_int_____end(t2741);
    agg_tmp12740 = r2743;
    struct std___Deque_base_int__std__allocator_int__* base2744 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2741 + 0);
    struct std__allocator_int_* r2745 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base2744);
    struct std___Deque_iterator_int__int____int___ t2746 = agg_tmp02739;
    struct std___Deque_iterator_int__int____int___ t2747 = agg_tmp12740;
    std__deque_int__std__allocator_int______M_destroy_data(t2741, t2746, t2747, r2745);
    if (__cir_exc_active) {
      {
        struct std___Deque_base_int__std__allocator_int__* base2748 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2741 + 0);
        std___Deque_base_int__std__allocator_int_______Deque_base(base2748);
      }
      return;
    }
  {
    struct std___Deque_base_int__std__allocator_int__* base2749 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2741 + 0);
    std___Deque_base_int__std__allocator_int_______Deque_base(base2749);
  }
  return;
}

// function: main
int main() {
bb2750: ;
  int __retval2751;
  struct std__deque_int__std__allocator_int__ mydeque2752;
  struct std___Deque_iterator_int__int____int___ it2753;
  unsigned int i2754;
  int ref_tmp12755;
  int c2756 = 0;
  __retval2751 = c2756;
  std__deque_int__std__allocator_int_____deque(&mydeque2752);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    std___Deque_iterator_int__int___int_____Deque_iterator_2(&it2753);
      int ref_tmp02757;
      unsigned int c2758 = 1;
      i2754 = c2758;
      while (1) {
        unsigned int t2760 = i2754;
        unsigned int c2761 = 10;
        _Bool c2762 = ((t2760 < c2761)) ? 1 : 0;
        if (!c2762) break;
        unsigned int t2763 = i2754;
        int cast2764 = (int)t2763;
        ref_tmp02757 = cast2764;
        std__deque_int__std__allocator_int_____push_back(&mydeque2752, &ref_tmp02757);
        if (__cir_exc_active) {
          {
            std__deque_int__std__allocator_int______deque(&mydeque2752);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
      for_step2759: ;
        unsigned int t2765 = i2754;
        unsigned int u2766 = t2765 + 1;
        i2754 = u2766;
      }
    unsigned long r2767 = std__deque_int__std__allocator_int_____size___const(&mydeque2752);
    unsigned long c2768 = 9;
    _Bool c2769 = ((r2767 == c2768)) ? 1 : 0;
    if (c2769) {
    } else {
      char* cast2770 = (char*)&(_str);
      char* c2771 = (char*)_str_1;
      unsigned int c2772 = 24;
      char* cast2773 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast2770, c2771, c2772, cast2773);
    }
    unsigned long c2774 = 0;
    int* r2775 = std__deque_int__std__allocator_int_____operator__(&mydeque2752, c2774);
    int t2776 = *r2775;
    int c2777 = 1;
    _Bool c2778 = ((t2776 == c2777)) ? 1 : 0;
    if (c2778) {
    } else {
      char* cast2779 = (char*)&(_str_2);
      char* c2780 = (char*)_str_1;
      unsigned int c2781 = 25;
      char* cast2782 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast2779, c2780, c2781, cast2782);
    }
    unsigned long c2783 = 5;
    std__deque_int__std__allocator_int_____resize(&mydeque2752, c2783);
    if (__cir_exc_active) {
      {
        std__deque_int__std__allocator_int______deque(&mydeque2752);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long r2784 = std__deque_int__std__allocator_int_____size___const(&mydeque2752);
    unsigned long c2785 = 5;
    _Bool c2786 = ((r2784 == c2785)) ? 1 : 0;
    if (c2786) {
    } else {
      char* cast2787 = (char*)&(_str_3);
      char* c2788 = (char*)_str_1;
      unsigned int c2789 = 29;
      char* cast2790 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast2787, c2788, c2789, cast2790);
    }
    unsigned long c2791 = 8;
    int c2792 = 100;
    ref_tmp12755 = c2792;
    std__deque_int__std__allocator_int_____resize_2(&mydeque2752, c2791, &ref_tmp12755);
    if (__cir_exc_active) {
      {
        std__deque_int__std__allocator_int______deque(&mydeque2752);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long r2793 = std__deque_int__std__allocator_int_____size___const(&mydeque2752);
    unsigned long c2794 = 8;
    _Bool c2795 = ((r2793 == c2794)) ? 1 : 0;
    if (c2795) {
    } else {
      char* cast2796 = (char*)&(_str_4);
      char* c2797 = (char*)_str_1;
      unsigned int c2798 = 33;
      char* cast2799 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast2796, c2797, c2798, cast2799);
    }
    unsigned long c2800 = 5;
    int* r2801 = std__deque_int__std__allocator_int_____operator__(&mydeque2752, c2800);
    int t2802 = *r2801;
    int c2803 = 100;
    _Bool c2804 = ((t2802 == c2803)) ? 1 : 0;
    if (c2804) {
    } else {
      char* cast2805 = (char*)&(_str_5);
      char* c2806 = (char*)_str_1;
      unsigned int c2807 = 34;
      char* cast2808 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast2805, c2806, c2807, cast2808);
    }
    unsigned long c2809 = 12;
    std__deque_int__std__allocator_int_____resize(&mydeque2752, c2809);
    if (__cir_exc_active) {
      {
        std__deque_int__std__allocator_int______deque(&mydeque2752);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long r2810 = std__deque_int__std__allocator_int_____size___const(&mydeque2752);
    unsigned long c2811 = 12;
    _Bool c2812 = ((r2810 == c2811)) ? 1 : 0;
    if (c2812) {
    } else {
      char* cast2813 = (char*)&(_str_6);
      char* c2814 = (char*)_str_1;
      unsigned int c2815 = 38;
      char* cast2816 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast2813, c2814, c2815, cast2816);
    }
    unsigned long c2817 = 10;
    int* r2818 = std__deque_int__std__allocator_int_____operator__(&mydeque2752, c2817);
    int t2819 = *r2818;
    int c2820 = 0;
    _Bool c2821 = ((t2819 == c2820)) ? 1 : 0;
    if (c2821) {
    } else {
      char* cast2822 = (char*)&(_str_7);
      char* c2823 = (char*)_str_1;
      unsigned int c2824 = 39;
      char* cast2825 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast2822, c2823, c2824, cast2825);
    }
    char* cast2826 = (char*)&(_str_8);
    struct std__basic_ostream_char__std__char_traits_char__* r2827 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast2826);
    if (__cir_exc_active) {
      {
        std__deque_int__std__allocator_int______deque(&mydeque2752);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__basic_ostream_char__std__char_traits_char__* r2828 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__deque_int__std__allocator_int______deque(&mydeque2752);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c2829 = 0;
    __retval2751 = c2829;
    int t2830 = __retval2751;
    int ret_val2831 = t2830;
    {
      std__deque_int__std__allocator_int______deque(&mydeque2752);
    }
    return ret_val2831;
  int t2832 = __retval2751;
  return t2832;
}

// function: _ZNSt11_Deque_baseIiSaIiEE11_Deque_implC2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* v2833) {
bb2834: ;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* this2835;
  this2835 = v2833;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* t2836 = this2835;
  struct std__allocator_int_* base2837 = (struct std__allocator_int_*)((char *)t2836 + 0);
  std__allocator_int___allocator(base2837);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2838 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)t2836 + 0);
    std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data(base2838);
  return;
}

// function: _ZSt16__deque_buf_sizem
unsigned long std____deque_buf_size(unsigned long v2839) {
bb2840: ;
  unsigned long __size2841;
  unsigned long __retval2842;
  __size2841 = v2839;
  unsigned long t2843 = __size2841;
  unsigned long c2844 = 512;
  _Bool c2845 = ((t2843 < c2844)) ? 1 : 0;
  unsigned long ternary2846;
  if (c2845) {
    unsigned long c2847 = 512;
    unsigned long t2848 = __size2841;
    unsigned long b2849 = c2847 / t2848;
    ternary2846 = (unsigned long)b2849;
  } else {
    unsigned long c2850 = 1;
    ternary2846 = (unsigned long)c2850;
  }
  __retval2842 = ternary2846;
  unsigned long t2851 = __retval2842;
  return t2851;
}

// function: _ZSt3maxImERKT_S2_S2_
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* v2852, unsigned long* v2853) {
bb2854: ;
  unsigned long* __a2855;
  unsigned long* __b2856;
  unsigned long* __retval2857;
  __a2855 = v2852;
  __b2856 = v2853;
    unsigned long* t2858 = __a2855;
    unsigned long t2859 = *t2858;
    unsigned long* t2860 = __b2856;
    unsigned long t2861 = *t2860;
    _Bool c2862 = ((t2859 < t2861)) ? 1 : 0;
    if (c2862) {
      unsigned long* t2863 = __b2856;
      __retval2857 = t2863;
      unsigned long* t2864 = __retval2857;
      return t2864;
    }
  unsigned long* t2865 = __a2855;
  __retval2857 = t2865;
  unsigned long* t2866 = __retval2857;
  return t2866;
}

// function: _ZNKSt11_Deque_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Deque_base_int__std__allocator_int__* v2867) {
bb2868: ;
  struct std___Deque_base_int__std__allocator_int__* this2869;
  struct std__allocator_int_* __retval2870;
  this2869 = v2867;
  struct std___Deque_base_int__std__allocator_int__* t2871 = this2869;
  struct std__allocator_int_* base2872 = (struct std__allocator_int_*)((char *)&(t2871->_M_impl) + 0);
  __retval2870 = base2872;
  struct std__allocator_int_* t2873 = __retval2870;
  return t2873;
}

// function: _ZNSaIPiEC2IiEERKSaIT_E
void std__allocator_int____allocator_int_(struct std__allocator_int___* v2874, struct std__allocator_int_* v2875) {
bb2876: ;
  struct std__allocator_int___* this2877;
  struct std__allocator_int_* unnamed2878;
  this2877 = v2874;
  unnamed2878 = v2875;
  struct std__allocator_int___* t2879 = this2877;
  struct std____new_allocator_int___* base2880 = (struct std____new_allocator_int___*)((char *)t2879 + 0);
  std____new_allocator_int______new_allocator(base2880);
  return;
}

// function: _ZNKSt11_Deque_baseIiSaIiEE20_M_get_map_allocatorEv
struct std__allocator_int___ std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(struct std___Deque_base_int__std__allocator_int__* v2881) {
bb2882: ;
  struct std___Deque_base_int__std__allocator_int__* this2883;
  struct std__allocator_int___ __retval2884;
  this2883 = v2881;
  struct std___Deque_base_int__std__allocator_int__* t2885 = this2883;
  struct std__allocator_int_* r2886 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(t2885);
  std__allocator_int____allocator_int_(&__retval2884, r2886);
  struct std__allocator_int___ t2887 = __retval2884;
  return t2887;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb2888: ;
  _Bool __retval2889;
    _Bool c2890 = 0;
    __retval2889 = c2890;
    _Bool t2891 = __retval2889;
    return t2891;
  abort();
}

// function: _ZNKSt15__new_allocatorIPiE11_M_max_sizeEv
unsigned long std____new_allocator_int_____M_max_size___const(struct std____new_allocator_int___* v2892) {
bb2893: ;
  struct std____new_allocator_int___* this2894;
  unsigned long __retval2895;
  this2894 = v2892;
  struct std____new_allocator_int___* t2896 = this2894;
  unsigned long c2897 = 9223372036854775807;
  unsigned long c2898 = 8;
  unsigned long b2899 = c2897 / c2898;
  __retval2895 = b2899;
  unsigned long t2900 = __retval2895;
  return t2900;
}

// function: _ZNSt15__new_allocatorIPiE8allocateEmPKv
int** std____new_allocator_int____allocate(struct std____new_allocator_int___* v2901, unsigned long v2902, void* v2903) {
bb2904: ;
  struct std____new_allocator_int___* this2905;
  unsigned long __n2906;
  void* unnamed2907;
  int** __retval2908;
  this2905 = v2901;
  __n2906 = v2902;
  unnamed2907 = v2903;
  struct std____new_allocator_int___* t2909 = this2905;
    unsigned long t2910 = __n2906;
    unsigned long r2911 = std____new_allocator_int_____M_max_size___const(t2909);
    _Bool c2912 = ((t2910 > r2911)) ? 1 : 0;
    if (c2912) {
        unsigned long t2913 = __n2906;
        unsigned long c2914 = -1;
        unsigned long c2915 = 8;
        unsigned long b2916 = c2914 / c2915;
        _Bool c2917 = ((t2913 > b2916)) ? 1 : 0;
        if (c2917) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int** __cir_eh_ret = (int**)0;
            return __cir_eh_ret;
          }
        }
      std____throw_bad_alloc();
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
    }
    unsigned long c2918 = 8;
    unsigned long c2919 = 16;
    _Bool c2920 = ((c2918 > c2919)) ? 1 : 0;
    if (c2920) {
      unsigned long __al2921;
      unsigned long c2922 = 8;
      __al2921 = c2922;
      unsigned long t2923 = __n2906;
      unsigned long c2924 = 8;
      unsigned long b2925 = t2923 * c2924;
      unsigned long t2926 = __al2921;
      void* r2927 = operator_new_2(b2925, t2926);
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
      int** cast2928 = (int**)r2927;
      __retval2908 = cast2928;
      int** t2929 = __retval2908;
      return t2929;
    }
  unsigned long t2930 = __n2906;
  unsigned long c2931 = 8;
  unsigned long b2932 = t2930 * c2931;
  void* r2933 = operator_new(b2932);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** cast2934 = (int**)r2933;
  __retval2908 = cast2934;
  int** t2935 = __retval2908;
  return t2935;
}

// function: _ZNSaIPiE8allocateEm
int** std__allocator_int____allocate(struct std__allocator_int___* v2936, unsigned long v2937) {
bb2938: ;
  struct std__allocator_int___* this2939;
  unsigned long __n2940;
  int** __retval2941;
  this2939 = v2936;
  __n2940 = v2937;
  struct std__allocator_int___* t2942 = this2939;
    _Bool r2943 = std____is_constant_evaluated();
    if (r2943) {
        unsigned long t2944 = __n2940;
        unsigned long c2945 = 8;
        unsigned long ovr2946;
        _Bool ovf2947 = __builtin_mul_overflow(t2944, c2945, &ovr2946);
        __n2940 = ovr2946;
        if (ovf2947) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int** __cir_eh_ret = (int**)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t2948 = __n2940;
      void* r2949 = operator_new(t2948);
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
      int** cast2950 = (int**)r2949;
      __retval2941 = cast2950;
      int** t2951 = __retval2941;
      return t2951;
    }
  struct std____new_allocator_int___* base2952 = (struct std____new_allocator_int___*)((char *)t2942 + 0);
  unsigned long t2953 = __n2940;
  void* c2954 = ((void*)0);
  int** r2955 = std____new_allocator_int____allocate(base2952, t2953, c2954);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval2941 = r2955;
  int** t2956 = __retval2941;
  return t2956;
}

// function: _ZNSt16allocator_traitsISaIPiEE8allocateERS1_m
int** std__allocator_traits_std__allocator_int______allocate(struct std__allocator_int___* v2957, unsigned long v2958) {
bb2959: ;
  struct std__allocator_int___* __a2960;
  unsigned long __n2961;
  int** __retval2962;
  __a2960 = v2957;
  __n2961 = v2958;
  struct std__allocator_int___* t2963 = __a2960;
  unsigned long t2964 = __n2961;
  int** r2965 = std__allocator_int____allocate(t2963, t2964);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval2962 = r2965;
  int** t2966 = __retval2962;
  return t2966;
}

// function: _ZNSt11_Deque_baseIiSaIiEE15_M_allocate_mapEm
int** std___Deque_base_int__std__allocator_int______M_allocate_map(struct std___Deque_base_int__std__allocator_int__* v2967, unsigned long v2968) {
bb2969: ;
  struct std___Deque_base_int__std__allocator_int__* this2970;
  unsigned long __n2971;
  int** __retval2972;
  struct std__allocator_int___ __map_alloc2973;
  this2970 = v2967;
  __n2971 = v2968;
  struct std___Deque_base_int__std__allocator_int__* t2974 = this2970;
  struct std__allocator_int___ r2975 = std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(t2974);
  __map_alloc2973 = r2975;
  unsigned long t2976 = __n2971;
  int** r2977 = std__allocator_traits_std__allocator_int______allocate(&__map_alloc2973, t2976);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval2972 = r2977;
  int** t2978 = __retval2972;
  return t2978;
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v2979) {
bb2980: ;
  struct std____new_allocator_int_* this2981;
  unsigned long __retval2982;
  this2981 = v2979;
  struct std____new_allocator_int_* t2983 = this2981;
  unsigned long c2984 = 9223372036854775807;
  unsigned long c2985 = 4;
  unsigned long b2986 = c2984 / c2985;
  __retval2982 = b2986;
  unsigned long t2987 = __retval2982;
  return t2987;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v2988, unsigned long v2989, void* v2990) {
bb2991: ;
  struct std____new_allocator_int_* this2992;
  unsigned long __n2993;
  void* unnamed2994;
  int* __retval2995;
  this2992 = v2988;
  __n2993 = v2989;
  unnamed2994 = v2990;
  struct std____new_allocator_int_* t2996 = this2992;
    unsigned long t2997 = __n2993;
    unsigned long r2998 = std____new_allocator_int____M_max_size___const(t2996);
    _Bool c2999 = ((t2997 > r2998)) ? 1 : 0;
    if (c2999) {
        unsigned long t3000 = __n2993;
        unsigned long c3001 = -1;
        unsigned long c3002 = 4;
        unsigned long b3003 = c3001 / c3002;
        _Bool c3004 = ((t3000 > b3003)) ? 1 : 0;
        if (c3004) {
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
    unsigned long c3005 = 4;
    unsigned long c3006 = 16;
    _Bool c3007 = ((c3005 > c3006)) ? 1 : 0;
    if (c3007) {
      unsigned long __al3008;
      unsigned long c3009 = 4;
      __al3008 = c3009;
      unsigned long t3010 = __n2993;
      unsigned long c3011 = 4;
      unsigned long b3012 = t3010 * c3011;
      unsigned long t3013 = __al3008;
      void* r3014 = operator_new_2(b3012, t3013);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast3015 = (int*)r3014;
      __retval2995 = cast3015;
      int* t3016 = __retval2995;
      return t3016;
    }
  unsigned long t3017 = __n2993;
  unsigned long c3018 = 4;
  unsigned long b3019 = t3017 * c3018;
  void* r3020 = operator_new(b3019);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* cast3021 = (int*)r3020;
  __retval2995 = cast3021;
  int* t3022 = __retval2995;
  return t3022;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v3023, unsigned long v3024) {
bb3025: ;
  struct std__allocator_int_* this3026;
  unsigned long __n3027;
  int* __retval3028;
  this3026 = v3023;
  __n3027 = v3024;
  struct std__allocator_int_* t3029 = this3026;
    _Bool r3030 = std____is_constant_evaluated();
    if (r3030) {
        unsigned long t3031 = __n3027;
        unsigned long c3032 = 4;
        unsigned long ovr3033;
        _Bool ovf3034 = __builtin_mul_overflow(t3031, c3032, &ovr3033);
        __n3027 = ovr3033;
        if (ovf3034) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t3035 = __n3027;
      void* r3036 = operator_new(t3035);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast3037 = (int*)r3036;
      __retval3028 = cast3037;
      int* t3038 = __retval3028;
      return t3038;
    }
  struct std____new_allocator_int_* base3039 = (struct std____new_allocator_int_*)((char *)t3029 + 0);
  unsigned long t3040 = __n3027;
  void* c3041 = ((void*)0);
  int* r3042 = std____new_allocator_int___allocate(base3039, t3040, c3041);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval3028 = r3042;
  int* t3043 = __retval3028;
  return t3043;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v3044, unsigned long v3045) {
bb3046: ;
  struct std__allocator_int_* __a3047;
  unsigned long __n3048;
  int* __retval3049;
  __a3047 = v3044;
  __n3048 = v3045;
  struct std__allocator_int_* t3050 = __a3047;
  unsigned long t3051 = __n3048;
  int* r3052 = std__allocator_int___allocate(t3050, t3051);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval3049 = r3052;
  int* t3053 = __retval3049;
  return t3053;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_M_allocate_nodeEv
int* std___Deque_base_int__std__allocator_int______M_allocate_node(struct std___Deque_base_int__std__allocator_int__* v3054) {
bb3055: ;
  struct std___Deque_base_int__std__allocator_int__* this3056;
  int* __retval3057;
  this3056 = v3054;
  struct std___Deque_base_int__std__allocator_int__* t3058 = this3056;
  struct std__allocator_int_* base3059 = (struct std__allocator_int_*)((char *)&(t3058->_M_impl) + 0);
  unsigned long c3060 = 4;
  unsigned long r3061 = std____deque_buf_size(c3060);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* r3062 = std__allocator_traits_std__allocator_int_____allocate(base3059, r3061);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval3057 = r3062;
  int* t3063 = __retval3057;
  return t3063;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v3064, int* v3065, unsigned long v3066) {
bb3067: ;
  struct std____new_allocator_int_* this3068;
  int* __p3069;
  unsigned long __n3070;
  this3068 = v3064;
  __p3069 = v3065;
  __n3070 = v3066;
  struct std____new_allocator_int_* t3071 = this3068;
    unsigned long c3072 = 4;
    unsigned long c3073 = 16;
    _Bool c3074 = ((c3072 > c3073)) ? 1 : 0;
    if (c3074) {
      int* t3075 = __p3069;
      void* cast3076 = (void*)t3075;
      unsigned long t3077 = __n3070;
      unsigned long c3078 = 4;
      unsigned long b3079 = t3077 * c3078;
      unsigned long c3080 = 4;
      operator_delete_3(cast3076, b3079, c3080);
      return;
    }
  int* t3081 = __p3069;
  void* cast3082 = (void*)t3081;
  unsigned long t3083 = __n3070;
  unsigned long c3084 = 4;
  unsigned long b3085 = t3083 * c3084;
  operator_delete_2(cast3082, b3085);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v3086, int* v3087, unsigned long v3088) {
bb3089: ;
  struct std__allocator_int_* this3090;
  int* __p3091;
  unsigned long __n3092;
  this3090 = v3086;
  __p3091 = v3087;
  __n3092 = v3088;
  struct std__allocator_int_* t3093 = this3090;
    _Bool r3094 = std____is_constant_evaluated();
    if (r3094) {
      int* t3095 = __p3091;
      void* cast3096 = (void*)t3095;
      operator_delete(cast3096);
      return;
    }
  struct std____new_allocator_int_* base3097 = (struct std____new_allocator_int_*)((char *)t3093 + 0);
  int* t3098 = __p3091;
  unsigned long t3099 = __n3092;
  std____new_allocator_int___deallocate(base3097, t3098, t3099);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v3100, int* v3101, unsigned long v3102) {
bb3103: ;
  struct std__allocator_int_* __a3104;
  int* __p3105;
  unsigned long __n3106;
  __a3104 = v3100;
  __p3105 = v3101;
  __n3106 = v3102;
  struct std__allocator_int_* t3107 = __a3104;
  int* t3108 = __p3105;
  unsigned long t3109 = __n3106;
  std__allocator_int___deallocate(t3107, t3108, t3109);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE18_M_deallocate_nodeEPi
void std___Deque_base_int__std__allocator_int______M_deallocate_node(struct std___Deque_base_int__std__allocator_int__* v3110, int* v3111) {
bb3112: ;
  struct std___Deque_base_int__std__allocator_int__* this3113;
  int* __p3114;
  this3113 = v3110;
  __p3114 = v3111;
  struct std___Deque_base_int__std__allocator_int__* t3115 = this3113;
  struct std__allocator_int_* base3116 = (struct std__allocator_int_*)((char *)&(t3115->_M_impl) + 0);
  int* t3117 = __p3114;
  unsigned long c3118 = 4;
  unsigned long r3119 = std____deque_buf_size(c3118);
  if (__cir_exc_active) {
    return;
  }
  std__allocator_traits_std__allocator_int_____deallocate(base3116, t3117, r3119);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_M_destroy_nodesEPPiS3_
void std___Deque_base_int__std__allocator_int______M_destroy_nodes(struct std___Deque_base_int__std__allocator_int__* v3120, int** v3121, int** v3122) {
bb3123: ;
  struct std___Deque_base_int__std__allocator_int__* this3124;
  int** __nstart3125;
  int** __nfinish3126;
  this3124 = v3120;
  __nstart3125 = v3121;
  __nfinish3126 = v3122;
  struct std___Deque_base_int__std__allocator_int__* t3127 = this3124;
    int** __n3128;
    int** t3129 = __nstart3125;
    __n3128 = t3129;
    while (1) {
      int** t3131 = __n3128;
      int** t3132 = __nfinish3126;
      _Bool c3133 = ((t3131 < t3132)) ? 1 : 0;
      if (!c3133) break;
      int** t3134 = __n3128;
      int* t3135 = *t3134;
      std___Deque_base_int__std__allocator_int______M_deallocate_node(t3127, t3135);
    for_step3130: ;
      int** t3136 = __n3128;
      int c3137 = 1;
      int** ptr3138 = &(t3136)[c3137];
      __n3128 = ptr3138;
    }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE15_M_create_nodesEPPiS3_
void std___Deque_base_int__std__allocator_int______M_create_nodes(struct std___Deque_base_int__std__allocator_int__* v3139, int** v3140, int** v3141) {
bb3142: ;
  struct std___Deque_base_int__std__allocator_int__* this3143;
  int** __nstart3144;
  int** __nfinish3145;
  int** __cur3146;
  this3143 = v3139;
  __nstart3144 = v3140;
  __nfinish3145 = v3141;
  struct std___Deque_base_int__std__allocator_int__* t3147 = this3143;
        int** t3149 = __nstart3144;
        __cur3146 = t3149;
        while (1) {
          int** t3151 = __cur3146;
          int** t3152 = __nfinish3145;
          _Bool c3153 = ((t3151 < t3152)) ? 1 : 0;
          if (!c3153) break;
          int* r3154 = std___Deque_base_int__std__allocator_int______M_allocate_node(t3147);
          if (__cir_exc_active) {
            goto cir_try_dispatch3148;
          }
          int** t3155 = __cur3146;
          *t3155 = r3154;
        for_step3150: ;
          int** t3156 = __cur3146;
          int c3157 = 1;
          int** ptr3158 = &(t3156)[c3157];
          __cur3146 = ptr3158;
        }
    cir_try_dispatch3148: ;
    if (__cir_exc_active) {
    {
      int ca_tok3159 = 0;
      void* ca_exn3160 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        int** t3161 = __nstart3144;
        int** t3162 = __cur3146;
        std___Deque_base_int__std__allocator_int______M_destroy_nodes(t3147, t3161, t3162);
        __cir_exc_active = 1;
        {
          if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
        }
        return;
        __builtin_unreachable();
    }
    }
  return;
}

// function: _ZNSt15__new_allocatorIPiE10deallocateEPS0_m
void std____new_allocator_int____deallocate(struct std____new_allocator_int___* v3163, int** v3164, unsigned long v3165) {
bb3166: ;
  struct std____new_allocator_int___* this3167;
  int** __p3168;
  unsigned long __n3169;
  this3167 = v3163;
  __p3168 = v3164;
  __n3169 = v3165;
  struct std____new_allocator_int___* t3170 = this3167;
    unsigned long c3171 = 8;
    unsigned long c3172 = 16;
    _Bool c3173 = ((c3171 > c3172)) ? 1 : 0;
    if (c3173) {
      int** t3174 = __p3168;
      void* cast3175 = (void*)t3174;
      unsigned long t3176 = __n3169;
      unsigned long c3177 = 8;
      unsigned long b3178 = t3176 * c3177;
      unsigned long c3179 = 8;
      operator_delete_3(cast3175, b3178, c3179);
      return;
    }
  int** t3180 = __p3168;
  void* cast3181 = (void*)t3180;
  unsigned long t3182 = __n3169;
  unsigned long c3183 = 8;
  unsigned long b3184 = t3182 * c3183;
  operator_delete_2(cast3181, b3184);
  return;
}

// function: _ZNSaIPiE10deallocateEPS_m
void std__allocator_int____deallocate(struct std__allocator_int___* v3185, int** v3186, unsigned long v3187) {
bb3188: ;
  struct std__allocator_int___* this3189;
  int** __p3190;
  unsigned long __n3191;
  this3189 = v3185;
  __p3190 = v3186;
  __n3191 = v3187;
  struct std__allocator_int___* t3192 = this3189;
    _Bool r3193 = std____is_constant_evaluated();
    if (r3193) {
      int** t3194 = __p3190;
      void* cast3195 = (void*)t3194;
      operator_delete(cast3195);
      return;
    }
  struct std____new_allocator_int___* base3196 = (struct std____new_allocator_int___*)((char *)t3192 + 0);
  int** t3197 = __p3190;
  unsigned long t3198 = __n3191;
  std____new_allocator_int____deallocate(base3196, t3197, t3198);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIPiEE10deallocateERS1_PS0_m
void std__allocator_traits_std__allocator_int______deallocate(struct std__allocator_int___* v3199, int** v3200, unsigned long v3201) {
bb3202: ;
  struct std__allocator_int___* __a3203;
  int** __p3204;
  unsigned long __n3205;
  __a3203 = v3199;
  __p3204 = v3200;
  __n3205 = v3201;
  struct std__allocator_int___* t3206 = __a3203;
  int** t3207 = __p3204;
  unsigned long t3208 = __n3205;
  std__allocator_int____deallocate(t3206, t3207, t3208);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE17_M_deallocate_mapEPPim
void std___Deque_base_int__std__allocator_int______M_deallocate_map(struct std___Deque_base_int__std__allocator_int__* v3209, int** v3210, unsigned long v3211) {
bb3212: ;
  struct std___Deque_base_int__std__allocator_int__* this3213;
  int** __p3214;
  unsigned long __n3215;
  struct std__allocator_int___ __map_alloc3216;
  this3213 = v3209;
  __p3214 = v3210;
  __n3215 = v3211;
  struct std___Deque_base_int__std__allocator_int__* t3217 = this3213;
  struct std__allocator_int___ r3218 = std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(t3217);
  __map_alloc3216 = r3218;
  int** t3219 = __p3214;
  unsigned long t3220 = __n3215;
  std__allocator_traits_std__allocator_int______deallocate(&__map_alloc3216, t3219, t3220);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiE14_S_buffer_sizeEv
unsigned long std___Deque_iterator_int__int___int_____S_buffer_size() {
bb3221: ;
  unsigned long __retval3222;
  unsigned long c3223 = 4;
  unsigned long r3224 = std____deque_buf_size(c3223);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval3222 = r3224;
  unsigned long t3225 = __retval3222;
  return t3225;
}

// function: _ZNSt15_Deque_iteratorIiRiPiE11_M_set_nodeEPS1_
void std___Deque_iterator_int__int___int_____M_set_node(struct std___Deque_iterator_int__int____int___* v3226, int** v3227) {
bb3228: ;
  struct std___Deque_iterator_int__int____int___* this3229;
  int** __new_node3230;
  this3229 = v3226;
  __new_node3230 = v3227;
  struct std___Deque_iterator_int__int____int___* t3231 = this3229;
  int** t3232 = __new_node3230;
  t3231->_M_node = t3232;
  int** t3233 = __new_node3230;
  int* t3234 = *t3233;
  t3231->_M_first = t3234;
  int* t3235 = t3231->_M_first;
  unsigned long r3236 = std___Deque_iterator_int__int___int_____S_buffer_size();
  long cast3237 = (long)r3236;
  int* ptr3238 = &(t3235)[cast3237];
  t3231->_M_last = ptr3238;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE17_M_initialize_mapEm
void std___Deque_base_int__std__allocator_int______M_initialize_map(struct std___Deque_base_int__std__allocator_int__* v3239, unsigned long v3240) {
bb3241: ;
  struct std___Deque_base_int__std__allocator_int__* this3242;
  unsigned long __num_elements3243;
  unsigned long __num_nodes3244;
  unsigned long ref_tmp03245;
  unsigned long ref_tmp13246;
  int** __nstart3247;
  int** __nfinish3248;
  this3242 = v3239;
  __num_elements3243 = v3240;
  struct std___Deque_base_int__std__allocator_int__* t3249 = this3242;
  unsigned long t3250 = __num_elements3243;
  unsigned long c3251 = 4;
  unsigned long r3252 = std____deque_buf_size(c3251);
  if (__cir_exc_active) {
    return;
  }
  unsigned long b3253 = t3250 / r3252;
  unsigned long c3254 = 1;
  unsigned long b3255 = b3253 + c3254;
  __num_nodes3244 = b3255;
  unsigned long c3256 = 8;
  ref_tmp03245 = c3256;
  unsigned long t3257 = __num_nodes3244;
  unsigned long c3258 = 2;
  unsigned long b3259 = t3257 + c3258;
  ref_tmp13246 = b3259;
  unsigned long* r3260 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp03245, &ref_tmp13246);
  if (__cir_exc_active) {
    return;
  }
  unsigned long t3261 = *r3260;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base3262 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t3249->_M_impl) + 0);
  base3262->_M_map_size = t3261;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base3263 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t3249->_M_impl) + 0);
  unsigned long t3264 = base3263->_M_map_size;
  int** r3265 = std___Deque_base_int__std__allocator_int______M_allocate_map(t3249, t3264);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base3266 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t3249->_M_impl) + 0);
  base3266->_M_map = r3265;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base3267 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t3249->_M_impl) + 0);
  int** t3268 = base3267->_M_map;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base3269 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t3249->_M_impl) + 0);
  unsigned long t3270 = base3269->_M_map_size;
  unsigned long t3271 = __num_nodes3244;
  unsigned long b3272 = t3270 - t3271;
  unsigned long c3273 = 2;
  unsigned long b3274 = b3272 / c3273;
  int** ptr3275 = &(t3268)[b3274];
  __nstart3247 = ptr3275;
  int** t3276 = __nstart3247;
  unsigned long t3277 = __num_nodes3244;
  int** ptr3278 = &(t3276)[t3277];
  __nfinish3248 = ptr3278;
      int** t3280 = __nstart3247;
      int** t3281 = __nfinish3248;
      std___Deque_base_int__std__allocator_int______M_create_nodes(t3249, t3280, t3281);
      if (__cir_exc_active) {
        goto cir_try_dispatch3279;
      }
    cir_try_dispatch3279: ;
    if (__cir_exc_active) {
    {
      int ca_tok3282 = 0;
      void* ca_exn3283 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base3284 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t3249->_M_impl) + 0);
        int** t3285 = base3284->_M_map;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base3286 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t3249->_M_impl) + 0);
        unsigned long t3287 = base3286->_M_map_size;
        std___Deque_base_int__std__allocator_int______M_deallocate_map(t3249, t3285, t3287);
        int** c3288 = ((void*)0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base3289 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t3249->_M_impl) + 0);
        base3289->_M_map = c3288;
        unsigned long c3290 = 0;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base3291 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t3249->_M_impl) + 0);
        base3291->_M_map_size = c3290;
        __cir_exc_active = 1;
        {
          if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
        }
        return;
        __builtin_unreachable();
    }
    }
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base3292 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t3249->_M_impl) + 0);
  int** t3293 = __nstart3247;
  std___Deque_iterator_int__int___int_____M_set_node(&base3292->_M_start, t3293);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base3294 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t3249->_M_impl) + 0);
  int** t3295 = __nfinish3248;
  int c3296 = -1;
  int** ptr3297 = &(t3295)[c3296];
  std___Deque_iterator_int__int___int_____M_set_node(&base3294->_M_finish, ptr3297);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base3298 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t3249->_M_impl) + 0);
  int* t3299 = base3298->_M_start._M_first;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base3300 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t3249->_M_impl) + 0);
  base3300->_M_start._M_cur = t3299;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base3301 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t3249->_M_impl) + 0);
  int* t3302 = base3301->_M_finish._M_first;
  unsigned long t3303 = __num_elements3243;
  unsigned long c3304 = 4;
  unsigned long r3305 = std____deque_buf_size(c3304);
  if (__cir_exc_active) {
    return;
  }
  unsigned long b3306 = t3303 % r3305;
  int* ptr3307 = &(t3302)[b3306];
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base3308 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t3249->_M_impl) + 0);
  base3308->_M_finish._M_cur = ptr3307;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE11_Deque_implD2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* v3309) {
bb3310: ;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* this3311;
  this3311 = v3309;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* t3312 = this3311;
  {
    struct std__allocator_int_* base3313 = (struct std__allocator_int_*)((char *)t3312 + 0);
    std__allocator_int____allocator(base3313);
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEEC2Ev
void std___Deque_base_int__std__allocator_int______Deque_base(struct std___Deque_base_int__std__allocator_int__* v3314) {
bb3315: ;
  struct std___Deque_base_int__std__allocator_int__* this3316;
  this3316 = v3314;
  struct std___Deque_base_int__std__allocator_int__* t3317 = this3316;
  std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl(&t3317->_M_impl);
    unsigned long c3318 = 0;
    std___Deque_base_int__std__allocator_int______M_initialize_map(t3317, c3318);
    if (__cir_exc_active) {
      {
        std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(&t3317->_M_impl);
      }
      return;
    }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEED2Ev
void std___Deque_base_int__std__allocator_int_______Deque_base(struct std___Deque_base_int__std__allocator_int__* v3319) {
bb3320: ;
  struct std___Deque_base_int__std__allocator_int__* this3321;
  this3321 = v3319;
  struct std___Deque_base_int__std__allocator_int__* t3322 = this3321;
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base3323 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t3322->_M_impl) + 0);
      int** t3324 = base3323->_M_map;
      _Bool cast3325 = (_Bool)t3324;
      if (cast3325) {
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base3326 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t3322->_M_impl) + 0);
        int** t3327 = base3326->_M_start._M_node;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base3328 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t3322->_M_impl) + 0);
        int** t3329 = base3328->_M_finish._M_node;
        int c3330 = 1;
        int** ptr3331 = &(t3329)[c3330];
        std___Deque_base_int__std__allocator_int______M_destroy_nodes(t3322, t3327, ptr3331);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base3332 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t3322->_M_impl) + 0);
        int** t3333 = base3332->_M_map;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base3334 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t3322->_M_impl) + 0);
        unsigned long t3335 = base3334->_M_map_size;
        std___Deque_base_int__std__allocator_int______M_deallocate_map(t3322, t3333, t3335);
      }
  {
    std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(&t3322->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v3336) {
bb3337: ;
  struct std____new_allocator_int_* this3338;
  this3338 = v3336;
  struct std____new_allocator_int_* t3339 = this3338;
  return;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator(struct std__allocator_int_* v3340) {
bb3341: ;
  struct std__allocator_int_* this3342;
  this3342 = v3340;
  struct std__allocator_int_* t3343 = this3342;
  struct std____new_allocator_int_* base3344 = (struct std____new_allocator_int_*)((char *)t3343 + 0);
  std____new_allocator_int_____new_allocator(base3344);
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_Deque_impl_dataC2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data(struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* v3345) {
bb3346: ;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* this3347;
  this3347 = v3345;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* t3348 = this3347;
  int** c3349 = ((void*)0);
  t3348->_M_map = c3349;
  unsigned long c3350 = 0;
  t3348->_M_map_size = c3350;
  std___Deque_iterator_int__int___int_____Deque_iterator_2(&t3348->_M_start);
  std___Deque_iterator_int__int___int_____Deque_iterator_2(&t3348->_M_finish);
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v3351) {
bb3352: ;
  struct std__allocator_int_* this3353;
  this3353 = v3351;
  struct std__allocator_int_* t3354 = this3353;
  return;
}

// function: _ZNSt15__new_allocatorIPiEC2Ev
void std____new_allocator_int______new_allocator(struct std____new_allocator_int___* v3355) {
bb3356: ;
  struct std____new_allocator_int___* this3357;
  this3357 = v3355;
  struct std____new_allocator_int___* t3358 = this3357;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v3359) {
bb3360: ;
  int* __location3361;
  __location3361 = v3359;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v3362, int* v3363) {
bb3364: ;
  int* __first3365;
  int* __last3366;
  __first3365 = v3362;
  __last3366 = v3363;
      _Bool r3367 = std____is_constant_evaluated();
      if (r3367) {
          while (1) {
            int* t3369 = __first3365;
            int* t3370 = __last3366;
            _Bool c3371 = ((t3369 != t3370)) ? 1 : 0;
            if (!c3371) break;
            int* t3372 = __first3365;
            void_std__destroy_at_int_(t3372);
            if (__cir_exc_active) {
              return;
            }
          for_step3368: ;
            int* t3373 = __first3365;
            int c3374 = 1;
            int* ptr3375 = &(t3373)[c3374];
            __first3365 = ptr3375;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v3376, int* v3377, struct std__allocator_int_* v3378) {
bb3379: ;
  int* __first3380;
  int* __last3381;
  struct std__allocator_int_* unnamed3382;
  __first3380 = v3376;
  __last3381 = v3377;
  unnamed3382 = v3378;
  int* t3383 = __first3380;
  int* t3384 = __last3381;
  void_std___Destroy_int__(t3383, t3384);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt5dequeIiSaIiEE14_S_buffer_sizeEv
unsigned long std__deque_int__std__allocator_int______S_buffer_size() {
bb3385: ;
  unsigned long __retval3386;
  unsigned long c3387 = 4;
  unsigned long r3388 = std____deque_buf_size(c3387);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval3386 = r3388;
  unsigned long t3389 = __retval3386;
  return t3389;
}

// function: _ZNSt5dequeIiSaIiEE19_M_destroy_data_auxESt15_Deque_iteratorIiRiPiES5_
void std__deque_int__std__allocator_int______M_destroy_data_aux(struct std__deque_int__std__allocator_int__* v3390, struct std___Deque_iterator_int__int____int___ v3391, struct std___Deque_iterator_int__int____int___ v3392) {
bb3393: ;
  struct std__deque_int__std__allocator_int__* this3394;
  struct std___Deque_iterator_int__int____int___ __first3395;
  struct std___Deque_iterator_int__int____int___ __last3396;
  this3394 = v3390;
  __first3395 = v3391;
  __last3396 = v3392;
  struct std__deque_int__std__allocator_int__* t3397 = this3394;
    int** __node3398;
    int** t3399 = __first3395._M_node;
    int c3400 = 1;
    int** ptr3401 = &(t3399)[c3400];
    __node3398 = ptr3401;
    while (1) {
      int** t3403 = __node3398;
      int** t3404 = __last3396._M_node;
      _Bool c3405 = ((t3403 < t3404)) ? 1 : 0;
      if (!c3405) break;
      int** t3406 = __node3398;
      int* t3407 = *t3406;
      int** t3408 = __node3398;
      int* t3409 = *t3408;
      unsigned long r3410 = std__deque_int__std__allocator_int______S_buffer_size();
      int* ptr3411 = &(t3409)[r3410];
      struct std___Deque_base_int__std__allocator_int__* base3412 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t3397 + 0);
      struct std__allocator_int_* r3413 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base3412);
      void_std___Destroy_int___int_(t3407, ptr3411, r3413);
      if (__cir_exc_active) {
        return;
      }
    for_step3402: ;
      int** t3414 = __node3398;
      int c3415 = 1;
      int** ptr3416 = &(t3414)[c3415];
      __node3398 = ptr3416;
    }
    int** t3417 = __first3395._M_node;
    int** t3418 = __last3396._M_node;
    _Bool c3419 = ((t3417 != t3418)) ? 1 : 0;
    if (c3419) {
      int* t3420 = __first3395._M_cur;
      int* t3421 = __first3395._M_last;
      struct std___Deque_base_int__std__allocator_int__* base3422 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t3397 + 0);
      struct std__allocator_int_* r3423 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base3422);
      void_std___Destroy_int___int_(t3420, t3421, r3423);
      if (__cir_exc_active) {
        return;
      }
      int* t3424 = __last3396._M_first;
      int* t3425 = __last3396._M_cur;
      struct std___Deque_base_int__std__allocator_int__* base3426 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t3397 + 0);
      struct std__allocator_int_* r3427 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base3426);
      void_std___Destroy_int___int_(t3424, t3425, r3427);
      if (__cir_exc_active) {
        return;
      }
    } else {
      int* t3428 = __first3395._M_cur;
      int* t3429 = __last3396._M_cur;
      struct std___Deque_base_int__std__allocator_int__* base3430 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t3397 + 0);
      struct std__allocator_int_* r3431 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base3430);
      void_std___Destroy_int___int_(t3428, t3429, r3431);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEC2ERKS2_
void std___Deque_iterator_int__int___int_____Deque_iterator(struct std___Deque_iterator_int__int____int___* v3432, struct std___Deque_iterator_int__int____int___* v3433) {
bb3434: ;
  struct std___Deque_iterator_int__int____int___* this3435;
  struct std___Deque_iterator_int__int____int___* __x3436;
  this3435 = v3432;
  __x3436 = v3433;
  struct std___Deque_iterator_int__int____int___* t3437 = this3435;
  struct std___Deque_iterator_int__int____int___* t3438 = __x3436;
  int* t3439 = t3438->_M_cur;
  t3437->_M_cur = t3439;
  struct std___Deque_iterator_int__int____int___* t3440 = __x3436;
  int* t3441 = t3440->_M_first;
  t3437->_M_first = t3441;
  struct std___Deque_iterator_int__int____int___* t3442 = __x3436;
  int* t3443 = t3442->_M_last;
  t3437->_M_last = t3443;
  struct std___Deque_iterator_int__int____int___* t3444 = __x3436;
  int** t3445 = t3444->_M_node;
  t3437->_M_node = t3445;
  return;
}

// function: _ZNSt5dequeIiSaIiEE15_M_destroy_dataESt15_Deque_iteratorIiRiPiES5_RKS0_
void std__deque_int__std__allocator_int______M_destroy_data(struct std__deque_int__std__allocator_int__* v3446, struct std___Deque_iterator_int__int____int___ v3447, struct std___Deque_iterator_int__int____int___ v3448, struct std__allocator_int_* v3449) {
bb3450: ;
  struct std__deque_int__std__allocator_int__* this3451;
  struct std___Deque_iterator_int__int____int___ __first3452;
  struct std___Deque_iterator_int__int____int___ __last3453;
  struct std__allocator_int_* unnamed3454;
  this3451 = v3446;
  __first3452 = v3447;
  __last3453 = v3448;
  unnamed3454 = v3449;
  struct std__deque_int__std__allocator_int__* t3455 = this3451;
    _Bool c3456 = 0;
    if (c3456) {
      struct std___Deque_iterator_int__int____int___ agg_tmp03457;
      struct std___Deque_iterator_int__int____int___ agg_tmp13458;
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp03457, &__first3452);
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp13458, &__last3453);
      struct std___Deque_iterator_int__int____int___ t3459 = agg_tmp03457;
      struct std___Deque_iterator_int__int____int___ t3460 = agg_tmp13458;
      std__deque_int__std__allocator_int______M_destroy_data_aux(t3455, t3459, t3460);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5dequeIiSaIiEE5beginEv
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____begin(struct std__deque_int__std__allocator_int__* v3461) {
bb3462: ;
  struct std__deque_int__std__allocator_int__* this3463;
  struct std___Deque_iterator_int__int____int___ __retval3464;
  this3463 = v3461;
  struct std__deque_int__std__allocator_int__* t3465 = this3463;
  struct std___Deque_base_int__std__allocator_int__* base3466 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t3465 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base3467 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base3466->_M_impl) + 0);
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval3464, &base3467->_M_start);
  struct std___Deque_iterator_int__int____int___ t3468 = __retval3464;
  return t3468;
}

// function: _ZNSt5dequeIiSaIiEE3endEv
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____end(struct std__deque_int__std__allocator_int__* v3469) {
bb3470: ;
  struct std__deque_int__std__allocator_int__* this3471;
  struct std___Deque_iterator_int__int____int___ __retval3472;
  this3471 = v3469;
  struct std__deque_int__std__allocator_int__* t3473 = this3471;
  struct std___Deque_base_int__std__allocator_int__* base3474 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t3473 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base3475 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base3474->_M_impl) + 0);
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval3472, &base3475->_M_finish);
  struct std___Deque_iterator_int__int____int___ t3476 = __retval3472;
  return t3476;
}

// function: _ZNSt11_Deque_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Deque_base_int__std__allocator_int__* v3477) {
bb3478: ;
  struct std___Deque_base_int__std__allocator_int__* this3479;
  struct std__allocator_int_* __retval3480;
  this3479 = v3477;
  struct std___Deque_base_int__std__allocator_int__* t3481 = this3479;
  struct std__allocator_int_* base3482 = (struct std__allocator_int_*)((char *)&(t3481->_M_impl) + 0);
  __retval3480 = base3482;
  struct std__allocator_int_* t3483 = __retval3480;
  return t3483;
}

// function: _ZSt8_DestroyISt15_Deque_iteratorIiRiPiEEvT_S4_
void void_std___Destroy_std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ v3484, struct std___Deque_iterator_int__int____int___ v3485) {
bb3486: ;
  struct std___Deque_iterator_int__int____int___ __first3487;
  struct std___Deque_iterator_int__int____int___ __last3488;
  __first3487 = v3484;
  __last3488 = v3485;
      _Bool r3489 = std____is_constant_evaluated();
      if (r3489) {
          while (1) {
            _Bool r3491 = std__operator__(&__first3487, &__last3488);
            _Bool u3492 = !r3491;
            if (!u3492) break;
            int* r3493 = std___Deque_iterator_int__int___int____operator____const(&__first3487);
            void_std__destroy_at_int_(r3493);
            if (__cir_exc_active) {
              return;
            }
          for_step3490: ;
            struct std___Deque_iterator_int__int____int___* r3494 = std___Deque_iterator_int__int___int____operator___4(&__first3487);
          }
      }
  return;
}

// function: _ZSt8_DestroyISt15_Deque_iteratorIiRiPiEiEvT_S4_RSaIT0_E
void void_std___Destroy_std___Deque_iterator_int__int___int____int_(struct std___Deque_iterator_int__int____int___ v3495, struct std___Deque_iterator_int__int____int___ v3496, struct std__allocator_int_* v3497) {
bb3498: ;
  struct std___Deque_iterator_int__int____int___ __first3499;
  struct std___Deque_iterator_int__int____int___ __last3500;
  struct std__allocator_int_* unnamed3501;
  struct std___Deque_iterator_int__int____int___ agg_tmp03502;
  struct std___Deque_iterator_int__int____int___ agg_tmp13503;
  __first3499 = v3495;
  __last3500 = v3496;
  unnamed3501 = v3497;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp03502, &__first3499);
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp13503, &__last3500);
  struct std___Deque_iterator_int__int____int___ t3504 = agg_tmp03502;
  struct std___Deque_iterator_int__int____int___ t3505 = agg_tmp13503;
  void_std___Destroy_std___Deque_iterator_int__int___int____(t3504, t3505);
  if (__cir_exc_active) {
    return;
  }
  return;
}

